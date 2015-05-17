#include <string>
#include <map>

#include "LayeredDisplayModel.h"
#include "Animation.h"

using namespace std;

#ifndef ANIMATEDDISPLAYMODEL_H
#define ANIMATEDDISPLAYMODEL_H

/*
 * A layered display model that can change textures.
 */
class AnimatedDisplayModel : public LayeredDisplayModel {
  protected:
    /*
     * The map of animations. The keys are the names 
     * of the animations.
     */
    map<string *, Animation *> * animationMap;

    /*
     * The animation that is currently playing
     */
    Animation * currentAnimation;

    /*
     * Whether the current animation is playing or not.
     */
    bool isPlaying;

  public:
    /*
     * Default constructor.
     */
    AnimatedDisplayModel();

    /*
     * Returns the animation map.
     */
    map<string *, Animation *> * getAnimations();

    /*
     * Returns the animation that is currently playing.
     */
    Animation * currentAnimation();

    /*
     * Begin playing the animation with the key specified.
     * @return true if the animation exists in the map, false otherwise
     */
    bool playAnimation(string key);

    /*
     * Stop the current playing animation.
     */
    void stopAnimation();

    @override
    virtual void draw();
};

#endif