#include <GL/glut.h>
float mouseX=0,mouseY=0;
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
     myTeapot((mouseX-150)/150.0,-(mouseY-150)/150.0);
     glutSwapBuffers();
 }
 void mouse(int button.int state,int x,int y)
 {
      mouseX=x;mouseY=y;
 }
 int main(int argc,char** argv)
 {
     glutInit(&argc,argv);
     glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
     glutCreateWindow("week03");
     glutDisplayFunc(display);
     glutMainLoop();
 }
