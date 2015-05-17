#include "Model.h"
#include "Texture.h"

#ifndef DISPLAYMODEL_H
#define DISPLAYMODEL_H

/*
 * Holds an object's display properties.
 */
class DisplayModel {
	protected:
    /*
     * The model associated with this display model
     */
    Model model;
    
    /*
     * The x pixel-position of the display model on the screen
     */
    int xPos;

    /*
    * The y pixel-position of the display model on the screen
    */
    int yPos;

    /*
    * The x pixel-velocity of the display model
    */
    int xVel;

    /*
    * The y pixel-velocity of the display model
    */
    int yVel;

  public:
    /*
     * Default constructor
     */
    DisplayModel();

    void setModel(Model * model);
    Model * getModel();

    void setXPos(int xPos);
    int getXPos();

    void setYPos(int yPos);
    int getYPos();

    void setXVel(int xVel);
    int getXVel();

    void setYVel(int yVel);
    int getYVel();

    /*
     * Draws the object to the screen.
     */
    virtual void draw();
};

#endif