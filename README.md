

# Fruit Ninja Game in C++

## Project Description

This project is a recreation of the popular Fruit Ninja game, implemented in C++ with an emphasis on Object-Oriented Programming (OOP) principles. Using the SFML (Simple and Fast Multimedia Library) for graphics, this game captures the excitement of slicing fruits to score points. Players must slice as many fruits as possible while avoiding missed slices, which result in a decrease in lives. The game ends when all lives are lost.

## Compilation Instructions

To build and run this project, follow these steps:

1. **Ensure you have the necessary dependencies installed:**
   - [SFML](https://www.sfml-dev.org/) library
   - CMake

2. **Clone the repository:**
   
   git clone https://github.com/katze-a0/simple-game-using-sfml
   cd (path to directory)


3. **Create a build directory and navigate into it:**
   
   mkdir build
   cd build
   
4. **Generate the build files using CMake:**
   cmake ..
   
5. **Compile the project:**
   make
   
6. **Run the game:**
   ./main


## Game Controls

- **Mouse:** Use the mouse to slice fruits. Click and drag to make slices.
- **Gameplay:** Slice as many fruits as possible to score points. Missing fruits will decrease your lives.
- **Lives:** The game starts with a set number of lives. The game ends when all lives are depleted.

## CMake and SFML Integration

This project uses CMake for managing the build process and SFML for rendering graphics. The `CMakeLists.txt` file includes configurations to find and link the SFML library. Ensure that SFML is properly installed on your system before attempting to build the project.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

