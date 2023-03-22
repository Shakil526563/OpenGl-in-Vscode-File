#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);


//Sky
glColor3ub (204,255,255);
glBegin(GL_POLYGON);
glVertex2d (0, 300);
glVertex2d (1200, 300);
glVertex2d (1200, 600);
glVertex2d (0, 600);
glEnd();

//Land
glColor3ub (64, 64, 64);
glBegin(GL_POLYGON);
glVertex2d (0, 100);
glVertex2d (1200, 275);
glVertex2d (1200, 300);
glVertex2d (0, 300);
glEnd();

//River
glColor3ub (0, 108, 196);
glBegin(GL_POLYGON);
glVertex2d (0, 0);
glVertex2d (1200, 0);
glVertex2d (1200, 275);
glVertex2d (0, 100);
glEnd();


//Hill
glColor3ub (0, 255, 0);
glBegin(GL_POLYGON);
glVertex2d (0, 300);
glVertex2d (0, 350);
glVertex2d (150, 400);
glVertex2d (250, 325);
glVertex2d (400, 375);
glVertex2d (500, 325);
glVertex2d (700, 400);
glVertex2d (900, 325);
glVertex2d (1050, 400);
glVertex2d (1200, 350);
glVertex2d (1200, 300);
glEnd();

//Boat
glColor3ub (0, 204, 102);
glBegin(GL_POLYGON);
glVertex2d (50, 50);
glVertex2d (75, 25);
glVertex2d (150, 25);
glVertex2d (175, 50);
glEnd();

glColor3ub (250, 61, 4);
glBegin(GL_POLYGON);
glVertex2d (100, 50);
glVertex2d (100, 75);
glVertex2d (40, 50);
glEnd();

//1st line
glColor3ub (234, 68, 20 );
glBegin(GL_LINES);
glVertex2d (110, 50);
glVertex2d (110, 75);
glLineWidth(5);
glEnd();
//2nd line
glColor3ub (234, 68, 20 );
glBegin(GL_LINES);
glVertex2d (120, 50);
glVertex2d (120, 75);
glEnd();

//House
glColor3ub (253, 87, 18);
glBegin(GL_POLYGON);
glVertex2d (100, 150);
glVertex2d (150, 150);
glVertex2d (150, 200);
glVertex2d (100, 200);
glEnd();

glColor3ub (127, 45, 12);
glBegin(GL_POLYGON);
glVertex2d (90, 200);
glVertex2d (160, 200);
glVertex2d (150, 225);
glVertex2d (100, 225);
glEnd();
//Gate
glColor3ub (3, 96, 71);
glBegin(GL_POLYGON);
glVertex2d (120, 152);
glVertex2d (130, 152);
glVertex2d (130, 195);
glVertex2d (120, 195);
glEnd();
//Window

glColor3ub (3, 96, 71);
glBegin(GL_POLYGON);
glVertex2d (105, 175);
glVertex2d (115, 175);
glVertex2d (115, 195);
glVertex2d (105, 195);
glEnd();

glColor3ub (3, 96, 71);
glBegin(GL_POLYGON);
glVertex2d (133, 175);
glVertex2d (143, 175);
glVertex2d (143, 195);
glVertex2d (133, 195);
glEnd();

//House 2
glColor3ub (20, 196, 144);
glBegin(GL_POLYGON);
glVertex2d (200, 175);
glVertex2d (250, 175);
glVertex2d (250, 250);
glVertex2d (200, 250);
glEnd();

glColor3ub (127, 45, 12);
glBegin(GL_POLYGON);
glVertex2d (200, 280);
glVertex2d (190, 250);
glVertex2d (260, 250);
glVertex2d (250, 280);
glEnd();


//Gate
glColor3ub (7, 103, 157);
glBegin(GL_POLYGON);
glVertex2d (220, 177);
glVertex2d (230, 177);
glVertex2d (230, 238);
glVertex2d (220, 238);
glEnd();
//Window
glColor3ub (7, 103, 157);
glBegin(GL_POLYGON);
glVertex2d (205, 240);
glVertex2d (217, 240);
glVertex2d (217, 220);
glVertex2d (205, 220);
glEnd();

glColor3ub (7, 103, 157);
glBegin(GL_POLYGON);
glVertex2d (233, 220);
glVertex2d (245, 220);
glVertex2d (245, 240);
glVertex2d (233, 240);
glEnd();
//Tree
glColor3ub (10, 168, 40);
glBegin(GL_TRIANGLES);
glVertex2d (380, 280);
glVertex2d (430, 280);
glVertex2d (405, 400);
glEnd();

glColor3ub (127, 70, 5);
glBegin(GL_POLYGON);
glVertex2d (400, 280);
glVertex2d (410, 280);
glVertex2d (410, 230);
glVertex2d (400, 230);
glEnd();

glColor3ub (127, 70, 5);
glBegin(GL_POLYGON);
glVertex2d (300, 200);
glVertex2d (310, 200);
glVertex2d (310, 145);
glVertex2d (300, 144);
glEnd();

glColor3ub (10, 168, 40);
glBegin(GL_TRIANGLES);
glVertex2d (280, 200);
glVertex2d (305, 300);
glVertex2d (330, 200);
glEnd();


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

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Shakil Rana");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; 
}