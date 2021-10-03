#include <GL/glut.h>	
#include <iostream>
#include "texturas/RgbImage.h"

/*

using namespace std;

float camaraX = -20;
float camaraY = 15;
float camaraZ = 40;

float centroX = 0;
float centroZ = 0;
float movimientoCamara = 0.5;

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
	glBindTexture(GL_TEXTURE_2D, texture[3]);

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
	glColor3ub(255, 255, 255);
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
	glColor3ub(255, 255, 255);
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

void pared3() {
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glPushMatrix();
	glColor3ub(255, 255, 255);
	glTranslated(100, 0, 0);
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
	glColor3ub(255, 255, 255);
	glTranslated(0, 0, 100);
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



// *****************************************************
// CONSTRUCCION DE MUÑEQUITO

// Variables de animacion del muñeco
float velocidadMovimiento = 0.9;

float anguloPierna1 = 0;
float ladoPierna1 = 1;

float anguloPierna2 = 0;
float ladoPierna2 = -1;

float anguloBrazo1 = 0;
float ladoBrazo1 = 1;


float anguloBrazo2 = 0;
float ladoBrazo2 = -1;



void pierna1() {

	glPushMatrix();
		glColor3ub(255,255,0);
		glTranslated(1, 0, 1.3);
		glRotated(-30,1,0,0);
		glScaled(1,6,1);
		glutSolidCube(1);
	glPopMatrix();

}

void pierna2() {

	glPushMatrix();
		glColor3ub(34, 177, 76);
		glTranslated(-1, 0, -1.3);
		glRotated(30, 1, 0, 0);
		glScaled(1, 6, 1);
		glutSolidCube(1);
	glPopMatrix();

}

void cuerpo() {

	glPushMatrix();
		glColor3ub(233, 136, 255);
		glTranslated(0, 5, 0);
		glScaled(3, 6, 1);
		glutSolidCube(1);
	glPopMatrix();

}

void brazo1() {

	glPushMatrix();
		glColor3ub(34, 177, 76);
		glTranslated(-1.5, 4.5, 1);
		glRotated(-30, 1, 0, 0);
		glScaled(1, 4, 1);
		glutSolidCube(1);
	glPopMatrix();

}

void brazo2() {

	glPushMatrix();
		glColor3ub(255, 255, 0);
		glTranslated(1.5, 4.5, -1);
		glRotated(30, 1, 0, 0);
		glScaled(1, 4, 1);
		glutSolidCube(1);
	glPopMatrix();

}

void cabeza() {
	glPushMatrix();
		glColor3ub(9, 255, 76);
		glTranslated(0, 9.5, 0);
		glutSolidSphere(1.5,50,50);
	glPopMatrix();
}

void personaje() {

	


	// SEMANA 7 

	glTranslated(0, 1, 0);

	glPushMatrix();
		anguloPierna1 += (velocidadMovimiento * ladoPierna1);
		
		if (anguloPierna1 >= 60) {
			ladoPierna1 = -1;
		}

		if (anguloPierna1 <= 0) {
			ladoPierna1 = 1;
		}

		glTranslated(0,2,0);
		glRotated(anguloPierna1, 1, 0, 0);
		glTranslated(0, -2, 0);
		pierna1();
	glPopMatrix();



	glPushMatrix();
		anguloPierna2 += (velocidadMovimiento * ladoPierna2);

		if (anguloPierna2 <= -60) {
			ladoPierna2 = 1;
		}

		if (anguloPierna2 >= 0) {
			ladoPierna2 = -1;
		}
		
		glTranslated(0, 2, 0);
		glRotated(anguloPierna2, 1, 0, 0);
		glTranslated(0, -2, 0);
		pierna2();
	glPopMatrix();




	glPushMatrix();
		cuerpo();
	glPopMatrix();



	glPushMatrix();
		anguloBrazo1 += (velocidadMovimiento * ladoBrazo1);
		
		if (anguloBrazo1 >= 60) {
			ladoBrazo1 = -1;
		}

		if (anguloBrazo1 <= 0) {
			ladoBrazo1 = 1;
		}

		glTranslated(0, 6.5, 0);
		glRotated(anguloBrazo1, 1, 0, 0);
		glTranslated(0, -6.5, 0);

		brazo1();
	glPopMatrix();




	glPushMatrix();
		anguloBrazo2 += (velocidadMovimiento * ladoBrazo2);
		
		if (anguloBrazo2 <= -60) {
			ladoBrazo2 = 1;
		}

		if (anguloBrazo2 >= 0) {
			ladoBrazo2 = -1;
		}

		glTranslated(0, 6.5, 0);
		glRotated(anguloBrazo2, 1, 0, 0);
		glTranslated(0, -6.5, 0);
		brazo2();
	glPopMatrix();




	glPushMatrix();
		cabeza();
	glPopMatrix();


}


float desplazamiento = -50;

void dibujoGeneral() {
	//cuadro();
	goku();
	goku2();
	pared();
	pared2();
	pared3();
	pared4();
	//paisaje();

	glPushMatrix();
		desplazamiento += 0.1;
		glTranslated(0, 0, desplazamiento);
		personaje();
	glPopMatrix();

}

// FIN DIBUJO 
// *************************************************** 


void dibujar() {
	inicializarLuces();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, centroX, 0, centroZ, 0, 1, 0);
	//glClearColor(0, 1, 0, 1); // fondo verde

	glPushMatrix();
		glRotated(angulo, 0, 1, 0);
		dibujarEjes();
		//piso();

		dibujoGeneral();

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


void teclado(unsigned char key, int x, int y) {
	
	switch (key) {
	case 'o':
		camaraZ -= 1;
		break;
	case 'p':
		camaraZ += 1;
		break;
	case 'a':
		camaraX -= movimientoCamara;
		centroX -= movimientoCamara;
		break;
	case 'd':
		camaraX += movimientoCamara;
		centroX += movimientoCamara;
		break;
	case 'w':
		camaraZ -= movimientoCamara;
		centroZ -= movimientoCamara;
		break;
	case 's':
		camaraZ += movimientoCamara;
		centroZ += movimientoCamara;
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
	cargarImagenes();
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutKeyboardFunc(teclado);
	//glutKeyboardFunc(teclado);
	glutSpecialFunc(teclado_especial);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}


*/