#include <GL/glut.h>
#include <iostream>

/* 

using namespace std;

float camaraX = -20;
float camaraY = 30;
float camaraZ = 60;

float posLuzX = 0;
float posLuzY = 70;
float posLuzZ = 0;

float angulo = 0;


void colorFondo() {
	double red = 170 / 255.0;
	double green = 170 / 255.0;
	double blue = 170 / 255.0;
	glClearColor(red, green, blue, 1);	// color de fondo
}

void colorAgua() {
	glColor3ub(0, 128, 255);
}

void colorCuerpoCrash() {
	glColor3ub(243, 108, 0);
}

void colorZapatoCrash() {
	glColor3ub(150, 0, 0);
}

void colorPantalonCrash() {
	glColor3ub(10, 10, 200); //  
}

void colorPiso() {
	// glColor3ub(84, 41, 41); //  pastp
	glColor3ub(0, 128, 64); //  gras
}

void colorPasto() {
	glColor3ub(0, 128, 64); // 
}

void colorBaseMascara() {
	glColor3ub(140, 74, 16);
}

void colorAmarilloCabelloMascara() {
	glColor3ub(224, 227, 0);
}

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
		colorPiso();
		glutSolidCube(2);
	glPopMatrix();
}


float posInicial = 15; 

void posicionBandicot() {
	glTranslated(posInicial, 4, -20);
}

void posicionMascara() {
	glTranslated(posInicial-15, 10, -20);
}

// ************************************************* 

void base() {
	glPushMatrix();
		colorBaseMascara();
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

	
	colorAmarilloCabelloMascara();
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
		posicionMascara();
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

void BandPupila(float posX, float posY) {
	glColor3ub(0, 0, 0);
	glPushMatrix();
		glTranslated(posX, posY, 1.4);
		glScaled(0.8, 1.2, 0.7);
		glutSolidCube(1);
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
		glScaled(1.5, 1.7, 0.8);
		glutSolidCube(2);
	glPopMatrix();
}

void BanMuslo(float posX, float rotZ, float rotX) {
	colorPantalonCrash();
	glPushMatrix();
		glTranslated(posX, 3.2, 0.3);
		glRotated(rotZ, 0, 0, 1); // inclina 
		glRotated(rotX, 1, 0, 0); // giro hacia adelante 
		glScaled(1.4, 3.8, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void BanPierna(float posX, float posY, float scaledY) {
	glPushMatrix();
		glTranslated(posX, posY, 0.9);
		glRotated(-180, 1, 0, 0);
		glScaled(1.4, scaledY, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void zapato(float posXSph, float posXCub, float rotYCub) {
	colorZapatoCrash();

	glPushMatrix();
		glTranslated(posXSph, -2, 3.2);
		glutSolidSphere(1, 4, 3); 
	glPopMatrix();
	

	glPushMatrix();
		glTranslated(posXCub, -2.5, 2.2);
		glRotated(rotYCub, 0, 1, 0);
		glScaled(3, 0.7, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void pulsera(float posX) {
	colorPantalonCrash();
	glPushMatrix();
		glTranslated(posX, 7.8, 4);
		glRotated(60, 1, 0, 0);
		glutSolidTorus(0.5, 0.5, 20, 20);
	glPopMatrix();
}

void mano(float posX) {
	colorCuerpoCrash();
	glPushMatrix();
		glTranslated(posX, 7, 4.5);
		glRotated(45, 1, 0, 0);
		glScaled(0.95, 0.6, 1.3);
		glutSolidSphere(1, 10, 10);
	glPopMatrix();
}

void bandicoot() {
	
	glPushMatrix();
		posicionBandicot();
		BanCaraBase(-2, 0);

		float a = 17;
		float b = 18.3;
		BandOjo(-1.3, a);
		BanCeja(-1.3, b);
		BandOjo(1.3, a - 0.4);
		BanCeja(1.3, b - 0.4);
		
		BandPupila( 1, a - 0.8); // *****************
		BandPupila(-1, a - 0.6); // *****************
		
		BanNariz();

		BanCuerpo();
		
		BanAnteBrazo(-3.5, -40, -20);
		BanAnteBrazo( 3.5,  40, -20);
		BanBrazo(-5.4);
		BanBrazo(5.4);


		BanOreja(2.5, 90);
		BanOreja(-2.5, -90);

		BanPantalonBase();

		// PIERNA 
		colorPantalonCrash();
		BanPierna(-1.75, 0.45, 3.8);
		BanPierna( 1.75, 0.45, 3.8);

		// MEDIAS 
		colorZapatoCrash();
		BanPierna(-1.8, -2, 1.5);
		BanPierna( 1.8, -2, 1.5);

		// PIERNA - MUSLO 
		BanMuslo(-1.3, -20, -20);
		BanMuslo( 1.3, 20, -20);

		
		zapato(-3, -2.5, 65);
		zapato( 3,  2.5, -65);

		pulsera(-5.5);
		pulsera( 5.5);
		mano(-5.5);
		mano( 5.5);

	glPopMatrix();

}

// ************************************************* 

void pasto() {
	colorPasto();
	for (int posX = -50; posX < 50; posX += 1) {
		for (int posZ = -50; posZ < 50; posZ += 1) {
			glPushMatrix();
				glTranslated(posX, -1, posZ);
				glRotated(-90, 1, 0, 0);
				glScaled(1, 0.5, 0.5);
				glutSolidCone(0.5, 2, 5, 3);
			glPopMatrix();
		}
	}
}

void arbolHojas(float posX, float posY, float  posZ) {
	colorPasto();
	glPushMatrix();
		glTranslated(posX, posY, posZ);
		//glRotated(45, 1, 0, 0);
		//glScaled(0.95, 0.6, 1.3);
		glutSolidSphere(5, 10, 10);
	glPopMatrix();
}

void arbolIndividual() {
	
	// TRONCO
	colorBaseMascara();
	glPushMatrix();
	glTranslated(0, 0, 0);
		glRotated(-90, 1, 0, 0);
		gluCylinder(gluNewQuadric(), 4, 2, 20, 30, 30);
	glPopMatrix();

	// HOJAS

	int posicion = 2.5;

	arbolHojas(-posicion, 22, posicion);
	arbolHojas(posicion, 22, -posicion);

	arbolHojas(posicion, 22, posicion);
	arbolHojas(-posicion, 22, -posicion);

	arbolHojas(0, 25, 0);

}

void arboles() {

	for (int posY = -40; posY < 50; posY += 20) {
		glPushMatrix();
			glTranslated(-38, 0, posY);
			arbolIndividual();
		glPopMatrix();
	}

	for (int posY = -40; posY < 50; posY += 20) {
		glPushMatrix();
		glTranslated(38, 0, posY);
		arbolIndividual();
		glPopMatrix();
	}

}

// ************************************************* 

void cajaBonusIndividual() {
	colorBaseMascara();
	glPushMatrix();
		glTranslated(0, 3, 0);
		glScaled(3, 3, 3);
		glutSolidCube(2);
	glPopMatrix();
}

void cajasBonus() {

	for (int posZ = 15; posZ <= 30; posZ += 10) {
		glPushMatrix();
			glTranslated(20, 0, posZ);
			cajaBonusIndividual();
		glPopMatrix();
	}
}

void cajaTntIndividual() {
	glColor3ub(255, 0, 0);
	glPushMatrix();
		glTranslated(0, 3, 0);
		//glRotated(rotYCub, 0, 1, 0);
		glScaled(3, 3, 3);
		glutSolidCube(2);
	glPopMatrix();
}

void cajasTnt() {

	for (int posX = -20; posX <= 20; posX += 10 ) {
		glPushMatrix();
		glTranslated(posX, 0, 35);
			cajaTntIndividual();
		glPopMatrix();
	}
}

void rocaGigante() {
	//glutSolidSphere(1.2, 5, 3);

	colorBaseMascara();
	glPushMatrix();
		glTranslated(0, 30, -65);
		//glRotated(rotYCub, 0, 1, 0);
		glScaled(30, 30, 30);
		glutSolidSphere(1.2, 10, 10);
	glPopMatrix();

}

void monedaIndividual() {
	colorAmarilloCabelloMascara();
	
	//glPushMatrix();
	//	glTranslated(0, 3, 0);
	//	//glRotated(rotYCub, 0, 1, 0);
	//	glScaled(1, 1, 0.1);
	//	glutSolidSphere(3, 30, 30);
	//glPopMatrix();
	

	glPushMatrix();
		glTranslated(15, 3, 0);
		gluDisk(gluNewQuadric(), 0, 4, 30, 30);
	glPopMatrix();
}

void monedas() {
	monedaIndividual();
}

void agua() {
	colorAgua();
	glPushMatrix();
		glTranslated(30, 0, 0);
		//glRotated(-90, 1, 0, 0);
		glScaled(7, 1, 50);
		glutSolidCube(2);
	glPopMatrix();

	glPushMatrix();
		//glTranslated(30, -9, 50);
		glRotated(-180, 0, 0, 1);
		glScaled(7, 10, 1);
		glutSolidCube(2);
	glPopMatrix();

}

void muro() {
	glColor3ub(108, 108, 108);

	glPushMatrix();
		glTranslated(0, 3, 0);
		//glRotated(-90, 1, 0, 0);
		glScaled(35, 6, 2);
		glutSolidCube(2);
	glPopMatrix();
}

void hueco() {
	glColor3ub(0, 0, 0);

	glPushMatrix();
		glTranslated(0, -1, -5);
		//glRotated(-90, 1, 0, 0);
		glScaled(69, 1, 18);
		glutSolidCube(1);
	glPopMatrix();
}

// ************************************************* 


void dibujar() {
	inicializarLuces();
	colorFondo();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(camaraX, camaraY, camaraZ, 0, 0, 0, 0, 1, 0);

	glPushMatrix();
		glRotated(angulo, 0, 1, 0);
		//dibujarEjes();
		piso();

		mascara();
		bandicoot();
		//pasto();
		arboles();
		//agua();
		cajasTnt();
		cajasBonus();

		rocaGigante();
		//monedas();
		//muro();
		hueco();

	glPopMatrix();

	glutSwapBuffers();
}

void teclado_especial(int tecla, int x, int y) {
	//cout << tecla << endl;

	float valor = 3;

	switch (tecla) {
	case 101:
		camaraY += valor;
		break;
	case 103:
		camaraY -= valor;
		break;

	case 100:
		angulo -= valor;
		break;
	case 102:
		angulo += valor;
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
	glutInitWindowPosition(450, 80); // POSICION
	glutCreateWindow("Computacion Grafica");
	glutReshapeFunc(iniciarVentana);
	glutDisplayFunc(dibujar);
	glutSpecialFunc(teclado_especial);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}


*/