
#ifndef MENU_TO_CLASSIC_H
#define MENU_TO_CLASSIC_H

class ButtonPress;
class ImageLoader;

class Menu_to_classic{
public:
    void checkvalue(ImageLoader& imageLoader, ButtonPress& buttonPress);

private:
    int x_coordinate;
    int y_coordinate;
    friend class ButtonPress; // Declare ButtonPress as a friend class
};

#endif