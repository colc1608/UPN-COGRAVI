#include <GL/glut.h>

/*

void colorCuernoLadoClaro() {
	glColor3ub(181, 185, 188);		// cuerno lado claro
}

void colorCuernoLadoOscuro() {
	glColor3ub(173, 173, 173);		// cuerno lado oscuro
}

void colorCuerpoLadoClaro() {
	glColor3ub(169, 58, 65);		// cuerno lado oscuro
}

void colorCuerpoLadoOscuro() {
	glColor3ub(119, 43, 47);		// cuerno lado oscuro
}

void colorOjo() {
	glColor3ub(255, 255, 255);		// cuerno lado oscuro
}

void cuernos() {

	// PRIMER CUERNO ****************************************
	colorCuernoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(2.72, 12.26); //C
	glVertex2d(6.46, 11.51); //E
	glVertex2d(6.09, 10.86); //F
	glVertex2d(5.99, 10.5); //G
	glVertex2d(4.74, 11.16); //M
	glEnd();

	colorCuernoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(2.72, 12.26); //C
	glVertex2d(5.6, 12.21); //D
	glVertex2d(6.46, 11.51); //E
	glEnd();


	// SEGUNDO CUERNO ****************************************
	colorCuernoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(2.93, 14.84); //L	
	glVertex2d(5.6, 12.21); //D
	glVertex2d(6.46, 11.51); //E
	glVertex2d(8.37, 11.45); //H
	glVertex2d(8.72, 12.6); //I
	glVertex2d(6.74, 13.26); //K
	glEnd();

	glBegin(GL_POLYGON); 
	colorCuernoLadoOscuro();
	glVertex2d(2.93, 14.84); //L
	glVertex2d(8.37, 11.45); //H
	glVertex2d(8.72, 12.6); //I
	glVertex2d(6.74, 13.26); //K
	glEnd();

	//TERCER CUENRO ****************************************
	colorCuernoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(6.7, 13.9); //J
	glVertex2d(6.74, 13.26); //K
	glVertex2d(8.72, 12.6); //I
	glEnd();

	colorCuernoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.7, 13.9); //J
	glVertex2d(8.72, 12.6); //I
	glVertex2d(8.42, 12.93); //Z1
	glEnd();

}









void cuerpoCabeza() {
	
	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(4.74, 11.16); //M
	glVertex2d(3.65, 10.08); //N
	glVertex2d(4.94, 8.65); //O
	glVertex2d(5.3, 9.12); //L1
	glVertex2d(5.99, 10.5); //G
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(3.65, 10.08); //N
	glVertex2d(4.94, 8.65); //O
	glVertex2d(3.8, 9.16); //P
	glEnd();
	
	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(4.94, 8.65); //O
	glVertex2d(3.8, 9.16); //P
	glVertex2d(3.33, 8.02); //Q
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(4.94, 8.65); //O
	glVertex2d(3.33, 8.02); //Q
	glVertex2d(3.88, 6.61); //R
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(4.94, 8.65); //O
	glVertex2d(3.93, 6.55); //S
	glVertex2d(4.52, 7.15); //K1
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(3.93, 6.55); //S
	glVertex2d(4.52, 7.15); //K1
	glVertex2d(6.21, 6.2); //V
	glEnd();


	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(3.93, 6.55); //S
	glVertex2d(3.93, 4.94); //T
	glVertex2d(6.05, 4.38); //U
	glVertex2d(6.21, 6.2); //V
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(3.93, 4.94); //T
	glVertex2d(6.05, 4.38); //U
	glVertex2d(4.83, 3.92); //W
	glEnd();


	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(4.83, 3.92); //W
	glVertex2d(6.05, 4.38); //U
	glVertex2d(5.41, 2.39); //Z
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.05, 4.38); //U
	glVertex2d(5.41, 2.39); //Z
	glVertex2d(6.71, 3.52); //A1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(6.05, 4.38); //U
	glVertex2d(6.71, 3.52); //A1
	glVertex2d(7.09, 3.24); //B1
	glVertex2d(8.08, 4.45); //F1
	glVertex2d(8.2, 4.63); //E1
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.05, 4.38); //U
	glVertex2d(6.46, 4.9); //D1
	glVertex2d(8.2, 4.63); //E1
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.05, 4.38); //U
	glVertex2d(6.46, 4.9); //D1
	glVertex2d(6.21, 6.2); //V
	glEnd();


	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(6.21, 6.2); //V
	glVertex2d(6.46, 4.9); //D1
	glVertex2d(8.3, 6.1); //C1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(8.3, 6.1); //C1
	glVertex2d(6.46, 4.9); //D1
	glVertex2d(8.2, 4.63); //E1
	glEnd();


	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(4.94, 8.65); //O
	glVertex2d(7.13, 8.18); //H1
	glVertex2d(4.52, 7.15); //K1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(7.13, 8.18); //H1
	glVertex2d(4.52, 7.15); //K1
	glVertex2d(6.21, 6.2); //V
	glEnd();


	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(4.94, 8.65); //O
	glVertex2d(5.3, 9.12); //L1
	glVertex2d(7.13, 8.18); //H1
	glEnd();


	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(5.99, 10.5); //G
	glVertex2d(5.3, 9.12); //L1
	glVertex2d(7.59, 9.56); //M1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(5.3, 9.12); //L1
	glVertex2d(7.59, 9.56); //M1
	glVertex2d(7.13, 8.18); //H1
	glEnd();


	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.09, 10.86); //F
	glVertex2d(5.99, 10.5); //G
	glVertex2d(7.59, 9.56); //M1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(6.09, 10.86); //F
	glVertex2d(6.46, 11.51); //E
	glVertex2d(8.37, 11.45); //H
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(6.09, 10.86); //F
	glVertex2d(8.37, 11.45); //H
	glVertex2d(7.66, 10.46); //N1
	glVertex2d(7.59, 9.56); //M1
	glEnd();


	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(8.2, 4.63); //E1
	glVertex2d(8.08, 4.45); //F1
	glVertex2d(8.36, 4.58); //G1
	glVertex2d(9, 4.36); //D5
	glVertex2d(8.3, 6.1); //C1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(8.3, 6.1); //C1
	glVertex2d(9, 4.36); //D5
	glVertex2d(10.22, 5.01); //C5
	glEnd();


	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(11.6, 4.2); //A5
	glVertex2d(10.43, 4.2); //B5
	glVertex2d(10.22, 5.01); //C5
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(11.6, 4.2); //A5
	glVertex2d(13.63, 2.47); //Z4
	glVertex2d(14.47, 2.68); //W4
	glEnd();

	

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(14.47, 2.68); //W4
	glVertex2d(11.6, 4.2); //A5
	glVertex2d(8.35, 6.61); //J1
	glVertex2d(6.73, 6.65); //I1
	glVertex2d(7.13, 8.18); //H1
	glVertex2d(8.74, 7.84); //O3
	glVertex2d(9, 7.6); //P3
	glVertex2d(9.26, 7.39); //Q3
	glVertex2d(9.52, 7.18); //R3
	glVertex2d(9.79, 6.96); //S3
	glVertex2d(9.99, 6.82); //T3
	glVertex2d(10.28, 6.58); //U3
	glVertex2d(10.52, 6.39); //V3
	glVertex2d(10.71, 6.22); //W3
	glVertex2d(10.87, 6.09); //Z3
	glVertex2d(11, 6); //A4
	glVertex2d(11.16, 5.87); //B4
	glVertex2d(11.38, 5.7); //C4
	glVertex2d(11.56, 5.57); //D4
	glVertex2d(11.72, 5.44); //E4
	glVertex2d(11.89, 5.33); //F4
	glVertex2d(12.01, 5.24); //G4
	glVertex2d(12.14, 5.14); //H4
	glVertex2d(12.3, 5.02); //I4
	glVertex2d(12.41, 4.94); //J4
	glVertex2d(12.61, 4.83); //K4
	glVertex2d(12.81, 4.71); //L4
	glVertex2d(12.96, 4.63); //M4
	glVertex2d(13.22, 4.49); //N4
	glVertex2d(13.48, 4.37); //O4
	glVertex2d(13.69, 4.28); //P4
	glVertex2d(13.94, 4.15); //Q4
	glVertex2d(14.21, 4.05); //R4
	glVertex2d(14.42, 3.96); //S4
	glVertex2d(14.61, 3.87); //T4
	glVertex2d(14.74, 3.92); //U4
	glVertex2d(14.92, 3.76); //V4
	glEnd();

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(6.73, 6.65); //I1
	glVertex2d(8.35, 6.61); //J1
	glVertex2d(11.6, 4.2); //A5
	glVertex2d(10.22, 5.01); //C5
	glVertex2d(8.3, 6.1); //C1
	glEnd();
	

	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(7.13, 8.18); //H1
	glVertex2d(9.65, 8.26); //M3
	glVertex2d(8.74, 7.84); //O3
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(7.59, 9.56); //M1
	glVertex2d(7.13, 8.18); //H1
	glVertex2d(9.65, 8.26); //M3
	glVertex2d(9.71, 9.32); //O1
	glEnd();


	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(7.66, 10.46); //N1
	glVertex2d(7.59, 9.56); //M1
	glVertex2d(9.71, 9.32); //O1
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(7.66, 10.46); //N1
	glVertex2d(9.71, 9.32); //O1
	glVertex2d(10.84, 9.67); //R1
	glVertex2d(9.38, 10.27); //Q1
	
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(7.66, 10.46); //N1
	glVertex2d(9.38, 10.27); //Q1
	glVertex2d(9.63, 11.05); //P1
	glVertex2d(8.37, 11.45); //H
	glEnd();

	colorCuerpoLadoClaro();
	glBegin(GL_POLYGON);
	glVertex2d(8.37, 11.45); //H
	glVertex2d(9.63, 11.05); //P1
	glVertex2d(10.96, 10.47); //V1
	glVertex2d(11.8, 9.86); //S1
	glVertex2d(11.18, 10.92); //H2
	glVertex2d(9.49, 11.81); //D2
	glEnd();

	
	// sombra del ojo
	colorCuerpoLadoOscuro();
	glBegin(GL_POLYGON);
	glVertex2d(9.63, 11.05); //P1
	glVertex2d(9.38, 10.27); //Q1
	glVertex2d(10.84, 9.67); //R1
	glVertex2d(11.8, 9.86); //S1
	glVertex2d(10.96, 9.91); //T1
	glVertex2d(10.1, 10.3); //U1
	glEnd();

	// ojo
	colorOjo();
	glBegin(GL_POLYGON);
	glVertex2d(11.8, 9.86); //S1
	glVertex2d(10.96, 9.91); //T1
	glVertex2d(10.1, 10.3); //U1
	glVertex2d(9.63, 11.05); //P1
	glVertex2d(10.96, 10.47); //V1
	glEnd();
	


}





// **************   MAIN DEL DIBUJO ***************


void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 18, 0, 20);
	glClear(GL_COLOR_BUFFER_BIT);
	double red = 170 / 255.0;
	double green = 170 / 255.0;
	double blue = 170 / 255.0;
	glClearColor(red, green, blue, 1);		// color de fondo
	glColor3ub(0, 0, 0);				// color de todas las lineas
}

void trazosDibujo() {
	configuracionInicial();
	// **************************************************

	cuernos();
	cuerpoCabeza();

	// **************************************************
	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(900, 1000);
	glutInitWindowPosition(600, 30);
	glutCreateWindow("Cesar Lopez Castillo - UPN");
	glutDisplayFunc(trazosDibujo);
	glutMainLoop();

	return 0;
}



*/

