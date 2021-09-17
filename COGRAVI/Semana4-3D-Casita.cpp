#include <GL/glut.h>	
#include <iostream>

/*

using namespace std;

float camaraX = -20;
float camaraY = 15;
float camaraZ = 30;

float posLuzX = 0;
float posLuzY = 70;
float posLuzZ = 0;

float angulo = 0;


void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80, (float)w / (float)h, 1, 200);
}

void inicializarLuces() {
	GLfloat light_ambient[] = { 0.1,0.1,0.1,1 };
	GLfloat light_diffuse[] = { 0.5,0.5,0.5,1 };
	GLfloat light_specular[] = { 0.3,0.3,0.3,1 };

	float reflejo[] = { 0,0,0,1 };
	float posicionLuz[] = { posLuzX,posLuzY,posLuzZ,1 };
	int sombra = 128;

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glMaterialfv(GL_FRONT, GL_SPECULAR, reflejo);
	glMateriali(GL_FRONT, GL_SHININESS, sombra);
	glLightfv(GL_LIGHT0, GL_POSITION, posicionLuz);

	//Luces Piso
	GLfloat light_ambient1[] =  { 0.1, 0.1, 0.1, 1 };
	GLfloat light_diffuse1[] =  { 0.4, 0.4,0.4, 1 };
	GLfloat light_specular1[] = { 0.3, 0.3, 0.3, 1 };

	float posicionLuz1[] = { -50,0,0,1 };
	float posicionLuz2[] = { 0,0,50,1 };
	float posicionLuz3[] = { 50,0,0,1 };
	float posicionLuz4[] = { 0,0,-50,1 };

	glEnable(GL_LIGHT1);
	glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT1, GL_POSITION, posicionLuz1);

	glEnable(GL_LIGHT2);
	glLightfv(GL_LIGHT2, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT2, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT2, GL_POSITION, posicionLuz2);

	glEnable(GL_LIGHT3);
	glLightfv(GL_LIGHT3, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT3, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT3, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT3, GL_POSITION, posicionLuz3);

	glEnable(GL_LIGHT4);
	glLightfv(GL_LIGHT4, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT4, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT4, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT4, GL_POSITION, posicionLuz4);
}

void dibujarEjes() {
	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(255, 0, 0);
	glVertex3d(0, 0, 0);
	glVertex3d(50, 0, 0);

	glColor3ub(0, 255, 0);
	glVertex3d(0, 0, 0);
	glVertex3d(0, 50, 0);

	glColor3ub(0, 0, 255);
	glVertex3d(0, 0, 0);
	glVertex3d(0, 0, 50);
	glEnd();
}

void piso() {
	glPushMatrix();
	glTranslated(0, -2, 0);
	glScaled(50, 1, 50);
	glColor3ub(180, 180, 180);
	glutSolidCube(2);
	glPopMatrix();
}

// *************************************************** 
// INICIO DIBUJO 

void cuarto() {
	glColor3ub(188, 182, 170);
	glPushMatrix();
		glTranslated(0, 5, 0);
		//glScaled(1, 1.7, 1);
		glutSolidCube(10);
	glPopMatrix();
}

void triangulo(float posZ, float giroY) {
	glColor3ub(188, 182, 170);
	glPushMatrix();
		glTranslated(0, 10, posZ);
		glRotated(giroY, 0, 1, 0);
		glBegin(GL_TRIANGLES);
			glVertex3d(-5, 0, 0);
			glVertex3d( 5, 0, 0);
			glVertex3d( 0, 5, 0);
		glEnd();
	glPopMatrix();
}

void tejado(float giroZ) {
	glColor3ub(215, 136, 92);
	glPushMatrix();
		glTranslated(0, 10, 5);
		//glScaled(1, 1, 1.3); // LOS OBJETOS 2D SE PUEDEN ESCALAR 
		glRotated(giroZ, 0, 0, 1);
		glBegin(GL_QUADS);
			glVertex3d(-5, 0, 0);
			glVertex3d(0, 5, 0);
			glVertex3d(0, 5, -10);
			glVertex3d(-5, 0, -10);
		glEnd();
	glPopMatrix();
}

void barras(float posX, float posZ, float rotZ) {
	glColor3ub(130, 81, 64);
	glPushMatrix();
		glTranslated(posX, 12.2, posZ);
		glRotated(rotZ, 0, 0, 1);
		glScaled(8.5, 1, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void barrasLados(float posX) {
	glColor3ub(130, 81, 64);
	glPushMatrix();
		glTranslated(posX, 9.9, 0);
		glRotated(45, 0, 0, 1);
		glScaled(1, 1, 10);
		glutSolidCube(1);
	glPopMatrix();
}

void marcoPuerta(int r, int g, int b) {
	glColor3ub(r, g, b);
	glPushMatrix();
		glTranslated(0, 4, 4.6);
		glScaled(5, 8, 1); 
		glutSolidCube(1);
	glPopMatrix();
}

void puerta() {
	glPushMatrix();
		glTranslated(1.5, 0, 0);
		marcoPuerta(175, 120, 90);

		glPushMatrix();
			glTranslated(0, 0.7, 0.2);
			glScaled(0.7, 0.8, 1);
			marcoPuerta(130, 81, 64);
		glPopMatrix();

	glPopMatrix();
}

void bloquePiedra() {
	glColor3ub(184, 182, 177);
	glPushMatrix();
		//glTranslated(0, 2, 0);
		//glRotated(rotZ, 0, 0, 1);
		//glScaled(8.5, 1, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void baseCasa() {

	// BASE PRINCIPAL
	glColor3ub(184, 182, 177);
	glPushMatrix();
		glTranslated(1, 0.5, -0.21);
		glScaled(9, 1, 10.4);
		bloquePiedra();
	glPopMatrix();

	// COMPLEMENTO DEL COSTADO
	glPushMatrix();
		glTranslated(-4.2, 0.5, 0);
		glScaled(2.5, 1, 10.8);
		bloquePiedra();
	glPopMatrix();

	//PIEDRA DELANTERA
	glPushMatrix();
		glTranslated(1.5, 0, 6);
		glScaled(5.5, 1, 2);
		bloquePiedra();
	glPopMatrix();
}

void casa() {
	cuarto();
	triangulo(5, 180);
	triangulo(-5, 0);
	tejado(0);
	tejado(-90);
	barras(-2.7, 5, 45);
	barras(2.7, 5, -45);
	barras(-2.7, -5, 45);
	barras(2.7, -5, -45);
	barrasLados(-5);
	barrasLados(5);
	puerta();
	baseCasa();
}

void personaje() {

	for (int i = 40; i >= -40; i-=20) {
		glPushMatrix();
			glTranslated(i, 0, -40);
			casa();
		glPopMatrix();
	}

	for (int i = -20; i < 60; i+= 20) {
		glPushMatrix();
			glTranslated(40, 0, i);
			glRotated(-90, 0, 1, 0);
			casa();
		glPopMatrix();
	}

	

}

// FIN DIBUJO 
// *************************************************** 

void dibujar() {
	inicializarLuces();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 0, 0, 0, 1, 0);

	glPushMatrix();
		glRotated(angulo, 0, 1, 0);
		dibujarEjes();
		piso();

		personaje();

	glPopMatrix();
	glutSwapBuffers();
}


void teclado_especial(int tecla, int x, int y) {
	//cout << tecla << endl;
	switch (tecla)
	{
	case 101:
		camaraY += 0.3;
		break;
	case 103:
		camaraY -= 0.3;
		break;

	case 100:
		angulo -= 3;
		break;
	case 102:
		angulo += 3;
		break;
	}
}
void timer(int t) {
	glutPostRedisplay();
	glutTimerFunc(20, timer, 0);
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(1400, 900);
	glutInitWindowPosition(100, 0);
	glutCreateWindow("Computacion Grafica");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutSpecialFunc(teclado_especial);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}


*/