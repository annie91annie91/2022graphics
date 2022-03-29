#include <GL/glut.h>
#include<stdio.h>
float x=150,y=150,z=0,scale=1.0,angle=0.0;
int oldX=0,oldY=0,now=1;
void display()
{
    glClearColor(0.5,0.5,0.5,1);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef((x-150)/150.0,-(y-150)/150.0,z);
        glRotatef(angle,0,1,0);
        glScalef(scale,scale,scale);
        glColor3f(0.7 ,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void keyboard(unsigned char key,int mouseX,int mouseY)
{
    if(key=='1'||key=='w'||key=='W')now=1;
    if(key=='2'||key=='e'||key=='E')now=2;
    if(key=='3'||key=='r'||key=='R')now=3;
}
void mouse(int button,int state,int mouseX,int mouseY)
{
    oldX=mouseX; oldY=mouseY;
}
void motion(int mouseX,int mouseY)
{
    angle+=(mouseX-oldX);
    display();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week05 keyboard");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
}
