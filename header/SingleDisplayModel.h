#include "DisplayModel.h"
#include "Texture.h"

#ifndef SINGLEDISPLAYMODEL_H
#define SINGLEDISPLAYMODEL_H

class SingleDisplayModel : public DisplayModel {
  protected:
    /*
     * The sprite representing the model
     */
    Texture * texture;

  public:
    /*
     * Default constructor
     */
    SingleDisplayModel();

    /*
     * Creates a new SingleDisplayModel with the 
     * specified texture.
     */
    SingleDisplayModel(Texture * texture); 

    void setTexture(Texture * texture);
    Texture * getTexture();

    @override
    virtual void draw();
};

#endif