#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void segitiga(){

glColor3f(0.0,0.0,0.0);
glBegin(GL_TRIANGLES);

glVertex2f(-0.4,-0.9);
glVertex2f(0.4,-0.9);
glVertex2f(0.0,-0.1);

glEnd();

glColor3f(1.0, 0.0, 0.0);
glLineWidth(3.0);

glBegin(GL_LINES);

glColor3f(1.0,0.0,0.0);
glVertex2f(-0.4,-0.9);
glVertex2f(0.4,-0.9);

glColor3f(0.0,1.0,0.0);
glVertex2f(0.4,-0.9);
glVertex2f(0.0,-0.1);

glColor3f(0.0,0.0,1.0);
glVertex2f(0.0,-0.1);
glVertex2f(-0.4,-0.9);

glEnd();

glFlush();


}
int main(int a, char **b){

glutInit(&a,b);
glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
glutInitWindowPosition(400,100);
glutInitWindowSize(300,300);
glutCreateWindow("Bentuk Poligon Segitiga");
glutDisplayFunc(segitiga);
glutMainLoop();
return 0;

}
