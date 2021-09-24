#include <GL/glut.h>	
#include <iostream>
#include "texturas/RgbImage.h"


using namespace std;

float camaraX = -20;
float camaraY = 15;
float camaraZ = 40;

float posLuzX = 0;
float posLuzY = 70;
float posLuzZ = 60;

float angulo = 0;

GLuint texture[10];



void loadTextureFromFile(const char* filename, int index) {

	RgbImage theTexMap(filename);

	glGenTextures(1, &texture[index]);

	glBindTexture(GL_TEXTURE_2D, texture[index]);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, theTexMap.GetNumCols(), theTexMap.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE, theTexMap.ImageData());

}

void cargarImagenes() {
	loadTextureFromFile("texturas/cuadros1.bmp", 0);
	loadTextureFromFile("texturas/goku-24bmp.bmp", 1);
	loadTextureFromFile("texturas/ladrillo24.bmp", 2);
	loadTextureFromFile("texturas/patron.bmp", 3);
	loadTextureFromFile("texturas/tierraCompleta.bmp", 4);
	loadTextureFromFile("texturas/mercurio.bmp", 5);

	//loadTextureFromFile("texturas/paisaje.bmp", 4);
}

void iniciarVentana(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80, (float)w / (float)h, 1, 200);
}

void inicializarLuces() {
	GLfloat light_ambient[] = { 0.3, 0.3, 0.3, 1 };
	GLfloat light_diffuse[] = { 0.5, 0.5, 0.5, 1 };
	GLfloat light_specular[] = { 0.3, 0.3, 0.3, 1 };

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
	GLfloat light_ambient1[] = { 0.1, 0.1, 0.1, 1 };
	GLfloat light_diffuse1[] = { 0.4, 0.4,0.4, 1 };
	GLfloat light_specular1[] = { 0.3, 0.3, 0.3, 1 };

	float posicionLuz1[] = { -50,0,0,1 };
	float posicionLuz2[] = { 0,0,50,1 };
	float posicionLuz3[] = { 50,0,0,1 };
	float posicionLuz4[] = { 0,0,-50,1 };

	//glEnable(GL_LIGHT1);
	glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT1, GL_POSITION, posicionLuz1);

	//glEnable(GL_LIGHT2);
	glLightfv(GL_LIGHT2, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT2, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT2, GL_POSITION, posicionLuz2);

	//glEnable(GL_LIGHT3);
	glLightfv(GL_LIGHT3, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT3, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT3, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT3, GL_POSITION, posicionLuz3);

	//glEnable(GL_LIGHT4);
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

void cuadro() {

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[3] );

	float tamanio = 50;
	glPushMatrix();
	glColor3ub(255, 255, 255);
		glBegin(GL_QUADS);
			glTexCoord2d(0, 1); glVertex3d(-tamanio, 0, -tamanio);
			glTexCoord2d(3, 1); glVertex3d(tamanio, 0, -tamanio);
			
			glTexCoord2d(3, 0); glVertex3d(tamanio, 0, tamanio);
			glTexCoord2d(0, 0); glVertex3d(-tamanio, 0, tamanio);
		glEnd();
	glPopMatrix();
	
	glDisable(GL_TEXTURE_2D);

}

void goku() {

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[1]);


	float tamanioX = 50;
	float tamanioZ = 56;

	glPushMatrix();
		glColor3ub(255, 255, 255);
		glTranslated(0, -5, 0);

		glBegin(GL_QUADS);
			glTexCoord2d(0, 1); glVertex3d(-tamanioX, 0, -tamanioZ);
			glTexCoord2d(1, 1);  glVertex3d(tamanioX, 0, -tamanioZ);

			glTexCoord2d(1, 0); glVertex3d(tamanioX, 0, 0);
			glTexCoord2d(0, 0); glVertex3d(-tamanioX, 0, 0);
		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);

}

void goku2() {

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[1]);


	float tamanioX = 50;
	float tamanioZ = 56;

	glPushMatrix();
		glColor3ub(255, 255, 255);
		glTranslated(0, -5, 56);

		glBegin(GL_QUADS);
			glTexCoord2d(1, 1); glVertex3d(-tamanioX, 0, -tamanioZ);
			glTexCoord2d(0, 1);  glVertex3d(tamanioX, 0, -tamanioZ);

			glTexCoord2d(0, 0); glVertex3d(tamanioX, 0, 0);
			glTexCoord2d(1, 0); glVertex3d(-tamanioX, 0, 0);
		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);

}

