#include "GL/freeglut.h"
#include "math.h"

struct Object{
   float x,y;
   float size;
   bool type;
};

float pos_x = 0;
Object quad;

void renderScene (void);
void processKeys(unsigned char key, int x, int y);
void drawFir(float brightness);
void drawSun(float cX, float cY, float radius);

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("OpenGL_Exams_Errors");
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(processKeys);
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(.21, .32, .7);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glColor3f(.31, .32, .97);
    glVertex2f(1, 0);
    glVertex2f(-1, 0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0, .32, .07);
    glVertex2f(-1, -1);
    glColor3f(.05, .42, .05);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glColor3f(.05, .32, .05);
    glVertex2f(1, -1);
    glEnd();

    float nightBrighness = 0.15;

    drawSun(0.75, 0.75, .2);

    glPushMatrix();
    glScalef(.8, .8, 1);
    glTranslatef(-1.2, -0.3, 0);
    for(int i=0; i<9; i++) {
        drawFir(-.21+nightBrighness-.2);
        glTranslatef(.3, 0, 0);
    };

    glTranslatef(-.3*9-.2, -.15, 0);
    glScalef(1.2, 1.2, 1);
    for(int i=0; i<9; i++) {
        drawFir(-.11+nightBrighness-.2);
        glTranslatef(.27, 0, 0);
    };

    glTranslatef(-.27*9, -.15, 0);
    glScalef(1.1, 1.1, 1);
    for(int i=0; i<9; i++) {
        drawFir(-.01+nightBrighness-.2);
        glTranslatef(.27, 0, 0);
    };
    glPopMatrix();


    glPushMatrix();
    glTranslatef(pos_x, 0, 0);
    drawFir(.5);
    glPopMatrix();

    glutSwapBuffers();
}

void processKeys(unsigned char key, int x, int y){
    if(key == 13)
        exit(0);

    if(key < 100){ // d
        pos_x = pos_x + 0.1;
    }

    glutPostRedisplay(); // Если нет анимации animateScene
}


void drawFir(float brightness){
    glBegin(GL_TRIANGLES);
    // пенёк
    glColor3f(.7+brightness, .6+brightness, .1+brightness);
    glVertex2f(-0.05, 0.29);
    glVertex2f(0.05, 0.29);
    glVertex2f(0.05, 0.25);
    glVertex2f(0.05, 0.25);
    glVertex2f(-0.05, 0.25);
    glVertex2f(-0.05, 0.29);
    // ярус 2
    glColor3f(.1+brightness, .7+brightness, .1+brightness);
    glVertex2f(-0.14, 0.29);
    glVertex2f(0.0, 0.38);
    glVertex2f(0.14, 0.29);
    // ярус 1
    glColor3f(.1+brightness, .8+brightness, .1+brightness);
    glVertex2f(-0.13, 0.36);
    glVertex2f(0.0, 0.45);
    glVertex2f(0.13, 0.36);
    // верхушка
    glColor3f(.1f+brightness, .9f+brightness, .1f+brightness);
    glVertex2f(-0.1f, 0.43f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.1f, 0.43f);
    glEnd() ;
}

void drawSun(float cX, float cY, float radius){
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(.90, .1, .07);
    glVertex2f(cX, cY);
    glColor3f(.95, .72, .07);

    float angle = 0.0;
    while(angle <= 2*3){
        glVertex2f(cX+radius*sinf(angle), cY+radius*cosf(angle));
        angle = angle + .3;
    }
    glEnd();
}
