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
	GLfloat light_ambient1[] = { 0.1,0.1,0.1,1 };
	GLfloat light_diffuse1[] = { 0.1,0.1,0.1,1 };
	GLfloat light_specular1[] = { 0.2,0.2,0.2,1 };
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
	glLineWidth(2);
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

void pie(float posX) {
	glPushMatrix();
		glTranslated(posX, 0, 0);
		glScaled(3, 0.6, 3);
		glutSolidSphere(1.5, 30, 30);
	glPopMatrix();
}


void pierna(float posX) {
	glPushMatrix();
		glTranslated(posX, 0, 0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(gluNewQuadric(), 4, 4, 4, 30, 30);
	glPopMatrix();
}


void cuerpo() {
	glPushMatrix();
		glTranslated(0,3,0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(gluNewQuadric(), 8, 6, 7, 30, 30);
	glPopMatrix();
}

void brazo(float posX, float rotX) {
	glPushMatrix();
		glTranslated(posX, 9, 0);
		glRotated(90, 0, 1, 0);
		glRotated(rotX, 1, 0, 0);
		gluCylinder(gluNewQuadric(), 1.5, 1.5, 4.8, 30, 30);
	glPopMatrix();
}



void mano(float posX) {
	glPushMatrix();
		glTranslated(posX, 5, 0);
		glScaled(1, 0.75, 0.65);
		glutSolidSphere(2, 30, 30);
	glPopMatrix();
}

void lineaCuerpo(){
	glPushMatrix();
		glTranslated(0, 6.4, 6.7);
		glRotated(-15, 1, 0, 0);
		glScaled(0.5, 7.3, 1);
		glutSolidCube(1);
	glPopMatrix();
}


void cuello() {
	glPushMatrix();
		glTranslated(0, 10, 0);
		glRotated(-90, 1, 0, 0);
		glScaled(0.6, 0.6, 0.6);
		glutSolidTorus(1, 10, 60, 60);
	glPopMatrix();
}

void cabeza() {
	glPushMatrix();
		glTranslated(0, 15.2, 0);
		glutSolidSphere(8.2, 50, 50);
	glPopMatrix();
}



void gorra() {
	glPushMatrix();
		glTranslated(0, 16, 0);
		//glRotated(-90, 1, 0, 0);
		//glScaled(0.6, 0.6, 0.6);
		glutSolidSphere(7.8, 50, 50);
	glPopMatrix();
}

void gorraAro() {
	glPushMatrix();
		glTranslated(0, 19, 0);
		glRotated(-90, 1, 0, 0);
		//glScaled(0.6, 0.6, 0.6);
		glutSolidTorus(1, 7.2, 50, 50);
	glPopMatrix();
}

void gorraBolita() {
	glPushMatrix();
		glTranslated(0, 23, 0);
		//glRotated(-90, 1, 0, 0);
		//glScaled(0.6, 0.6, 0.6);
		glutSolidSphere(2, 50, 50);
	glPopMatrix();
}

void ojo(float posX, float rotX) {
	glPushMatrix();
		glTranslated(posX, 15, 7);
		glRotated(rotX, 0, 0, 1);
		glScaled(0.9, 0.7 ,0.7);
		glutSolidSphere(2.8, 50, 50);
	glPopMatrix();
}


void pupila(float posX) {
	glPushMatrix();
		glTranslated(posX, 15.1, 8);
		glScaled(1.1, 1.1, 1.1);
		glutSolidSphere(1, 50, 50);
	glPopMatrix();
}











void cejaDer(float posX, float rotY) {
	glPushMatrix();
		glTranslated(posX, 18.5, 8);
		glRotated(90, 1, 0, 0);
		glRotated(rotY, 0, 1, 0);
		glScaled(0.2, 0, 1);
		glutSolidCone(3.2, 2.5, 50, 50);
	glPopMatrix();
}



void cejaIzq(float posX, float rotY) {
	glPushMatrix();
	glTranslated(posX, 18.5, 8);
	glRotated(90, 1, 0, 0);
	glRotated(rotY, 0, 1, 0);
	glScaled(0.2, 0, 1);
	glutSolidCone(3.2, 2.5, 50, 50);
	glPopMatrix();
}








void boca() {
	glPushMatrix();
		glTranslated(0, 12.5, 7.4);
		//glRotated(rotX, 0, 0, 1);
		glScaled(3.2, 3.2, 0.8);
		glutSolidSphere(0.5, 50, 50);
	glPopMatrix();
}

void diente(float posX) {
	glPushMatrix();
		glTranslated(posX, 12.5, 7.6);
		//glRotated(rotX, 0, 0, 1);
		//glScaled(3.2, 3.2, 0.8);
		glutSolidCube(0.5);
	glPopMatrix();
}


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

		glColor3ub(0, 0, 0);
		boca();

		glColor3ub(255, 255, 255);
		diente(0.33);
		diente(-0.33);

		glColor3ub(255, 255, 255);
		ojo(-1.7, 45);
		ojo(1.7, -45);
		
		glColor3ub(0, 0, 0);
		pupila(1.8);
		pupila(-1.8);

		glColor3ub(0, 0, 0);
		cejaDer(3, -50);
		cejaIzq(-3, 50);

		glColor3ub(255, 178, 0);
		gorraBolita();
		gorraAro();

		glColor3ub(76, 51, 25);
		gorra();

		glColor3ub(255, 204, 153);
		cabeza();

		glColor3ub(146, 82, 0);
		cuello();
		lineaCuerpo();


		glColor3ub(146, 82, 0);
		mano(-8);
		mano(8);


		glColor3ub(255, 127, 0);
		
		brazo(5, 50);
		brazo(-5, 130);

		cuerpo();
		pierna(-3);
		pierna(3);


		glColor3ub(0, 0, 0);
		pie(-3);
		pie(3);

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