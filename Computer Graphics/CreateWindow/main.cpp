
#include <GL/glut.h>
#include <stdlib.h>

/* Program entry point */
void init() //for setting background color for window
{
 glClearColor(1,1,1,1);
 glClear(GL_COLOR_BUFFER_BIT);
 glFlush();
}
void display() //if this method is not declared here then program doesnt run
{
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Demo");

    init();
    glutDisplayFunc(display);//not there in lab. in lab directly call display
    glutMainLoop();

    return EXIT_SUCCESS; //not there in lab. in lab return 0 is enough or no need to put.
}
