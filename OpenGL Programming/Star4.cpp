#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3ub (245, 0, 87);
glBegin(GL_LINES);
glLineWidth(5);

glVertex2d (0, 250);
glVertex2d (490, 240);
glVertex2d (250, 0);
glVertex2d (240, 480);
glEnd();

glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (240, 120);
glVertex2d (260, 160);
glVertex2d (240, 180);
glVertex2d (220, 160);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (260, 160);
glVertex2d (240, 180);
glVertex2d (260, 200);
glVertex2d (300, 180);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (240, 180);
glVertex2d (260, 200);
glVertex2d (240, 240);
glVertex2d (220, 200);
glEnd();
glColor3ub (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (240, 180);
glVertex2d (220, 160);
glVertex2d (180, 180);
glVertex2d (220, 200);
glEnd();

glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (240, 240);
glVertex2d (280, 220);
glVertex2d (300, 240);
glVertex2d (280, 260);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (300, 240);
glVertex2d (280, 260);
glVertex2d (300, 300);
glVertex2d (320, 260);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (300, 240);
glVertex2d (320, 220);
glVertex2d (360, 240);
glVertex2d (320, 260);
glEnd();
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (300, 240);
glVertex2d (320, 220);
glVertex2d (300, 180);
glVertex2d (280, 220);
glEnd();

glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (240, 240);
glVertex2d (260, 280);
glVertex2d (240, 300);
glVertex2d (220, 280);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (220, 280);
glVertex2d (240, 300);
glVertex2d (220, 320);
glVertex2d (180, 300);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (240, 300);
glVertex2d (260, 280);
glVertex2d (300, 300);
glVertex2d (260, 320);
glEnd();
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (240, 240);
glVertex2d (260, 320);
glVertex2d (240, 360);
glVertex2d (220, 320);
glEnd();

glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (120, 240);
glVertex2d (160, 220);
glVertex2d (180, 240);
glVertex2d (160, 260);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (160, 220);
glVertex2d (180, 240);
glVertex2d (200, 220);
glVertex2d (180, 180);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (180, 240);
glVertex2d (200, 220);
glVertex2d (240, 240);
glVertex2d (200, 260);
glEnd();
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (180, 240);
glVertex2d (200, 260);
glVertex2d (180, 300);
glVertex2d (160, 260);
glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 500, 0, 500);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Shakil Rana");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}