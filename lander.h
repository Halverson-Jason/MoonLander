/***********************************************************************
 * Header File:
 *    Lander : The representation of the Lander
 * Author:
 *    Jason Halverson
 * Summary:
 *    Everything we need to know about the Lander
 ************************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"

class Lander
{
   private:
      int fuel;
      Point currentPoint;
      Velocity velocity;
      bool alive;
      bool landed;
      bool thrust;
      float gravity;
      Point startingPoint;
      // gets random number for starting point
      float startingX;
      void setRandomX();
      float startingDx;
      void setStartingDx();


   public:
      void setFuel(int fuel);
      Point getPoint() const;
      Velocity getVelocity() const;
      bool isAlive();
      bool isLanded();
      int getFuel();
      bool canThrust();
      void setLanded(bool isLanded);
      void setAlive(bool isAlive);
      void applyGravity(float gravity);
      void applyThrustLeft();
      void applyThrustRight();
      void applyThrustBottom();
      void advance();
      void draw();

      // constructors
      Lander();
};

#endif