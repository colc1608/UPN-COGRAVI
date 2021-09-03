#include <GL/glut.h>
#include <math.h>
#include <time.h>

/* 
float camaraX = -20;
float camaraY = 10;
float camaraZ = 20;

void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION); // existen 2 tipos
	glLoadIdentity();
	gluPerspective(60, (float)w/(float)h, 1, 200 );

}

void inicializarLuces() {
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
}


// *************************************************************************



void dibujar() {
	inicializarLuces();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 0, 0, 0, 1, 0);


	glutSwapBuffers                     ();
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE ); // <<<<<< 3D 
	glutInitWindowSize(1400, 900); // ANCHO Y ALTO 
	glutInitWindowPosition(400, 50); // POSICION VENTANA
	glutCreateWindow("CESAR LOPEZ");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}


*/ 