void pared() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glPushMatrix();
		glColor3ub(255, 255 ,255);
		//glTranslated(0, 0, 50);
		glBegin(GL_QUADS);
			glTexCoord2d(0, 0); glVertex3d(-50, 0, -50);
			glTexCoord2d(5, 0); glVertex3d(50, 0, -50);
			glTexCoord2d(5, 0.5); glVertex3d(50, 10, -50);
			glTexCoord2d(0, 0.5); glVertex3d(-50, 10, -50);

		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

void pared2() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glPushMatrix();
		glColor3ub(255, 255 ,255);
		glRotated(90,0,1,0);
		glBegin(GL_QUADS);
			glTexCoord2d(0, 0); glVertex3d(-50, 0, -50);
			glTexCoord2d(5, 0); glVertex3d(50, 0, -50);
			glTexCoord2d(5, 0.5); glVertex3d(50, 10, -50);
			glTexCoord2d(0, 0.5); glVertex3d(-50, 10, -50);

		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

void pared3() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glPushMatrix();
		glColor3ub(255, 255 ,255);
		glTranslated(100,0,0);
		glRotated(90, 0, 1, 0);
		glBegin(GL_QUADS);
			glTexCoord2d(0, 0); glVertex3d(-50, 0, -50);
			glTexCoord2d(5, 0); glVertex3d(50, 0, -50);
			glTexCoord2d(5, 0.5); glVertex3d(50, 10, -50);
			glTexCoord2d(0, 0.5); glVertex3d(-50, 10, -50);

		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

void pared4() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glPushMatrix();
		glColor3ub(255, 255 ,255);
		glTranslated(0,0, 100);
		//glRotated(90, 0, 1, 0);
		glBegin(GL_QUADS);
			glTexCoord2d(0, 0); glVertex3d(-50, 0, -50);
			glTexCoord2d(5, 0); glVertex3d(50, 0, -50);
			glTexCoord2d(5, 0.5); glVertex3d(50, 10, -50);
			glTexCoord2d(0, 0.5); glVertex3d(-50, 10, -50);

		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

void paisaje() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[3]);

	glPushMatrix();
		glColor3ub(255, 255, 255);
		glTranslated(0, 0, 60);
		//glRotated(90, 0, 1, 0);
		
		glBegin(GL_QUADS);
		
		
			glTexCoord2d(0, 1); 
			glVertex3d(-50, 66.6, 0);
		
			glTexCoord2d(1, 1);  
			glVertex3d(50, 66.6, 0);

			glTexCoord2d(1, 0); 
			glVertex3d(50, 0, 0);
		
			glTexCoord2d(0, 0); 
			glVertex3d(-50, 0, 0);


		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

float anguloTierra = 0;


void tierra() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[4] );

	glPushMatrix();
		anguloTierra += 0.5;
		
		glTranslated(20, 0, 0);
		glRotated(anguloTierra, 0, 1, 0);
		glTranslated(20, 0, 0);

		glPushMatrix();
			glColor3ub(255, 255, 255);
			glTranslated(0, 10, 0);
			glRotated(-90, 1, 0, 0);
			GLUquadric* quad = gluNewQuadric();
			gluQuadricTexture(quad, 1);

			gluSphere(quad, 3, 50, 50);

		glPopMatrix();

	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

void cilindro() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[5]);

	glPushMatrix();
		glColor3ub(255, 255, 255);
		glTranslated(0, 2, 0);
		glRotated(-90, 1, 0, 0);
		
		GLUquadric* quad = gluNewQuadric();
		gluQuadricTexture(quad, 1);

		gluCylinder(quad, 5, 2, 5, 50, 50);
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}


// ANIMACIONES


float movCuboX = 0;
float ladoCuboX = 1;

float posZCubo1 = -10;
int ladoCubo1 = 1;

float posZCubo2 = -10;
int ladoCubo2 = 1;



void cubo() {

	if (movCuboX > 47 ) {
		ladoCuboX = -1;
	}

	if (movCuboX < -47) {
		ladoCuboX = 1;
	}
	

	movCuboX += 0.5 * ladoCuboX ; 
	

	glPushMatrix();
		glColor3ub(0, 255, 0);
		glTranslated(movCuboX, 5, 10);
		glutSolidCube(3);
	glPopMatrix();
}

