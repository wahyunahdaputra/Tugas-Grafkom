#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void garis(){

    glColor3f(0.0,1.0,0.0);

    glBegin(GL_LINES);

    glVertex3f(-0.3,0.0,0.0);
    glVertex3f(0.3,0.0,0.0);

    glEnd();

    glFlush();

}


int main(int a, char * *b){

    glutInit(&a,b);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(200,200);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
    glutCreateWindow("Bentuk Garis Berwarna");
    glutDisplayFunc(garis);
    glutMainLoop();


    return 0;

}
