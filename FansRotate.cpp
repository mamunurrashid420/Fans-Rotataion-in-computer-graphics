

#include<GL/gl.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>



#include <GL/glut.h>




//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

/*
	glPushMatrix(); //Save the transformations performed thus far
	glTranslatef(1.0, 1.0, 0.0);
	//glScalef(2.5,2.5,0); //Move to the center of the trapezoid
    glRotatef(_ang_tri ,0.0, 1.0, 0.0); //Rotate about the z-axis
/*
	glBegin(GL_TRIANGLES);

	//Triangle
	glVertex3f(0.5, -0.5, 0.0);glutInit(&argc, argv);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);

	glEnd();

	glPopMatrix(); //Undo the move to the center of the trapezoid

	glPushMatrix(); //Save the current state of transformations
	glTranslatef(-1.0, 1.0, 0.0); //Move to the center of the pentagon
	glRotatef(_angle, 1.0, 0.0, 0.0); //Rotate about the y-axis
	glScalef(0.50, 0.50, 0.0); //Scale by 0.7 in the x, y, and z directions
glutInit(&argc, argv);*/
	/*glBegin(GL_QUADS);

	//Trapezoid
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(0.3, -0.7, 0.0);
	glVertex3f(-0.8, -0.7, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);

	glEnd();


	glPopMatrix(); //Undo the move to the center of the pentagon/*
*/
    glPushMatrix(); //Save the current state of transformations
	glTranslatef(-1.0, 1.0, 0.0); //Move to the center of the pentagon
	glRotatef(_angle, 1.0, 0.0, 0.0); //Rotate about the y-axis
	glScalef(0.50, 0.50, 0.0); //Scale by 0.7 in the x, y, and z directions


	glPopMatrix(); //Undo the move to the center of the pentagon/*
	glPushMatrix(); //Save the current state of transformations
	glTranslatef(-2.5, 0.0, 1.0); //Move to the center of the triangle
	glRotatef(_angle, 0.0, 0.0, -1.0); //Rotate about the the vector (1, 2, 3)

    //glColor3ub(255,0,0);*/
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
 glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(0.3, 0.6, 0.0);
	glVertex3f(0.3, 2.0, 0.0);
	glVertex3f(-0.3, 2.0, 0.0);
	glVertex3f(-0.3, 0.6, 0.0);
	glEnd();

	//glBegin(GL_QUADS)

	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-0.6, 0.3, 0.0);
	glVertex3f(-2.0, 0.3, 0.0);
	glVertex3f(-2.0, -0.3, 0.0);
	glVertex3f(-0.6, -0.3, 0.0);
	glEnd();
	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(0.6, -0.3, 0.0);
	glVertex3f(2.0, -0.3, 0.0);
	glVertex3f(2.0, 0.3, 0.0);
	glVertex3f(0.6, 0.3, 0.0);
	glEnd();

	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-0.3, -0.6, 0.0);
	glVertex3f(-0.3, -2.0, 0.0);
	glVertex3f(0.3, -2.0, 0.0);
	glVertex3f(0.3, -0.6, 0.0);
	glEnd();
	/*glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(-3.0, -0.9, 0.0);
	glVertex3f(-0.9, -0.9, 0.0);
	glEnd();*/
	/*glBegin(GL_QUADS);
	//Trapezoid
	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-0.6, 0.3, 0.0);
	glVertex3f(-2.0, 0.3, 0.0);
	glVertex3f(-2.0, -0.3, 0.0);
	glVertex3f(-0.6, -0.3, 0.0);
	glEnd();*/
	/*glBegin(GL_QUADS);
	glVertex3f(0.6, 0.3, 0.0);
	glVertex3f(-2.0, 3.0, 0.0);
	glVertex3f(-2.0, -0.3, 0.0);
	glVertex3f(0.6, -0.6, 0.0);
	glEnd();*/
	glPopMatrix(); //Undo the move to the center of the triangle



	//second circle

	 glPushMatrix(); //Save the current state of transformations
	glTranslatef(-1.0, 1.0, 0.0); //Move to the center of the pentagon
	glRotatef(-_angle, 1.0, 0.0, 0.0); //Rotate about the y-axis
	glScalef(0.50, 0.50, 0.0); //Scale by 0.7 in the x, y, and z directions

	glPopMatrix(); //Undo the move to the center of the pentagon/*
	glPushMatrix(); //Save the current state of transformations
	glTranslatef(2.5, 0.0, 1.0); //Move to the center of the triangle
	glRotatef(-_angle, 0.0, 0.0, -1.0); //Rotate about the the vector (1, 2, 3)

    //glColor3ub(255,0,0);*/
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(0.3, 0.6, 0.0);
	glVertex3f(0.3, 2.0, 0.0);
	glVertex3f(-0.3, 2.0, 0.0);
	glVertex3f(-0.3, 0.6, 0.0);
	glEnd();


	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-0.3, -0.6, 0.0);
	glVertex3f(-0.3, -2.0, 0.0);
	glVertex3f(0.3, -2.0, 0.0);
	glVertex3f(0.3, -0.6, 0.0);
	glEnd();


    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-0.6, 0.3, 0.0);
	glVertex3f(-2.0, 0.3, 0.0);
	glVertex3f(-2.0, -0.3, 0.0);
	glVertex3f(-0.6, -0.3, 0.0);
	glEnd();

	glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(0.6, -0.3, 0.0);
	glVertex3f(2.0, -0.3, 0.0);
	glVertex3f(2.0, 0.3, 0.0);
	glVertex3f(0.6, 0.3, 0.0);
	glEnd();
	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 2.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1600, 600);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Transformations");
	initRendering();


	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}


	/*glBegin(GL_TRIANGLES);

	//Pentagon
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(-0.5, 0.0, 0.0);

	glVertex3f(-0.5, 0.0, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.0, 0.0);

	glVertex3f(-0.5, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

*/








