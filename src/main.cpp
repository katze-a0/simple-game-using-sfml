//Fruitninja game 
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cstdlib>

#include "AnimatedGIF.h"
#include "AudioEffect.h"
#include "Menu_to_Classic.h"
#include "Fruit.h"
#include "Utility.h"
#include "Button.h"
#include "GameStats.h"

using namespace sf;

int main() {

    
    GameStats stats;
    loadStats(stats, "game_stats.txt");     //inside utility 

    VideoMode desktopMode = VideoMode::getDesktopMode();     // screen size of the user's desktop
    RenderWindow window(desktopMode, "Fruit_Ninja", Style::Fullscreen);
    window.setFramerateLimit(60);

    AnimatedGIF gif("./assets/screen.gif");
    Vector2i size = gif.getSize();
    Sprite gifSprite;

    AudioEffect audioEffect("./assets/fruit_ninja.wav");
    audioEffect.play();

    AudioEffect audioEffect_slice("./assets/sliced.mp3");
    AudioEffect audioEffect_bomb("./assets/boom.mp3");
    AudioEffect audioEffect_missed("./assets/missed.mp3");

    ButtonPress buttonpress;
    Menu_to_classic menu_to_classic(window.getSize());
    Clock clock;
    bool gifFinished = false;

    Texture tBackground, tWatermelon, tOrange, tBanana, tMagic, tBomb, tBlade, tSlicedWatermelon, tSlicedOrange, tSlicedBanana, tSlicedMagic, tSlicedBomb;

    if (!tBackground.loadFromFile("./assets/back.png") ||     //error handling
        !tWatermelon.loadFromFile("./assets/watermelon.png") ||
        !tOrange.loadFromFile("./assets/orange.png") ||
        !tBanana.loadFromFile("./assets/banana.png") ||
        !tMagic.loadFromFile("./assets/magic.png") ||
        !tBomb.loadFromFile("./assets/bomb.png") ||
        !tBlade.loadFromFile("./assets/blade.png") ||
        !tSlicedWatermelon.loadFromFile("./assets/watermelon_sliced.png") ||
        !tSlicedOrange.loadFromFile("./assets/orange_sliced.png") ||
        !tSlicedBanana.loadFromFile("./assets/banana_sliced.png") ||
        !tSlicedMagic.loadFromFile("./assets/magic_sliced.png") ||
        !tSlicedBomb.loadFromFile("./assets/bomb_sliced.png")) {
        std::cerr << "Failed to load one or more textures." << std::endl;
        return false;
    }

    Sprite sBackground(tBackground);
    sBackground.setScale(static_cast<float>(desktopMode.width) / tBackground.getSize().x, static_cast<float>(desktopMode.height) / tBackground.getSize().y);
     //setscale requires arg in float so int value is converted to float

    Sprite sBlade(tBlade);    
    
    std::vector<Fruit> fruits;  
    float spawnTimer = 0;
    int score = 0;
    int lives = 3;

    Font font;
    if (!font.loadFromFile("./assets/arial.ttf")) {
        std::cerr << "Failed to load font." << std::endl;
        return -1;
    }
      Font font1;
    if (!font1.loadFromFile("./assets/gang_of_three.ttf")) {
        std::cerr << "Failed to load font." << std::endl;
        return -1;
    }

    Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(24);
    scoreText.setFillColor(Color::White);
    scoreText.setPosition(10, 10);

    Text livesText;
    livesText.setFont(font1);
    livesText.setCharacterSize(26);
    livesText.setFillColor(Color::Red);
    livesText.setPosition(800, 15);

    Text gameOverText;
    gameOverText.setFont(font1);
    gameOverText.setCharacterSize(60);
    gameOverText.setFillColor(sf::Color{ 255,50,57 });
    gameOverText.setPosition(710, 290);
    
    Button* playAgainButton =  new OutlinedButton(800, 500, 210, 55, "Play Again", font, 26, Color::Black, 7, Color::Green);
    Button* viewStatsButton = new  OutlinedButton(800, 600, 210, 55, "View Stats", font, 26, Color::Black, 7, Color::White);
    Button* exitGameButton = new OutlinedButton(800, 700, 210, 55, "Exit Game", font, 26, Color::Black, 7, Color::Red);

    Text statsText;
    statsText.setFont(font1);
    statsText.setCharacterSize(35);
    statsText.setFillColor(Color::White);
    statsText.setPosition(770, 400);
    statsText.setStyle(sf::Text::Bold);

    Vector2f previousMousePos;
    Vector2f currentMousePos; 

    bool bladeVisible = false;
    bool gameOver = false;
    bool showStats = false;

    while (window.isOpen()) {


        if (!gifFinished)
        {
                gif.update(gifSprite, window.getSize());
                window.draw(gifSprite);
              
                if (gif.isEnded) {
                     //gifFinished = true;
                    menu_to_classic.draw(window);
                    gifFinished = menu_to_classic.checkvalue(buttonpress, window, window.getSize());
                } 
            }
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
            {
                window.close();
            }
             
            //events cases
            if (event.type == Event::MouseButtonPressed) {
                if (event.mouseButton.button == Mouse::Left) {
                    bladeVisible = true;
                    Vector2f mousePos(static_cast<float>(event.mouseButton.x), static_cast<float>(event.mouseButton.y));
                    buttonpress.mousePosition.x = event.mouseButton.x;
                    buttonpress.mousePosition.y = event.mouseButton.y;

                    if (gameOver) {
                        if (playAgainButton->isMouseOver(mousePos)) {
                            gameOver = false;
                            showStats = false;
                            lives = 3;
                            score = 0;
                            fruits.clear();
                        }
                        else if (viewStatsButton->isMouseOver(mousePos)) {
                            showStats = true;
                            statsText.setString("Games Played: " + std::to_string(stats.gamesPlayed) +
                                "\nTotal Points: " + std::to_string(stats.totalPoints) +
                                "\nHigh Score: " + std::to_string(stats.highScore));
                        } else if(exitGameButton->isMouseOver(mousePos)){
                            window.close();
                        }
                       

                    }
                    else if (showStats){
                        if(exitGameButton->isMouseOver(mousePos)){
                            window.close();
                        }
                    }
                }
            }
            else if (event.type == Event::MouseButtonReleased) {
                if (event.mouseButton.button == Mouse::Left) {
                    bladeVisible = false;
                }
            }
        }   //event cases end here 3 event --close, mouse  button pressed or released 

        Vector2i mousePos = Mouse::getPosition(window);
        Vector2f currentMousePos(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
        //main game loop
        if (!gameOver && !showStats && gifFinished) {
            if (spawnTimer > 30) {
                float x = static_cast<float>(rand() % (window.getSize().x-600));  //padding on width to make fruits visible within screen
                float y = static_cast<float>(window.getSize().y);
                Vector2f position(x, y);
                  
                int fruitType = rand() % 100;
                Texture* fruitTexture;
                Texture* slicedFruitTexture;
                std::string type;
                float scale = 1.0f;
                if (fruitType < 30) {
                    fruitTexture = &tWatermelon;
                    slicedFruitTexture = &tSlicedWatermelon;
                    type = "Watermelon";
                    scale = 1.0f; // Adjusted scale 
                }
                else if (fruitType < 50) {
                    fruitTexture = &tOrange;
                    slicedFruitTexture = &tSlicedOrange;
                    type = "Orange";
                    scale = 3.0f; 
                }
                else if (fruitType < 70) {
                    fruitTexture = &tBanana;
                    slicedFruitTexture = &tSlicedBanana;
                    type = "Banana";
                    scale = 3.0f; 
                }
                else if (fruitType < 90) {
                    fruitTexture = &tBomb;
                    slicedFruitTexture = &tSlicedBomb;
                    type = "Bomb";
                    scale = 1.0f;
                }
                else {
                    fruitTexture = &tMagic;       //magic fruits add 5 more points
                    slicedFruitTexture = &tSlicedMagic;
                    type = "Magic";
                    scale = 1.0f;
                }

                float baseVelocity = -2;
                float velocityMultiplier = 1 + (score / 10) * 0.1f;
                Vector2f velocity(0, baseVelocity * velocityMultiplier);

                fruits.emplace_back(*fruitTexture, position, velocity, scale, type);  //add new fruit at the end /availabe in vector
                spawnTimer = 0;
            }
            spawnTimer++;          //2 times in 1 sec
            
            for (auto it = fruits.begin(); it != fruits.end(); ++it ) {            //auto  is equivalent to std::vector<Fruit>::iterator
                it->update();
                if (it->isSliced) {
                    if (it->type == "Bomb") {
                         it->velocity = Vector2f(0, 0.2);
                        if (it->slicedClock.getElapsedTime().asSeconds() >= 0.5f) {
                            it = fruits.erase(it);
                            continue;
                        }
                    
                    }
                     it->velocity = Vector2f(0, 5);
                    if (it->slicedTimer > 300) {
                        it = fruits.erase(it);
                        continue;
                    }
                }
                else if (bladeVisible && isLineIntersectingSprite(previousMousePos, currentMousePos, it->sprite)) {
                    it->isSliced = true;
                    if (it->type == "Watermelon") {
                        it->sprite.setTexture(tSlicedWatermelon);
                       audioEffect_slice.play();
                        score++;
                    }
                    else if (it->type == "Orange") {
                        it->sprite.setTexture(tSlicedOrange);
                       audioEffect_slice.play();
                        score++;
                    }
                    else if (it->type == "Banana") {
                        it->sprite.setTexture(tSlicedBanana);
                      audioEffect_slice.play();
                        score++;
                    }
                    else if (it->type == "Bomb") {
                        it->sprite.setTexture(tSlicedBomb);
                        it->velocity = Vector2f(0, 0.2);
                        audioEffect_bomb.play();

                       it->slicedClock.restart(); // Start the clock for the bomb
                        lives--;
                    }
                    else if (it->type == "Magic") {
                        it->sprite.setTexture(tSlicedMagic);
                        audioEffect_slice.play();
                        score += 5; // Increase score by 5 times for magic fruit
                    }
                }
                else if (it->sprite.getPosition().y < 0) {
                    if (!it->isSliced && it->type != "Bomb" && it->type != "Magic") {
                       audioEffect_missed.play();;
                        lives--;
                    }
                    it = fruits.erase(it);
                    if (lives <= 0) {       //when lives=0,game is over 
                        gameOver = true;
                        stats.gamesPlayed++;
                        stats.totalPoints += score;
                        if (score > stats.highScore) {
                            stats.highScore = score;
                        }
                        saveStats(stats, "game_stats.txt");
                    }
                    continue;
                }
            
            }
            previousMousePos = currentMousePos;
        }
        if(gifFinished){

        window.clear();
        window.draw(sBackground);

        if (!showStats) {

            for (auto& fruit : fruits) {      //range based for loop auto&
                window.draw(fruit.sprite);
            }
            if (bladeVisible) {
                sBlade.setPosition(currentMousePos);
                window.draw(sBlade);
            }
            scoreText.setString("Score: " + std::to_string(score));
            window.draw(scoreText);

            livesText.setString("Lives: " + std::to_string(lives));
            window.draw(livesText);

            if (gameOver) {
                gameOverText.setString("Game Over!\nFinal Score: " + std::to_string(score));
                window.draw(gameOverText);
                
                window.draw(playAgainButton->shape);
                window.draw(playAgainButton->text);

                window.draw(viewStatsButton->shape);
                window.draw(viewStatsButton->text);

                window.draw(exitGameButton->shape);
                window.draw(exitGameButton->text);
            }
        }
        else {
           window.draw(statsText);
           window.draw(exitGameButton->shape);
           window.draw(exitGameButton->text);
        }
        }
        window.display();
    }
    return 0;
}