void cubo1() {

	glPushMatrix();
		glColor3ub(16, 226, 220);
		glTranslated(30, 5, posZCubo1);
		glutSolidCube(3);
	glPopMatrix();
}

void cubo2() {

	glPushMatrix();
		glTranslated(20, 5, posZCubo2);
		glColor3ub(226, 118, 16);
		glutSolidCube(3);
	glPopMatrix();
}

void cubo3() {

	glPushMatrix();
		glColor3ub(237, 37, 240);
		glTranslated(10, 5, posZCubo2);
		glutSolidCube(3);
	glPopMatrix();
}


// helicoptero

float giroHelice = 0;
float velHelice = 0.4;

float alturaHelicoptero = 0;
float movHelicoptero = 0;




void cuerpo() {
	glPushMatrix();
		glTranslated(0, 10, 0);
		glColor3ub(0, 0, 255);
		glScaled(1, 1, 1.3);
		glutWireSphere(10, 20, 20);
	glPopMatrix();

}

void trenAtterrizaje(float pos) {

	glPushMatrix();

		glColor3ub(100, 100, 100);

		glTranslated(pos, -3, -10);

		gluCylinder(gluNewQuadric(), 1, 1, 20, 30, 30);

	glPopMatrix();

	glPushMatrix();

		glColor3ub(220,83,0);

		glTranslated(pos, -3, 10);

		gluSphere(gluNewQuadric(), 1, 100, 100);

	glPopMatrix();

	glPushMatrix();

		glColor3ub(220,83,0);

		glTranslated(pos, -3, -10);

		gluSphere(gluNewQuadric(), 1, 100, 100);

	glPopMatrix();

}

void unionTren(float posX, float giro, float posZ) {
	glPushMatrix();
		glColor3ub(100, 100, 100);
		glTranslated(posX, 2.5, posZ);
		glRotated(90, 0, 1, 0);
		glRotated(giro, 1, 0, 0);
		gluCylinder(gluNewQuadric(), 0.5, 0.7, 7, 30, 30);
	glPopMatrix();

}

void cola() {
	glPushMatrix();
		glColor3ub(0, 0, 255);
		glTranslated(0, 10, -32);
		gluCylinder(gluNewQuadric(), 1, 3, 20, 30, 30);
	glPopMatrix();
}

void parteCola1() {
	glPushMatrix();
		glColor3ub(0, 0, 255);
		glTranslated(-8, 10, -29);
		glRotated(90, 0, 1, 0);
		glScaled(1, 0.5, 1);
		gluCylinder(gluNewQuadric(), 0.5, 3, 8, 30, 30);
	glPopMatrix();

}

void parteCola2() {
	glPushMatrix();
		glColor3ub(0, 0, 255);
		glTranslated(0, 18, -29);
		glRotated(90, 0, 0, 1);
		glRotated(-90, 0, 1, 0);
		glScaled(1, 0.5, 1);
		gluCylinder(gluNewQuadric(), 0.5, 3, 8, 30, 30);
	glPopMatrix();

}

void helice() {

	if(giroHelice >= 360){
		giroHelice = 0;
	}

	cout << giroHelice << " valocidad :" << velHelice << endl;

	giroHelice += velHelice; 

	glPushMatrix();

		glTranslated(0, 21, 0);
		glRotated(giroHelice, 0, 1, 0);

		glPushMatrix();

			glColor3ub(255,255,0);

			glScaled(25, 0.5, 3);

			glutSolidCube(1);

		glPopMatrix();

		glPushMatrix();

			glColor3ub(255,255,0);

			glRotated(90, 0, 1, 0);

			glScaled(25, 0.5, 3);

			glutSolidCube(1);

		glPopMatrix();

		glPushMatrix();

			glColor3ub(220,83,0);

			glTranslated(0, 0.2, 0);

			glScaled(1.2, 0.7, 1.2);

			gluSphere(gluNewQuadric(), 1, 100, 100);

		glPopMatrix();

		glPushMatrix();

			glColor3ub(220,83,0);

			//glTranslated(0, 0.2, 0);

			glRotated(90, 1, 0, 0);

			gluCylinder(gluNewQuadric(), 1, 1, 1.5, 30, 30);

		glPopMatrix();

	glPopMatrix();

}

