//файл drawlib.cpp

#include "GL/freeglut.h"
#include "drawlib.h"
#include "cmath"
#include "ctime"
#include "vector"


void drawroad() {
    glPushMatrix();
    glTranslatef(0,-1,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.5,.5,.5);
    glVertex2f(-2,-2);
    glVertex2f(2,-2);
    glVertex2f(2,.7);
    glVertex2f(2,.7);
    glVertex2f(-2,.7);
    glVertex2f(-2,-2);
//grass
    glColor3f(0,.5,.15);
    glVertex2f(2,.7);
    glVertex2f(-2,.7);
    glVertex2f(2,1.6);
    glVertex2f(2,1.6);
    glVertex2f(-2,1.6);
    glVertex2f(-2,.7);

    glEnd();
    glPopMatrix();
}
void drawsky(clock_t curTime) {
    if (curTime<10000){
        glPushMatrix();
        glTranslatef(0,-1,0);
        glBegin(GL_TRIANGLES);
        glColor3f(.2,.7,.85);
        glVertex2f(3,3);
        glVertex2f(-2,1.6);
        glVertex2f(3,1.6);
        glVertex2f(3,3);
        glVertex2f(-2,3);
        glVertex2f(-2,1.6);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-(curTime-3000)*.0003,.84,0);
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(.9,.75,.3);
        for(float a=0;a<2*M_PI;a+=M_PI/16 ){
            glVertex2f(.1*cos(a),.1*sin(a));
        };
        glEnd();
        glPopMatrix();
    }   else {
            glPushMatrix();
            glTranslatef(0,-1,0);
            glBegin(GL_TRIANGLES);
            glColor3f(0,.1,.4);
            glVertex2f(3,3);
            glVertex2f(-2,1.6);
            glVertex2f(3,1.6);
            glVertex2f(3,3);
            glVertex2f(-2,3);
            glVertex2f(-2,1.6);
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(-(curTime-14000)*.0003,.84,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.85,.85,.85);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.1*cos(a),.1*sin(a));
            }
            glEnd();
            glPopMatrix();

            //звезды
            glPushMatrix();
            glTranslatef((curTime-10000)*0.001,4-(curTime-10000)*0.01,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.05*cos(a),.05*sin(a));
            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef((.2+curTime-10400)*0.001,4-(curTime-10000)*0.008,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.03*cos(a),.03*sin(a));
            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef((.2+curTime-11000)*0.001,4-(curTime-11000)*0.008,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.03*cos(a),.03*sin(a));
            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef((-.2+curTime-11000)*0.001,4-(curTime-11000)*0.008,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.03*cos(a),.03*sin(a));
            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef((.2+curTime-12000)*0.001,4-(curTime-12000)*0.008,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.03*cos(a),.03*sin(a));
            }
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glTranslatef((-.2+curTime-12000)*0.001,4-(curTime-12500)*0.008,0);
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(.8,.8,.25);
            for(float a=0;a<2*M_PI;a+=M_PI/16 ){
                glVertex2f(.03*cos(a),.03*sin(a));
            }
            glEnd();
            glPopMatrix();
        }

}
void drawbadCAR() {
    glBegin(GL_TRIANGLES);
    glColor3f(245, 295, 220);
    glVertex2f(-2, -2);
    glVertex2f(-2, 2);
    glVertex2f(2, -1.3);

    glColor3f(.96, .96, .86);
    glVertex2f(0, 0.7);
    glVertex2f(2, 0.7);
    glVertex2f(0, -9);

    glColor3f(0, .74, 1);
    glVertex2f(0, 0.7);
    glVertex2f(2, 0.7);
    glVertex2f(2, 2);

    glColor3f(.7, .8, .7);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.4, 0.8);
    glVertex2f(0.37, 0.5);

    glColor3f(.4, .4, .4);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.35, 0.45);
    glVertex2f(0.3, 0.73);

    glColor3f(.4, .1, .7);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.8, 0.67);
    glVertex2f(0.3, 0.73);

    glColor3f(.89, .15, .24);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.7, 0.4);

    glColor3f(.999, .999999, .99999);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.2, 0.67);
    glVertex2f(0.37, 0.45);

    glColor3f(.4, .1, .9);
    glVertex2f(-2, -0.5);
    glVertex2f(2, -0.5);
    glVertex2f(-1.7, -1.5);

    glColor3f(.4, .1, .9);
    glVertex2f(-1.7, -1.5);
    glVertex2f(2, -0.5);
    glVertex2f(1.7, -1.5);

    glColor3f(.8, .7, .7);
    glVertex2f(0, 0.2);
    glVertex2f(0.15, 0.1);
    glVertex2f(0.5, 0.6);

    glColor3f(.4, .3, .6);
    glVertex2f(0, 0.2);
    glVertex2f(0.5, 0);
    glVertex2f(-0.4, 0);

    glColor3f(.599, .9, .8197);
    glVertex2f(0.37, 0.5);
    glVertex2f(0.5, 0.8);
    glVertex2f(0.5, 0.37);

    glColor3f(.39, .43, .65);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.2, 0.67);
    glVertex2f(0.37, 0.45);

    glColor3f(.96, .96, .86);
    glVertex2f(-4, 0);
    glVertex2f(2, 0);
    glVertex2f(0, -2);

    glColor3f(1, .6, 0);
    glVertex2f(0.1, -0.1);
    glVertex2f(2, -0.1);
    glVertex2f(2, -2);
    glEnd();
}
void drawCat(float x,float y, float a) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glBegin(GL_TRIANGLES);
    glColor3f(a+.5,a+ .3,a+ .5);
    glVertex2f(-0.10, 0.5);
    glVertex2f(-0.4, 0.5);
    glVertex2f(-0.25, 0.7);

    glVertex2f(0.10, 0.5);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.25, 0.7);
