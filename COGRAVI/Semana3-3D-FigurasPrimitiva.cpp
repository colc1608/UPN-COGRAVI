#include <GL/glut.h>
#include <math.h>
#include <time.h>

// FIGURAS PRIMITIVAS 3D 


/* 
float camaraX = -20;
float camaraY = 10;
float camaraZ = 20;

void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION); // existen 2 tipos
	glLoadIdentity();
	gluPerspective(60, (float)w / (float)h, 1, 200);

}

void inicializarLuces() {
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
}





void cubo() {
	glPushMatrix();
	glColor3ub(255, 0,0);
	glTranslated(15, 0, 0);
	glutSolidCube(4);
	glPopMatrix();
}


void cuboMalla() {
	glPushMatrix();
	glTranslated(10, 0, 0);
	glColor3ub(255, 0, 0);
	glutWireCube(4);
	
	//glutSolidCube(4);
	glPopMatrix();
}



void cono() {
	glPushMatrix();
		glColor3ub(255, 255, 0);
		glTranslated(0, 0, -20);
		glRotated(-90, 1, 0, 0);
		glutSolidCone(5, 6, 30, 30);
	glPopMatrix();
}

void conoMalla() {
	glPushMatrix();
		glColor3ub(255, 255, 0);
		glTranslated(0, 0, -10);
		glRotated(-90, 1, 0, 0);
		glutWireCone(5, 6, 5, 10); // 3) lineas verticales    4) lineas horizontales
	glPopMatrix();
}



void esfera() {
	glPushMatrix();
		glColor3ub(0, 255, 0);
		glTranslated(-15, 0, 0);
		glutSolidSphere(4, 30, 30);
	glPopMatrix();
}


void esferaMalla() {
	glPushMatrix();
		glColor3ub(0, 255, 0);
		glTranslated(-10, 0, 0);
		glutWireSphere(4, 10, 10);
	glPopMatrix();
}


void torus() {
	glPushMatrix();
		glColor3ub(248, 176, 0);
		glTranslated(0, -10, 0);
		glutSolidTorus(2, 4, 30, 30);
	glPopMatrix();
}


void torusMalla() {
	glPushMatrix();
		glColor3ub(248, 176, 0);
		glTranslated(10, 0, 10);
		glutWireTorus(2, 4, 30, 30);
	glPopMatrix();
}



void tetera() {
	glPushMatrix();
		glColor3ub(228, 0, 247);
		glTranslated(0, 0, 15);
		glutSolidTeapot(3);
	glPopMatrix();
}


void teteraMalla() {
	glPushMatrix();
		glColor3ub(228, 0, 247);
		glTranslated(0, 0, 10);
		glutWireTeapot(3);
	glPopMatrix();
}



void cilindro() {
	glPushMatrix();
		glColor3ub(0, 240, 247);
		glTranslated(0, 0, 5);
		gluCylinder(gluNewQuadric(), 3, 3, 5, 30, 30);
	glPopMatrix();
}


void disco() {
	glPushMatrix();
		gluDisk(gluNewQuadric(), 0, 4, 30, 30);
	glPopMatrix();
}


// *************************************************************************



void dibujar() {
	inicializarLuces();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 0, 0, 0, 1, 0);
	

	cubo();
	cuboMalla();
	cono();
	conoMalla();
	esfera();
	esferaMalla();
	torus();
	torusMalla();
	tetera();
	teteraMalla();
	cilindro();
	disco();

	glutSwapBuffers();
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE); // <<<<<< 3D 
	glutInitWindowSize(1400, 900); // ANCHO Y ALTO 
	glutInitWindowPosition(400, 900); // POSICION VENTANA
	glutCreateWindow("CESAR LOPEZ");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}

*/ 