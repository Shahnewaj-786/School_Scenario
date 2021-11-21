#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159


void initGL(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display(){
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(0.5);



//BackGround

//Upper Back
glBegin(GL_QUADS);
glColor3f(0.4f, 1.0f, 1.0f);
glVertex2f(-1.0f, 1.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f, 1.0f);
glEnd();


//Lower Back
glBegin(GL_QUADS);
glColor3f(0.4f, 1.0f, 0.2f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(1.0f, -1.0f);
glVertex2f(1.0f, 0.0f);
glEnd();


//Divider
glBegin(GL_QUADS);
glColor3f(0.5f, 0.5f, 0.5f);
glVertex2f(-0.60f, 0.05f);
glVertex2f(-0.60f, -0.05f);
glVertex2f(0.60f,-0.05f);
glVertex2f(0.60f,0.05f);
glEnd();

//Flag for school

//flag stand
glBegin(GL_QUADS);
glColor3f(0.3f, 0.3f, 0.3f);
glVertex2f(-0.80f, 0.60f);
glVertex2f(-0.80f, 0.0f);
glVertex2f(-0.79f, 0.0f);
glVertex2f(-0.79f,0.60f);
glEnd();


//flag
glBegin(GL_QUADS);
glColor3f(0.0f, 0.3f, 0.1f);
glVertex2f(-0.79f, 0.55f);
glVertex2f(-0.79f, 0.35f);
glVertex2f(-0.59f, 0.35f);
glVertex2f(-0.59f,0.55f);
glEnd();


//circle

int i;

GLfloat x=-0.70f; GLfloat y=0.45f; GLfloat radius=0.05f;

int triangleAmount =20;

GLfloat twicePi =2.0f*PI;

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(x,y);
for(i=0;i<=triangleAmount;i++){
    glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
}
glEnd();







//Main Building

//Front Side
glBegin(GL_QUADS);
glColor3f(0.6f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.60f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.40f, 0.0f);
glVertex2f(0.40f,0.50f);
glEnd();


//Back Side
glBegin(GL_QUADS);
glColor3f(0.6f, 0.0f, 0.0f);
glVertex2f(0.0f, 0.60f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-0.45f, 0.0f);
glVertex2f(-0.45f,0.50f);
glEnd();




//Border between 2 side

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.60f);
glVertex2f(0.0f, 0.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.60f);
glVertex2f(0.40f, 0.50f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(0.40f, 0.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.40f, 0.0f);
glVertex2f(0.40f, 0.50f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-0.45f, 0.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.45f, 0.0f);
glVertex2f(-0.45f, 0.50f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.45f, 0.50f);
glVertex2f(0.0f, 0.60f);
glEnd();



//Floor divider

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.35f);
glVertex2f(0.40f, 0.30f);
glEnd();


glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.0f, 0.35f);
glVertex2f(-0.45f, 0.29f);
glEnd();


//Door

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.20f, 0.20f);
glVertex2f(0.20f, 0.0f);
glVertex2f(0.30f, 0.0f);
glVertex2f(0.30f,0.19f);
glEnd();



glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.20f, 0.20f);
glVertex2f(-0.20f, 0.0f);
glVertex2f(-0.30f, 0.0f);
glVertex2f(-0.30f,0.19f);
glEnd();



//Window

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.10f, 0.50f);
glVertex2f(0.10f, 0.40f);
glVertex2f(0.15f, 0.39f);
glVertex2f(0.15f,0.50f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.10f, 0.50f);
glVertex2f(-0.10f, 0.40f);
glVertex2f(-0.15f, 0.39f);
glVertex2f(-0.15f,0.50f);
glEnd();



//Sun
int j;

GLfloat s=0.79f; GLfloat k=0.85f; GLfloat radius_s=0.05f;

int triangleAmount_s =20;

GLfloat twicePi_s =2.0f*PI;

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,0.6f,0.0f);
glVertex2f(s,k);
for(j=0;j<=triangleAmount_s;j++){
    glVertex2f(s+(radius_s*cos(j*twicePi_s/triangleAmount_s)), k+(radius_s*sin(j*twicePi_s/triangleAmount_s)));
}
glEnd();





//Clock for school

//Clock Body

glBegin(GL_QUADS);
glColor3f(0.4f, 0.4f, 0.4f);
glVertex2f(0.90f, 0.45f);
glVertex2f(0.90f, 0.0f);
glVertex2f(0.69f, 0.0f);
glVertex2f(0.69f,0.45f);
glEnd();


//Clock Head
glBegin(GL_TRIANGLES);
glColor3f(0.0f, 0.4f, 0.8f);
glVertex2f(0.79f, 0.55f);
glVertex2f(0.90f, 0.45f);
glVertex2f(0.69f, 0.45f);
glEnd();


//Main Clock

// Outside circle













glFlush();
}

int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("School");
    glutInitWindowSize(320,320);
    glutReshapeWindow(1920,1080);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
