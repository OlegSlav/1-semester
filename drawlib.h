// файл drawlib.h

#ifndef DRAWLIB_H
#define DRAWLIB_H

#include "cmath"
#include "ctime"

void animateScene (int value);

void drawbadCAR();
void drawLolly(float x, float y);
void drawTree(float x, float y, float z,float scx, float scy);
void drawroad();
void drawCar(float x, float y, float z,clock_t curTime);
void drawsky(clock_t curTime);
void drawCat(float x, float y,float a);
void initPolyana();
void drawPolyana();


void F1();
void work1();
void move1();


#endif // DRAWLIB_H
