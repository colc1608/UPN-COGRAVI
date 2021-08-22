#include <GL/glut.h>

// **************   Complementos a dibujar ***************

void dibujarQuads() {

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 0);
	glVertex2d(3, 6);
	glVertex2d(7, 6);

	glColor3ub(255, 0, 0);
	glVertex2d(7, 2);
	glVertex2d(3, 2);
	glEnd();

}

void dibujarPoligono1() {

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2d(3, 5);
	glVertex2d(3, 6);
	glVertex2d(7, 6);
	glVertex2d(7, 5);

	glColor3ub(255, 0, 0);
	glVertex2d(7, 2);
	glVertex2d(3, 2);
	glEnd();

}

void dibujarPoligono2() {
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2d(0, 2);
	glVertex2d(2, 4);
	glVertex2d(4, 3);
	glVertex2d(7, 4);
	glVertex2d(9, 2);
	glEnd();
}

void dibujarPoligono3() {
	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2d(0, 2);

	glColor3ub(255, 255, 0);
	glVertex2d(2, 4);
	glVertex2d(4, 3);
	glVertex2d(7, 4);
	glVertex2d(9, 2);
	glEnd();
}

void dibujarTriangles() {
	glBegin(GL_TRIANGLES);
	glColor3ub(255, 0, 0);
	glVertex2d(4, 8);
	glColor3ub(0, 0, 255);
	glVertex2d(5, 4);
	glColor3ub(0, 255, 0);
	glVertex2d(7, 7);
	glEnd();
}

void dibujarLineas() {

	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0);
	glVertex2d(2, 8);
	glVertex2d(7, 1);

	glColor3ub(255, 0, 0);
	glVertex2d(7, 8);
	glVertex2d(2, 1);

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2d(5, 6);
	glVertex2d(5, 4);

	glEnd();

}

void dibujarLineStrip() {
	glBegin(GL_LINE_STRIP);
	glColor3ub(255, 255, 0);
	glVertex2d(0, 2);
	glVertex2d(2, 4);
	glVertex2d(4, 3);
	glVertex2d(7, 4);
	glVertex2d(9, 2);
	glEnd();
}

void dibujaLineLoop() {
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0, 2);
	glVertex2d(2, 4);
	glVertex2d(4, 3);
	glVertex2d(7, 4);
	glVertex2d(9, 2);
	glEnd();
}



// **************   MAIN DEL DIBUJO ***************

void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 10, 0, 10);
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor( 252/255.0, 255/255.0, 183/255.0, 1); // fondo
}


void dibujar() {
	configuracionInicial();

	//dibujarLineas();
	//dibujarLineStrip();
	//dibujaLineLoop();

	//dibujarQuads();
	//dibujarPoligono1();
	//dibujarPoligono2();
	//dibujarPoligono3();
	dibujarTriangles();

	glFlush();
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