//face
    glColor3f(a+.5,a+ .6,a+ .5);
    glVertex2f(0, 0);
    glVertex2f(-0.4, 0.5);
    glVertex2f(0.4, 0.5);
//eyes
    glColor3f(a+0,a+ .70,a+ 1);
    glVertex2f(0.15, 0.3);
    glVertex2f(0.1, 0.35);
    glVertex2f(0.1, 0.45);

    glVertex2f(0.05, 0.3);
    glVertex2f(0.1, 0.35);
    glVertex2f(0.1, 0.45);

    glColor3f(a+0,a+ .70,a+ 1);
    glVertex2f(-0.15, 0.3);
    glVertex2f(-0.1, 0.35);
    glVertex2f(-0.1, 0.45);

    glVertex2f(-0.05, 0.3);
    glVertex2f(-0.1, 0.35);
    glVertex2f(-0.1, 0.45);
//body
    glColor3f(a+.8,a+ .6,a+ .5);
    glVertex2f(0, -1);
    glVertex2f(-0.8, 0);
    glVertex2f(0.8, 0);
    glEnd();
    glPopMatrix();
}
void drawTree(float x,float y, float z,float scx, float scy) {
    glPushMatrix();
    glScalef(scx,scy,0);
    glTranslatef(x,y,z);
    glBegin(GL_TRIANGLES);
    glColor3f(0.9, 0.9, 0.9);
    glVertex2f(-0.05, 0);
    glVertex2f(0.05, 0);
    glVertex2f(0.05, -0.05);

    glVertex2f(-0.05, 0);
    glVertex2f(-0.05, -0.05);
    glVertex2f(0.05, -0.05);
//body
    glColor3f(0, 1, 0.4);
    glVertex2f(0, 0.3);
    glVertex2f(-0.25, 0);
    glVertex2f(0.25, 0);

    glVertex2f(0, 0.55);
    glVertex2f(-0.25, 0.25);
    glVertex2f(0.25, 0.25);

    glVertex2f(0, 0.8);
    glVertex2f(-0.25, 0.5);
    glVertex2f(0.25, 0.5);
    glEnd();
    glPopMatrix();
}

