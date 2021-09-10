#include <GL/glut.h>
#include <iostream>



using namespace std;

float camaraX = -20;
float camaraY = 15;
float camaraZ = 40;

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
		glColor3ub(0, 77, 160);
		glutSolidCube(2);
	glPopMatrix();
}


// ************************************************* 

void base() {
	glPushMatrix();
		glColor3ub(140, 74, 16);
		glTranslated(0, 10, 0);
		glScaled(5, 7, 1);
		glutSolidCube(2);
	glPopMatrix();
}

void ojo(float posX) {
	glPushMatrix();
		glColor3ub(241, 233, 134);
		glTranslated(posX, 13, 0.2);
		glScaled(1, 1.7, 1);
		glutSolidCube(2);
	glPopMatrix();
}

void ceja(float posX, float rotY) {
	glColor3ub(243, 108, 0); // NARANJA 
	glPushMatrix();
	glTranslated(posX, 14.3, 1);
	glRotated(rotY, 0, 0, 1);
	glScaled(3, 1, 1);
	glutSolidCube(1);
	glPopMatrix();
}

void barba(float posX) {
	glPushMatrix();
		glColor3ub(61, 183, 22);
		glTranslated(posX, 3, 1);
		//glScaled(2, 1, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void cabelloLateral(float posX, float rotY) {
	glPushMatrix();
		glTranslated(posX, 19.5, 0);
		glRotated(90, 1, 0, 0); // poner parado o cabeza
		glRotated(rotY, 0, 1, 0); // girar angulo derecha izquierda 
		glScaled(1, 0.5, 1);
		glutSolidCone(1.5, 5, 50, 50);
	glPopMatrix();
}

void cabelloMedio(float posX, float rotY) {
	glPushMatrix();
		glTranslated(posX, 21.5, 0);
		glRotated(90, 1, 0, 0); // poner parado o cabeza
		glRotated(rotY, 0, 1, 0); // girar angulo derecha izquierda 
		glScaled(1.2, 0.6, 1.5);
		glutSolidCone(1.5, 5, 50, 50);
	glPopMatrix();
}

void cabellos() {
	// Cabellos Izquierda 
	//glColor3ub(139, 1, 140); // MORADO 
	glColor3ub(128, 255, 0); // VERDE
	cabelloLateral(6, -30);

	
	glColor3ub(223, 0, 1); // ROJO
	cabelloMedio(2.3, -10);

	// Cabellos Derecha
	//glColor3ub(243, 108, 0); // NARANJA 
	glColor3ub(36, 36, 255); // AZUL
	cabelloMedio(-2.3, 10);

	
	glColor3ub(224, 227, 0); // AMARILLO
	cabelloLateral(-6, 30);
}

