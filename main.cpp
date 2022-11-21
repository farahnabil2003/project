#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <windows.h>
#include<math.h>

void display();
void reshape(int w,int h);
void timer(int);
void init(){
    glClearColor(0.3,0.0,0.0,1.0);

}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("basic");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

float step=0;



void display()
{





//p2
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glLineWidth(5.0);
    glTranslatef(-4,-6,0);
    glPushMatrix();
    glColor3f(1,0.6,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-1.6,0);
    glVertex2f(2,7);
    glVertex2f(5.3,0);


//p1
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glLineWidth(5.0);
    glTranslatef(-4,0,0);
    glPushMatrix();
    glColor3f(1,0.7,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(1,0);
    glVertex2f(-2,6);
    glVertex2f(-5.3,0);


//p3
glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glLineWidth(5.0);
    glPushMatrix();
    glColor3f(1,0.5,0);
    glBegin(GL_TRIANGLES);
    glTranslatef(16,0,9);
    glVertex2f(14,0);
    glVertex2f(11,7);
    glVertex2f(9,0);

//p1 small
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glLineWidth(5.0);
    glTranslatef(15,0,0);
    glPushMatrix();
    glColor3f(1,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(8.9,0);
    glVertex2f(7.9,2);
    glVertex2f(7,0);

//p2 small
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glLineWidth(5.0);
    glPushMatrix();
    glTranslatef(10,0,0);
    glColor3f(1,0.7,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(8,0);
    glVertex2f(7,3);
    glVertex2f(6,0);

glEnd();



//sun
glLineWidth(2);
glTranslatef(9,12,0);
glBegin(GL_POLYGON);
glPushMatrix();
glColor3f(1,1,0);
for(int i=0;i<360;i++)
    {
    float angle=i*3.14/180;
    glVertex2f(2*cos(angle),2*sin(angle)-step);


    }
glEnd();

//ground
    glPushMatrix();
glColor3f(1,0.8,0);
glBegin(GL_POLYGON);
glVertex2f(-16,-11);
glVertex2f(-16,-16);
glVertex2f(16,-16);
glVertex2f(-5,-20);
glVertex2f(5,-11);
glVertex2f(5,-20);
glEnd();

//bird1
glPushMatrix();
glColor3f(1,1,1);
glTranslatef(-5,-3,0);
glBegin(GL_POLYGON);
glVertex2f(0.8+step,0.1);
glVertex2f(2+step,2);
glVertex2f(1+step,0);
glVertex2f(0+step,1);
glEnd();

//bird2
glPushMatrix();
glColor3f(1,1,1);
glTranslatef(-9,-3,0);
glBegin(GL_POLYGON);
glVertex2f(0.8+step,0.1);
glVertex2f(2+step,2);
glVertex2f(1+step,0);
glVertex2f(0+step,1);
glEnd();

//bird3
glPushMatrix();
glColor3f(1,1,1);
glTranslatef(4.5,3,0);
glBegin(GL_POLYGON);
glVertex2f(0.8+step,0.1);
glVertex2f(2+step,2);
glVertex2f(1+step,0);
glVertex2f(0+step,1);
glEnd();

//bird4
glPushMatrix();
glColor3f(1,1,1);
glTranslatef(-3,3,0);
glBegin(GL_POLYGON);
glVertex2f(0.8+step,0.1);
glVertex2f(2+step,2);
glVertex2f(1+step,0);
glVertex2f(0+step,1);
glEnd();

//tree circle1
glLineWidth(2);
glTranslatef(0,-3,0);
glBegin(GL_POLYGON);
glPushMatrix();
glColor3f(0,1,0);
for(int i=0;i<360;i++)
    {
    float angle=i*3.14/180;
    glVertex2f(1.5*cos(angle),1.5*sin(angle));


    }
glEnd();

//tree line
glPushMatrix();
glColor3f(0.6,0,0);
glTranslatef(-1.31,-9,0);
glBegin(GL_POLYGON);
glVertex2f(1,1);
glVertex2f(1.5,1);
glVertex2f(1.5,8);
glVertex2f(1,8);
glEnd();
//tree circle2
glLineWidth(2);
glTranslatef(1.4,11,0);
glBegin(GL_POLYGON);
glPushMatrix();
glColor3f(0,1,0);
for(int i=0;i<360;i++)
    {
    float angle=i*3.14/180;
    glVertex2f(1.5*cos(angle),1.5*sin(angle));


    }
glEnd();

//tree circle2

glLineWidth(2);
glTranslatef(-1,-2,0);
glBegin(GL_POLYGON);
glPushMatrix();
glColor3f(0,1,0);
for(int i=0;i<360;i++)
    {
    float angle=i*3.14/180;
    glVertex2f(1.5*cos(angle),1.5*sin(angle));


    }
glEnd();

//tree circle4
glLineWidth(2);
glTranslatef(1.9,-0.1,0);
glBegin(GL_POLYGON);
glPushMatrix();
glColor3f(0,1,0);
for(int i=0;i<360;i++)
    {
    float angle=i*3.14/180;
    glVertex2f(1.5*cos(angle),1.5*sin(angle));


    }
glEnd();









    glFlush();
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(5500/60,timer,0);
	step+=0.2;


}
