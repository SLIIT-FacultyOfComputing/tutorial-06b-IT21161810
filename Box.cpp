#include "Box.h"
#include <iostream>


// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
      return length * width * height;
}

void Box::setLenght(double l)
{
   Length = l;
}

void Box::setWidth(double w)
{
   Width = w;
}

void Box::setHeight(double h)
{
   Height = h;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}
int Box::getHeight()
{
  return height;
  
}