void helice2() {

	glPushMatrix();

	glTranslated(2, 14, -29);
	glRotated(giroHelice, 1, 0 ,0);
	glRotated(-90, 0, 0, 1);

	glPushMatrix();

	glColor3ub(255, 255, 0);

	glScaled(25, 0.5, 3);

	glutSolidCube(0.5);

	glPopMatrix();

	glPushMatrix();

	glColor3ub(255, 255, 0);

	glRotated(90, 0, 1, 0);

	glScaled(25, 0.5, 3);

	glutSolidCube(0.5);

	glPopMatrix();

	glPushMatrix();

	glColor3ub(220, 83, 0);

	glTranslated(0, 0.2, 0);

	glScaled(1.2, 0.7, 1.2);

	gluSphere(gluNewQuadric(), 0.5, 100, 100);

	glPopMatrix();

	glPushMatrix();

	glColor3ub(220, 83, 0);

	//glTranslated(0, 0.2, 0);

	glRotated(90, 1, 0, 0);

	gluCylinder(gluNewQuadric(), 0.5, 0.5, 1.5, 30, 30);

	glPopMatrix();

	glPopMatrix();

}

void helicoptero() {
	cuerpo();
	trenAtterrizaje(-8);
	trenAtterrizaje(8);
	unionTren(2.5, 45, 4);
	unionTren(-2.5, 135, 4);
	unionTren(2.5, 45, -4);
	unionTren(-2.5, 135, -4);
	cola();
	parteCola1();
	parteCola2();
	helice();
	helice2();
}


void personaje() {
	//cuadro();
	goku();
	goku2();
	pared();
	pared2();
	pared3();
	pared4();
	//paisaje();

	tierra();
	cilindro();

	cubo();
	cubo1();
	cubo2();
	cubo3();


	glPushMatrix();
	glTranslated(0, alturaHelicoptero, movHelicoptero);
		helicoptero();
	glPopMatrix();


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
	//piso();

	personaje();

	glPopMatrix();
	glutSwapBuffers();
}

void teclado_especial(int tecla, int x, int y) {
	//cout << tecla << endl;
	switch (tecla)
	{
	case 101:
		camaraY += 0.5;
		break;
	case 103:
		camaraY -= 0.5;
		break;

	case 100:
		angulo -= 3;
		break;
	case 102:
		angulo += 3;
		break;
	}
}

void teclado(unsigned char key , int x , int y) {
	switch (key) {
	case 'k': movCuboX -= 0.3;
	break;

	case 'l': movCuboX += 0.3;
		break;

	}
}

void timer(int t) {
	glutPostRedisplay();
	glutTimerFunc(20, timer, 0);
}


void timerCubo2(int t) {
	posZCubo2 -= 0.5 * ladoCubo2;

	if (posZCubo2 < -47) {
		ladoCubo2 = -1;
	}
	if (posZCubo2 < -10) {
		glutTimerFunc(20, timerCubo2, 0);
	}
}

void timerCubo1(int t) {
	//cout << "hola" << endl;
	
	posZCubo1 -= 0.5 * ladoCubo1;
	if (posZCubo1 < -47) {
		ladoCubo1 = -1;
	}
	if (posZCubo1 < -10) {
		glutTimerFunc(20, timerCubo1, 0);
	}
	else {
		glutTimerFunc(0, timerCubo2, 0);
	}

	//glutTimerFunc(20, timerCubo1, 0);
}

void timerMoverHelicoptero(int t) {
	movHelicoptero += 0.1;
	glutTimerFunc(20, timerMoverHelicoptero, 0);
}


void timerSubirHelicoptero(int) {
	alturaHelicoptero += 0.3;

	if (alturaHelicoptero < 10) {
		glutTimerFunc(20, timerSubirHelicoptero, 0);
	}
	else {
		glutTimerFunc(2000, timerMoverHelicoptero, 0);
	}

	
}


void timerHelice(int t) {
	velHelice += 1;

	if (velHelice < 15) {
		glutTimerFunc(3000, timerHelice, 0);
	}
	else {
		glutTimerFunc(0 , timerSubirHelicoptero, 0);
	}

	
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(1400, 900);
	glutInitWindowPosition(100, 0);
	glutCreateWindow("Computacion Grafica");
	cargarImagenes();
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	//glutKeyboardFunc(teclado);
	glutSpecialFunc(teclado_especial);
	glutTimerFunc(0, timer, 0);
	glutTimerFunc(3000, timerHelice, 0);
	glutTimerFunc(5000, timerCubo1, 0);
	glutMainLoop();
	return 0;
}