void drawCar(float x, float y, float z, clock_t curTime) {

    glPushMatrix();
    glTranslatef(x-.5,y,0);
    glBegin(GL_TRIANGLES);
//корпус + стекло
    glColor3f(.9,0,.5);
    glVertex2f(0,0);
    glVertex2f(1,0);
    glVertex2f(1,.3);
    glVertex2f(0,0);
    glVertex2f(0,.3);
    glVertex2f(1,.3);

    glColor3f(0,0,.6);
    glVertex2f(.9,.3);
    glVertex2f(.79,.3);
    glVertex2f(.76,.45);
//фара
    glColor3f(1,1,0);
    glVertex2f(1,.27);
    glVertex2f(1,.24);
    glVertex2f(.9,.24);
    glVertex2f(.9,.24);
    glVertex2f(1,.24);
    glVertex2f(.9,.27);
    glEnd();
    glPopMatrix();

    //wheels
    glPushMatrix();
    glTranslatef(-.26,0,0);
    glScalef(.13,.13,0);
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLE_FAN);
    for(float a=0;a<2*M_PI;a+=M_PI/16 ){
        glVertex2f(cos(a),sin(a));
    };
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(.26,0,0);
    glScalef(.13,.13,0);
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLE_FAN);
    for(float a=0;a<2*M_PI;a+=M_PI/16 ){
        glVertex2f(cos(a),sin(a));
    };
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-.26,0,0);
    glRotatef(1.8*curTime,0,0,z);
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,.1);
    glVertex2f(.1,0);
    glVertex2f(-.1,.05);

    glVertex2f(0,-.07);
    glVertex2f(-.09,-.01);
    glVertex2f(.08,.05);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(.26,0,0);
    glRotatef(1.8*curTime,0,0,z);
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,.1);
    glVertex2f(.1,0);
    glVertex2f(-.1,.05);

    glVertex2f(0,-.07);
    glVertex2f(-.09,-.01);
    glVertex2f(.08,.05);
    glEnd();
    glPopMatrix();

}

void F1() {
//       glPushMatrix();
//       Figure cat {0,0,0};
//       Figure kitty{.5,.5,0,0};


//       drawCat(kitty);

//       curTime = clock() - startTime;

//       if(curTime<1000) {
//           cat.x=curTime*0.003;
//       }else {
//           if(curTime<2000) {
//               cat.x=1000*0.003;
//               cat.y=(curTime-1000)*0.002;
//           }else {
//               if(curTime<3000) {
//                   cat.x=(-curTime+3000)*0.003;
//                   cat.y=1000*0.002;
//               }
//           }
//       }
//       glPushMatrix();
//       glScalef(.2,.2,1);
//       glRotatef(curTime*0.01,0,0,1);
//       drawCat(cat);
//       glPopMatrix();

//       glPopMatrix();
}
void work1(){
//    glPushMatrix();

//    glTranslatef(-1,0,0);
//    for (int i = 0;i < 7; i++) {

//        glScalef(.9,.9,0);
//        drawTree(.4,.1,0);
//    }
//    glScalef(.4, .4, 0);{
//        drawCAT(-2,0);
//    }
//    glScalef(2,2,0);{
//        drawCAT(-2.7,-1.4);
//    }
//    glScalef(.3,.3,0);
//    glTranslatef(-3,-4,0);
//    for(int a = 0; a < 10; a++) {

//        drawLolly(1.2,-.5);
//        glTranslatef(0,2,0);
//        drawLolly(1.2,-.5);
//        glTranslatef(0,.7,0);
//        drawLolly(1.2,-.5);
//        drawLolly(1.2,-.2);
//    }

//    for(int i=0;i<2*M_PI;i+=M_PI/4) {
//        glBegin(GL_TRIANGLES);
//        glVertex2f(cos(i),sin(i));
//        glEnd();
//        glTranslatef(cos(i),sin(i),0);
//        drawTRIANGLE(0.9,0,0.5);
//    }
//    drawbadCAR();
//    drawTree(-.3,-.3,0,0,0);
//    glPopMatrix();
}
void move1(clock_t curTime) {
    float x = 0;
    float y = 0;

    if(curTime<1000) {
        x=curTime*0.003;
    }else {
        if(curTime<2000) {
            x=1000*0.003;
            y=(curTime-1000)*0.002;
        }else {
            if(curTime<3000) {
                x=(-curTime+3000)*0.003;
                y=1000*0.002;
            }
        }
    }
    glPushMatrix();
    glScalef(.2,.2,1);
    glRotatef(0,0,0,1);
    drawCat(x,y,0);
    glPopMatrix();
}

void animateScene (int value) {
    glutPostRedisplay();
    glutTimerFunc(1000/60, animateScene, 1);
}
