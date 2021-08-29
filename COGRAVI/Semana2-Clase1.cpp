#include <GL/glut.h>
#include <math.h>
#include <time.h>


/*


void fondo() {
	glColor3ub(253, 255, 197); 
	glBegin(GL_POLYGON);
	glVertex2d(0, 0); 
	glVertex2d(22, 0); 
	glVertex2d(22, 15); 
	glVertex2d(0, 15); 
	glEnd();
}

void circulo(float radio, float posx, float posy) {

	glColor3ub(110, 28, 188);
	glBegin(GL_POLYGON);
	
	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		double cx = radio * cos(i);
		double cy = radio * sin(i);
		glVertex2d(posx + cx, posy+ cy); 
	}

	glEnd();

}


void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 22, 0, 15);
	glClear(GL_COLOR_BUFFER_BIT);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	//glClearColor( 252/255.0, 255/255.0, 183/255.0, 1); // color de fondo
}

void triangulo() {
	//glColor3ub(28, 188, 84);
	
	glBegin(GL_TRIANGLES);
	
	glColor4ub(28, 188, 84, 50);
	glVertex2d(5, 6);
	
	glColor4ub(28, 188, 84, 150);
	glVertex2d(11, 7);
	
	glColor4ub(28, 188, 84, 240);
	glVertex2d(7, 13);
	
	glEnd();
}

void dibujar() {
	configuracionInicial();

	// metodos a implementar...
	fondo();
	circulo(2, 5, 6);
	circulo(3, 10, 6);
	triangulo();

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1430, 975);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("CESAR LOPEZ");
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}


*/