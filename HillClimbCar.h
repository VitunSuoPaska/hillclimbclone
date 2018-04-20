#ifndef __HILLCLIMB_CAR_H__
#define __HILLCLIMB_CAR_H__

#include "HillClimbUtility.h"

namespace hillclimb{

    class HillClimbCar{
    public:
        int x;
        int y;
        int scale;
        HillClimbCar(int, int, int);
        //update(road, dt);
        void updateThrottle(double);

};
}

#endif // __HILLCLIMB_LAYER_H__

/*
        getPositionY()
        getTransitionX(dt)
        getAngle()
        touchesRoad()
        reset(y)
      private
        X_POS
        SCALE
        y
        v_x
        v_y
        a_x
        a_y
        angle
        v_ang
        a_ang
        throttle
        leftWheel
        rightWheel
        roadPartsTouching
    
        updatePosY(dt)
        updateVelocityY(dt)
        updateVelocityX(dt)
        updateAccelerations(dt)
        updateAngle(dt)
        updateAngularVelocity(dt)
        updateAngularAcceleration(dt)
        updateRoadPartsTouching()
        updateWheels(road)

Guards end
*/
