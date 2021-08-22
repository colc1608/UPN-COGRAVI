#include <GL/glut.h>


void dibujarPuntos() {

	glPointSize(10);
	glBegin(GL_POINTS);
		glColor3ub(255, 255, 0);
		glVertex2d(5, 5);

		glColor3ub(255, 255, 0);
		glVertex2d(2.5, 7.5);

		glColor3ub(255, 255, 0);
		glVertex2d(7.5, 2.5);


		glColor3ub(255, 255, 0);
		glVertex2d(7.5, 7.5);

		glColor3ub(255, 255, 0);
		glVertex2d(2.5, 2.5);

	glEnd();
}


// **************   MAIN DEL DIBUJO ***************

void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 10, 0, 10);
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor( 252/255.0, 255/255.0, 183/255.0, 1); // color de fondo
}


void dibujar() {
	configuracionInicial();
	dibujarPuntos();
	glFlush(); // NO BORRAR ESTA LINEA
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("CESAR LOPEZ");
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}
