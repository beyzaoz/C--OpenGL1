#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


void init(void)
{
    glClearColor(0.1, 0.4, 0.25, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Empty Triangle
    glBegin(GL_LINE_STRIP);
    glColor3ub(85, 55, 0);
    glVertex2i(20,420);
    glVertex2i(70, 420);
    glVertex2i(45, 480);
    glVertex2i(20, 420);
    glEnd();


     //Full Triangle
    glColor3f(0.6, 0.2, 0.6);

    glColor3ub(29, 157, 180);
    glBegin(GL_POLYGON);
    glVertex2i(75, 420);
    glVertex2i(125, 420);
    glVertex2i(100, 480);
    glEnd();

    //Empty Square
    glBegin(GL_LINE_STRIP);
    glColor3ub(25,35,50);
    glVertex2i(195,420);
    glVertex2i(165,450);
    glVertex2i(195,480);
    glVertex2i(225, 450);
    glVertex2i(195, 420);
    glEnd();

    //Full Square


    glColor3ub(255,127,0 );
    glBegin(GL_POLYGON);
    glVertex2i(261, 420);
    glVertex2i(231, 450);
    glVertex2i(261, 480);
    glVertex2i(291, 450);
    glEnd();

    //Empty Pentagon

    glColor3ub(35,70,90);
    glBegin(GL_LINE_STRIP);
    glVertex2i(340,450);
    glVertex2i(362.5,480);
    glVertex2i(385,450);
    glVertex2i(375,420);
    glVertex2i(350,420);
    glVertex2i(340,450);
    glEnd();

    // Full Pentagon

    glColor3ub(25,60,98);
    glBegin(GL_POLYGON);
    glVertex2i(390,450);
    glVertex2i(412.5,480);
    glVertex2i(435,450);
    glVertex2i(425,420);
    glVertex2i(400,420);
    glVertex2i(390,450);
    glEnd();

    //Empty Hexagon

    glColor3ub(255,76,94);
    glBegin(GL_LINE_STRIP);
    glVertex2i(17,360);
    glVertex2i(32.5,390);

    glVertex2i(55,390);

    glVertex2i(70,360);
    glVertex2i(55,330);
    glVertex2i(32.5,330);
    glVertex2i(17,360);
    glEnd();

    //Full Hexagon

    glColor3ub(255,76,94);
    glBegin(GL_POLYGON);
    glVertex2i(77,360);
    glVertex2i(92.5,390);

    glVertex2i(115,390);

    glVertex2i(130,360);
    glVertex2i(115,330);
    glVertex2i(92.5,330);
    glEnd();


    //Empty Heptagon

      glColor3ub(150,70,90);
    glBegin(GL_LINE_STRIP);
    glVertex2i(190,370);
    glVertex2i(210,390);
    glVertex2i(230,370);
    glVertex2i(232.5, 350);
    glVertex2i(222.5, 330);
    glVertex2i(200.5,330);
    glVertex2i(188.5,350);
    glVertex2i(190,370);
    glEnd();


    //Full Heptagon

    glColor3ub(135,170,0);
    glBegin(GL_POLYGON);
    glVertex2i(240,370);
    glVertex2i(260,390);
    glVertex2i(280,370);
    glVertex2i(282.5, 350);
    glVertex2i(272.5, 330);
    glVertex2i(250.5,330);
    glVertex2i(238.5,350);
    glEnd();


     //Empty Octagon

      glColor3ub(25,75,10);
    glBegin(GL_LINE_STRIP);
    glVertex2i(342.5,380);
    glVertex2i(360,390);
    glVertex2i(377.5,380);
    glVertex2i(385,359);
    glVertex2i(380,340);
    glVertex2i(360,330);
    glVertex2i(340,340);
    glVertex2i(335,359);
    glVertex2i(342.5,380);
    glEnd();

     //Full Octagon

    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);
    glVertex2i(397.5,380);
    glVertex2i(415,390);
    glVertex2i(432.5,380);
    glVertex2i(440,359);
    glVertex2i(435,340);
    glVertex2i(415,330);
    glVertex2i(395,340);
    glVertex2i(390,359);
    glVertex2i(397.5,380);
    glEnd();

    //Empty Circle
    float theta;
    glColor3f(1,0,0);
    glBegin(GL_LINE_STRIP);
    for(int i = 0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(195+28*cos(theta),195+32*sin(theta));

     }
    glEnd();


     //Full Circle

    glColor3f(102,255,0);
    glBegin(GL_POLYGON);
    for(int i = 0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(270+28*cos(theta),195+32*sin(theta));

     }
    glEnd();




    glFlush();
}

void init(void);
void display(void);

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1024, 768);
    glutInitWindowPosition(250, 250);
    glutCreateWindow("Oz");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
