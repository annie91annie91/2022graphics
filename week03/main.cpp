#include <GL/glut.h>
 void myTeapot(float x,float y)
 {
     glPushMatrix();

         //glTranslatef(0.5,0.5,0);
         glTranslatef(x,y,0);
         glColor3f(0.5,0.4,1);
         glutSolidTeapot(0.3);

     glPopMatrix();
 }
 void display()
 {
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     myTeapot(0.5,0.5);
     myTeapot(0.5,-0.5);
     myTeapot(-0.5,-0.5);
     myTeapot(-0.5,0.5);
     glutSwapBuffers();
 }

 int main(int argc,char** argv)
 {
     glutInit(&argc,argv);
     glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week03");
     glutDisplayFunc(display);
     glutMainLoop();
 }
