#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void titik2(){

    glColor3f(1.0, 1.0, 1.0);

    glPointSize(3.0);
    glBegin(GL_POINTS);

    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.2, 0.4, 0.0);

    glColor3f(0.0,1.0,1.0);
    glVertex3f(0.6, 0.5, 0.0);

    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.5, 0.3, 0.0);

    glColor3f(1.0,0.0,1.0);
    glVertex3f(0.7, 0.2, 0.0);

    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.9, 0.7, 0.0);

    glColor3f(1.0,1.0,0.0);
    glVertex3f(0.5, 0.8, 0.0);

    glEnd();
    glFlush();

}

void init(){

    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}

int main(int a, char * *b){

    glutInit(&a,b);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Bentuk Titik-titik Berwarna");
    init();
    glutDisplayFunc(titik2);
    glutMainLoop();


    return 0;

}
