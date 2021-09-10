#include <GL/glut.h>
#include <math.h>
#include <time.h>

/* 
void cielo() {
	glBegin(GL_POLYGON);
	glColor3ub(253, 44, 10);
	glVertex2d(0, 11);
	glVertex2d(16, 11);

	glColor3ub(248, 200, 154);
	glVertex2d(16, 3.4); // D
	glVertex2d(0, 3.4); // C
	glEnd();
}



void mar() {
	glBegin(GL_POLYGON);

	glColor3ub(8, 170, 232);
	glVertex2d(0, 0); // A
	glVertex2d(16, 0); // B

	glColor3ub(2543, 45, 15);
	glVertex2d(16, 3.4); // D
	glVertex2d(0, 3.4); // C

	glEnd();
}


void baseVelero() {
	glBegin(GL_POLYGON);

	glColor3ub(0, 0, 0);
	glVertex2d(6.23, 2.42); // E
	glVertex2d(10.79, 2.42); // F
	glVertex2d(10.5, 1.94); // H
	glVertex2d(6.5, 1.94); // G
	glEnd();
}


void mastil() {
	glColor3ub(0, 0, 0);
	glLineWidth(10);
	glBegin(GL_LINES);
	glVertex2d(7.7, 5.07); // O
	glVertex2d(7.7, 2.42); // P
	glEnd();
}


void vela() {
	glColor3ub(242, 156, 139);
	glLineWidth(10);
	glBegin(GL_POLYGON);
	glVertex2d(6.99, 2.92); // J
	glVertex2d(7.7, 2.42); // P
	glVertex2d(8.6, 2.92); // M
	glVertex2d(7.76, 4.86); // L
	glVertex2d(7.64, 4.36); // K
	glEnd();
}



void solDetras() {

	glColor3ub(250, 218, 186);

	float radio = 2;
	float cx, cy;

	glBegin(GL_POLYGON);
	
	for (double i = 0; i < 3.1416*2 ; i+=0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(1.5 + cx, 10.0 + cy); // K
	}
	
	glEnd();
}



void solEncima() {

	glColor3ub(218, 94, 84);

	float radio = 2;
	float cx, cy;

	glBegin(GL_POLYGON);

	for (double i = 0; i < 3.1416 * 2; i += 0.001) {
		cx = radio * cos(i);
		cy = radio * sin(i);
		glVertex2d(1.3 + cx, 10.1 + cy); // K
	}

	glEnd();
}





void estrellas() {

	srand(time(NULL));

	glPointSize(4);
	glColor3ub(255, 218, 193);
	glBegin(GL_POINTS);

	
	for (int i = 0; i < 10 ; i++) {

		double cx = (double) (rand() % (16 - 0 + 1 ) + 0 );
		double cy = (double) (rand() % (11 - 5 + 1) + 5 );

		glVertex2d(cx, cy);
	}
	
	
	
	glEnd();
}


void velero() {
	baseVelero();
	vela();
	mastil();
}




// ****************************************

void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 17, 0, 12);
	glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor( 252/255.0, 255/255.0, 183/255.0, 1); // color de fondo
}



void nuevoDibujo() {
	cielo();
	mar();

	glPushMatrix(); // apertura de capa
		velero();
	glPopMatrix(); // cierre de capa


	glPushMatrix(); // apertura de capa
		glScaled(0.5, 0.5, 0.5);
		glTranslated(-3, 4, 0);
	velero();
	glPopMatrix(); // cierre de capa


	solDetras();
	solEncima();
	estrellas();
}





void dibujar() {
	configuracionInicial();

	// metodos a implementar...
	nuevoDibujo();

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