void pestana(float posX) {
	glColor3ub(0, 255, 64); // VERDE 
		glPushMatrix();
		glTranslated(posX, 11.5, 1);
		glScaled(2, 0.5, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void dientes(float posY) {
	glPushMatrix();
		glColor3ub(214, 207, 214);
		glTranslated(0, posY, 1);
		glScaled(2, 0.7, 0.5);
		glutSolidCube(2);
	glPopMatrix();
}

void dientesBkp() {
	glPushMatrix();
		glColor3ub(214, 207, 214);
		glTranslated(0, 7, 1);
		glScaled(2, 1.5, 0.5);
		glutSolidCube(2);
	glPopMatrix();
}

void labio(float posY) {
	glColor3ub(255, 200, 145); // VERDE 
	glPushMatrix();
		glTranslated(0, posY, 1.2);
		glScaled(4.2, 0.5, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void nariz(float posX, float rotY) {
	glColor3ub(243, 0, 0); // NARANJA 
	glPushMatrix();
		glTranslated(0, 10, 1);
		//glRotated(rotY, 0, 0, 1);
		//glScaled(3, 1, 1);
		glutSolidSphere(0.8, 50, 50);
	glPopMatrix();

	glPushMatrix();
		glTranslated(0, 9.8, 1);
		glRotated(-90, 1, 0, 0); // poner parado o cabeza
		//glRotated(rotY, 0, 0, 1);
		//glScaled(3, 1, 1);
		glutSolidCone(0.8, 3, 50, 50);
	glPopMatrix();

}

void mascara() {

	glPushMatrix();
		glTranslated(-20, 0, 0);

		base();
		ojo(2);
		ojo(-2);

		dientes(7.7);
		dientes(6);

		barba(-1.2);
		barba( 1.2);
		barba(0);
		cabellos();

		nariz(0, 0);

		ceja(-2, 5);
		ceja(2, -5);
		pestana(-2);
		pestana(2);

		labio(8.4);
		labio(5.4);

	glPopMatrix();
}


// ************************************************* 

void colorCuerpoCrash() {
	glColor3ub(243, 108, 0); // NARANJA 
}

void colorPantalonCrash() {
	glColor3ub(10, 10, 200); // NARANJA 
}

void BanCaraBase(float posX, float rotY) {
	colorCuerpoCrash();
	glPushMatrix();
		glTranslated(0, 17, 0);
		glScaled(3, 3, 1.5);
		glutSolidCube(2);
	glPopMatrix();
	
}

void BandOjo(float posX, float posY) {
	glColor3ub(255, 255, 255);
	glPushMatrix();
		glTranslated(posX, posY, 1.2);
		glScaled(1, 1.3, 0.5);
		glutSolidCube(2);
	glPopMatrix();
}

void BanCeja(float posX, float posY) {
	glColor3ub(138, 86, 57); // ZAPATO MARRON 
	glPushMatrix();
		glTranslated(posX, posY, 1.5);
		glRotated(0, 0, 0, 1);
		glScaled(2.8, 1, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void BanNariz() {

	colorCuerpoCrash();
	
	glPushMatrix();
		glTranslated(0, 14.5, 1);
		glRotated(5, 1, 0, 0); // poner parado o cabeza
		//glRotated(rotY, 0, 0, 1);
		//glScaled(3, 1, 1);
		glutSolidCone(1.5, 5, 4, 4);
	glPopMatrix();


	glColor3ub(138, 86, 57); // MARRON 
	glPushMatrix();
		glTranslated(0, 14, 5);
		//glRotated(rotY, 0, 0, 1);
		//glScaled(3, 1, 1);
		//glutSolidSphere(0.8, 50, 50);
		 glutSolidSphere(1, 5, 3);
	glPopMatrix();

}

void BanAnteBrazo(float posX, float rotZ, float rotX) {
	colorCuerpoCrash();
	glPushMatrix();
		glTranslated(posX, 13.7, 0.8);
		glRotated(rotZ, 0, 0, 1); // inclina 
		glRotated(rotX, 1, 0, 0); // giro hacia adelante 
		glScaled(2, 7, 1.5);
		glutSolidCube(1);
	glPopMatrix();
}

void BanBrazo(float posX) {
	colorCuerpoCrash();
	glPushMatrix();
		glTranslated(posX, 9.9, 2.7);
		glRotated(-30, 1, 0, 0); // giro hacia adelante 
		glScaled(1.4, 4.5, 1.3);
		glutSolidCube(1);
	glPopMatrix();
}

void BanOreja(float posX, float rotY) {
	colorCuerpoCrash();
	glPushMatrix();
		glTranslated(posX, 18.5, 0);
		glRotated(rotY, 0, 1, 0); // poner apuntando al costado 
		glRotated(-20, 1, 0, 1); // giro leve hacia arriba
		//glScaled(3, 1, 1);
		glutSolidCone(1.5, 3.8, 3, 3);
	glPopMatrix();
}

void BanCuerpo() {
	glColor3ub(243, 108, 0); // CUERPO CRASH 
	glPushMatrix();
		glTranslated(0, 14, 0);
		glRotated(90, 1, 0, 0); // poner apuntando al costado 
		glutSolidCone(2.5, 10, 6, 6);
	glPopMatrix();
}

void BanPantalonBase() {
	colorPantalonCrash();
	glPushMatrix();
		glTranslated(0, 6, 0);
		glScaled(1.5, 1.5, 0.8);
		glutSolidCube(2);
	glPopMatrix();

}


void bandicoot() {
	
	glPushMatrix();
		BanCaraBase(-2, 0);

		float a = 17;
		float b = 18.3;
		BandOjo(-1.3, a);
		BanCeja(-1.3, b);
		BandOjo(1.3, a - 0.4);
		BanCeja(1.3, b - 0.4);
		BanNariz();

		BanCuerpo();
		
		BanAnteBrazo(-3.5, -40, -20);
		BanAnteBrazo( 3.5,  40, -20);
		BanBrazo(-5.4);
		BanBrazo(5.4);


		BanOreja(2.5, 90);
		BanOreja(-2.5, -90);

		BanPantalonBase();


	glPopMatrix();

}








// ************************************************* 

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

		mascara();
		bandicoot();
	
	glPopMatrix();

	glutSwapBuffers();
}

// ************************************************* 


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
	glutInitWindowPosition(700, 500);
	glutCreateWindow("Computacion Grafica");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutSpecialFunc(teclado_especial);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}

