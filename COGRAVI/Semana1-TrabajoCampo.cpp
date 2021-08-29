#include <GL/glut.h>



// **************   Complementos a dibujar ***************

/*
void torreIzquierda() {
	glBegin(GL_LINE_LOOP);
	
	//***
	glVertex2d(0.43, 0.6);		//C
	glVertex2d(1.11, 6); 		//D
	glVertex2d(1.11, 6.75); 	//E
	glVertex2d(1.87, 6.81); 	//F
	glVertex2d(1.92, 6); 		//G
	glVertex2d(2.65, 6); 		//H
	glVertex2d(2.74, 6.84); 	//I
	glVertex2d(3.45, 6.86); 	//J
	glVertex2d(3.5, 6); 		//K
	glVertex2d(4.34, 5.99); 	//L
	glVertex2d(4.35, 6.84); 	//M
	glVertex2d(4.99, 6.86); 	//N
	glVertex2d(5.01, 0.62); 	//O	

	glEnd();
}


void ventanasTorre(int x) {

	glBegin(GL_QUADS);
	//glColor3ub(255, 255, 255);
	glVertex2d(x + 3.73, 5.23); 	//P
	glVertex2d(x + 2.41, 5.24); 	//Q
	glVertex2d(x + 2.41, 4.08); 	//R
	glVertex2d(x + 3.73, 4.08); 	//S

	//glColor3ub(255, 255, 255);
	glVertex2d(x + 3.71, 3.47); 	//T
	glVertex2d(x + 2.42, 3.467); 	//U
	glVertex2d(x + 2.42, 2.29); 		//V
	glVertex2d(x + 3.71, 2.29); 	//W

	glEnd();

}



void torreDerecha() {
	glBegin(GL_LINE_LOOP);

	//***

	glVertex2d(13.29, 6.83);		//Z
	glVertex2d(13.27, 0.61);		//A1
	glVertex2d(17.46, 0.61);		//B1
	glVertex2d(16.85, 6.01);		//C1
	glVertex2d(16.86, 6.85);		//D1
	glVertex2d(16.15, 6.87);		//E1
	glVertex2d(16.13, 6.09);		//F1
	glVertex2d(15.41, 6.08);		//G1
	glVertex2d(15.36, 6.84);		//H1
	glVertex2d(14.64, 6.87);		//I1
	glVertex2d(14.62, 6.11);		//J1
	glVertex2d(13.9, 6.11);			//K1
	glVertex2d(13.85, 6.84);		//L1

	glEnd();
}



void torreDerechaInterior() {

	glBegin(GL_QUADS);
	glVertex2d(14.42, 5.25); 	//M1
	glVertex2d(15.62, 5.21); 	//N1
	glVertex2d(15.63, 4.17); 	//O1
	glVertex2d(14.5, 4); 		//P1

	glVertex2d(14.43, 3.5); 	//Q1
	glVertex2d(15.66, 3.45); 	//R1
	glVertex2d(15.58, 2.37); 	//S1
	glVertex2d(14.43, 2.26); 	//T1


	glEnd();

}


void torreCentro() {
	glBegin(GL_LINE_LOOP);

	glVertex2d(5.01, 0.62); 	//O	
	glVertex2d(4.99, 6.86); 	//N
	glVertex2d(5.74, 6.81);		//U1
	glVertex2d(5.8, 6.21);		//V1
	glVertex2d(6.51, 6.18);		//W1
	glVertex2d(6.52, 6.83);		//Z1
	glVertex2d(7.27, 6.8);		//A2
	glVertex2d(7.32, 6.18);		//B2
	glVertex2d(7.99, 6.12);		//C2
	glVertex2d(8.03, 6.83);		//D2
	glVertex2d(8.73, 6.87);		//E2
	glVertex2d(8.82, 6.14);		//F2
	glVertex2d(9.5, 6.11);		//G2
	glVertex2d(9.53, 6.85);		//H2
	glVertex2d(10.28, 6.87);		//I2
	glVertex2d(10.33, 6.18);		//J2
	glVertex2d(11.01, 6.14);		//K2
	glVertex2d(11.03, 6.81);		//L2
	glVertex2d(11.79, 6.83);		//M2
	glVertex2d(11.78, 6.18);		//N2
	glVertex2d(12.46, 6.21);		//O2
	glVertex2d(12.52, 6.82);		//P2
	glVertex2d(13.29, 6.83);		//Z
	glVertex2d(13.27, 0.61);		//A1
	glVertex2d(10.23, 0.73);		//Q2
	glVertex2d(10.23, 3.96);		//R2
	glVertex2d(7.56, 3.96);			//S2
	glVertex2d(7.56, 0.73);		//T2

	glEnd();



	glBegin(GL_QUADS);
		glVertex2d(10.23, 0.73);		//Q2
		glVertex2d(10.23, 3.96);		//R2
		glVertex2d(7.56, 3.96);			//S2
		glVertex2d(7.56, 0.73);		//T2
	glEnd();
	






}



void torreIzquierdaCono() {
	glBegin(GL_TRIANGLES);
	glVertex2d(3.27, 12.3); 	//A3
	glVertex2d(1.93, 9.65);	//V2
	glVertex2d(4.49, 9.65);	//W2
	glEnd();
}



void torreIzquierdaLineas() {
	glBegin(GL_LINES);
		// LINEA 1	
		glVertex2d(1.6, 6.84);	//U2
		glVertex2d(1.93, 9.65);	//V2
		//LINEA 2
		glVertex2d(4.49, 9.65);	//W2
		glVertex2d(4.69, 6.85);	//Z2
	glEnd();
}


void torreIzquiedaVentanas() {
	glBegin(GL_QUADS);
		glVertex2d(2.83, 8.97); 	//B3
		glVertex2d(3.51, 8.97); 	//C3
		glVertex2d(3.51, 8.38); 	//D3
		glVertex2d(2.83, 8.38); 		//E3

		glVertex2d(2.83, 7.71); 		//F3
		glVertex2d(3.51, 7.71); 	//G3
		glVertex2d(3.51, 7.12); 		//I3
		glVertex2d(2.83, 7.12); 	//H3
	glEnd();
}




void torreDerechaCono(int x) {
	glBegin(GL_TRIANGLES);
	glVertex2d(x+3.27, 12.3); 	//A3
	glVertex2d(x+1.93, 9.65);	//V2
	glVertex2d(x+4.49, 9.65);	//W2
	glEnd();
}



void torreDerechaLineas(int x) {
	glBegin(GL_LINES);
	// LINEA 1	
	glVertex2d(x + 1.6, 6.84);	//U2
	glVertex2d(x + 1.93, 9.65);	//V2
	//LINEA 2
	glVertex2d(x + 4.49, 9.65);	//W2
	glVertex2d(x + 4.69, 6.85);	//Z2
	glEnd();
}


void torreDerechaVentanas(int x) {

	glBegin(GL_QUADS);

	glVertex2d(x + 2.83, 8.97); 	//B3
	glVertex2d(x + 3.51, 8.97); 	//C3
	glVertex2d(x + 3.51, 8.38); 	//D3
	glVertex2d(x + 2.83, 8.38); 		//E3

	glVertex2d(x + 2.83, 7.71); 		//F3
	glVertex2d(x + 3.51, 7.71); 	//G3
	glVertex2d(x + 3.51, 7.12); 		//I3
	glVertex2d(x + 2.83, 7.12); 	//H3

	glEnd();

}



void torreCentralLineasLaterales() {
	glBegin(GL_LINE_STRIP);
		glVertex2d(6.99, 6.92);		//J3
		glVertex2d(7.34, 10.82);	//K3
		glVertex2d(7.28, 11.59);	//L3
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex2d(11.02, 11.6);	//M3
		glVertex2d(11, 10.79);		//N3
		glVertex2d(11.5, 6.9);		//O3
	glEnd();

}

void torreCentralLineasSuperiores() {
	glBegin(GL_LINE_STRIP);
		glVertex2d(7.28, 11.59);	//L3
		glVertex2d(8, 11.6); 	//P3
		glVertex2d(8, 10.8); 	//Q3
		glVertex2d(8.8, 10.8); 	//R3
		glVertex2d(8.8, 11.6); 	//S3
		glVertex2d(9.6, 11.6); 	//T3
		glVertex2d(9.6, 10.8); 	//U3
		glVertex2d(10.28, 10.79); 	//V3
		glVertex2d(10.29, 11.59); 	//W3
		glVertex2d(11.02, 11.6);	//M3
	glEnd();
}


void torreCentralVentana() {
	glBegin(GL_QUADS);
		glVertex2d(8.4, 8.8); 	//C4 
		glVertex2d(10, 8.8); 	//B4 
		glVertex2d(10, 7.6); 	//A4 
		glVertex2d(8.4, 7.6); 	//Z3 
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex2d(8.4, 8.8); 	//C4 
		glVertex2d(10, 8.8); 	//B4 
		glVertex2d(9.21, 9.5); //G4
	glEnd();

}


void bandera() {
	glBegin(GL_LINE_STRIP);
		glVertex2d(9.21, 11.61); //D4
		glVertex2d(9.18, 15.99); //E4
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex2d(9.18, 15.99); //E4
		glVertex2d(9.23, 13.99); //F4
		glVertex2d(13.5, 15); //G4
	glEnd();

}


// **************   MAIN DEL DIBUJO ***************


void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 18, 0, 20);
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor( 1.0, 1.0, 1.0, 1); // color de fondo
}



void dibujar() {
	configuracionInicial();

	// *******************************
	glColor3ub(0, 0, 0);
	glLineWidth(5); 

	torreIzquierda();
	ventanasTorre(0);
	torreIzquierdaCono();
	torreIzquierdaLineas();
	torreIzquiedaVentanas();

	torreDerecha();
	//torreDerechaInterior();
	ventanasTorre(12);
	torreDerechaCono(12);
	torreDerechaLineas(12);
	torreDerechaVentanas(12);


	torreCentro();
	torreCentralLineasLaterales();
	torreCentralLineasSuperiores();
	torreCentralVentana();
	bandera();
	// ******************************
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(900, 1000);
	glutInitWindowPosition(600, 30);
	glutCreateWindow("CESAR LOPEZ");
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}

*/