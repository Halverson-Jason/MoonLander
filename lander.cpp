/*************************************************************
 * File: lander.cpp
 * Author: Jason Halverson
 *
 * Description: Contains the implementations of the
 *  method bodies for the lander class.
 *
 *************************************************************/

#include "lander.h"
#include "uiDraw.h"
#include <stdlib.h>
#include <time.h>

// set default thrust movement
#define HORIZONTAL_THRUST 0.1
#define VERTICAL_THRUST 0.3
#define HORIZONTAL_FUEL 1
#define VERTICAL_FUEL 3
#define STARTING_Y 200

// constructors
Lander :: Lander()
{
   setLanded(false);
   setAlive(true);
   setRandomX();
   currentPoint.setX(startingX);
   currentPoint.setY(STARTING_Y);
   setStartingDx();
   velocity.setDx(startingDx);
   
}

// gets random number for x starting
void Lander :: setRandomX()
{
   srand(time(NULL));
   startingX = rand() % 390 - 190;

}

// get random number for starting dx
void Lander :: setStartingDx()
{
   srand(time(NULL));
   
   // determine which direction of starting velocity
   if(startingX > 0)
   {
      startingDx = rand() % -1 - 3;
   }
   else
   {
      startingDx = rand() % 3 + 1;
   }

}

void Lander :: setFuel(int fuel)
{
   this->fuel = fuel;
}

Point Lander :: getPoint() const
{
   return currentPoint;
}

Velocity Lander :: getVelocity() const
{
   return velocity;
}

bool Lander :: isAlive()
{
   return alive;
}

bool Lander :: isLanded()
{
   return landed;
}

int Lander :: getFuel()
{
   return fuel;
}

bool Lander :: canThrust()
{
   if(fuel > 0)
   {
      thrust = true;
   }

   else
   {
      thrust = false;
   }
   return thrust;
}

void Lander :: setLanded(bool isLanded)
{
   this->landed = isLanded;
}

void Lander :: setAlive(bool isAlive)
{
   this->alive = isAlive;
}

void Lander :: applyGravity(float gravity)
{
   velocity.setDy(velocity.getDy() - gravity);
   currentPoint.addY(-gravity);
}

void Lander :: applyThrustLeft()
{
   if(canThrust())
   {
      fuel -= HORIZONTAL_FUEL;
      velocity.setDx(velocity.getDx() + HORIZONTAL_THRUST);
      currentPoint.addX(HORIZONTAL_THRUST);
   }

}

void Lander :: applyThrustRight()
{
   if(canThrust())
   {
      fuel -= HORIZONTAL_FUEL;
      velocity.setDx(velocity.getDx() - HORIZONTAL_THRUST);
      currentPoint.addX(-HORIZONTAL_THRUST);
      
   }

}

void Lander :: applyThrustBottom()
{
   if(canThrust())
   {
      fuel -= VERTICAL_FUEL;
      velocity.setDy(velocity.getDy() + VERTICAL_THRUST);
      currentPoint.addY(VERTICAL_THRUST);
      
   }
}

void Lander :: advance()
{
   currentPoint.addX(velocity.getDx());
   currentPoint.addY(velocity.getDy());

}

void Lander :: draw()
{
   drawLander(currentPoint);
}