#include <list>

#include "DisplayModel.h"
#include "Texture.h"

using namespace std;

#ifndef LAYEREDDISPLAYMODEL_H
#define LAYEREDDISPLAYMODEL_H

class LayeredDisplayModel : public DisplayModel {
  protected:
    /*
     * The number of layers in the display model.
     */
    int numLayers;

    /*
     * The layers that make of the display model.
     * The layers ordered top to bottom.
     */
    list<Texture *> layers;

  public:
    /* 
     * Default constructor
     */
    LayeredDisplayModel();

    /*
     * Returns the layer list
     */
    list<Texture *> getLayers();

    /*
     * Adds a layer to the end of the list
     */
    void addLayer(Texture * layer);

    /*
     * Replaces the layer at the specifed level
     */
    void replaceLayer(Texture * layer, int index);

    /*
     * Removes the layer at the specified level
     */
    void removeLayer(int index);

    @override
    virtual void draw();
};

#endif