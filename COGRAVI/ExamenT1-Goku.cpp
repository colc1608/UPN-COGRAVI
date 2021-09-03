#include <GL/glut.h>
#include <math.h>
#include <time.h>

/* 
void colorCola() {
	glColor3ub(108, 36, 12);
}


void colorRojo() {
	glColor3ub(216, 20, 8);
}


void colorAmarillo() {
	glColor3ub(255, 233, 72);
}

void colorAzul() {
	glColor3ub(2, 26, 112);
}

void colorNegro() {
	glColor3ub(0, 0, 0);
}

void colorCuerpo() {
	glColor3ub(250, 213, 154);
}

void primerPelo() {
	
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);

	glVertex2d(6.66, 25.26); // C
	glVertex2d(6.53, 25.39); // D
	glVertex2d(6.31, 25.55); // E
	glVertex2d(6.07, 25.75); // F
	glVertex2d(5.76, 26.01); // G
	glVertex2d(5.49, 26.25); // H
	glVertex2d(5.22, 26.48); // I
	glVertex2d(4.96, 26.73); // J
	glVertex2d(4.62, 26.98); // K
	glVertex2d(4.37, 27.18); // L
	glVertex2d(4.16, 27.32); // M
	glVertex2d(3.93, 27.45); // N
	glVertex2d(3.76, 27.56); // O
	glVertex2d(3.56, 27.69); // P
	glVertex2d(3.88, 27.62); // Q
	glVertex2d(4.19, 27.54); // R
	glVertex2d(4.64, 27.43); // S
	glVertex2d(5.14, 27.3); // T
	glVertex2d(5.42, 27.23); // U
	glVertex2d(5.62, 27.16); // V
	glVertex2d(5.84, 27.1); // W
	
	glVertex2d(6.06, 27.06); // Z
	glVertex2d(6.36, 27.04); // A1
	glVertex2d(6.73, 26.98); // B1
	glVertex2d(6.99, 26.86); // C1
	glVertex2d(7.04, 26.8); // D1
	glVertex2d(7.07, 26.75); // E1
	glVertex2d(7.09, 26.67); // F1
	glVertex2d(7.11, 26.54); // G1
	glVertex2d(7.15, 26.4); // H1
	glVertex2d(7.22, 26.25); // I1
	glVertex2d(7.28, 26.11); // J1
	glVertex2d(7.28, 26.04); // K1
	glVertex2d(7.28, 25.97); // L1
	glVertex2d(7.24, 25.9); // M1
	glVertex2d(7.14, 25.85); // N1
	glVertex2d(7.01, 25.75); // O1
	glVertex2d(6.92, 25.67); // P1
	glVertex2d(6.84, 25.57); // Q1
	glVertex2d(6.79, 25.49); // R1
	glVertex2d(6.75, 25.37); // S1
	

	glEnd();
}

void segundoPelo() {
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);
	glVertex2d(5.84, 27.1); // W
	glVertex2d(6.06, 27.06); // Z
	glVertex2d(6.36, 27.04); // A1
	glVertex2d(6.73, 26.98); // B1
	glVertex2d(6.99, 26.86); // C1
	glVertex2d(7.04, 26.8); // D1
	glVertex2d(7.07, 26.75); // E1
	glVertex2d(7.09, 26.67); // F1
	glVertex2d(7.11, 26.54); // G1
	glVertex2d(7.15, 26.4); // H1
	glVertex2d(7.22, 26.25); // I1
	glVertex2d(7.28, 26.11); // J1
	glVertex2d(7.28, 26.04); // K1
	glVertex2d(7.28, 25.97); // L1
	glVertex2d(7.24, 25.9); // M1
	glVertex2d(7.14, 25.85); // N1
	glVertex2d(7.01, 25.75); // O1
	glVertex2d(6.92, 25.67); // P1
	glVertex2d(6.84, 25.57); // Q1
	glVertex2d(6.79, 25.49); // R1
	glVertex2d(6.75, 25.37); // S1
	glVertex2d(5.74, 27.27); // T1
	glVertex2d(5.57, 27.45); // U1
	glVertex2d(5.41, 27.63); // V1
	glVertex2d(5.15, 27.88); // W1
	glVertex2d(4.95, 28.08); // Z1
	glVertex2d(4.7, 28.31); // A2
	glVertex2d(4.4, 28.6); // B2
	glVertex2d(4.08, 28.87); // C2
	glVertex2d(3.74, 29.18); // D2
	glVertex2d(3.48, 29.41); // E2
	glVertex2d(3.14, 29.68); // F2
	glVertex2d(2.72, 30); // G2
	glVertex2d(2.43, 30.23); // H2
	glVertex2d(2.18, 30.43); // I2
	glVertex2d(1.89, 30.62); // J2
	glVertex2d(1.64, 30.8); // K2
	glVertex2d(1.42, 30.94); // L2
	glVertex2d(1.21, 31.1); // M2
	glVertex2d(0.99, 31.23); // N2
	glVertex2d(1.4, 31.25); // O2
	glVertex2d(1.76, 31.24); // P2
	glVertex2d(2.23, 31.25); // Q2
	glVertex2d(2.76, 31.27); // R2
	glVertex2d(3.17, 31.23); // S2
	glVertex2d(3.6, 31.2); // T2
	glVertex2d(3.93, 31.17); // U2
	glVertex2d(4.44, 31.12); // V2
	glVertex2d(4.86, 31.08); // W2
	glVertex2d(5.23, 31.02); // Z2
	glVertex2d(5.57, 30.96); // A3
	glVertex2d(5.92, 30.85); // B3
	glVertex2d(6.27, 30.79); // C3
	glVertex2d(6.44, 30.76); // D3
	glVertex2d(6.64, 30.7); // E3
	glVertex2d(6.91, 30.49); // F3
	glVertex2d(7.16, 30.24); // G3
	glVertex2d(7.43, 29.98); // H3
	glVertex2d(7.71, 29.76); // I3
	glVertex2d(7.96, 29.53); // J3
	glVertex2d(8.09, 29.47); // K3
	glVertex2d(8.2, 29.35); // L3
	glVertex2d(8.14, 29.27); // M3
	glVertex2d(8.03, 29.19); // N3
	glVertex2d(7.94, 29.08); // O3
	glVertex2d(7.84, 28.97); // P3
	glVertex2d(7.74, 28.85); // Q3
	glVertex2d(7.65, 28.69); // R3
	glVertex2d(7.56, 28.54); // S3
	glVertex2d(7.46, 28.36); // T3
	glVertex2d(7.41, 28.23); // U3
	glVertex2d(7.35, 28.04); // V3
	glVertex2d(7.32, 27.86); // W3
	glVertex2d(7.3, 27.62); // Z3
	glVertex2d(7.3, 27.45); // A4
	glVertex2d(7.31, 27.33); // B4
	glVertex2d(7.33, 27.23); // C4
	glVertex2d(7.37, 27.12); // D4
	glVertex2d(7.4, 27); // E4
	glVertex2d(7.45, 26.92); // F4
	glVertex2d(7.48, 26.85); // G4
	glVertex2d(7.51, 26.77); // H4
	glVertex2d(7.45, 26.78); // I4
	glVertex2d(7.37, 26.81); // J4
	glVertex2d(7.31, 26.83); // K4
	glVertex2d(7.24, 26.84); // L4
	glVertex2d(7.18, 26.84); // M4
	glVertex2d(7.13, 26.83); // N4
	glVertex2d(7.1, 26.81); // O4
	glVertex2d(7.09, 26.79); // P4
	glVertex2d(7.08, 26.78); // Q4
	glEnd();

}


void tercerPelo() {
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);
	glVertex2d(6.5, 30.8); // R4
	glVertex2d(6.51, 30.86); // S4
	glVertex2d(6.47, 30.97); // T4
	glVertex2d(6.44, 31.04); // U4
	glVertex2d(6.4, 31.12); // V4
	glVertex2d(6.35, 31.23); // W4
	glVertex2d(6.28, 31.34); // Z4
	glVertex2d(6.2, 31.47); // A5
	glVertex2d(6.11, 31.61); // B5
	glVertex2d(6.03, 31.74); // C5
	glVertex2d(5.93, 31.87); // D5
	glVertex2d(5.85, 31.99); // E5
	glVertex2d(5.71, 32.14); // F5
	glVertex2d(5.59, 32.26); // G5
	glVertex2d(5.45, 32.43); // H5
	glVertex2d(5.35, 32.55); // I5
	glVertex2d(5.24, 32.65); // J5
	glVertex2d(5.16, 32.72); // K5
	glVertex2d(5.09, 32.81); // L5
	glVertex2d(4.97, 32.92); // M5
	glVertex2d(4.85, 33.02); // N5
	glVertex2d(4.68, 33.17); // O5
	glVertex2d(4.46, 33.33); // P5
	glVertex2d(4.32, 33.47); // Q5
	glVertex2d(4.14, 33.61); // R5
	glVertex2d(4.01, 33.71); // S5
	glVertex2d(3.87, 33.77); // T5
	glVertex2d(3.75, 33.87); // U5
	glVertex2d(3.6, 34); // V5
	glVertex2d(3.44, 34.07); // W5
	glVertex2d(3.34, 34.15); // Z5
	glVertex2d(3.19, 34.24); // A6
	glVertex2d(3.1, 34.3); // B6
	glVertex2d(3.03, 34.34); // C6
	glVertex2d(2.97, 34.38); // D6
	glVertex2d(2.91, 34.41); // E6
	glVertex2d(3.02, 34.43); // F6
	glVertex2d(3.15, 34.44); // G6
	glVertex2d(3.25, 34.47); // H6
	glVertex2d(3.4, 34.5); // I6
	glVertex2d(3.59, 34.55); // J6
	glVertex2d(3.79, 34.58); // K6
	glVertex2d(4.01, 34.62); // L6
	glVertex2d(4.28, 34.67); // M6
	glVertex2d(4.5, 34.72); // N6
	glVertex2d(4.67, 34.72); // O6
	glVertex2d(4.84, 34.73); // P6
	glVertex2d(5.02, 34.76); // Q6
	glVertex2d(5.18, 34.77); // R6
	glVertex2d(5.33, 34.75); // S6
	glVertex2d(5.51, 34.77); // T6
	glVertex2d(5.74, 34.75); // U6
	glVertex2d(5.94, 34.74); // V6
	glVertex2d(6.13, 34.71); // W6
	glVertex2d(6.3, 34.69); // Z6
	glVertex2d(6.48, 34.69); // A7
	glVertex2d(6.68, 34.66); // B7
	glVertex2d(6.82, 34.65); // C7
	glVertex2d(6.97, 34.61); // D7
	glVertex2d(7.14, 34.58); // E7
	glVertex2d(7.27, 34.55); // F7
	glVertex2d(7.46, 34.51); // G7
	glVertex2d(7.61, 34.47); // H7
	glVertex2d(7.79, 34.43); // I7
	glVertex2d(7.91, 34.39); // J7
	glVertex2d(8.07, 34.34); // K7
	glVertex2d(8.23, 34.31); // L7
	glVertex2d(8.39, 34.27); // M7
	glVertex2d(8.51, 34.23); // N7
	glVertex2d(8.66, 34.16); // O7
	glVertex2d(8.81, 34.11); // P7
	glVertex2d(8.97, 34.04); // Q7
	glVertex2d(9.08, 34); // R7
	glVertex2d(9.2, 33.96); // S7
	glVertex2d(9.35, 33.89); // T7
	glVertex2d(9.47, 33.85); // U7
	glVertex2d(9.6, 33.8); // V7
	glVertex2d(9.71, 33.76); // W7
	glVertex2d(9.81, 33.7); // Z7
	glVertex2d(9.91, 33.66); // A8
	glVertex2d(10, 33.6); // B8
	glVertex2d(10.13, 33.52); // C8
	glVertex2d(10.21, 33.48); // D8
	glVertex2d(10.32, 33.43); // E8
	glVertex2d(10.42, 33.37); // F8
	glVertex2d(10.5, 33.33); // G8
	glVertex2d(10.56, 33.3); // H8
	glVertex2d(10.64, 33.21); // I8
	glVertex2d(10.68, 33); // J8
	glVertex2d(10.68, 32.76); // K8
	glVertex2d(10.67, 32.56); // L8
	glVertex2d(10.6, 32.26); // M8
	glVertex2d(10.5, 32); // N8
	glVertex2d(10.45, 31.64); // O8
	glVertex2d(10.29, 31.33); // P8
	glVertex2d(9.92, 30.84); // Q8
	glVertex2d(9.64, 30.47); // R8
	glVertex2d(9.26, 30.08); // S8
	glVertex2d(9.08, 29.98); // T8
	glVertex2d(9.02, 29.95); // U8
	glVertex2d(8.95, 29.9); // V8
	glVertex2d(8.88, 29.87); // W8
	glVertex2d(8.8, 29.8); // Z8
	glVertex2d(8.73, 29.76); // A9
	glVertex2d(8.65, 29.71); // B9
	glVertex2d(8.58, 29.65); // C9
	glVertex2d(8.5, 29.6); // D9
	glVertex2d(8.43, 29.55); // E9
	glVertex2d(8.36, 29.49); // F9
	glVertex2d(8.26, 29.42); // G9
	glVertex2d(6.87, 29.95); // H9
	glEnd();
}


void cuartoPelo(){
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);
	glVertex2d(10.58, 33.36); // I9
	glVertex2d(10.56, 33.43); // J9
	glVertex2d(10.55, 33.49); // K9
	glVertex2d(10.53, 33.56); // L9
	glVertex2d(10.51, 33.63); // M9
	glVertex2d(10.48, 33.71); // N9
	glVertex2d(10.45, 33.79); // O9
	glVertex2d(10.4, 33.89); // P9
	glVertex2d(10.36, 34); // Q9
	glVertex2d(10.33, 34.07); // R9
	glVertex2d(10.29, 34.15); // S9
	glVertex2d(10.25, 34.21); // T9
	glVertex2d(10.2, 34.3); // U9
	glVertex2d(10.17, 34.38); // V9
	glVertex2d(10.11, 34.47); // W9
	glVertex2d(10.05, 34.55); // Z9
	glVertex2d(9.99, 34.64); // A10
	glVertex2d(9.94, 34.7); // B10
	glVertex2d(9.88, 34.77); // C10
	glVertex2d(9.82, 34.84); // D10
	glVertex2d(9.75, 34.92); // E10
	glVertex2d(9.68, 35); // F10
	glVertex2d(9.6, 35.1); // G10
	glVertex2d(9.51, 35.17); // H10
	glVertex2d(9.42, 35.24); // I10
	glVertex2d(9.32, 35.32); // J10
	glVertex2d(9.23, 35.38); // K10
	glVertex2d(9.16, 35.43); // L10
	glVertex2d(9.08, 35.5); // M10
	glVertex2d(8.99, 35.56); // N10
	glVertex2d(8.91, 35.61); // O10
	glVertex2d(8.86, 35.64); // P10
	glVertex2d(8.79, 35.68); // Q10
	glVertex2d(8.73, 35.71); // R10
	glVertex2d(8.65, 35.74); // S10
	glVertex2d(8.6, 35.8); // T10
	glVertex2d(8.51, 35.83); // U10
	glVertex2d(8.43, 35.87); // V10
	glVertex2d(8.36, 35.91); // W10
	glVertex2d(8.29, 35.94); // Z10
	glVertex2d(8.2, 36); // A11
	glVertex2d(8.11, 36.03); // B11
	glVertex2d(8.03, 36.06); // C11
	glVertex2d(7.94, 36.1); // D11
	glVertex2d(7.85, 36.14); // E11
	glVertex2d(7.75, 36.17); // F11
	glVertex2d(7.7, 36.2); // G11
	glVertex2d(7.61, 36.22); // H11
	glVertex2d(7.51, 36.25); // I11
	glVertex2d(7.44, 36.27); // J11
	glVertex2d(7.34, 36.3); // K11
	glVertex2d(7.44, 36.31); // L11
	glVertex2d(7.57, 36.31); // M11
	glVertex2d(7.71, 36.29); // N11
	glVertex2d(7.83, 36.29); // O11
	glVertex2d(7.97, 36.27); // P11
	glVertex2d(8.09, 36.26); // Q11
	glVertex2d(8.23, 36.24); // R11
	glVertex2d(8.36, 36.21); // S11
	glVertex2d(8.47, 36.2); // T11
	glVertex2d(8.57, 36.18); // U11
	glVertex2d(8.68, 36.15); // V11
	glVertex2d(8.77, 36.13); // W11
	glVertex2d(8.89, 36.09); // Z11
	glVertex2d(9, 36.07); // A12
	glVertex2d(9.12, 36.04); // B12
	glVertex2d(9.2, 36); // C12
	glVertex2d(9.32, 35.96); // D12
	glVertex2d(9.44, 35.92); // E12
	glVertex2d(9.54, 35.89); // F12
	glVertex2d(9.63, 35.84); // G12
	glVertex2d(9.73, 35.8); // H12
	glVertex2d(9.81, 35.75); // I12
	glVertex2d(9.92, 35.7); // J12
	glVertex2d(10.01, 35.66); // K12
	glVertex2d(10.1, 35.6); // L12
	glVertex2d(10.19, 35.56); // M12
	glVertex2d(10.27, 35.52); // N12
	glVertex2d(10.39, 35.46); // O12
	glVertex2d(10.47, 35.4); // P12
	glVertex2d(10.58, 35.33); // Q12
	glVertex2d(10.65, 35.27); // R12
	glVertex2d(10.76, 35.19); // S12
	glVertex2d(10.83, 35.13); // T12
	glVertex2d(10.92, 35.07); // U12
	glVertex2d(11.03, 34.96); // V12
	glVertex2d(11.15, 34.86); // W12
	glVertex2d(11.25, 34.76); // Z12
	glVertex2d(11.35, 34.66); // A13
	glVertex2d(11.44, 34.52); // B13
	glVertex2d(11.51, 34.44); // C13
	glVertex2d(11.62, 34.33); // D13
	glVertex2d(11.7, 34.21); // E13
	glVertex2d(11.76, 34.13); // F13
	glVertex2d(11.84, 34.01); // G13
	glVertex2d(11.9, 33.93); // H13
	glVertex2d(11.95, 33.82); // I13
	glVertex2d(12.01, 33.73); // J13
	glVertex2d(12.06, 33.63); // K13
	glVertex2d(12.12, 33.51); // L13
	glVertex2d(12.2, 33.4); // M13
	glVertex2d(12.24, 33.27); // N13
	glVertex2d(12.29, 33.18); // O13
	glVertex2d(12.34, 33.08); // P13
	glVertex2d(12.37, 32.96); // Q13
	glVertex2d(12.41, 32.86); // R13
	glVertex2d(12.43, 32.78); // S13
	glVertex2d(12.47, 32.69); // T13
	glVertex2d(12.51, 32.62); // U13
	glVertex2d(12.57, 32.61); // V13
	glVertex2d(12.66, 32.59); // W13
	glVertex2d(12.74, 32.58); // Z13
	glVertex2d(12.82, 32.58); // A14
	glVertex2d(12.91, 32.57); // B14
	glVertex2d(13, 32.56); // C14
	glVertex2d(13.11, 32.53); // D14
	glVertex2d(13.2, 32.5); // E14
	glVertex2d(13.28, 32.5); // F14
	glVertex2d(13.37, 32.47); // G14
	glVertex2d(13.45, 32.46); // H14
	glVertex2d(13.54, 32.42); // I14
	glVertex2d(13.65, 32.39); // J14
	glVertex2d(13.73, 32.36); // K14
	glVertex2d(13.85, 32.33); // L14
	glVertex2d(13.95, 32.28); // M14
	glVertex2d(14.05, 32.23); // N14
	glVertex2d(14.19, 32.16); // O14
	glVertex2d(14.29, 32.09); // P14
	glVertex2d(14.45, 32.02); // Q14
	glVertex2d(14.58, 31.91); // R14
	glVertex2d(14.68, 31.83); // S14
	glVertex2d(14.81, 31.74); // T14
	glVertex2d(14.95, 31.64); // U14
	glVertex2d(15.05, 31.54); // V14
	glVertex2d(15.2, 31.4); // W14
	glVertex2d(15.32, 31.28); // Z14
	glVertex2d(15.45, 31.17); // A15
	glVertex2d(15.56, 31.06); // B15
	glVertex2d(15.68, 30.9); // C15
	glVertex2d(15.84, 30.69); // D15
	glVertex2d(15.95, 30.53); // E15
	glVertex2d(16.06, 30.34); // F15
	glVertex2d(16.16, 30.19); // G15
	glVertex2d(16.25, 30.04); // H15
	glVertex2d(16.36, 29.84); // I15
	glVertex2d(16.44, 29.66); // J15
	glVertex2d(16.51, 29.47); // K15
	glVertex2d(16.58, 29.33); // L15
	glVertex2d(16.63, 29.24); // M15
	glVertex2d(16.67, 29.1); // N15
	glVertex2d(16.72, 28.97); // O15
	glVertex2d(16.76, 28.88); // P15
	glVertex2d(16.79, 28.74); // Q15
	glVertex2d(16.82, 28.63); // R15
	glVertex2d(16.88, 28.51); // S15
	glVertex2d(16.72, 28.45); // T15
	glVertex2d(15.69, 28.43); // U15
	glVertex2d(14.27, 30.36); // V15
	glVertex2d(12.56, 31.36); // W15
	glVertex2d(11.42, 32.1); // Z15
	glVertex2d(10.9, 32.52); // A16
	glVertex2d(10.6, 33.1); // B16
	glEnd();
}


void ultimoCabelloConOrejaDerecha() {
	
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);
	glVertex2d(16.88, 28.51); // S15
	glVertex2d(16.97, 28.49); // C16
	glVertex2d(17.13, 28.52); // D16
	glVertex2d(17.34, 28.52); // E16
	glVertex2d(17.58, 28.52); // F16
	glVertex2d(17.82, 28.53); // G16
	glVertex2d(18.06, 28.53); // H16
	glVertex2d(18.35, 28.55); // I16
	glVertex2d(18.68, 28.55); // J16
	glVertex2d(19.01, 28.54); // K16
	glVertex2d(19.3, 28.56); // L16
	glVertex2d(19.68, 28.55); // M16
	glVertex2d(20.09, 28.53); // N16
	glVertex2d(20.53, 28.55); // O16
	glVertex2d(20.91, 28.5); // P16
	glVertex2d(21.26, 28.47); // Q16
	glVertex2d(21.68, 28.42); // R16
	glVertex2d(21.94, 28.43); // S16
	glVertex2d(22.14, 28.38); // T16
	glVertex2d(22.36, 28.33); // U16
	glVertex2d(22.54, 28.3); // V16
	glVertex2d(22.68, 28.24); // W16
	glVertex2d(22.57, 28.17); // Z16
	glVertex2d(22.43, 28.13); // A17
	glVertex2d(22.2, 28); // B17
	glVertex2d(21.92, 27.88); // C17
	glVertex2d(21.63, 27.78); // D17
	glVertex2d(21.39, 27.64); // E17
	glVertex2d(21.08, 27.52); // F17
	glVertex2d(20.85, 27.43); // G17
	glVertex2d(20.55, 27.29); // H17
	glVertex2d(20.25, 27.14); // I17
	glVertex2d(19.99, 27.03); // J17
	glVertex2d(19.6, 26.86); // K17
	glVertex2d(19.32, 26.75); // L17
	glVertex2d(18.94, 26.57); // M17
	glVertex2d(18.65, 26.46); // N17
	glVertex2d(18.43, 26.37); // O17
	glVertex2d(18.22, 26.29); // P17
	glVertex2d(17.98, 26.19); // Q17
	glVertex2d(18.14, 26.18); // R17
	glVertex2d(18.44, 26.19); // S17
	glVertex2d(18.74, 26.21); // T17
	glVertex2d(19.08, 26.22); // U17
	glVertex2d(19.47, 26.23); // V17
	glVertex2d(19.94, 26.23); // W17
	glVertex2d(20.51, 26.25); // Z17
	glVertex2d(20.96, 26.27); // A18
	glVertex2d(21.39, 26.28); // B18
	glVertex2d(21.69, 26.3); // C18
	glVertex2d(21.52, 26.18); // D18
	glVertex2d(21.26, 26.06); // E18
	glVertex2d(21.1, 25.97); // F18
	glVertex2d(20.97, 25.93); // G18
	glVertex2d(20.78, 25.85); // H18
	glVertex2d(20.6, 25.74); // I18
	glVertex2d(20.27, 25.63); // J18
	glVertex2d(19.94, 25.53); // K18
	glVertex2d(19.65, 25.38); // L18
	glVertex2d(19.35, 25.29); // M18
	glVertex2d(19.14, 25.22); // N18
	glVertex2d(18.9, 25.15); // O18
	glVertex2d(18.74, 25.06); // P18
	glVertex2d(18.5, 25.01); // Q18
	glVertex2d(18.25, 24.92); // R18
	glVertex2d(18.03, 24.86); // S18
	glVertex2d(17.87, 24.8); // T18
	glVertex2d(17.63, 24.74); // U18
	glVertex2d(17.47, 24.68); // V18
	glVertex2d(17.26, 24.61); // W18
	glVertex2d(17.41, 24.57); // Z18
	glVertex2d(17.6, 24.57); // A19
	glVertex2d(17.79, 24.56); // B19
	glVertex2d(17.98, 24.56); // C19
	glVertex2d(18.19, 24.55); // D19
	glVertex2d(18.42, 24.54); // E19
	glVertex2d(18.59, 24.54); // F19
	glVertex2d(18.8, 24.55); // G19
	glVertex2d(19.03, 24.52); // H19
	glVertex2d(19.24, 24.51); // I19
	glVertex2d(19.43, 24.52); // J19
	glVertex2d(19.7, 24.51); // K19
	glVertex2d(19.54, 24.45); // L19
	glVertex2d(19.36, 24.37); // M19
	glVertex2d(19.16, 24.32); // N19
	glVertex2d(18.99, 24.26); // O19
	glVertex2d(18.84, 24.22); // P19
	glVertex2d(18.64, 24.15); // Q19
	glVertex2d(18.42, 24.09); // R19
	glVertex2d(18.2, 24); // S19
	glVertex2d(17.98, 23.95); // T19
	glVertex2d(17.84, 23.91); // U19
	glVertex2d(17.7, 23.85); // V19
	glVertex2d(17.54, 23.81); // W19
	glVertex2d(17.36, 23.77); // Z19
	glVertex2d(17.17, 23.7); // A20
	glVertex2d(16.99, 23.65); // B20
	glVertex2d(16.83, 23.6); // C20
	glVertex2d(16.67, 23.55); // D20
	glVertex2d(16.5, 23.51); // E20
	glVertex2d(16.25, 23.45); // F20
	glVertex2d(16, 23.4); // G20
	glVertex2d(15.76, 23.32); // H20
	glVertex2d(15.48, 23.25); // I20
	glVertex2d(15.2, 23.2); // J20
	glVertex2d(14.86, 23.11); // K20
	glVertex2d(14.52, 23.05); // L20
	glVertex2d(14.22, 22.96); // M20
	glVertex2d(13.97, 22.92); // N20
	glVertex2d(13.69, 22.87); // O20
	glVertex2d(13.44, 22.83); // P20
	glVertex2d(13.26, 22.82); // Q20
	glVertex2d(13.14, 22.83); // R20
	glVertex2d(13.28, 22.96); // S20
	glVertex2d(13.2, 22.9); // T20
	glVertex2d(13.38, 23.03); // U20
	glVertex2d(13.49, 23.12); // V20
	glVertex2d(13.56, 23.17); // W20
	glVertex2d(13.6, 23.22); // Z20
	glVertex2d(13.64, 23.28); // A21
	glVertex2d(13.65, 23.32); // B21
	glVertex2d(13.64, 23.36); // C21
	glVertex2d(13.62, 23.4); // D21
	glVertex2d(13.59, 23.42); // E21
	glVertex2d(13.57, 23.43); // F21
	glVertex2d(13.52, 23.45); // G21
	glVertex2d(13.47, 23.46); // H21
	glVertex2d(13.43, 23.47); // I21
	glVertex2d(13.42, 23.51); // J21
	glVertex2d(13.43, 23.55); // K21
	glVertex2d(13.46, 23.56); // L21
	glVertex2d(13.52, 23.55); // M21
	glVertex2d(13.55, 23.53); // N21
	glVertex2d(13.61, 23.5); // O21
	glVertex2d(13.66, 23.48); // P21
	glVertex2d(13.74, 23.46); // Q21
	glVertex2d(13.8, 23.45); // R21
	glVertex2d(13.88, 23.43); // S21
	glVertex2d(13.95, 23.42); // T21
	glVertex2d(14.05, 23.41); // U21
	glVertex2d(14.14, 23.42); // V21
	glVertex2d(14.28, 23.44); // W21
	glVertex2d(14.41, 23.49); // Z21
	glVertex2d(14.56, 23.56); // A22
	glVertex2d(14.72, 23.66); // B22
	glVertex2d(14.84, 23.75); // C22
	glVertex2d(14.95, 23.86); // D22
	glVertex2d(15.05, 23.98); // E22
	glVertex2d(15.14, 24.13); // F22
	glVertex2d(15.21, 24.25); // G22
	glVertex2d(15.28, 24.45); // H22
	glVertex2d(15.31, 24.55); // I22
	glVertex2d(15.33, 24.69); // J22
	glVertex2d(15.34, 24.79); // K22
	glVertex2d(15.34, 24.91); // L22
	glVertex2d(15.32, 25.05); // M22
	glVertex2d(15.31, 25.16); // N22
	glVertex2d(15.27, 25.31); // O22
	glVertex2d(15.24, 25.42); // P22
	glVertex2d(15.19, 25.52); // Q22
	glVertex2d(15.12, 25.58); // R22
	//glVertex2d(15.03, 25.64); // S22
	//glVertex2d(14.92, 25.66); // T22
	glVertex2d(14.81, 25.65); // U22
	glVertex2d(14.68, 25.61); // V22
	glVertex2d(14.58, 25.56); // W22
	glVertex2d(14.46, 25.5); // Z22
	glVertex2d(14.37, 25.44); // A23
	glVertex2d(14.3, 25.4); // B23
	glVertex2d(14.2, 25.32); // C23
	glVertex2d(14.14, 25.27); // D23
	glVertex2d(14.08, 25.21); // E23
	glVertex2d(14.01, 25.15); // F23
	glVertex2d(13.95, 25.1); // G23
	glVertex2d(13.91, 25.08); // H23
	glVertex2d(13.92, 25.18); // I23
	glVertex2d(13.95, 25.27); // J23
	glVertex2d(13.99, 25.37); // K23
	glVertex2d(14.05, 25.48); // L23
	glVertex2d(14.11, 25.56); // M23
	glVertex2d(14.17, 25.66); // N23
	glVertex2d(14.22, 25.73); // O23
	glVertex2d(14.26, 25.79); // P23
	glVertex2d(14.2, 25.8); // Q23
	glVertex2d(14.08, 25.79); // R23
	glVertex2d(13.94, 25.79); // S23
	glVertex2d(13.84, 25.78); // T23
	glVertex2d(13.74, 25.79); // U23
	glVertex2d(13.65, 25.78); // V23
	glVertex2d(13.55, 25.78); // W23
	glVertex2d(13.48, 25.79); // Z23
	glVertex2d(13.57, 25.86); // A24
	glVertex2d(13.65, 25.9); // B24
	glVertex2d(13.71, 25.96); // C24
	glVertex2d(13.78, 26.02); // D24
	glVertex2d(13.87, 26.09); // E24
	glVertex2d(13.95, 26.15); // F24
	glVertex2d(14.01, 26.21); // G24
	glVertex2d(14.07, 26.28); // H24
	glVertex2d(14.12, 26.33); // I24
	glVertex2d(14.16, 26.38); // J24
	glVertex2d(14.18, 26.43); // K24
	glVertex2d(14.11, 26.4); // L24
	glVertex2d(14.05, 26.39); // M24
	glVertex2d(13.96, 26.35); // N24
	glVertex2d(13.92, 26.33); // O24
	glVertex2d(13.84, 26.32); // P24
	glVertex2d(13.78, 26.3); // Q24
	glVertex2d(13.71, 26.27); // R24
	glVertex2d(13.65, 26.24); // S24
	glVertex2d(13.57, 26.22); // T24
	glVertex2d(13.5, 26.2); // U24
	glVertex2d(13.42, 26.18); // V24
	glVertex2d(13.32, 26.15); // W24
	glVertex2d(13.25, 26.13); // Z24
	glVertex2d(13.21, 26.12); // A25
	glVertex2d(13.16, 26.1); // B25
	glVertex2d(13.09, 26.08); // C25
	glVertex2d(13.13, 26.14); // D25
	glVertex2d(13.18, 26.19); // E25
	glVertex2d(13.22, 26.26); // F25
	glVertex2d(13.27, 26.31); // G25
	glVertex2d(13.32, 26.37); // H25
	glVertex2d(13.37, 26.44); // I25
	glVertex2d(13.42, 26.5); // J25
	glVertex2d(13.48, 26.57); // K25
	glVertex2d(13.53, 26.64); // L25
	glVertex2d(13.64, 26.81); // M25
	glVertex2d(13.76, 27); // N25
	glVertex2d(13.89, 27.2); // O25
	glVertex2d(14, 27.4); // P25
	glVertex2d(14.11, 27.59); // Q25
	glVertex2d(14.21, 27.77); // R25
	glVertex2d(14.54, 27.97); // S25
	glVertex2d(14.83, 28.17); // T25
	glVertex2d(15.11, 28.41); // U25
	glVertex2d(15.29, 28.58); // V25
	glEnd();
}


void pelosCabeza() {
	colorNegro();		// coloe negro pelo
	glBegin(GL_POLYGON);
	glVertex2d(9.08, 29.98); // T8
	glVertex2d(9.05, 29.93); // W25
	glVertex2d(9.03, 29.87); // Z25
	glVertex2d(9, 29.8); // A26
	glVertex2d(8.98, 29.76); // B26
	glVertex2d(8.93, 29.68); // C26
	glVertex2d(8.9, 29.62); // D26
	glVertex2d(8.86, 29.53); // E26
	glVertex2d(8.83, 29.45); // F26
	glVertex2d(8.8, 29.38); // G26
	glVertex2d(8.76, 29.27); // H26
	glVertex2d(8.73, 29.17); // I26
	glVertex2d(8.69, 29.08); // J26
	glVertex2d(8.67, 28.99); // K26
	glVertex2d(8.65, 28.89); // L26
	glVertex2d(8.64, 28.83); // M26
	glVertex2d(8.62, 28.76); // N26
	glVertex2d(8.6, 28.66); // O26
	glVertex2d(8.6, 28.57); // P26
	glVertex2d(8.59, 28.48); // Q26
	glVertex2d(8.58, 28.37); // R26
	glVertex2d(8.57, 28.29); // S26
	glVertex2d(8.57, 28.23); // T26
	glVertex2d(8.56, 28.14); // U26
	glVertex2d(8.57, 28.02); // V26
	glVertex2d(8.56, 27.91); // W26
	glVertex2d(8.57, 27.79); // Z26
	glVertex2d(8.58, 27.67); // A27
	glVertex2d(8.59, 27.56); // B27
	glVertex2d(8.61, 27.46); // C27
	glVertex2d(8.63, 27.38); // D27
	glVertex2d(8.65, 27.31); // E27
	glVertex2d(8.68, 27.36); // F27
	glVertex2d(8.69, 27.42); // G27
	glVertex2d(8.73, 27.48); // H27
	glVertex2d(8.76, 27.56); // I27
	glVertex2d(8.81, 27.63); // J27
	glVertex2d(8.84, 27.68); // K27
	glVertex2d(8.88, 27.73); // L27
	glVertex2d(8.91, 27.67); // M27
	glVertex2d(8.94, 27.6); // N27
	glVertex2d(8.96, 27.55); // O27
	glVertex2d(8.98, 27.49); // P27
	glVertex2d(9, 27.43); // Q27

	glVertex2d(9.01, 27.37); // R27
	glVertex2d(9.04, 27.47); // S27
	glVertex2d(9.05, 27.56); // T27
	glVertex2d(9.07, 27.67); // U27
	glVertex2d(9.06, 27.75); // V27
	glVertex2d(9.05, 27.84); // W27
	glVertex2d(9.03, 27.9); // Z27
	glVertex2d(9.02, 27.94); // A28
	glVertex2d(9.07, 28.01); // B28
	glVertex2d(9.13, 28.09); // C28
	glVertex2d(9.2, 28.18); // D28
	glVertex2d(9.28, 28.28); // E28
	glVertex2d(9.35, 28.36); // F28
	glVertex2d(9.43, 28.45); // G28
	glVertex2d(9.51, 28.53); // H28
	glVertex2d(9.58, 28.59); // I28
	glVertex2d(9.65, 28.67); // J28
	glVertex2d(9.75, 28.74); // K28
	glVertex2d(9.82, 28.8); // L28
	glVertex2d(9.92, 28.85); // M28
	glVertex2d(9.97, 28.9); // N28
	glVertex2d(10.07, 28.94); // O28


	
	glVertex2d(10.03, 28.87); // P28
	glVertex2d(9.98, 28.79); // Q28
	glVertex2d(9.94, 28.69); // R28
	glVertex2d(9.9, 28.6); // S28
	glVertex2d(9.87, 28.5); // T28
	glVertex2d(9.83, 28.41); // U28
	glVertex2d(9.79, 28.33); // V28
	glVertex2d(9.75, 28.2); // W28
	glVertex2d(9.7, 28.1); // Z28
	glVertex2d(9.68, 27.99); // A29
	glVertex2d(9.66, 27.89); // B29
	glVertex2d(9.63, 27.76); // C29

	glVertex2d(9.63, 27.6); // D29
	glVertex2d(9.72, 27.7); // E29
	glVertex2d(9.81, 27.82); // F29
	glVertex2d(9.92, 27.96); // G29
	glVertex2d(10.06, 28.14); // H29
	glVertex2d(10.2, 28.3); // I29
	glVertex2d(10.33, 28.47); // J29
	glVertex2d(10.46, 28.59); // K29
	glVertex2d(10.63, 28.78); // L29
	glVertex2d(10.82, 28.95); // M29
	glVertex2d(10.97, 29.08); // N29
	glVertex2d(11.11, 29.19); // O29
	glVertex2d(11.26, 29.33); // P29
	glVertex2d(11.46, 29.5); // Q29
	glVertex2d(11.66, 29.62); // R29
	glVertex2d(11.85, 29.71); // S29
	glVertex2d(12, 29.8); // T29
	glVertex2d(12.16, 29.87); // U29
	glVertex2d(12.31, 29.9); // V29
	glVertex2d(12.26, 29.81); // W29
	glVertex2d(12.19, 29.72); // Z29
	glVertex2d(12.1, 29.6); // A30
	glVertex2d(12.03, 29.49); // B30
	glVertex2d(11.94, 29.37); // C30
	glVertex2d(11.9, 29.25); // D30
	glVertex2d(11.84, 29.14); // E30
	glVertex2d(11.79, 29.03); // F30
	glVertex2d(11.73, 28.91); // G30
	glVertex2d(11.68, 28.82); // H30
	glVertex2d(11.65, 28.7); // I30
	glVertex2d(11.6, 28.6); // J30
	glVertex2d(11.58, 28.46); // K30
	glVertex2d(11.56, 28.34); // L30
	glVertex2d(11.52, 28.23); // M30
	glVertex2d(11.49, 28.14); // N30
	glVertex2d(11.46, 28.03); // O30
	glVertex2d(11.43, 27.86); // P30
	glVertex2d(11.42, 27.73); // Q30
	glVertex2d(11.4, 27.6); // R30
	glVertex2d(11.42, 27.5); // S30


	glVertex2d(11.43, 27.35); // T30
	glVertex2d(11.5, 27.42); // U30
	glVertex2d(11.59, 27.5); // V30
	glVertex2d(11.7, 27.6); // W30
	glVertex2d(11.8, 27.7); // Z30
	glVertex2d(11.89, 27.76); // A31
	glVertex2d(11.96, 27.82); // B31
	glVertex2d(12.04, 27.89); // C31
	glVertex2d(12.11, 27.95); // D31
	glVertex2d(12.22, 28.05); // E31
	glVertex2d(12.37, 28.16); // F31
	glVertex2d(12.51, 28.27); // G31
	glVertex2d(12.61, 28.35); // H31
	glVertex2d(12.73, 28.44); // I31
	glVertex2d(12.84, 28.5); // J31
	glVertex2d(12.98, 28.59); // K31
	glVertex2d(13.12, 28.67); // L31
	glVertex2d(13.27, 28.76); // M31
	glVertex2d(13.43, 28.84); // N31
	glVertex2d(13.6, 28.9); // O31
	glVertex2d(13.72, 28.94); // P31
	glVertex2d(13.9, 29); // Q31
	glVertex2d(14.03, 29.01); // R31
	glVertex2d(14.18, 29.02); // S31
	glVertex2d(14.28, 29); // T31
	glVertex2d(14.32, 28.94); // U31
	glVertex2d(14.36, 28.86); // V31
	glVertex2d(14.4, 28.75); // W31
	glVertex2d(14.41, 28.67); // Z31
	glVertex2d(14.41, 28.57); // A32
	glVertex2d(14.41, 28.45); // B32
	glVertex2d(14.4, 28.37); // C32
	glVertex2d(14.39, 28.27); // D32
	glVertex2d(14.36, 28.18); // E32
	glVertex2d(14.32, 28.07); // F32
	glVertex2d(14.29, 27.99); // G32
	glVertex2d(14.25, 27.88); // H32

	
	glVertex2d(14.36, 27.79); // I32
	glVertex2d(14.44, 27.74); // J32
	glVertex2d(14.54, 27.71); // K32

	glVertex2d(15.61, 28.08); // L32
	glVertex2d(15.24, 30.12); // M32
	glVertex2d(14.51, 31.15); // N32
	glVertex2d(13.46, 31.85); // O32
	glVertex2d(10.6, 33.1); // B16
	glEnd();
	
}





void caraFondo() {

	colorCuerpo();

	glBegin(GL_POLYGON);
	glVertex2d(8.86, 30.49); // C
	glVertex2d(8.13, 30.24); // D
	glVertex2d(7.41, 29.65); // E
	glVertex2d(7.14, 29.2); // F
	glVertex2d(7, 28.54); // G
	glVertex2d(7, 28); // H
	glVertex2d(7.01, 27.54); // I
	glVertex2d(7, 27); // J
	glVertex2d(6.99, 26.41); // K

	glVertex2d(7.11, 25.61); // L
	glVertex2d(7.11, 24.98); // M
	glVertex2d(7.22, 24.349); // N

	glVertex2d(7.25, 23.5); // O
	glVertex2d(7.99, 23.19); // P
	glVertex2d(9.04, 22.76); // Q
	glVertex2d(10.06, 22.65); // R
	glVertex2d(10.99, 22.79); // S
	glVertex2d(11.74, 22.92); // T
	glVertex2d(12.48, 23.18); // U
	glVertex2d(13.3, 23.55); // V
	glVertex2d(14.09, 23.74); // W
	glVertex2d(14.85, 24.21); // Z
	glVertex2d(15.12, 24.82); // A1
	glVertex2d(15.3, 25.6); // B1
	glVertex2d(15.22, 26.49); // C1
	glVertex2d(15.15, 27.42); // D1
	glVertex2d(14.92, 28.38); // E1
	glVertex2d(14.59, 29.21); // F1
	glVertex2d(14, 30); // G1
	glVertex2d(13.21, 30.45); // H1
	glVertex2d(11.73, 30.7); // I1
	glVertex2d(10.9, 30.71); // J1
	glVertex2d(10.25, 30.7); // K1
	glVertex2d(9.46, 30.64); // L1
	
	glEnd();
}

void entradaAladoOreja() {
	colorCuerpo();
	glBegin(GL_POLYGON);
	glVertex2d(11.43, 27.35); // T30
	glVertex2d(11.5, 27.42); // U30
	glVertex2d(11.59, 27.5); // V30
	glVertex2d(11.7, 27.6); // W30
	glVertex2d(11.8, 27.7); // Z30
	glVertex2d(11.89, 27.76); // A31
	glVertex2d(11.96, 27.82); // B31
	glVertex2d(12.04, 27.89); // C31
	glVertex2d(12.11, 27.95); // D31
	glVertex2d(12.22, 28.05); // E31
	glVertex2d(12.37, 28.16); // F31
	glVertex2d(12.51, 28.27); // G31
	glVertex2d(12.61, 28.35); // H31
	glVertex2d(12.73, 28.44); // I31
	glVertex2d(12.84, 28.5); // J31
	glVertex2d(12.98, 28.59); // K31
	glVertex2d(13.12, 28.67); // L31
	glVertex2d(13.27, 28.76); // M31
	glVertex2d(13.43, 28.84); // N31
	glVertex2d(13.6, 28.9); // O31
	glVertex2d(13.72, 28.94); // P31
	glVertex2d(13.9, 29); // Q31
	glVertex2d(14.03, 29.01); // R31
	glVertex2d(14.18, 29.02); // S31
	glVertex2d(14.28, 29); // T31
	glVertex2d(14.32, 28.94); // U31
	glVertex2d(14.36, 28.86); // V31
	glVertex2d(14.4, 28.75); // W31
	glVertex2d(14.41, 28.67); // Z31
	glVertex2d(14.41, 28.57); // A32
	glVertex2d(14.41, 28.45); // B32
	glVertex2d(14.4, 28.37); // C32
	glVertex2d(14.39, 28.27); // D32
	glVertex2d(14.36, 28.18); // E32
	glVertex2d(14.32, 28.07); // F32
	glVertex2d(14.29, 27.99); // G32
	glVertex2d(14.25, 27.88); // H32
	glEnd();
}

void entradaAladoOreja2() {
	colorCuerpo();
	glBegin(GL_POLYGON);
	glVertex2d(9.63, 27.6); // D29
	glVertex2d(9.72, 27.7); // E29
	glVertex2d(9.81, 27.82); // F29
	glVertex2d(9.92, 27.96); // G29
	glVertex2d(10.06, 28.14); // H29
	glVertex2d(10.2, 28.3); // I29
	glVertex2d(10.33, 28.47); // J29
	glVertex2d(10.46, 28.59); // K29
	glVertex2d(10.63, 28.78); // L29
	glVertex2d(10.82, 28.95); // M29
	glVertex2d(10.97, 29.08); // N29
	glVertex2d(11.11, 29.19); // O29
	glVertex2d(11.26, 29.33); // P29
	glVertex2d(11.46, 29.5); // Q29
	glVertex2d(11.66, 29.62); // R29
	glVertex2d(11.85, 29.71); // S29
	glVertex2d(12, 29.8); // T29
	glVertex2d(12.16, 29.87); // U29
	glVertex2d(12.31, 29.9); // V29
	glVertex2d(12.26, 29.81); // W29
	glVertex2d(12.19, 29.72); // Z29
	glVertex2d(12.1, 29.6); // A30
	glVertex2d(12.03, 29.49); // B30
	glVertex2d(11.94, 29.37); // C30
	glVertex2d(11.9, 29.25); // D30
	glVertex2d(11.84, 29.14); // E30
	glVertex2d(11.79, 29.03); // F30
	glVertex2d(11.73, 28.91); // G30
	glVertex2d(11.68, 28.82); // H30
	glVertex2d(11.65, 28.7); // I30
	glVertex2d(11.6, 28.6); // J30
	glVertex2d(11.58, 28.46); // K30
	glVertex2d(11.56, 28.34); // L30
	glVertex2d(11.52, 28.23); // M30
	glVertex2d(11.49, 28.14); // N30
	glVertex2d(11.46, 28.03); // O30
	glVertex2d(11.43, 27.86); // P30
	glVertex2d(11.42, 27.73); // Q30
	glVertex2d(11.4, 27.6); // R30
	glVertex2d(11.42, 27.5); // S30
	glVertex2d(11.43, 27.35); // T30
	glEnd();
}



void entradaAladoOreja3() {
	colorCuerpo();
	glBegin(GL_POLYGON);

	glVertex2d(9.01, 27.37); // R27
	glVertex2d(9.04, 27.47); // S27
	glVertex2d(9.05, 27.56); // T27
	glVertex2d(9.07, 27.67); // U27
	glVertex2d(9.06, 27.75); // V27
	glVertex2d(9.05, 27.84); // W27
	glVertex2d(9.03, 27.9); // Z27
	glVertex2d(9.02, 27.94); // A28
	glVertex2d(9.07, 28.01); // B28
	glVertex2d(9.13, 28.09); // C28
	glVertex2d(9.2, 28.18); // D28
	glVertex2d(9.28, 28.28); // E28
	glVertex2d(9.35, 28.36); // F28
	glVertex2d(9.43, 28.45); // G28
	glVertex2d(9.51, 28.53); // H28
	glVertex2d(9.58, 28.59); // I28
	glVertex2d(9.65, 28.67); // J28
	glVertex2d(9.75, 28.74); // K28
	glVertex2d(9.82, 28.8); // L28
	glVertex2d(9.92, 28.85); // M28
	glVertex2d(9.97, 28.9); // N28
	glVertex2d(10.07, 28.94); // O28
	glVertex2d(10.03, 28.87); // P28
	glVertex2d(9.98, 28.79); // Q28
	glVertex2d(9.94, 28.69); // R28
	glVertex2d(9.9, 28.6); // S28
	glVertex2d(9.87, 28.5); // T28
	glVertex2d(9.83, 28.41); // U28
	glVertex2d(9.79, 28.33); // V28
	glVertex2d(9.75, 28.2); // W28
	glVertex2d(9.7, 28.1); // Z28
	glVertex2d(9.68, 27.99); // A29
	glVertex2d(9.66, 27.89); // B29
	glVertex2d(9.63, 27.76); // C29
	glVertex2d(9.63, 27.6); // D29
	glEnd();
}



void ojoIzquierdoFondo() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(8.92, 26.75); // R32
	glVertex2d(8.85, 26.84); // S32
	glVertex2d(8.75, 26.92); // T32
	glVertex2d(8.62, 26.96); // U32
	glVertex2d(8.51, 26.98); // V32
	glVertex2d(8.39, 26.96); // W32
	glVertex2d(8.3, 26.9); // Z32
	glVertex2d(8.2, 26.86); // A33
	glVertex2d(8.1, 26.81); // B33
	glVertex2d(8.05, 26.75); // C33
	glVertex2d(8, 26.7); // D33
	glVertex2d(7.93, 26.61); // E33
	glVertex2d(7.87, 26.54); // F33
	glVertex2d(7.83, 26.48); // G33
	glVertex2d(7.8, 26.41); // H33
	glVertex2d(7.76, 26.34); // I33
	glVertex2d(7.72, 26.22); // J33
	glVertex2d(7.69, 26.13); // K33
	glVertex2d(7.67, 26.01); // L33
	glVertex2d(7.66, 25.91); // M33
	glVertex2d(7.66, 25.86); // N33
	glVertex2d(7.66, 25.78); // O33
	glVertex2d(7.65, 25.68); // P33
	glVertex2d(7.66, 25.59); // Q33
	glVertex2d(7.67, 25.46); // R33
	glVertex2d(7.7, 25.38); // S33
	glVertex2d(7.74, 25.28); // T33
	glVertex2d(7.77, 25.2); // U33
	glVertex2d(7.8, 25.14); // V33
	glVertex2d(7.86, 25.06); // W33
	glVertex2d(7.91, 24.98); // Z33
	glVertex2d(7.97, 24.93); // A34
	glVertex2d(8.01, 24.9); // B34
	glVertex2d(8.1, 24.83); // C34
	glVertex2d(8.22, 24.78); // D34
	glVertex2d(8.3, 24.76); // E34
	glVertex2d(8.4, 24.77); // F34
	glVertex2d(8.53, 24.78); // G34
	glVertex2d(8.63, 24.83); // H34
	glVertex2d(8.72, 24.9); // I34
	glVertex2d(8.8, 24.96); // J34
	glVertex2d(8.87, 25.03); // K34
	glVertex2d(8.93, 25.12); // L34
	glVertex2d(8.98, 25.22); // M34
	glVertex2d(9.02, 25.3); // N34
	glVertex2d(9.05, 25.39); // O34
	glVertex2d(9.08, 25.49); // P34
	glVertex2d(9.1, 25.62); // Q34
	glVertex2d(9.12, 25.77); // R34
	glVertex2d(9.12, 25.93); // S34
	glVertex2d(9.12, 26.04); // T34
	glVertex2d(9.11, 26.13); // U34
	glVertex2d(9.1, 26.23); // V34
	glVertex2d(9.08, 26.34); // W34
	glVertex2d(9.06, 26.45); // Z34
	glVertex2d(9.02, 26.55); // A35
	glVertex2d(8.99, 26.63); // B35
	glEnd();
}


void ojoIzquierdoContorno() {
	colorNegro();
	glLineWidth(2.5);
	glBegin(GL_LINE_STRIP);
	glVertex2d(8.92, 26.75); // R32
	glVertex2d(8.85, 26.84); // S32
	glVertex2d(8.75, 26.92); // T32
	glVertex2d(8.62, 26.96); // U32
	glVertex2d(8.51, 26.98); // V32
	glVertex2d(8.39, 26.96); // W32
	glVertex2d(8.3, 26.9); // Z32
	glVertex2d(8.2, 26.86); // A33
	glVertex2d(8.1, 26.81); // B33
	glVertex2d(8.05, 26.75); // C33
	glVertex2d(8, 26.7); // D33
	glVertex2d(7.93, 26.61); // E33
	glVertex2d(7.87, 26.54); // F33
	glVertex2d(7.83, 26.48); // G33
	glVertex2d(7.8, 26.41); // H33
	glVertex2d(7.76, 26.34); // I33
	glVertex2d(7.72, 26.22); // J33
	glVertex2d(7.69, 26.13); // K33
	glVertex2d(7.67, 26.01); // L33
	glVertex2d(7.66, 25.91); // M33
	glVertex2d(7.66, 25.86); // N33
	glVertex2d(7.66, 25.78); // O33
	glVertex2d(7.65, 25.68); // P33
	glVertex2d(7.66, 25.59); // Q33
	glVertex2d(7.67, 25.46); // R33
	glVertex2d(7.7, 25.38); // S33
	glVertex2d(7.74, 25.28); // T33
	glVertex2d(7.77, 25.2); // U33
	glVertex2d(7.8, 25.14); // V33
	glVertex2d(7.86, 25.06); // W33
	glVertex2d(7.91, 24.98); // Z33
	glVertex2d(7.97, 24.93); // A34
	glVertex2d(8.01, 24.9); // B34
	glVertex2d(8.1, 24.83); // C34
	glVertex2d(8.22, 24.78); // D34
	glEnd();
}



void ojoIzquierdoFondoNegro() {
	colorNegro();
	glBegin(GL_POLYGON);
	glVertex2d(8.76, 25.78); // C35 
	glVertex2d(8.74, 25.77); // D35 
	glVertex2d(8.71, 25.76); // E35 
	glVertex2d(8.7, 25.75); // F35 
	glVertex2d(8.68, 25.73); // G35 
	glVertex2d(8.67, 25.71); // H35 
	glVertex2d(8.65, 25.68); // I35 
	glVertex2d(8.64, 25.66); // J35 
	glVertex2d(8.62, 25.63); // K35 
	glVertex2d(8.61, 25.61); // L35 
	glVertex2d(8.6, 25.58); // M35 
	glVertex2d(8.59, 25.56); // N35 
	glVertex2d(8.59, 25.53); // O35 
	glVertex2d(8.59, 25.52); // P35 
	glVertex2d(8.59, 25.5); // Q35 
	glVertex2d(8.59, 25.47); // R35 
	glVertex2d(8.58, 25.44); // S35 
	glVertex2d(8.59, 25.4); // T35 
	glVertex2d(8.6, 25.38); // U35 
	glVertex2d(8.6, 25.35); // V35 
	glVertex2d(8.62, 25.33); // W35 
	glVertex2d(8.63, 25.31); // Z35 
	glVertex2d(8.64, 25.29); // A36 
	glVertex2d(8.65, 25.28); // B36 
	glVertex2d(8.66, 25.26); // C36 
	glVertex2d(8.68, 25.24); // D36 
	glVertex2d(8.7, 25.22); // E36 
	glVertex2d(8.73, 25.2); // F36 
	glVertex2d(8.76, 25.19); // G36 
	glVertex2d(8.79, 25.19); // H36 
	glVertex2d(8.82, 25.19); // I36 
	glVertex2d(8.85, 25.19); // J36 
	glVertex2d(8.87, 25.2); // K36 
	glVertex2d(8.9, 25.22); // L36 
	glVertex2d(8.92, 25.24); // M36 
	glVertex2d(8.94, 25.27); // N36 
	glVertex2d(8.96, 25.28); // O36 
	glVertex2d(8.97, 25.3); // P36 
	glVertex2d(8.98, 25.33); // Q36 
	glVertex2d(8.99, 25.35); // R36 
	glVertex2d(9, 25.37); // S36 
	glVertex2d(9, 25.4); // T36 
	glVertex2d(9.01, 25.42); // U36 
	glVertex2d(9.01, 25.44); // V36 
	glVertex2d(9.01, 25.46); // W36 
	glVertex2d(9.02, 25.5); // Z36 
	glVertex2d(9.02, 25.52); // A37 
	glVertex2d(9.01, 25.55); // B37 
	glVertex2d(9.01, 25.58); // C37 
	glVertex2d(9, 25.6); // D37 
	glVertex2d(9, 25.62); // E37 
	glVertex2d(8.99, 25.65); // F37 
	glVertex2d(8.98, 25.66); // G37 
	glVertex2d(8.97, 25.68); // H37 
	glVertex2d(8.96, 25.69); // I37 
	glVertex2d(8.95, 25.7); // J37 
	glVertex2d(8.94, 25.72); // K37 
	glVertex2d(8.92, 25.73); // L37 
	glVertex2d(8.9, 25.75); // M37 
	glVertex2d(8.89, 25.76); // N37 
	glVertex2d(8.87, 25.77); // O37 
	glVertex2d(8.86, 25.78); // P37 
	glVertex2d(8.83, 25.78); // Q37 
	glVertex2d(8.81, 25.79); // R37 
	glVertex2d(8.79, 25.79); // S37 
	glEnd();
}


void ojoDerechoFondo() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2d(10.66, 26.76); // P32
	glVertex2d(10.79, 26.86); // Q32
	glVertex2d(10.98, 26.94); // T37
	glVertex2d(11.14, 26.98); // U37
	glVertex2d(11.33, 27); // V37
	glVertex2d(11.49, 26.98); // W37
	glVertex2d(11.65, 26.96); // Z37
	glVertex2d(11.8, 26.9); // A38
	glVertex2d(11.94, 26.85); // B38
	glVertex2d(12.09, 26.75); // C38
	glVertex2d(12.23, 26.64); // D38
	glVertex2d(12.35, 26.53); // E38
	glVertex2d(12.45, 26.4); // F38
	glVertex2d(12.53, 26.26); // G38
	glVertex2d(12.59, 26.14); // H38
	glVertex2d(12.62, 26.05); // I38
	glVertex2d(12.64, 25.92); // J38
	glVertex2d(12.64, 25.83); // K38
	glVertex2d(12.65, 25.71); // L38
	glVertex2d(12.64, 25.59); // M38
	glVertex2d(12.6, 25.46); // N38
	glVertex2d(12.55, 25.36); // O38
	glVertex2d(12.51, 25.25); // P38
	glVertex2d(12.47, 25.15); // Q38
	glVertex2d(12.39, 25.05); // R38
	glVertex2d(12.29, 24.93); // S38
	glVertex2d(12.2, 24.86); // T38
	glVertex2d(12.1, 24.78); // U38
	glVertex2d(12.01, 24.73); // V38
	glVertex2d(11.92, 24.68); // W38
	glVertex2d(11.82, 24.64); // Z38
	glVertex2d(11.73, 24.61); // A39
	glVertex2d(11.62, 24.59); // B39
	glVertex2d(11.52, 24.56); // C39
	glVertex2d(11.39, 24.56); // D39
	glVertex2d(11.3, 24.56); // E39
	glVertex2d(11.2, 24.55); // F39
	glVertex2d(11.08, 24.57); // G39
	glVertex2d(11.02, 24.58); // H39
	glVertex2d(10.93, 24.59); // I39
	glVertex2d(10.85, 24.61); // J39
	glVertex2d(10.77, 24.63); // K39
	glVertex2d(10.68, 24.65); // L39
	glVertex2d(10.6, 24.69); // M39
	glVertex2d(10.54, 24.71); // N39
	glVertex2d(10.48, 24.75); // O39
	glVertex2d(10.43, 24.8); // P39
	glVertex2d(10.38, 24.85); // Q39
	glVertex2d(10.34, 24.89); // R39
	glVertex2d(10.3, 24.94); // S39
	glVertex2d(10.27, 24.99); // T39
	glVertex2d(10.23, 25.03); // U39
	glVertex2d(10.2, 25.1); // V39
	glVertex2d(10.16, 25.17); // W39
	glVertex2d(10.14, 25.26); // Z39
	glVertex2d(10.11, 25.35); // A40
	glVertex2d(10.1, 25.42); // B40
	glVertex2d(10.09, 25.53); // C40
	glVertex2d(10.08, 25.61); // D40
	glVertex2d(10.08, 25.7); // E40
	glVertex2d(10.08, 25.78); // F40
	glVertex2d(10.1, 25.88); // G40
	glVertex2d(10.11, 26.01); // H40
	glVertex2d(10.14, 26.1); // I40
	glVertex2d(10.17, 26.2); // J40
	glVertex2d(10.22, 26.3); // K40
	glVertex2d(10.27, 26.39); // L40
	glVertex2d(10.33, 26.47); // M40
	glVertex2d(10.39, 26.54); // N40
	glVertex2d(10.46, 26.62); // O40
	glVertex2d(10.51, 26.67); // P40
	glVertex2d(10.61, 26.74); // Q40
	glEnd();
}


void ojoDerechoContorno() {
	colorNegro();
	glBegin(GL_LINE_STRIP);
	glVertex2d(10.66, 26.76); // P32
	glVertex2d(10.79, 26.86); // Q32
	glVertex2d(10.98, 26.94); // T37
	glVertex2d(11.14, 26.98); // U37
	glVertex2d(11.33, 27); // V37
	glVertex2d(11.49, 26.98); // W37
	glVertex2d(11.65, 26.96); // Z37
	glVertex2d(11.8, 26.9); // A38
	glVertex2d(11.94, 26.85); // B38
	glVertex2d(12.09, 26.75); // C38
	glVertex2d(12.23, 26.64); // D38
	glVertex2d(12.35, 26.53); // E38
	glVertex2d(12.45, 26.4); // F38
	glVertex2d(12.53, 26.26); // G38
	glVertex2d(12.59, 26.14); // H38
	glVertex2d(12.62, 26.05); // I38
	glVertex2d(12.64, 25.92); // J38
	glVertex2d(12.64, 25.83); // K38
	glVertex2d(12.65, 25.71); // L38
	glVertex2d(12.64, 25.59); // M38
	glVertex2d(12.6, 25.46); // N38
	glVertex2d(12.55, 25.36); // O38
	glVertex2d(12.51, 25.25); // P38
	glVertex2d(12.47, 25.15); // Q38
	glVertex2d(12.39, 25.05); // R38
	glVertex2d(12.29, 24.93); // S38
	glVertex2d(12.2, 24.86); // T38
	glVertex2d(12.1, 24.78); // U38
	glVertex2d(12.01, 24.73); // V38
	glVertex2d(11.92, 24.68); // W38
	glVertex2d(11.82, 24.64); // Z38
	glVertex2d(11.73, 24.61); // A39
	glVertex2d(11.62, 24.59); // B39
	glVertex2d(11.52, 24.56); // C39
	glVertex2d(11.39, 24.56); // D39
	glVertex2d(11.3, 24.56); // E39
	glVertex2d(11.2, 24.55); // F39
	glEnd();
}



void ojoDerechoFondoNegro() {
	colorNegro();
	glBegin(GL_POLYGON);
	
	glVertex2d(10.4, 25.74); // R40
	glVertex2d(10.44, 25.73); // S40
	glVertex2d(10.47, 25.71); // T40
	glVertex2d(10.5, 25.7); // U40
	glVertex2d(10.53, 25.66); // V40
	glVertex2d(10.55, 25.62); // W40
	glVertex2d(10.57, 25.58); // Z40
	glVertex2d(10.58, 25.54); // A41
	glVertex2d(10.6, 25.48); // B41
	glVertex2d(10.61, 25.44); // C41
	glVertex2d(10.61, 25.36); // D41
	glVertex2d(10.6, 25.32); // E41
	glVertex2d(10.59, 25.29); // F41
	glVertex2d(10.57, 25.26); // G41
	glVertex2d(10.56, 25.23); // H41
	glVertex2d(10.53, 25.2); // I41
	glVertex2d(10.5, 25.18); // J41
	glVertex2d(10.46, 25.16); // K41
	glVertex2d(10.43, 25.14); // L41
	glVertex2d(10.38, 25.14); // M41
	glVertex2d(10.33, 25.15); // N41
	glVertex2d(10.29, 25.17); // O41
	glVertex2d(10.27, 25.2); // P41
	glVertex2d(10.22, 25.25); // Q41
	glVertex2d(10.2, 25.3); // R41
	glVertex2d(10.18, 25.35); // S41
	glVertex2d(10.17, 25.4); // T41
	glVertex2d(10.17, 25.45); // U41
	glVertex2d(10.18, 25.5); // V41
	glVertex2d(10.18, 25.55); // W41
	glVertex2d(10.2, 25.59); // Z41
	glVertex2d(10.24, 25.65); // A42
	glVertex2d(10.3, 25.7); // B42
	glVertex2d(10.35, 25.74); // C42
	glEnd();
}


void orejaIzquierdaColor() {
	colorCuerpo();
	glBegin(GL_POLYGON);
	glVertex2d(7.29, 25.94); // C
	glVertex2d(7.33, 25.84); // D
	glVertex2d(7.35, 25.75); // E
	glVertex2d(7.38, 25.65); // F
	glVertex2d(7.39, 25.54); // G
	glVertex2d(7.39, 25.45); // H
	glVertex2d(7.4, 25.36); // I
	glVertex2d(7.39, 25.24); // J
	glVertex2d(7.39, 25.15); // K
	glVertex2d(7.37, 25.05); // L
	glVertex2d(7.33, 24.96); // M
	glVertex2d(7.29, 24.85); // N
	glVertex2d(7.24, 24.75); // O
	glVertex2d(7.17, 24.63); // P
	glVertex2d(7.09, 24.54); // Q
	glVertex2d(7, 24.6); // R
	glVertex2d(6.95, 24.65); // S
	glVertex2d(6.88, 24.74); // T
	glVertex2d(6.82, 24.85); // U
	glVertex2d(6.78, 24.94); // V
	glVertex2d(6.74, 25.05); // W
	glVertex2d(6.72, 25.15); // Z
	glVertex2d(6.71, 25.25); // A1
	glVertex2d(6.71, 25.36); // B1
	glVertex2d(6.73, 25.47); // C1
	glVertex2d(6.78, 25.56); // D1
	glVertex2d(6.83, 25.65); // E1
	glVertex2d(6.93, 25.75); // F1
	glVertex2d(7.04, 25.84); // G1
	glVertex2d(7.14, 25.91); // H1
	glVertex2d(7.23, 25.95); // I1
	glEnd();
}


void orejaIzquierdaContorno() {
	colorNegro();
	glBegin(GL_LINE_STRIP);
	glVertex2d(7.29, 25.94); // C
	glVertex2d(7.33, 25.84); // D
	glVertex2d(7.35, 25.75); // E
	glVertex2d(7.38, 25.65); // F
	glVertex2d(7.39, 25.54); // G
	glVertex2d(7.39, 25.45); // H
	glVertex2d(7.4, 25.36); // I
	glVertex2d(7.39, 25.24); // J
	glVertex2d(7.39, 25.15); // K
	glVertex2d(7.37, 25.05); // L
	glVertex2d(7.33, 24.96); // M
	glVertex2d(7.29, 24.85); // N
	glVertex2d(7.24, 24.75); // O
	glVertex2d(7.17, 24.63); // P
	glVertex2d(7.09, 24.54); // Q
	glVertex2d(7, 24.6); // R
	glVertex2d(6.95, 24.65); // S
	glVertex2d(6.88, 24.74); // T
	glVertex2d(6.82, 24.85); // U
	glVertex2d(6.78, 24.94); // V
	glVertex2d(6.74, 25.05); // W
	glVertex2d(6.72, 25.15); // Z
	glVertex2d(6.71, 25.25); // A1
	glVertex2d(6.71, 25.36); // B1
	glVertex2d(6.73, 25.47); // C1
	glVertex2d(6.78, 25.56); // D1
	glVertex2d(6.83, 25.65); // E1
	glVertex2d(6.93, 25.75); // F1
	glVertex2d(7.04, 25.84); // G1
	glVertex2d(7.14, 25.91); // H1
	glVertex2d(7.23, 25.95); // I1
	glEnd();
}



void rostroInferior() {
	colorCuerpo();
	glBegin(GL_POLYGON);
	
	
	glVertex2d(7.07, 24.45); // J1
	glVertex2d(7.02, 24.36); // K1
	glVertex2d(6.95, 24.24); // L1
	glVertex2d(6.9, 24.15); // M1
	glVertex2d(6.85, 24.04); // N1
	glVertex2d(6.8, 23.93); // O1
	glVertex2d(6.78, 23.86); // P1
	glVertex2d(6.75, 23.75); // Q1
	glVertex2d(6.76, 23.63); // R1
	glVertex2d(6.77, 23.54); // S1
	glVertex2d(6.79, 23.45); // T1
	glVertex2d(6.84, 23.35); // U1
	glVertex2d(6.91, 23.25); // V1
	glVertex2d(7.08, 23.09); // W1
	glVertex2d(7.3, 22.93); // Z1
	glVertex2d(7.46, 22.83); // A2
	glVertex2d(7.56, 22.76); // B2
	glVertex2d(7.69, 22.68); // C2
	glVertex2d(7.89, 22.58); // D2
	glVertex2d(8.08, 22.48); // E2
	glVertex2d(8.25, 22.41); // F2
	glVertex2d(8.4, 22.33); // G2
	glVertex2d(8.58, 22.27); // H2
	glVertex2d(8.77, 22.23); // I2
	glVertex2d(8.92, 22.19); // J2
	glVertex2d(9.13, 22.15); // K2
	glVertex2d(9.36, 22.13); // L2
	glVertex2d(9.52, 22.09); // M2
	glVertex2d(9.72, 22.06); // N2
	glVertex2d(9.9, 22.04); // O2
	glVertex2d(10.08, 22.05); // P2
	glVertex2d(10.3, 22.04); // Q2
	glVertex2d(10.49, 22.04); // R2
	glVertex2d(10.71, 22.06); // S2
	glVertex2d(10.9, 22.08); // T2
	glVertex2d(11.14, 22.11); // U2
	glVertex2d(11.32, 22.15); // V2
	glVertex2d(11.52, 22.21); // W2
	glVertex2d(11.73, 22.25); // Z2
	glVertex2d(11.93, 22.31); // A3
	glVertex2d(12.12, 22.37); // B3
	glVertex2d(12.29, 22.45); // C3
	glVertex2d(12.51, 22.53); // D3
	glVertex2d(12.7, 22.6); // E3
	glVertex2d(12.9, 22.72); // F3
	glVertex2d(13.09, 22.83); // G3
	glVertex2d(13.3, 22.94); // H3
	glVertex2d(13.48, 23.07); // I3
	glVertex2d(13.63, 23.21); // J3
	glVertex2d(13.68, 23.36); // K3
	glVertex2d(13.59, 23.43); // L3
	glVertex2d(13.52, 23.45); // M3
	glVertex2d(13.45, 23.48); // N3
	glVertex2d(13.42, 23.51); // O3
	glVertex2d(13.45, 23.58); // P3
	glVertex2d(13.48, 23.57); // Q3
	glVertex2d(13.51, 23.55); // R3
	glVertex2d(13.58, 23.53); // S3
	glVertex2d(13.63, 23.51); // T3
	glVertex2d(13.71, 23.46); // U3
	glVertex2d(13.84, 23.42); // V3
	glVertex2d(13.95, 23.4); // W3
	glVertex2d(14.05, 23.39); // Z3
	glVertex2d(14.2, 23.4); // A4
	glVertex2d(14.3, 23.43); // B4
	glVertex2d(14.42, 23.47); // C4
	glVertex2d(14.51, 23.53); // D4
	glVertex2d(14.63, 23.58); // E4
	glVertex2d(14.73, 23.66); // F4
	glVertex2d(14.85, 23.77); // G4
	glVertex2d(14.95, 23.86); // H4
	glVertex2d(15.06, 23.97); // I4
	glVertex2d(15.16, 24.11); // J4
	glVertex2d(15.22, 24.27); // K4
	glVertex2d(15.28, 24.46); // L4
	glVertex2d(15.31, 24.64); // M4
	glVertex2d(15.34, 24.77); // N4
	glVertex2d(15.34, 24.86); // O4
	glVertex2d(15.33, 24.95); // P4
	glVertex2d(15.32, 25.08); // Q4
	glVertex2d(15.31, 25.16); // R4
	glVertex2d(15.29, 25.25); // S4
	glVertex2d(15.25, 25.37); // T4
	glVertex2d(15.22, 25.47); // U4
	glVertex2d(15.17, 25.55); // V4
	glVertex2d(15.09, 25.62); // W4
	glVertex2d(15.01, 25.66); // Z4
	glVertex2d(14.91, 25.67); // A5
	glVertex2d(14.82, 25.66); // B5
	glVertex2d(14.74, 25.64); // C5
	glVertex2d(14.66, 25.6); // D5
	glVertex2d(14.58, 25.57); // E5
	glVertex2d(14.51, 25.53); // F5
	glVertex2d(14.43, 25.49); // G5
	glVertex2d(14.36, 25.44); // H5
	glVertex2d(14.3, 25.4); // I5
	glVertex2d(14.26, 25.37); // J5
	glVertex2d(14.2, 25.32); // K5
	glVertex2d(14.14, 25.28); // L5
	glVertex2d(14.09, 25.24); // M5
	glVertex2d(14.05, 25.2); // N5
	glVertex2d(14.01, 25.17); // O5
	glVertex2d(13.98, 25.14); // P5
	glVertex2d(13.94, 25.1); // Q5
	glVertex2d(13.91, 25.08); // R5
	glVertex2d(11.48, 24.33); // S5
	glVertex2d(10.44, 24.16); // T5
	glVertex2d(9.19, 24.15); // U5
	glVertex2d(8, 24.5); // V5
	glVertex2d(7.67, 25.01); // W5
	
	glVertex2d(7.17, 24.63); // P
	glVertex2d(7.09, 24.54); // Q
	

	glEnd();
}



void narizBoca() {
	colorNegro();
	glBegin(GL_LINE_STRIP);
	glVertex2d(8.97, 24.61); // M1 
	glVertex2d(8.89, 24.58); // N1 
	glVertex2d(8.82, 24.54); // O1 
	glVertex2d(8.76, 24.5); // P1 
	glVertex2d(8.71, 24.47); // Q1 
	glVertex2d(8.66, 24.43); // R1 
	glVertex2d(8.63, 24.38); // S1 
	glVertex2d(8.61, 24.33); // T1 
	glVertex2d(8.59, 24.26); // U1 
	glVertex2d(8.59, 24.23); // V1 
	glVertex2d(8.6, 24.18); // W1 
	glVertex2d(8.61, 24.13); // Z1 
	glVertex2d(8.63, 24.09); // A2 
	glVertex2d(8.64, 24.05); // B2 
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(8.5, 23.44); // C2 
	glVertex2d(8.6, 23.4); // D2 
	glVertex2d(8.71, 23.37); // E2 
	glVertex2d(8.81, 23.34); // F2 
	glVertex2d(8.96, 23.31); // G2 
	glVertex2d(9.09, 23.3); // H2 
	glVertex2d(9.24, 23.27); // I2 
	glVertex2d(9.4, 23.23); // J2 
	glVertex2d(9.58, 23.23); // K2 
	glVertex2d(9.73, 23.22); // L2 
	glVertex2d(9.86, 23.23); // M2 
	glVertex2d(10.03, 23.22); // N2 
	glVertex2d(10.18, 23.25); // O2 
	glVertex2d(10.39, 23.29); // P2 
	glVertex2d(10.57, 23.36); // Q2 
	glVertex2d(10.74, 23.41); // R2 
	glVertex2d(10.88, 23.45); // S2 
	glVertex2d(11.02, 23.52); // T2 
	glVertex2d(11.13, 23.6); // U2 
	glVertex2d(11.25, 23.69); // V2 
	glEnd();
}



void cejas() {
	colorNegro();
	glBegin(GL_POLYGON);
	glVertex2d(7.54, 27.47); // W2 
	glVertex2d(7.51, 27.57); // Z2 
	glVertex2d(7.52, 27.69); // A3 
	glVertex2d(7.55, 27.8); // B3 
	glVertex2d(7.57, 27.89); // C3 
	glVertex2d(7.6, 28); // D3 
	glVertex2d(7.63, 28.11); // E3 
	glVertex2d(7.67, 28.2); // F3 
	glVertex2d(7.72, 28.3); // G3 
	glVertex2d(7.8, 28.4); // H3 
	glVertex2d(7.86, 28.49); // I3 
	glVertex2d(7.92, 28.56); // J3 
	glVertex2d(7.99, 28.62); // K3 
	glVertex2d(8.09, 28.66); // L3 
	glVertex2d(8.23, 28.71); // M3 
	glVertex2d(8.31, 28.74); // N3 
	glVertex2d(8.39, 28.74); // O3 
	glVertex2d(8.48, 28.74); // P3 
	glVertex2d(8.57, 28.74); // Q3 
	glVertex2d(8.61, 28.71); // R3 
	glVertex2d(8.56, 28.21); // P4 
	glVertex2d(8.51, 28.25); // Q4 
	glVertex2d(8.46, 28.29); // R4 
	glVertex2d(8.37, 28.29); // S4 
	glVertex2d(8.31, 28.26); // T4 
	glVertex2d(8.25, 28.23); // U4 
	glVertex2d(8.18, 28.16); // V4 
	glVertex2d(8.1, 28.1); // W4 
	glVertex2d(8.06, 28.02); // Z4 
	glVertex2d(8.02, 27.94); // A5 
	glVertex2d(7.97, 27.86); // B5 
	glVertex2d(7.93, 27.78); // C5 
	glVertex2d(7.89, 27.68); // D5 
	glVertex2d(7.85, 27.6); // E5 
	glVertex2d(7.83, 27.55); // F5 
	glVertex2d(7.76, 27.51); // G5 
	glVertex2d(7.67, 27.48); // H5 
	glVertex2d(7.6, 27.45); // I5 
	glEnd();

	glBegin(GL_POLYGON);

	glVertex2d(10.49, 27.52); // J5 
	glVertex2d(10.54, 27.66); // K5 
	glVertex2d(10.6, 27.8); // L5 
	glVertex2d(10.68, 27.94); // M5 
	glVertex2d(10.76, 28.09); // N5 
	glVertex2d(10.87, 28.23); // O5 
	glVertex2d(10.99, 28.35); // P5 
	glVertex2d(11.12, 28.45); // Q5 
	glVertex2d(11.27, 28.55); // R5 
	glVertex2d(11.43, 28.62); // S5 
	glVertex2d(11.59, 28.67); // T5 
	glVertex2d(11.59, 28.17); // I7 
	glVertex2d(11.45, 28.13); // J7 
	glVertex2d(11.35, 28.09); // K7 
	glVertex2d(11.25, 28.05); // L7 
	glVertex2d(11.13, 28); // M7 
	glVertex2d(11.04, 27.94); // N7 
	glVertex2d(10.94, 27.88); // O7 
	glVertex2d(10.84, 27.81); // P7 
	glVertex2d(10.77, 27.75); // Q7 
	glVertex2d(10.71, 27.7); // R7 
	glVertex2d(10.63, 27.64); // S7 
	glVertex2d(10.57, 27.58); // T7 
	glEnd();


	glBegin(GL_POLYGON);

	glVertex2d(12.74, 28.44); // B6 
	glVertex2d(12.85, 28.38); // C6 
	glVertex2d(12.94, 28.31); // D6 
	glVertex2d(13.02, 28.24); // E6 
	glVertex2d(13.12, 28.18); // F6 
	glVertex2d(13.2, 28.11); // G6 
	glVertex2d(13.26, 28.05); // H6 
	glVertex2d(13.33, 28); // I6 
	glVertex2d(13.32, 27.89); // J6 
	glVertex2d(13.3, 27.8); // K6 
	glVertex2d(13.25, 27.72); // L6 
	glVertex2d(13.21, 27.63); // M6 
	glVertex2d(13.14, 27.54); // N6 
	glVertex2d(13.06, 27.44); // O6 
	glVertex2d(13, 27.36); // P6 
	glVertex2d(12.95, 27.32); // Q6 
	glVertex2d(12.86, 27.27); // R6 
	glVertex2d(12.79, 27.34); // S6 
	glVertex2d(12.77, 27.41); // T6 
	glVertex2d(12.73, 27.49); // U6 
	glVertex2d(12.7, 27.57); // V6 
	glVertex2d(12.65, 27.64); // W6 
	glVertex2d(12.57, 27.74); // Z6 
	glVertex2d(12.5, 27.84); // A7 
	glVertex2d(12.44, 27.9); // B7 
	glVertex2d(12.36, 27.97); // C7 
	glVertex2d(12.29, 28.02); // D7 
	glVertex2d(12.23, 28.05); // E7 
	glEnd();
}



void cuello() {
	colorCuerpo();
	glBegin(GL_POLYGON);

	glVertex2d(9.15, 22.09); // C 
	glVertex2d(9.12, 21.99); // D 
	glVertex2d(9.13, 21.84); // E 
	glVertex2d(9.03, 21.79); // F 
	glVertex2d(8.92, 21.7); // G 
	glVertex2d(8.8, 21.6); // H 
	glVertex2d(8.69, 21.51); // I 
	glVertex2d(8.57, 21.37); // J 
	glVertex2d(8.48, 21.21); // K 
	glVertex2d(8.44, 21.06); // L 
	glVertex2d(8.39, 20.86); // M 
	glVertex2d(8.39, 20.67); // N 
	glVertex2d(8.4, 20.43); // O 
	glVertex2d(8.42, 20.26); // P 
	glVertex2d(8.46, 20.1); // Q 
	glVertex2d(8.53, 19.88); // R 
	glVertex2d(8.59, 19.7); // S 
	glVertex2d(8.66, 19.53); // T 
	glVertex2d(8.74, 19.35); // U 
	glVertex2d(8.82, 19.25); // V 
	glVertex2d(8.91, 19.21); // W 
	glVertex2d(9.08, 19.29); // Z 
	glVertex2d(9.23, 19.38); // A1 
	glVertex2d(9.42, 19.5); // B1 
	glVertex2d(9.66, 19.67); // C1 
	glVertex2d(9.94, 19.83); // D1 
	glVertex2d(10.19, 19.95); // E1 
	glVertex2d(10.4, 20.1); // F1 
	glVertex2d(10.67, 20.27); // G1 
	glVertex2d(10.96, 20.42); // H1 
	glVertex2d(11.22, 20.56); // I1 
	glVertex2d(11.39, 20.69); // J1 
	glVertex2d(11.64, 20.83); // K1 
	glVertex2d(11.91, 21); // L1 
	glVertex2d(12.14, 21.15); // M1 
	glVertex2d(12.38, 21.29); // N1 
	glVertex2d(12.56, 21.44); // O1 
	glVertex2d(12.66, 21.55); // P1 
	glVertex2d(12.63, 21.71); // Q1 
	glVertex2d(12.63, 21.9); // R1 
	glVertex2d(12.6, 22.09); // S1 
	glVertex2d(12.58, 22.32); // T1 
	glVertex2d(12.57, 22.47); // U1 
	glVertex2d(12.54, 22.54); // V1 
	glEnd();
}



void polo() {
	colorRojo();
	glBegin(GL_POLYGON);

	glVertex2d(9.08, 21.89); // W1 
	glVertex2d(8.99, 21.88); // Z1 
	glVertex2d(8.83, 21.89); // A2 
	glVertex2d(8.58, 21.87); // B2 
	glVertex2d(8.31, 21.85); // C2 
	glVertex2d(7.99, 21.82); // D2 
	glVertex2d(7.74, 21.81); // E2 
	glVertex2d(7.55, 21.78); // F2 
	glVertex2d(7.33, 21.74); // G2 
	glVertex2d(7.14, 21.71); // H2 
	glVertex2d(6.99, 21.68); // I2 
	glVertex2d(6.86, 21.64); // J2 
	glVertex2d(6.7, 21.59); // K2 
	glVertex2d(6.58, 21.55); // L2 
	glVertex2d(6.5, 21.48); // M2 
	glVertex2d(6.44, 21.41); // N2 
	glVertex2d(6.4, 21.37); // O2 
	glVertex2d(6.38, 21.3); // P2 
	glVertex2d(6.35, 21.23); // Q2 
	glVertex2d(6.32, 21.11); // R2 
	glVertex2d(6.31, 21.03); // S2 
	glVertex2d(6.3, 20.9); // T2 
	glVertex2d(6.31, 20.77); // U2 
	glVertex2d(6.31, 20.66); // V2 
	glVertex2d(6.32, 20.54); // W2 
	glVertex2d(6.35, 20.45); // Z2 
	glVertex2d(6.36, 20.34); // A3 
	glVertex2d(6.39, 20.24); // B3 
	glVertex2d(6.41, 20.13); // C3 
	glVertex2d(6.44, 20.06); // D3 
	glVertex2d(6.47, 19.96); // E3 
	glVertex2d(6.51, 19.87); // F3 
	glVertex2d(6.54, 19.8); // G3 
	glVertex2d(6.51, 19.65); // H3 
	glVertex2d(6.46, 19.51); // I3 
	glVertex2d(6.38, 19.31); // J3 
	glVertex2d(6.34, 19.13); // K3 
	glVertex2d(6.27, 18.92); // L3 
	glVertex2d(6.2, 18.7); // M3 
	glVertex2d(6.13, 18.5); // N3 
	glVertex2d(6.07, 18.32); // O3 
	glVertex2d(5.98, 18.12); // P3 
	glVertex2d(5.92, 17.91); // Q3 
	glVertex2d(5.81, 17.72); // R3 
	glVertex2d(5.75, 17.55); // S3 
	glVertex2d(5.68, 17.35); // T3 
	glVertex2d(5.6, 17.16); // U3 
	glVertex2d(5.54, 16.96); // V3 
	glVertex2d(5.51, 16.76); // W3 
	glVertex2d(5.55, 16.6); // Z3 
	glVertex2d(5.63, 16.47); // A4 
	glVertex2d(5.68, 16.37); // B4 
	glVertex2d(5.64, 16.27); // C4 
	glVertex2d(5.55, 16.25); // D4 
	glVertex2d(5.58, 16.14); // E4 
	glVertex2d(5.66, 16.02); // F4 
	glVertex2d(5.72, 15.89); // G4 
	glVertex2d(5.82, 15.75); // H4 
	glVertex2d(5.94, 15.66); // I4 
	glVertex2d(6.06, 15.61); // J4 
	glVertex2d(6.2, 15.57); // K4 
	glVertex2d(6.35, 15.55); // L4 
	glVertex2d(6.47, 15.55); // M4 
	glVertex2d(6.6, 15.6); // N4 
	glVertex2d(6.74, 15.61); // O4 
	glVertex2d(6.83, 15.55); // P4 
	glVertex2d(6.91, 15.48); // Q4 
	glVertex2d(6.99, 15.42); // R4 
	glVertex2d(7.15, 15.34); // S4 
	glVertex2d(7.32, 15.3); // T4 
	glVertex2d(7.47, 15.3); // U4 
	glVertex2d(7.59, 15.34); // V4 
	glVertex2d(7.67, 15.33); // W4 
	glVertex2d(7.7, 15.28); // Z4 
	glVertex2d(7.69, 15.22); // A5 
	glVertex2d(7.76, 15.18); // B5 
	glVertex2d(7.89, 15.17); // C5 
	glVertex2d(8.02, 15.19); // D5 
	glVertex2d(8.12, 15.23); // E5 
	glVertex2d(8.22, 15.26); // F5 
	glVertex2d(8.28, 15.24); // G5 
	glVertex2d(8.31, 15.18); // H5 
	glVertex2d(8.32, 15.15); // I5 
	glVertex2d(8.38, 15.13); // J5 
	glVertex2d(8.47, 15.12); // K5 
	glVertex2d(8.62, 15.12); // L5 
	glVertex2d(8.8, 15.12); // M5 
	glVertex2d(8.95, 15.12); // N5 
	glVertex2d(9.17, 15.13); // O5 
	glVertex2d(9.58, 15.1); // P5 
	glVertex2d(9.82, 15.1); // Q5 
	glVertex2d(10.1, 15.1); // R5 
	glVertex2d(10.38, 15.09); // S5 
	glVertex2d(10.76, 15.1); // T5 
	glVertex2d(11.3, 15.1); // U5 
	glVertex2d(11.68, 15.12); // V5 
	glVertex2d(11.95, 15.11); // W5 
	glVertex2d(12.3, 15.15); // Z5 
	glVertex2d(12.49, 15.14); // A6 
	glVertex2d(12.7, 15.17); // B6 
	glVertex2d(12.85, 15.18); // C6 
	glVertex2d(13, 15.21); // D6 
	glVertex2d(13.18, 15.24); // E6 
	glVertex2d(13.36, 15.27); // F6 
	glVertex2d(13.56, 15.32); // G6 
	glVertex2d(13.72, 15.39); // H6 
	glVertex2d(13.93, 15.43); // I6 
	glVertex2d(14.08, 15.48); // J6 
	glVertex2d(14.26, 15.56); // K6 
	glVertex2d(14.39, 15.64); // L6 
	glVertex2d(14.5, 15.74); // M6 
	glVertex2d(14.6, 15.83); // N6 
	glVertex2d(14.69, 15.92); // O6 
	glVertex2d(14.76, 16); // P6 
	glVertex2d(14.78, 16.09); // Q6 
	glVertex2d(14.73, 16.22); // R6 
	glVertex2d(14.64, 16.39); // S6 
	glVertex2d(14.53, 16.54); // T6 
	glVertex2d(14.47, 16.65); // U6 
	glVertex2d(14.42, 16.78); // V6 
	glVertex2d(14.38, 16.9); // W6 
	glVertex2d(14.34, 17.05); // Z6 
	glVertex2d(14.26, 17.11); // A7 
	glVertex2d(14.14, 17.17); // B7 
	glVertex2d(13.96, 17.28); // C7 
	glVertex2d(13.83, 17.45); // D7 
	glVertex2d(13.75, 17.61); // E7 
	glVertex2d(13.69, 17.79); // F7 
	glVertex2d(13.69, 17.96); // G7 
	glVertex2d(13.7, 18.22); // H7 
	glVertex2d(13.75, 18.46); // I7 
	glVertex2d(13.79, 18.63); // J7 
	glVertex2d(13.88, 18.86); // K7 
	glVertex2d(14.05, 19.1); // L7 
	glVertex2d(14.14, 19.27); // M7 
	glVertex2d(14.27, 19.48); // N7 
	glVertex2d(14.41, 19.67); // O7 
	glVertex2d(14.54, 19.86); // P7 
	glVertex2d(14.71, 20.01); // Q7 
	glVertex2d(14.85, 20.18); // R7 
	glVertex2d(15, 20.33); // S7 
	glVertex2d(15.22, 20.46); // T7 
	glVertex2d(15.35, 20.56); // U7 
	glVertex2d(15.58, 20.64); // V7 
	glVertex2d(15.78, 20.67); // W7 
	glVertex2d(15.96, 20.68); // Z7 
	glVertex2d(16.11, 20.67); // A8 
	glVertex2d(16.24, 20.66); // B8 
	glVertex2d(16.17, 20.8); // C8 
	glVertex2d(16.07, 20.93); // D8 
	glVertex2d(15.88, 21.07); // E8 
	glVertex2d(15.72, 21.2); // F8 
	glVertex2d(15.52, 21.29); // G8 
	glVertex2d(15.34, 21.37); // H8 
	glVertex2d(15.13, 21.43); // I8 
	glVertex2d(14.88, 21.47); // J8 
	glVertex2d(14.62, 21.54); // K8 
	glVertex2d(14.35, 21.59); // L8 
	glVertex2d(14.08, 21.67); // M8 
	glVertex2d(13.82, 21.74); // N8 
	glVertex2d(13.6, 21.85); // O8 
	glVertex2d(13.45, 21.97); // P8 
	glVertex2d(13.38, 22.08); // Q8 
	glVertex2d(13.35, 22.2); // R8 
	glVertex2d(13.26, 22.28); // S8 
	glVertex2d(13.12, 22.31); // T8 
	glVertex2d(12.96, 22.33); // U8 
	glVertex2d(12.81, 22.32); // V8 
	glVertex2d(12.65, 22.33); // W8 
	glEnd();
}



void brazoIzquierdo() {
	colorCuerpo();
	glBegin(GL_POLYGON);
	glVertex2d(6.28, 20.9); // C
	glVertex2d(6.15, 20.81); // D
	glVertex2d(6.02, 20.7); // E
	glVertex2d(5.9, 20.57); // F
	glVertex2d(5.79, 20.46); // G
	glVertex2d(5.69, 20.34); // H
	glVertex2d(5.6, 20.2); // I
	glVertex2d(5.54, 20.03); // J
	glVertex2d(5.52, 19.89); // K
	glVertex2d(5.49, 19.72); // L
	glVertex2d(5.45, 19.57); // M
	glVertex2d(5.4, 19.44); // N
	glVertex2d(5.33, 19.26); // O
	glVertex2d(5.26, 19.13); // P
	glVertex2d(5.21, 18.96); // Q
	glVertex2d(5.16, 18.84); // R
	glVertex2d(5.1, 18.69); // S
	glVertex2d(5.05, 18.53); // T
	glVertex2d(5, 18.4); // U
	glVertex2d(4.93, 18.24); // V
	glVertex2d(4.88, 18.1); // W
	glVertex2d(4.83, 17.92); // Z
	glVertex2d(4.77, 17.75); // A1
	glVertex2d(4.73, 17.62); // B1
	glVertex2d(4.7, 17.47); // C1
	glVertex2d(4.63, 17.27); // D1
	glVertex2d(4.6, 17.06); // E1
	glVertex2d(4.58, 16.86); // F1 
	glVertex2d(4.54, 16.66); // G1 
	glVertex2d(4.52, 16.49); // H1 
	glVertex2d(4.5, 16.31); // I1 
	glVertex2d(4.47, 16.15); // J1 
	glVertex2d(4.52, 16.05); // K1 
	glVertex2d(4.65, 15.92); // L1 
	glVertex2d(4.83, 15.84); // M1 
	glVertex2d(5.04, 15.78); // N1 
	glVertex2d(5.25, 15.75); // O1 
	glVertex2d(5.44, 15.73); // P1 
	glVertex2d(5.62, 15.73); // Q1 
	glVertex2d(5.79, 15.74); // R1 
	glVertex2d(5.74, 15.85); // S1 
	glVertex2d(5.7, 15.93); // T1 
	glVertex2d(5.65, 16.01); // U1 
	glVertex2d(5.59, 16.13); // V1 
	glVertex2d(5.56, 16.23); // W1 
	glVertex2d(5.55, 16.26); // Z1 
	glVertex2d(5.6, 16.3); // A2 
	glVertex2d(5.66, 16.29); // B2 
	glVertex2d(5.7, 16.34); // C2 
	glVertex2d(5.7, 16.4); // D2 
	glVertex2d(5.66, 16.45); // E2 
	glVertex2d(5.61, 16.53); // F2 
	glVertex2d(5.54, 16.66); // G2 
	glVertex2d(5.51, 16.77); // H2 
	glVertex2d(5.51, 16.93); // I2 
	glVertex2d(5.57, 17.06); // J2 
	glVertex2d(5.63, 17.21); // K2 
	glVertex2d(5.69, 17.38); // L2 
	glVertex2d(5.75, 17.52); // M2 
	glVertex2d(5.8, 17.68); // N2 
	glVertex2d(5.88, 17.87); // O2 
	glVertex2d(5.96, 18.1); // P2 
	glVertex2d(6.04, 18.3); // Q2 
	glVertex2d(6.1, 18.48); // R2 
	glVertex2d(6.2, 18.69); // S2 
	glVertex2d(6.28, 18.93); // T2 
	glVertex2d(6.34, 19.13); // U2 
	glVertex2d(6.41, 19.35); // V2 
	glVertex2d(6.47, 19.51); // W2 
	glVertex2d(6.53, 19.68); // Z2 
	glVertex2d(6.55, 19.8); // A3 
	glVertex2d(6.49, 19.87); // B3 
	glVertex2d(6.46, 19.95); // C3 
	glVertex2d(6.41, 20.08); // D3 
	glVertex2d(6.38, 20.21); // E3 
	glVertex2d(6.33, 20.38); // F3 
	glVertex2d(6.32, 20.53); // G3 
	glVertex2d(6.29, 20.72); // H3 
	glVertex2d(6.3, 20.83); // I3 
	glEnd();
}



void brazoIzquierdoMunequera() {
	colorAzul();
	glBegin(GL_POLYGON);

	glVertex2d(4.4, 16.07); // J3 
	glVertex2d(4.4, 15.91); // K3 
	glVertex2d(4.39, 15.71); // L3 
	glVertex2d(4.41, 15.49); // M3 
	glVertex2d(4.42, 15.31); // N3 
	glVertex2d(4.4, 15.09); // O3 
	glVertex2d(4.46, 14.91); // P3 
	glVertex2d(4.62, 14.76); // Q3 
	glVertex2d(4.81, 14.71); // R3 
	glVertex2d(4.99, 14.7); // S3 
	glVertex2d(5.14, 14.72); // T3 
	glVertex2d(5.28, 14.72); // U3 
	glVertex2d(5.44, 14.7); // V3 
	glVertex2d(5.55, 14.66); // W3 
	glVertex2d(5.61, 14.75); // Z3 
	glVertex2d(5.68, 14.86); // A4 
	glVertex2d(5.8, 15); // B4 
	glVertex2d(5.85, 15.1); // C4 
	glVertex2d(5.95, 15.21); // D4 
	glVertex2d(5.98, 15.3); // E4 
	glVertex2d(5.94, 15.41); // F4 
	glVertex2d(5.91, 15.52); // G4 
	glVertex2d(5.87, 15.61); // H4 
	glVertex2d(5.84, 15.67); // I4
	glEnd();
}



void BrazoIzquierdInferior() {
	colorCuerpo();
	glBegin(GL_POLYGON);


	glVertex2d(4.36, 14.89); // J4 
	glVertex2d(4.24, 14.77); // K4 
	glVertex2d(4.13, 14.71); // L4 
	glVertex2d(4.06, 14.63); // M4 
	glVertex2d(3.94, 14.52); // N4 
	glVertex2d(3.86, 14.42); // O4 
	glVertex2d(3.79, 14.32); // P4 
	glVertex2d(3.76, 14.15); // Q4 
	glVertex2d(3.73, 13.97); // R4 
	glVertex2d(3.75, 13.84); // S4 
	glVertex2d(3.74, 13.69); // T4 
	glVertex2d(3.78, 13.49); // U4 
	glVertex2d(3.8, 13.31); // V4 
	glVertex2d(3.86, 13.13); // W4 
	glVertex2d(3.95, 12.96); // Z4 
	glVertex2d(4.08, 12.88); // A5 
	glVertex2d(4.23, 12.81); // B5 
	glVertex2d(4.4, 12.76); // C5 
	glVertex2d(4.55, 12.73); // D5 
	glVertex2d(4.73, 12.76); // E5 
	glVertex2d(4.91, 12.8); // F5 
	glVertex2d(5.07, 12.84); // G5 
	glVertex2d(5.07, 12.97); // H5 
	glVertex2d(5.06, 13.11); // I5 
	glVertex2d(5.07, 13.29); // J5 
	glVertex2d(5.13, 13.44); // K5 
	glVertex2d(5.21, 13.57); // L5 
	glVertex2d(5.2, 13.75); // M5 
	glVertex2d(5.22, 13.91); // N5 
	glVertex2d(5.27, 14.05); // O5 
	glVertex2d(5.33, 14.23); // P5 
	glVertex2d(5.43, 14.39); // Q5 
	glVertex2d(5.48, 14.52); // R5 
	glVertex2d(5.55, 14.66); // W3 
	glEnd();
}



void brazoDerechoSuperior() {
	colorCuerpo();
	glBegin(GL_POLYGON);

	glVertex2d(16.22, 20.65); // S5 
	glVertex2d(16.08, 20.68); // T5 
	glVertex2d(15.9, 20.69); // U5 
	glVertex2d(15.68, 20.68); // V5 
	glVertex2d(15.49, 20.62); // W5 
	glVertex2d(15.31, 20.54); // Z5 
	glVertex2d(15.12, 20.43); // A6 
	glVertex2d(14.94, 20.3); // B6 
	glVertex2d(14.8, 20.15); // C6 
	glVertex2d(14.67, 20.02); // D6 
	glVertex2d(14.57, 19.89); // E6 
	glVertex2d(14.44, 19.72); // F6 
	glVertex2d(14.3, 19.52); // G6 
	glVertex2d(14.2, 19.33); // H6 
	glVertex2d(14.08, 19.18); // I6 
	glVertex2d(13.97, 19); // J6 
	glVertex2d(13.9, 18.81); // K6 
	glVertex2d(13.8, 18.6); // L6 
	glVertex2d(13.77, 18.43); // M6 
	glVertex2d(13.71, 18.22); // N6 
	glVertex2d(13.7, 18.06); // O6 
	glVertex2d(13.68, 17.9); // P6 
	glVertex2d(13.72, 17.68); // Q6 
	glVertex2d(13.77, 17.52); // R6 
	glVertex2d(13.84, 17.42); // S6 
	glVertex2d(13.92, 17.31); // T6 
	glVertex2d(13.99, 17.23); // U6 
	glVertex2d(14.11, 17.16); // V6 
	glVertex2d(14.22, 17.1); // W6 
	glVertex2d(14.33, 17.06); // Z6 
	glVertex2d(14.39, 16.91); // A7 
	glVertex2d(14.44, 16.78); // B7 
	glVertex2d(14.48, 16.68); // C7 
	glVertex2d(14.56, 16.53); // D7 
	glVertex2d(14.6, 16.4); // E7 
	glVertex2d(14.66, 16.31); // F7 
	glVertex2d(14.72, 16.21); // G7 
	glVertex2d(14.76, 16.13); // H7 
	glVertex2d(14.79, 16.03); // I7 
	glVertex2d(14.81, 15.89); // J7 
	glVertex2d(14.86, 15.73); // K7 
	glVertex2d(14.9, 15.63); // L7 
	glVertex2d(14.94, 15.5); // M7 
	glVertex2d(15, 15.4); // N7 
	glVertex2d(15.07, 15.28); // O7 
	glVertex2d(15.12, 15.18); // P7 
	glVertex2d(15.17, 15.12); // Q7 
	glVertex2d(15.28, 15.2); // R7 
	glVertex2d(15.4, 15.29); // S7 
	glVertex2d(15.51, 15.38); // T7 
	glVertex2d(15.64, 15.48); // U7 
	glVertex2d(15.8, 15.57); // V7 
	glVertex2d(15.96, 15.64); // W7 
	glVertex2d(16.09, 15.71); // Z7 
	glVertex2d(16.22, 15.76); // A8 
	glVertex2d(16.4, 15.8); // B8 
	glVertex2d(16.63, 15.82); // C8 
	glVertex2d(16.84, 15.82); // D8 
	glVertex2d(17.06, 15.83); // E8 
	glVertex2d(17.28, 15.8); // F8 
	glVertex2d(17.48, 15.78); // G8 
	glVertex2d(17.64, 15.75); // H8 
	glVertex2d(17.79, 15.71); // I8 
	glVertex2d(17.92, 15.68); // J8 
	glVertex2d(18, 15.66); // K8 
	glVertex2d(18, 15.8); // L8 
	glVertex2d(18, 16); // M8 
	glVertex2d(18, 16.2); // N8 
	glVertex2d(17.98, 16.37); // O8 
	glVertex2d(17.97, 16.56); // P8 
	glVertex2d(17.95, 16.75); // Q8 
	glVertex2d(17.95, 16.95); // R8 
	glVertex2d(17.91, 17.17); // S8 
	glVertex2d(17.86, 17.44); // T8 
	glVertex2d(17.81, 17.7); // U8 
	glVertex2d(17.76, 17.89); // V8 
	glVertex2d(17.7, 18.16); // W8 
	glVertex2d(17.64, 18.34); // Z8 
	glVertex2d(17.54, 18.55); // A9 
	glVertex2d(17.4, 18.8); // B9 
	glVertex2d(17.31, 18.97); // C9 
	glVertex2d(17.2, 19.2); // D9 
	glVertex2d(17.12, 19.43); // E9 
	glVertex2d(17, 19.6); // F9 
	glVertex2d(16.89, 19.85); // G9 
	glVertex2d(16.8, 20); // H9 
	glVertex2d(16.63, 20.24); // I9 
	glVertex2d(16.53, 20.38); // J9 
	glVertex2d(16.39, 20.51); // K9 
	glEnd();
}



void brazoDerechoMunequera() {
	colorAzul();
	glBegin(GL_POLYGON);

	glVertex2d(15.15, 15.04); // L9 
	glVertex2d(15.17, 14.92); // M9 
	glVertex2d(15.2, 14.8); // N9 
	glVertex2d(15.23, 14.68); // O9 
	glVertex2d(15.31, 14.54); // P9 
	glVertex2d(15.4, 14.4); // Q9 
	glVertex2d(15.48, 14.27); // R9 
	glVertex2d(15.55, 14.17); // S9 
	glVertex2d(15.6, 14.09); // T9 
	glVertex2d(15.72, 14.17); // U9 
	glVertex2d(15.9, 14.29); // V9 
	glVertex2d(16.05, 14.32); // W9 
	glVertex2d(16.31, 14.43); // Z9 
	glVertex2d(16.52, 14.48); // A10 
	glVertex2d(16.67, 14.52); // B10 
	glVertex2d(16.92, 14.55); // C10 
	glVertex2d(17.08, 14.56); // D10 
	glVertex2d(17.29, 14.56); // E10 
	glVertex2d(17.48, 14.53); // F10 
	glVertex2d(17.67, 14.5); // G10 
	glVertex2d(17.8, 14.4); // H10 
	glVertex2d(17.91, 14.37); // I10 
	glVertex2d(17.95, 14.51); // J10 
	glVertex2d(17.97, 14.7); // K10 
	glVertex2d(18.02, 14.88); // L10 
	glVertex2d(18.02, 15.1); // M10 
	glVertex2d(18.03, 15.33); // N10 
	glVertex2d(18.04, 15.51); // O10 


	glVertex2d(18, 15.66); // K8 
	glVertex2d(17.92, 15.68); // J8 
	glVertex2d(17.79, 15.71); // I8 
	glVertex2d(17.64, 15.75); // H8 
	glVertex2d(17.48, 15.78); // G8 
	glVertex2d(17.28, 15.8); // F8 
	glVertex2d(17.06, 15.83); // E8 
	glVertex2d(16.84, 15.82); // D8 
	glVertex2d(16.63, 15.82); // C8 
	glVertex2d(16.4, 15.8); // B8 
	glVertex2d(16.22, 15.76); // A8 
	glVertex2d(16.09, 15.71); // Z7 
	glVertex2d(15.96, 15.64); // W7 
	glVertex2d(15.8, 15.57); // V7 
	glVertex2d(15.64, 15.48); // U7 
	glVertex2d(15.51, 15.38); // T7 
	glVertex2d(15.4, 15.29); // S7 
	glVertex2d(15.28, 15.2); // R7 
	glVertex2d(15.17, 15.12); // Q7 
	glEnd();
}




void brazoDerechoInferior() {
	colorCuerpo();
	glBegin(GL_POLYGON);

	glVertex2d(15.48, 13.98); // P10 
	glVertex2d(15.37, 13.87); // Q10 
	glVertex2d(15.26, 13.72); // R10 
	glVertex2d(15.14, 13.57); // S10 
	glVertex2d(15.06, 13.41); // T10 
	glVertex2d(15.01, 13.32); // U10 
	glVertex2d(14.97, 13.17); // V10 
	glVertex2d(14.95, 12.98); // W10 
	glVertex2d(15.03, 12.82); // Z10 
	glVertex2d(15.15, 12.72); // A11 
	glVertex2d(15.3, 12.66); // B11 
	glVertex2d(15.43, 12.62); // C11 
	glVertex2d(15.54, 12.61); // D11 
	glVertex2d(15.52, 12.51); // E11 
	glVertex2d(15.54, 12.35); // F11 
	glVertex2d(15.63, 12.18); // G11 
	glVertex2d(15.72, 12.08); // H11 
	glVertex2d(15.9, 12.01); // I11 
	glVertex2d(16.05, 12.01); // J11 
	glVertex2d(16.28, 12.03); // K11 
	glVertex2d(16.44, 12.07); // L11 
	glVertex2d(16.59, 12.13); // M11 
	glVertex2d(16.71, 12.18); // N11 
	glVertex2d(16.81, 12.11); // O11 
	glVertex2d(16.94, 12.08); // P11 
	glVertex2d(17.12, 12.11); // Q11 
	glVertex2d(17.28, 12.17); // R11 
	glVertex2d(17.42, 12.26); // S11 
	glVertex2d(17.53, 12.38); // T11 
	glVertex2d(17.71, 12.47); // U11 
	glVertex2d(17.8, 12.6); // V11 
	glVertex2d(17.91, 12.73); // W11 
	glVertex2d(17.96, 12.9); // Z11 
	glVertex2d(17.99, 13.15); // A12 
	glVertex2d(18, 13.4); // B12 
	glVertex2d(17.96, 13.58); // C12 
	glVertex2d(17.95, 13.77); // D12 
	glVertex2d(17.93, 13.93); // E12 
	glVertex2d(17.89, 14.09); // F12 
	glVertex2d(17.85, 14.28); // G12 


	glVertex2d(17.8, 14.4); // H10 
	glVertex2d(17.67, 14.5); // G10 
	glVertex2d(17.48, 14.53); // F10 
	glVertex2d(17.29, 14.56); // E10 
	glVertex2d(17.08, 14.56); // D10 
	glVertex2d(16.92, 14.55); // C10 
	glVertex2d(16.67, 14.52); // B10 
	glVertex2d(16.52, 14.48); // A10 
	glVertex2d(16.31, 14.43); // Z9 
	glVertex2d(16.05, 14.32); // W9 
	glVertex2d(15.9, 14.29); // V9 
	glVertex2d(15.72, 14.17); // U9 
	glVertex2d(15.6, 14.09); // T9 
								
	
	glEnd();
}



void correa() {
	colorNegro();
	glBegin(GL_POLYGON);
	


	glVertex2d(5.8, 15.8); // C 
	glVertex2d(5.83, 15.68); // D 
	glVertex2d(5.88, 15.56); // E 
	glVertex2d(5.91, 15.46); // F 
	glVertex2d(5.94, 15.36); // G 
	glVertex2d(5.98, 15.29); // H 
	glVertex2d(6.07, 15.23); // I 
	glVertex2d(6.17, 15.19); // J 
	glVertex2d(6.28, 15.13); // K 
	glVertex2d(6.37, 15.09); // L 
	glVertex2d(6.5, 15.04); // M 
	glVertex2d(6.59, 15.01); // N 
	glVertex2d(6.7, 14.97); // O 
	glVertex2d(6.79, 14.93); // P 
	glVertex2d(6.9, 14.9); // Q 
	glVertex2d(6.99, 14.87); // R 
	glVertex2d(7.11, 14.84); // S 
	glVertex2d(7.2, 14.8); // T 
	glVertex2d(7.3, 14.77); // U 
	glVertex2d(7.41, 14.75); // V 
	glVertex2d(7.5, 14.73); // W 
	glVertex2d(7.64, 14.69); // Z 
	glVertex2d(7.76, 14.66); // A1 
	glVertex2d(8, 14.6); // B1 
	glVertex2d(8.2, 14.55); // C1 
	glVertex2d(8.4, 14.49); // D1 
	glVertex2d(8.55, 14.46); // E1 
	glVertex2d(8.64, 14.44); // F1 
	glVertex2d(8.76, 14.46); // G1 
	glVertex2d(8.87, 14.47); // H1 
	glVertex2d(9.01, 14.49); // I1 
	glVertex2d(9.16, 14.5); // J1 
	glVertex2d(9.27, 14.48); // K1 
	glVertex2d(9.36, 14.46); // L1 
	glVertex2d(9.46, 14.45); // M1 
	glVertex2d(9.56, 14.43); // N1 
	glVertex2d(9.66, 14.42); // O1 
	glVertex2d(9.8, 14.4); // P1 
	glVertex2d(9.92, 14.41); // Q1 
	glVertex2d(10.1, 14.4); // R1 
	glVertex2d(10.27, 14.39); // S1 
	glVertex2d(10.51, 14.38); // T1 
	glVertex2d(10.74, 14.4); // U1 
	glVertex2d(10.97, 14.39); // V1 
	glVertex2d(11.25, 14.4); // W1 
	glVertex2d(11.6, 14.44); // Z1 
	glVertex2d(11.89, 14.47); // A2 
	glVertex2d(12.16, 14.5); // B2 
	glVertex2d(12.45, 14.55); // C2 
	glVertex2d(12.71, 14.59); // D2 
	glVertex2d(12.94, 14.63); // E2 
	glVertex2d(13.23, 14.68); // F2 
	glVertex2d(13.44, 14.72); // G2 
	glVertex2d(13.58, 14.76); // H2 
	glVertex2d(13.72, 14.8); // I2 
	glVertex2d(13.81, 14.84); // J2 
	glVertex2d(13.92, 14.91); // K2 
	glVertex2d(14, 14.94); // L2 
	glVertex2d(14.08, 14.98); // M2 
	glVertex2d(14.16, 15.05); // N2 
	glVertex2d(14.23, 15.11); // O2 
	glVertex2d(14.29, 15.19); // P2 
	glVertex2d(14.33, 15.24); // Q2 
	glVertex2d(14.38, 15.31); // R2 
	glVertex2d(14.42, 15.39); // S2 
	glVertex2d(14.39, 15.44); // T2 
	glVertex2d(14.37, 15.47); // U2 
	glVertex2d(14.35, 15.52); // V2 
	glVertex2d(14.32, 15.55); // W2 
	glVertex2d(14.28, 15.6); // Z2 
	glVertex2d(14.25, 15.58); // A3 
	glVertex2d(14.22, 15.55); // B3 
	glVertex2d(14.16, 15.52); // C3 
	glVertex2d(14.1, 15.5); // D3 
	glVertex2d(14.01, 15.45); // E3 
	glVertex2d(13.91, 15.43); // F3 
	glVertex2d(13.81, 15.39); // G3 
	glVertex2d(13.74, 15.36); // H3 
	glVertex2d(13.62, 15.33); // I3 
	glVertex2d(13.48, 15.3); // J3 
	glVertex2d(13.36, 15.27); // K3 
	glVertex2d(13.22, 15.23); // L3 
	glVertex2d(13.1, 15.22); // M3 
	glVertex2d(12.98, 15.2); // N3 
	glVertex2d(12.83, 15.2); // O3 
	glVertex2d(12.69, 15.17); // P3 
	glVertex2d(12.56, 15.15); // Q3 
	glVertex2d(12.45, 15.14); // R3 
	glVertex2d(12.32, 15.11); // S3 
	glVertex2d(12.2, 15.1); // T3 
	glVertex2d(12.04, 15.1); // U3 
	glVertex2d(11.93, 15.1); // V3 
	glVertex2d(11.75, 15.1); // W3 
	glVertex2d(11.62, 15.09); // Z3 
	glVertex2d(11.45, 15.09); // A4 
	glVertex2d(11.32, 15.09); // B4 
	glVertex2d(11.16, 15.1); // C4 
	glVertex2d(11.05, 15.09); // D4 
	glVertex2d(10.86, 15.09); // E4 
	glVertex2d(10.65, 15.09); // F4 
	glVertex2d(10.47, 15.08); // G4 
	glVertex2d(10.24, 15.09); // H4 
	glVertex2d(10.05, 15.09); // I4 
	glVertex2d(9.86, 15.1); // J4 
	glVertex2d(9.66, 15.1); // K4 
	glVertex2d(9.46, 15.1); // L4 
	glVertex2d(9.34, 15.09); // M4 
	glVertex2d(9.25, 15.1); // N4 
	glVertex2d(9.06, 15.1); // O4 
	glVertex2d(8.87, 15.11); // P4 
	glVertex2d(8.72, 15.11); // Q4 
	glVertex2d(8.59, 15.12); // R4 
	glVertex2d(8.42, 15.12); // S4 
	glVertex2d(8.34, 15.13); // T4 
	glVertex2d(8.32, 15.18); // U4 
	glVertex2d(8.31, 15.24); // V4 
	glVertex2d(8.27, 15.26); // W4 
	glVertex2d(8.21, 15.26); // Z4 
	glVertex2d(8.15, 15.23); // A5 
	glVertex2d(8.11, 15.21); // B5 
	glVertex2d(8.03, 15.2); // C5 
	glVertex2d(7.95, 15.18); // D5 
	glVertex2d(7.82, 15.18); // E5 
	glVertex2d(7.76, 15.19); // F5 
	glVertex2d(7.7, 15.22); // G5 
	glVertex2d(7.7, 15.27); // H5 
	glVertex2d(7.69, 15.31); // I5 
	glVertex2d(7.66, 15.34); // J5 
	glVertex2d(7.61, 15.35); // K5 
	glVertex2d(7.57, 15.33); // L5 
	glVertex2d(7.52, 15.33); // M5 
	glVertex2d(7.42, 15.31); // N5 
	glVertex2d(7.31, 15.31); // O5 
	glVertex2d(7.25, 15.32); // P5 
	glVertex2d(7.13, 15.36); // Q5 
	glVertex2d(7.02, 15.4); // R5 
	glVertex2d(6.95, 15.44); // S5 
	glVertex2d(6.88, 15.5); // T5 
	glVertex2d(6.8, 15.57); // U5 
	glVertex2d(6.75, 15.6); // V5 
	glVertex2d(6.69, 15.61); // W5 
	glVertex2d(6.63, 15.61); // Z5 
	glVertex2d(6.56, 15.6); // A6 
	glVertex2d(6.46, 15.57); // B6 
	glVertex2d(6.36, 15.56); // C6 
	glVertex2d(6.26, 15.55); // D6 
	glVertex2d(6.18, 15.6); // E6 
	glVertex2d(6.08, 15.64); // F6 
	glVertex2d(6, 15.7); // G6 
	glVertex2d(5.95, 15.73); // H6 
	glVertex2d(5.87, 15.77); // I6 


	glEnd();
}


void correaLazoIzqu() {
	colorNegro();
	glBegin(GL_POLYGON);
	glVertex2d(7.64, 14.69); // Z 
	glVertex2d(7.6, 14.6); // J6 
	glVertex2d(7.53, 14.5); // K6 
	glVertex2d(7.48, 14.43); // L6 
	glVertex2d(7.45, 14.36); // M6 
	glVertex2d(7.38, 14.25); // N6 
	glVertex2d(7.34, 14.16); // O6 
	glVertex2d(7.29, 14.05); // P6 
	glVertex2d(7.24, 13.96); // Q6 
	glVertex2d(7.18, 13.84); // R6 
	glVertex2d(7.15, 13.74); // S6 
	glVertex2d(7.12, 13.65); // T6 
	glVertex2d(7.08, 13.55); // U6 
	glVertex2d(7.06, 13.45); // V6 
	glVertex2d(7.03, 13.35); // W6 
	glVertex2d(6.99, 13.25); // Z6 
	glVertex2d(6.97, 13.1); // A7 
	glVertex2d(6.93, 12.92); // B7 
	glVertex2d(6.89, 12.74); // C7 
	glVertex2d(6.85, 12.51); // D7 
	glVertex2d(6.84, 12.32); // E7 
	glVertex2d(6.83, 12.12); // F7 
	glVertex2d(6.8, 12); // G7 
	glVertex2d(6.81, 11.87); // H7 
	glVertex2d(6.8, 11.76); // I7 
	glVertex2d(6.81, 11.67); // J7 
	glVertex2d(6.93, 11.64); // K7 
	glVertex2d(7.08, 11.59); // L7 
	glVertex2d(7.2, 11.54); // M7 
	glVertex2d(7.33, 11.5); // N7 
	glVertex2d(7.44, 11.46); // O7 
	glVertex2d(7.56, 11.4); // P7 
	glVertex2d(7.67, 11.37); // Q7 
	glVertex2d(7.85, 11.29); // R7 
	glVertex2d(7.85, 11.41); // S7 
	glVertex2d(7.85, 11.56); // T7 
	glVertex2d(7.86, 11.72); // U7 
	glVertex2d(7.87, 11.86); // V7 
	glVertex2d(7.87, 12.04); // W7 
	glVertex2d(7.87, 12.26); // Z7 
	glVertex2d(7.9, 12.48); // A8 
	glVertex2d(7.91, 12.66); // B8 
	glVertex2d(7.94, 12.87); // C8 
	glVertex2d(7.95, 13.04); // D8 
	glVertex2d(7.99, 13.23); // E8 
	glVertex2d(8.03, 13.43); // F8 
	glVertex2d(8.08, 13.61); // G8 
	glVertex2d(8.13, 13.81); // H8 
	glVertex2d(8.18, 13.96); // I8 
	glVertex2d(8.23, 14.07); // J8 
	glVertex2d(8.28, 14.18); // K8 
	glVertex2d(8.35, 14.31); // L8 
	glVertex2d(8.43, 14.41); // M8 
	glVertex2d(8.53, 14.42); // N8 
	glVertex2d(8.55, 14.46); // E1 
	glEnd();
}



void correaLazoDere() {
	colorNegro();
	glBegin(GL_POLYGON);
	glVertex2d(8.64, 14.49); // F1 
	glVertex2d(8.64, 14.4); // O8 
	glVertex2d(8.64, 14.35); // P8 
	glVertex2d(8.64, 14.26); // Q8 
	glVertex2d(8.63, 14.14); // R8 
	glVertex2d(8.63, 13.92); // S8 
	glVertex2d(8.62, 13.7); // T8 
	glVertex2d(8.6, 13.47); // U8 
	glVertex2d(8.6, 13.28); // V8 
	glVertex2d(8.6, 13.09); // W8 
	glVertex2d(8.62, 12.88); // Z8 
	glVertex2d(8.62, 12.7); // A9 
	glVertex2d(8.64, 12.5); // B9 
	glVertex2d(8.64, 12.3); // C9 
	glVertex2d(8.66, 12.09); // D9 
	glVertex2d(8.69, 11.9); // E9 
	glVertex2d(8.71, 11.71); // F9 
	glVertex2d(8.72, 11.52); // G9 
	glVertex2d(8.73, 11.33); // H9 
	glVertex2d(8.77, 11.11); // I9 
	glVertex2d(8.8, 10.93); // J9 
	glVertex2d(8.84, 10.73); // K9 
	glVertex2d(8.89, 10.53); // L9 
	glVertex2d(8.94, 10.37); // M9
	glVertex2d(8.97, 10.23); // N9
	glVertex2d(9.03, 10.12); // O9
	glVertex2d(9.08, 10.05); // P9
	glVertex2d(9.11, 10.09); // Q9
	glVertex2d(9.15, 10.13); // R9
	glVertex2d(9.2, 10.17); // S9
	glVertex2d(9.27, 10.21); // T9
	glVertex2d(9.33, 10.25); // U9
	glVertex2d(9.4, 10.26); // V9
	glVertex2d(9.45, 10.3); // W9
	glVertex2d(9.55, 10.32); // Z9
	glVertex2d(9.66, 10.33); // A10
	glVertex2d(9.75, 10.34); // B10
	glVertex2d(9.88, 10.34); // C10
	glVertex2d(10.01, 10.33); // D10
	glVertex2d(10.13, 10.29); // E10
	glVertex2d(10.23, 10.26); // F10
	glVertex2d(10.28, 10.36); // G10
	glVertex2d(10.27, 10.48); // H10
	glVertex2d(10.25, 10.6); // I10
	glVertex2d(10.22, 10.72); // J10
	glVertex2d(10.14, 10.91); // K10
	glVertex2d(10.11, 11.09); // L10
	glVertex2d(10.06, 11.26); // M10
	glVertex2d(10, 11.4); // N10
	glVertex2d(9.94, 11.56); // O10
	glVertex2d(9.91, 11.69); // P10
	glVertex2d(9.88, 11.88); // Q10
	glVertex2d(9.82, 12.09); // R10
	glVertex2d(9.77, 12.3); // S10
	glVertex2d(9.73, 12.53); // T10
	glVertex2d(9.67, 12.72); // U10
	glVertex2d(9.62, 12.93); // V10
	glVertex2d(9.59, 13.1); // W10
	glVertex2d(9.54, 13.34); // Z10
	glVertex2d(9.5, 13.6); // A11
	glVertex2d(9.46, 13.83); // B11
	glVertex2d(9.41, 14.04); // C11
	glVertex2d(9.4, 14.2); // D11
	glVertex2d(9.35, 14.36); // E11
	glVertex2d(9.33, 14.5); // L1 
	glEnd();
}




void pantalonLadoIzq() {
	colorRojo();
	glBegin(GL_POLYGON);
	glVertex2d(5.99, 15.33); // C 
	glVertex2d(5.86, 15.14); // D 
	glVertex2d(5.74, 14.95); // E 
	glVertex2d(5.57, 14.7); // F 
	glVertex2d(5.42, 14.44); // G 
	glVertex2d(5.33, 14.22); // H 
	glVertex2d(5.26, 13.99); // I 
	glVertex2d(5.19, 13.76); // J 
	glVertex2d(5.22, 13.54); // K 
	glVertex2d(5.11, 13.37); // L 
	glVertex2d(5.05, 13.12); // M 
	glVertex2d(4.96, 12.63); // N 
	glVertex2d(5.08, 12.87); // O 
	glVertex2d(4.88, 12.35); // P 
	glVertex2d(4.76, 11.99); // Q 
	glVertex2d(4.6, 11.6); // R 
	glVertex2d(4.52, 11.23); // S 
	glVertex2d(4.42, 10.76); // T 
	glVertex2d(4.32, 10.26); // U 
	glVertex2d(4.26, 9.75); // V 
	glVertex2d(4.26, 9.27); // W 
	glVertex2d(4.28, 8.76); // Z 
	glVertex2d(4.34, 8.42); // A1 
	glVertex2d(4.36, 8.21); // B1 
	glVertex2d(4.27, 7.95); // C1 
	glVertex2d(4.15, 7.66); // D1 
	glVertex2d(4.06, 7.33); // E1 
	glVertex2d(4, 7); // F1 
	glVertex2d(4.03, 6.74); // G1 
	glVertex2d(4.05, 6.33); // H1 
	glVertex2d(4.14, 6.04); // I1 
	glVertex2d(4.22, 5.88); // J1 
	glVertex2d(4.37, 5.68); // K1 
	glVertex2d(4.59, 5.44); // L1 
	glVertex2d(4.85, 5.27); // M1 
	glVertex2d(5.12, 5.14); // N1 
	glVertex2d(5.29, 5.03); // O1 
	glVertex2d(5.47, 4.91); // P1 
	glVertex2d(5.66, 4.85); // Q1 
	glVertex2d(5.87, 4.88); // R1 
	glVertex2d(6.05, 4.96); // S1 
	glVertex2d(6.25, 4.96); // T1 
	glVertex2d(6.48, 4.92); // U1 
	glVertex2d(6.75, 4.89); // V1 
	glVertex2d(7.01, 4.89); // W1 
	glVertex2d(7.34, 4.92); // Z1 
	glVertex2d(7.6, 4.96); // A2 
	glVertex2d(7.83, 5.01); // B2 
	glVertex2d(8.12, 5.1); // C2 
	glVertex2d(8.37, 5.36); // D2 
	glVertex2d(8.59, 5.65); // E2 
	glVertex2d(8.77, 5.94); // F2 
	glVertex2d(8.85, 6.19); // G2 
	glVertex2d(8.98, 6.54); // H2 
	glVertex2d(9.06, 6.83); // I2 
	glVertex2d(9.11, 7.07); // J2 
	glVertex2d(9.29, 7.2); // K2 
	glVertex2d(9.5, 7.5); // L2 
	glVertex2d(9.51, 7.72); // M2 
	glVertex2d(9.5, 7.88); // N2 
	glVertex2d(9.63, 8.09); // O2 
	glVertex2d(9.75, 8.34); // P2 
	glVertex2d(9.77, 8.56); // Q2 
	glVertex2d(9.86, 8.81); // R2 
	glVertex2d(10.15, 9.45); // S2 
	glVertex2d(10.27, 10.46); // T2 
	glVertex2d(10.28, 11.48); // U2 
	glVertex2d(10.07, 12.63); // V2 
	glVertex2d(10.03, 13.7); // W2 
	glVertex2d(9.78, 14.82); // Z2 
	glVertex2d(9.39, 15.47); // A3 
	glVertex2d(8.26, 15.71); // B3 
	glVertex2d(7.02, 15.71); // C3 
	glVertex2d(6.32, 15.71); // D3 
	glEnd();
}


void pantalonLadoDer() {
	colorRojo();
	glBegin(GL_POLYGON);

	glVertex2d(9.88, 8.37); // E3 
	glVertex2d(9.92, 8.18); // F3 
	glVertex2d(10, 8); // G3 
	glVertex2d(9.89, 7.75); // H3 
	glVertex2d(9.86, 7.48); // I3 
	glVertex2d(9.95, 7.19); // J3 
	glVertex2d(10.07, 6.99); // K3 
	glVertex2d(10.22, 6.87); // L3 
	glVertex2d(10.19, 6.68); // M3 
	glVertex2d(10.19, 6.26); // N3 
	glVertex2d(10.26, 5.77); // O3 
	glVertex2d(10.39, 5.28); // P3 
	glVertex2d(10.58, 4.87); // Q3 
	glVertex2d(10.84, 4.5); // R3 
	glVertex2d(11.21, 4.12); // S3 
	glVertex2d(11.57, 3.95); // T3 
	glVertex2d(12.02, 3.79); // U3 
	glVertex2d(12.41, 3.71); // V3 
	glVertex2d(12.82, 3.63); // W3 
	glVertex2d(13.42, 3.63); // Z3 
	glVertex2d(13.86, 3.71); // A4 
	glVertex2d(14.33, 3.91); // B4 
	glVertex2d(14.7, 4.16); // C4 
	glVertex2d(15.14, 4.43); // D4 
	glVertex2d(15.53, 4.79); // E4 
	glVertex2d(15.75, 5.11); // F4 
	glVertex2d(15.87, 5.47); // G4 
	glVertex2d(15.88, 5.91); // H4 
	glVertex2d(15.89, 6.27); // I4 
	glVertex2d(15.87, 6.71); // J4 
	glVertex2d(15.83, 7.22); // K4 
	glVertex2d(15.73, 7.79); // L4 
	glVertex2d(15.68, 8.27); // M4 
	glVertex2d(15.63, 8.87); // N4 
	glVertex2d(15.55, 9.31); // O4 
	glVertex2d(15.44, 9.8); // P4 
	glVertex2d(15.35, 10.35); // Q4 
	glVertex2d(15.28, 10.86); // R4 
	glVertex2d(15.24, 11.29); // S4 
	glVertex2d(15.17, 11.62); // T4 
	glVertex2d(15.19, 12.16); // U4 
	glVertex2d(15.18, 12.59); // V4 
	glVertex2d(15.2, 13); // W4 
	glVertex2d(15.2, 13.3); // Z4 
	glVertex2d(15.11, 13.56); // A5 
	glVertex2d(15, 14); // B5 
	glVertex2d(14.95, 14.41); // C5 
	glVertex2d(14.82, 14.71); // D5 
	glVertex2d(14.66, 15); // E5 
	glVertex2d(14.48, 15.26); // F5 
	glVertex2d(14.22, 15.44); // G5 
	glVertex2d(13.77, 15.8); // H5 
	glVertex2d(13.19, 15.89); // I5 
	glVertex2d(12.22, 15.98); // J5 
	glVertex2d(11.35, 15.64); // K5 
	glVertex2d(10.98, 15.26); // L5 
	glVertex2d(10.46, 14.81); // M5 
	glVertex2d(9.42, 13.97); // N5 
	glVertex2d(9.1, 13.25); // O5 
	glVertex2d(8.93, 11.91); // P5 
	glVertex2d(9.08, 10.68); // Q5 
	glVertex2d(9.23, 9.38); // R5 
	glEnd();
}




void zapatoParteNegro() {
	colorNegro();
	glBegin(GL_POLYGON);


	glVertex2d(4.91, 5.24); // C 
	glVertex2d(4.92, 5.03); // D 
	glVertex2d(5.05, 4.93); // E 
	glVertex2d(5.23, 4.85); // F 
	glVertex2d(5.46, 4.74); // G 
	glVertex2d(5.65, 4.66); // H 
	glVertex2d(6.01, 4.57); // I 
	glVertex2d(6.29, 4.55); // J 
	glVertex2d(6.69, 4.56); // K 
	glVertex2d(7.06, 4.66); // L 
	glVertex2d(7.36, 4.78); // M 
	glVertex2d(7.57, 4.89); // N 
	glVertex2d(7.68, 5.03); // O 
	glVertex2d(7.33, 4.99); // P 
	glVertex2d(6.95, 4.96); // Q 
	glVertex2d(6.53, 4.97); // R 
	glVertex2d(6.18, 5.01); // S 
	glVertex2d(6.06, 5.05); // T 
	glVertex2d(5.95, 4.95); // U 
	glVertex2d(5.8, 4.86); // V 
	glVertex2d(5.62, 4.85); // W 
	glVertex2d(5.43, 4.96); // Z 
	glVertex2d(5.28, 5.1); // A1 
	glVertex2d(5.17, 5.18); // B1 
	glVertex2d(5.02, 5.23); // C1 

	glEnd();
}




void zapatoParteBlanco1() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2d(4.78, 4.96); // D1 
	glVertex2d(4.64, 4.87); // E1 
	glVertex2d(4.48, 4.79); // F1 
	glVertex2d(4.32, 4.68); // G1 
	glVertex2d(4.48, 4.63); // H1 
	glVertex2d(4.65, 4.59); // I1 
	glVertex2d(4.86, 4.52); // J1 
	glVertex2d(5.07, 4.37); // K1 
	glVertex2d(5.27, 4.22); // L1 
	glVertex2d(5.41, 4.09); // M1 
	glVertex2d(5.57, 3.93); // N1 
	glVertex2d(5.73, 3.88); // O1 
	glVertex2d(6.02, 3.9); // P1 
	glVertex2d(6.27, 3.94); // Q1 
	glVertex2d(6.53, 4.02); // R1 
	glVertex2d(6.82, 4.11); // S1 
	glVertex2d(7.11, 4.27); // T1 
	glVertex2d(7.34, 4.37); // U1 
	glVertex2d(7.58, 4.51); // V1 
	glVertex2d(7.76, 4.63); // W1 
	glVertex2d(7.77, 4.78); // Z1 
	glVertex2d(7.74, 4.87); // A2 


	glVertex2d(7.57, 4.89); // N 
	glVertex2d(7.36, 4.78); // M 
	glVertex2d(7.06, 4.66); // L 
	glVertex2d(6.69, 4.56); // K 
	glVertex2d(6.29, 4.55); // J 
	glVertex2d(6.01, 4.57); // I 
	glVertex2d(5.65, 4.66); // H 
	glVertex2d(5.46, 4.74); // G 
	glVertex2d(5.23, 4.85); // F 
	glVertex2d(5.05, 4.93); // E 
	glVertex2d(4.92, 5.03); // D 
	

	glEnd();
}




void zapatoParteAzul() {
	colorAzul();
	glBegin(GL_POLYGON);

	glVertex2d(4.17, 4.62); // B2 
	glVertex2d(4.03, 4.53); // C2 
	glVertex2d(3.83, 4.39); // D2 
	glVertex2d(3.63, 4.24); // E2 
	glVertex2d(3.44, 4.13); // F2 
	glVertex2d(3.23, 3.94); // G2 
	glVertex2d(3.06, 3.79); // H2 
	glVertex2d(2.89, 3.67); // I2 
	glVertex2d(2.79, 3.51); // J2 
	glVertex2d(2.73, 3.39); // K2 
	glVertex2d(2.74, 3.26); // L2 
	glVertex2d(2.82, 3.13); // M2 
	glVertex2d(3.01, 3.04); // N2 
	glVertex2d(3.2, 3); // O2 
	glVertex2d(3.4, 2.97); // P2 
	glVertex2d(3.64, 2.93); // Q2 
	glVertex2d(4.01, 2.93); // R2 
	glVertex2d(4.29, 2.91); // S2 
	glVertex2d(4.64, 2.93); // T2 
	glVertex2d(5, 3); // U2 
	glVertex2d(5.36, 3.08); // V2 
	glVertex2d(5.67, 3.2); // W2 
	glVertex2d(5.97, 3.29); // Z2 
	glVertex2d(6.33, 3.41); // A3 
	glVertex2d(6.61, 3.55); // B3 
	glVertex2d(6.93, 3.66); // C3 
	glVertex2d(7.27, 3.79); // D3 
	glVertex2d(7.49, 3.92); // E3 
	glVertex2d(7.76, 4.03); // F3 
	glVertex2d(7.99, 4.15); // G3 
	glVertex2d(8.1, 4.32); // H3 
	glVertex2d(8.09, 4.5); // I3 
	glVertex2d(8.01, 4.64); // J3 
	glVertex2d(7.91, 4.76); // K3 
	glEnd();
}




void zapatoParteBlanco2() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2d(2.71, 3.16); // L3 
	glVertex2d(2.77, 2.99); // M3 
	glVertex2d(2.9, 2.87); // N3 
	glVertex2d(3.16, 2.77); // O3 
	glVertex2d(3.38, 2.72); // P3 
	glVertex2d(3.59, 2.69); // Q3 
	glVertex2d(3.95, 2.69); // R3 
	glVertex2d(4.26, 2.69); // S3 
	glVertex2d(4.63, 2.74); // T3 
	glVertex2d(5, 2.8); // U3 
	glVertex2d(5.31, 2.85); // V3 
	glVertex2d(5.57, 2.93); // W3 
	glVertex2d(5.89, 3.01); // Z3 
	glVertex2d(6.17, 3.1); // A4 
	glVertex2d(6.43, 3.21); // B4 
	glVertex2d(6.71, 3.29); // C4 
	glVertex2d(7, 3.4); // D4 
	glVertex2d(7.24, 3.53); // E4 
	glVertex2d(7.47, 3.64); // F4 
	glVertex2d(7.7, 3.76); // G4 
	glVertex2d(7.87, 3.87); // H4 
	glVertex2d(8.05, 4.02); // I4 
	glVertex2d(8.12, 4.14); // J4 



	glVertex2d(7.99, 4.15); // G3 
	glVertex2d(7.76, 4.03); // F3 
	glVertex2d(7.49, 3.92); // E3 
	glVertex2d(7.27, 3.79); // D3 
	glVertex2d(6.93, 3.66); // C3 
	glVertex2d(6.61, 3.55); // B3 
	glVertex2d(6.33, 3.41); // A3 
	glVertex2d(5.97, 3.29); // Z2 
	glVertex2d(5.67, 3.2); // W2 
	glVertex2d(5.36, 3.08); // V2 
	glVertex2d(5, 3); // U2 
	glVertex2d(4.64, 2.93); // T2 
	glVertex2d(4.29, 2.91); // S2 
	glVertex2d(4.01, 2.93); // R2 
	glVertex2d(3.64, 2.93); // Q2 
	glVertex2d(3.4, 2.97); // P2 
	glVertex2d(3.2, 3); // O2 
	glVertex2d(3.01, 3.04); // N2 
	glVertex2d(2.82, 3.13); // M2 
	glVertex2d(2.74, 3.26); // L2 


	glEnd();
}


void zapatoDerParteNegro() {
	colorNegro();
	glBegin(GL_POLYGON);

	glVertex2d(11.95, 3.83); // K4 
	glVertex2d(12.13, 3.83); // L4 
	glVertex2d(12.33, 3.82); // M4 
	glVertex2d(12.58, 3.81); // N4 
	glVertex2d(12.77, 3.79); // O4 
	glVertex2d(12.98, 3.76); // P4 
	glVertex2d(13.32, 3.77); // Q4 
	glVertex2d(13.61, 3.82); // R4 
	glVertex2d(13.84, 3.88); // S4 
	glVertex2d(14.11, 3.95); // T4 
	glVertex2d(14.33, 4); // U4 
	glVertex2d(14.55, 4.08); // V4 
	glVertex2d(14.73, 4.17); // W4 
	glVertex2d(14.69, 4.04); // Z4 
	glVertex2d(14.6, 3.91); // A5 
	glVertex2d(14.52, 3.78); // B5 
	glVertex2d(14.35, 3.65); // C5 
	glVertex2d(14.15, 3.53); // D5 
	glVertex2d(13.94, 3.44); // E5 
	glVertex2d(13.67, 3.39); // F5 
	glVertex2d(13.48, 3.42); // G5 
	glVertex2d(13.23, 3.42); // H5 
	glVertex2d(13.01, 3.45); // I5 
	glVertex2d(12.79, 3.51); // J5 
	glVertex2d(12.6, 3.56); // K5 
	glVertex2d(12.4, 3.64); // L5 
	glVertex2d(12.2, 3.71); // M5 



	glEnd();
}




void zapatoDerParteBlanco1() {
	glColor3ub(250, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2d(11.97, 3.72); // N5 
	glVertex2d(12, 3.54); // O5 
	glVertex2d(12.08, 3.34); // P5 
	glVertex2d(12.22, 3.12); // Q5 
	glVertex2d(12.31, 2.99); // R5 
	glVertex2d(12.45, 2.81); // S5 
	glVertex2d(12.58, 2.73); // T5 
	glVertex2d(12.8, 2.6); // U5 
	glVertex2d(13, 2.53); // V5 
	glVertex2d(13.22, 2.56); // W5 
	glVertex2d(13.44, 2.68); // Z5 
	glVertex2d(13.6, 2.8); // A6 
	glVertex2d(13.76, 2.9); // B6 
	glVertex2d(14.03, 2.96); // C6 
	glVertex2d(14.24, 3); // D6 
	glVertex2d(14.47, 3.06); // E6 
	glVertex2d(14.65, 3.07); // F6 
	glVertex2d(14.86, 3.07); // G6 
	glVertex2d(15.02, 3.08); // H6 
	glVertex2d(15.17, 3.1); // I6 
	glVertex2d(15.04, 3.26); // J6 
	glVertex2d(14.96, 3.38); // K6 
	glVertex2d(14.85, 3.48); // L6 
	glVertex2d(14.74, 3.62); // M6 
	glVertex2d(14.67, 3.71); // N6 

	glVertex2d(14.52, 3.78); // B5 
	glVertex2d(14.35, 3.65); // C5 
	glVertex2d(14.15, 3.53); // D5 
	glVertex2d(13.94, 3.44); // E5 
	glVertex2d(13.67, 3.39); // F5 
	glVertex2d(13.48, 3.42); // G5 
	glVertex2d(13.23, 3.42); // H5 
	glVertex2d(13.01, 3.45); // I5 
	glVertex2d(12.79, 3.51); // J5 
	glVertex2d(12.6, 3.56); // K5 
	glVertex2d(12.4, 3.64); // L5 
	glVertex2d(12.2, 3.71); // M5 
	glVertex2d(11.95, 3.83); // K4 


	glEnd();
}




void zapatoDerParteAzul() {
	colorAzul();
	glBegin(GL_POLYGON);


	glVertex2d(11.86, 3.65); // O6 
	glVertex2d(11.79, 3.46); // P6 
	glVertex2d(11.78, 3.32); // Q6 
	glVertex2d(11.8, 3.11); // R6 
	glVertex2d(11.83, 2.91); // S6 
	glVertex2d(11.89, 2.74); // T6 
	glVertex2d(12, 2.6); // U6 
	glVertex2d(12.13, 2.46); // V6 
	glVertex2d(12.28, 2.34); // W6 
	glVertex2d(12.4, 2.23); // Z6 
	glVertex2d(12.52, 2.13); // A7 
	glVertex2d(12.69, 1.99); // B7 
	glVertex2d(12.91, 1.82); // C7 
	glVertex2d(13.08, 1.7); // D7 
	glVertex2d(13.29, 1.54); // E7 
	glVertex2d(13.53, 1.34); // F7 
	glVertex2d(13.74, 1.25); // G7 
	glVertex2d(13.95, 1.15); // H7 
	glVertex2d(14.14, 1.09); // I7 
	glVertex2d(14.37, 1.06); // J7 
	glVertex2d(14.63, 1.05); // K7 
	glVertex2d(14.87, 1.05); // L7 
	glVertex2d(15.13, 1.13); // M7 
	glVertex2d(15.4, 1.2); // N7 
	glVertex2d(15.62, 1.29); // O7 
	glVertex2d(15.8, 1.44); // P7 
	glVertex2d(15.93, 1.62); // Q7 
	glVertex2d(15.96, 1.84); // R7 
	glVertex2d(15.9, 2.07); // S7 
	glVertex2d(15.82, 2.23); // T7 
	glVertex2d(15.7, 2.41); // U7 
	glVertex2d(15.6, 2.6); // V7 
	glVertex2d(15.5, 2.72); // W7 
	glVertex2d(15.41, 2.84); // Z7 
	glVertex2d(15.32, 2.93); // A8 
	glVertex2d(15.25, 3.02); // B8 
	

	glVertex2d(15.17, 3.1); // I6 
	glVertex2d(15.02, 3.08); // H6 
	glVertex2d(14.86, 3.07); // G6 
	glVertex2d(14.65, 3.07); // F6 
	glVertex2d(14.47, 3.06); // E6 
	glVertex2d(14.24, 3); // D6 
	glVertex2d(14.03, 2.96); // C6 
	glVertex2d(13.76, 2.9); // B6 
	glVertex2d(13.6, 2.8); // A6 
	glVertex2d(13.44, 2.68); // Z5 
	glVertex2d(13.22, 2.56); // W5 
	glVertex2d(13, 2.53); // V5 
	glVertex2d(12.8, 2.6); // U5 
	glVertex2d(12.58, 2.73); // T5 
	glVertex2d(12.45, 2.81); // S5 
	glVertex2d(12.31, 2.99); // R5 
	glVertex2d(12.22, 3.12); // Q5 
	glVertex2d(12.08, 3.34); // P5 
	glVertex2d(12, 3.54); // O5 
	glVertex2d(11.97, 3.72); // N5 
	glVertex2d(11.95, 3.83); // K4 

	glEnd();
}


void zapatoDerParteBlanco2() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2d(12.21, 2.3); // C8 
	glVertex2d(12.31, 2.2); // D8 
	glVertex2d(12.44, 2.05); // E8 
	glVertex2d(12.55, 1.92); // F8 
	glVertex2d(12.69, 1.78); // G8 
	glVertex2d(12.84, 1.63); // H8 
	glVertex2d(12.97, 1.52); // I8 
	glVertex2d(13.12, 1.38); // J8 
	glVertex2d(13.31, 1.27); // K8 
	glVertex2d(13.57, 1.12); // L8 
	glVertex2d(13.85, 1); // M8 
	glVertex2d(14.07, 0.92); // N8 
	glVertex2d(14.42, 0.85); // O8 
	glVertex2d(14.73, 0.83); // P8 
	glVertex2d(15.08, 0.89); // Q8 
	glVertex2d(15.41, 0.97); // R8 
	glVertex2d(15.68, 1.09); // S8 
	glVertex2d(15.88, 1.24); // T8 
	glVertex2d(15.99, 1.36); // U8 
	glVertex2d(16.05, 1.48); // V8 
	glVertex2d(16.04, 1.64); // W8 
	glEnd();
}





void colaLarga() {
	colorCola();
	glBegin(GL_POLYGON);
	glVertex2d(19.13, 16.8); // C
	glVertex2d(19.28, 16.8); // D
	glVertex2d(19.47, 16.8); // E
	glVertex2d(19.69, 16.78); // F
	glVertex2d(19.86, 16.8); // G
	glVertex2d(20.09, 16.8); // H
	glVertex2d(20.1, 16.72); // I
	glVertex2d(20.11, 16.49); // J
	glVertex2d(20.07, 16.28); // K
	glVertex2d(20.05, 16.12); // L
	glVertex2d(20.02, 15.9); // M
	glVertex2d(19.97, 15.71); // N
	glVertex2d(19.91, 15.54); // O
	glVertex2d(19.83, 15.32); // P
	glVertex2d(19.74, 15.11); // Q
	glVertex2d(19.65, 14.91); // R
	glVertex2d(19.51, 14.66); // S
	glVertex2d(19.39, 14.49); // T
	glVertex2d(19.22, 14.28); // U
	glVertex2d(19.08, 14.12); // V
	glVertex2d(19, 14); // W
	glVertex2d(18.88, 13.91); // Z
	glVertex2d(18.74, 13.78); // A1
	glVertex2d(18.63, 13.69); // B1
	glVertex2d(18.49, 13.58); // C1
	glVertex2d(18.38, 13.5); // D1
	glVertex2d(18.24, 13.42); // E1
	glVertex2d(18.12, 13.35); // F1
	glVertex2d(18.03, 13.31); // G1
	glVertex2d(18.01, 13.43); // H1
	glVertex2d(17.99, 13.55); // I1
	glVertex2d(17.97, 13.67); // J1
	glVertex2d(17.95, 13.8); // K1
	glVertex2d(17.93, 13.93); // L1
	glVertex2d(17.9, 14.04); // M1
	glVertex2d(17.86, 14.14); // N1
	glVertex2d(17.85, 14.22); // O1
	glVertex2d(17.85, 14.31); // P1
	glVertex2d(17.91, 14.43); // Q1
	glVertex2d(17.97, 14.53); // R1
	glVertex2d(18.05, 14.63); // S1
	glVertex2d(18.18, 14.72); // T1
	glVertex2d(18.5, 14.76); // U1
	glVertex2d(18.27, 14.8); // V1
	glVertex2d(18.74, 14.75); // W1
	glVertex2d(18.97, 14.76); // Z1
	glVertex2d(19.18, 14.76); // A2
	glVertex2d(19.25, 14.95); // B2
	glVertex2d(19.28, 15.25); // C2
	glVertex2d(19.25, 15.64); // D2
	glVertex2d(19.25, 15.95); // E2
	glVertex2d(19.26, 16.23); // F2
	glVertex2d(19.25, 16.56); // G2


	glEnd();



	colorCola();
	glBegin(GL_POLYGON);

	glVertex2d(19.2, 17); // J2
	glVertex2d(19.2, 17.2); // K2
	glVertex2d(19.23, 17.45); // L2
	glVertex2d(19.25, 17.64); // M2
	glVertex2d(19.24, 17.8); // N2
	glVertex2d(19.25, 18.01); // O2
	glVertex2d(19.25, 18.3); // P2
	glVertex2d(19.25, 18.53); // Q2
	glVertex2d(19.25, 18.83); // R2
	glVertex2d(19.24, 19.08); // S2
	glVertex2d(19.23, 19.31); // T2
	glVertex2d(19.29, 19.62); // U2
	glVertex2d(19.33, 19.81); // V2
	glVertex2d(19.39, 20.09); // W2
	glVertex2d(19.47, 20.37); // Z2
	glVertex2d(19.57, 20.58); // A3
	glVertex2d(19.72, 20.77); // B3
	glVertex2d(19.86, 20.98); // C3
	glVertex2d(20.03, 21.16); // D3
	glVertex2d(20.16, 21.31); // E3
	glVertex2d(20.31, 21.42); // F3
	glVertex2d(20.5, 21.52); // G3
	glVertex2d(20.73, 21.56); // H3
	glVertex2d(20.92, 21.53); // I3
	glVertex2d(21.11, 21.46); // J3
	glVertex2d(21.24, 21.35); // K3
	glVertex2d(21.26, 21.22); // L3
	glVertex2d(21.26, 20.99); // M3
	glVertex2d(21.22, 20.92); // N3
	glVertex2d(21.16, 20.78); // O3
	glVertex2d(21.06, 20.65); // P3
	glVertex2d(20.99, 20.56); // Q3
	glVertex2d(20.92, 20.44); // R3
	glVertex2d(20.83, 20.3); // S3
	glVertex2d(20.76, 20.2); // T3
	glVertex2d(20.66, 20.06); // U3
	glVertex2d(20.59, 19.96); // V3
	glVertex2d(20.53, 19.8); // W3
	glVertex2d(20.45, 19.63); // Z3
	glVertex2d(20.38, 19.45); // A4
	glVertex2d(20.34, 19.26); // B4
	glVertex2d(20.34, 19.12); // C4
	glVertex2d(20.3, 18.9); // D4
	glVertex2d(20.29, 18.71); // E4
	glVertex2d(20.27, 18.45); // F4
	glVertex2d(20.26, 18.25); // G4
	glVertex2d(20.26, 18.1); // H4
	glVertex2d(20.24, 17.93); // I4
	glVertex2d(20.26, 17.82); // J4
	glVertex2d(20.16, 17.94); // K4
	glVertex2d(20.06, 17.98); // L4
	glVertex2d(20.05, 17.9); // M4
	glVertex2d(20.05, 17.74); // N4
	glVertex2d(20.06, 17.63); // O4
	glVertex2d(20.09, 17.49); // P4
	glVertex2d(20.14, 17.38); // Q4
	glVertex2d(20.17, 17.28); // R4
	glVertex2d(20.19, 17.15); // S4
	glVertex2d(20.21, 17.05); // T4
	glVertex2d(20.09, 17.15); // U4
	glVertex2d(20.02, 17.23); // V4
	glVertex2d(19.96, 17.26); // W4
	glVertex2d(19.98, 17.08); // Z4
	glVertex2d(20.02, 16.95); // A5
	glVertex2d(20.09, 16.8); // H
	glVertex2d(19.86, 16.8); // G
	glVertex2d(19.69, 16.78); // F
	glVertex2d(19.47, 16.8); // E
	glVertex2d(19.28, 16.8); // D
	glVertex2d(19.13, 16.8); // C
	glVertex2d(20.1, 16.72); // I
	glEnd();




	colorCola();
	glBegin(GL_POLYGON);
	glVertex2d(14.97, 14.23); // B5 
	glVertex2d(14.99, 14.15); // C5 
	glVertex2d(15.01, 14.07); // D5 
	glVertex2d(15.03, 13.97); // E5 
	glVertex2d(15.05, 13.89); // F5 
	glVertex2d(15.06, 13.79); // G5 
	glVertex2d(15.07, 13.68); // H5 
	glVertex2d(15.1, 13.57); // I5 
	glVertex2d(15.17, 13.65); // J5 
	glVertex2d(15.27, 13.75); // K5 
	glVertex2d(15.34, 13.82); // L5 
	glVertex2d(15.4, 13.9); // M5 
	glVertex2d(15.47, 13.98); // N5 
	glVertex2d(15.53, 14.05); // O5 
	glVertex2d(15.57, 14.11); // P5 
	glVertex2d(15.51, 14.14); // Q5 
	glVertex2d(15.39, 14.15); // R5 
	glVertex2d(15.28, 14.18); // S5 
	glVertex2d(15.23, 14.19); // T5 
	glVertex2d(15.14, 14.2); // U5 
	glVertex2d(15.05, 14.22); // V5 
	glEnd();

}



void circuloAmarillo() {
	colorAmarillo();
	glBegin(GL_POLYGON);
	glVertex2d(10.38, 17.43); // W8
	glVertex2d(10.4, 17.54); // Z8
	glVertex2d(10.44, 17.64); // A9
	glVertex2d(10.47, 17.74); // B9
	glVertex2d(10.53, 17.85); // C9
	glVertex2d(10.62, 17.96); // D9
	glVertex2d(10.68, 18.04); // E9
	glVertex2d(10.76, 18.11); // F9
	glVertex2d(10.84, 18.18); // G9
	glVertex2d(10.94, 18.25); // H9
	glVertex2d(11.04, 18.3); // I9
	glVertex2d(11.13, 18.35); // J9
	glVertex2d(11.25, 18.39); // K9
	glVertex2d(11.36, 18.42); // L9
	glVertex2d(11.46, 18.44); // M9
	glVertex2d(11.56, 18.45); // N9
	glVertex2d(11.65, 18.44); // O9
	glVertex2d(11.74, 18.45); // P9
	glVertex2d(11.85, 18.44); // Q9
	glVertex2d(11.95, 18.42); // R9
	glVertex2d(12.04, 18.38); // S9
	glVertex2d(12.14, 18.35); // T9
	glVertex2d(12.23, 18.32); // U9
	glVertex2d(12.34, 18.26); // V9
	glVertex2d(12.43, 18.21); // W9
	glVertex2d(12.5, 18.16); // Z9
	glVertex2d(12.57, 18.09); // A10
	glVertex2d(12.63, 18.03); // B10
	glVertex2d(12.68, 17.96); // C10
	glVertex2d(12.73, 17.9); // D10
	glVertex2d(12.77, 17.83); // E10
	glVertex2d(12.81, 17.76); // F10
	glVertex2d(12.83, 17.7); // G10
	glVertex2d(12.86, 17.65); // H10
	glVertex2d(12.89, 17.54); // I10
	glVertex2d(12.91, 17.46); // J10
	glVertex2d(12.93, 17.36); // K10
	glVertex2d(12.93, 17.25); // L10
	glVertex2d(12.93, 17.17); // M10
	glVertex2d(12.93, 17.06); // N10
	glVertex2d(12.9, 16.96); // O10
	glVertex2d(12.88, 16.87); // P10
	glVertex2d(12.86, 16.77); // Q10
	glVertex2d(12.8, 16.7); // R10
	glVertex2d(12.77, 16.62); // S10
	glVertex2d(12.73, 16.56); // T10
	glVertex2d(12.7, 16.5); // U10
	glVertex2d(12.65, 16.44); // V10
	glVertex2d(12.6, 16.38); // W10
	glVertex2d(12.55, 16.33); // Z10
	glVertex2d(12.46, 16.27); // A11
	glVertex2d(12.38, 16.22); // B11
	glVertex2d(12.33, 16.18); // C11
	glVertex2d(12.25, 16.14); // D11
	glVertex2d(12.16, 16.1); // E11
	glVertex2d(12.08, 16.06); // F11
	glVertex2d(11.97, 16.03); // G11
	glVertex2d(11.92, 16.02); // H11
	glVertex2d(11.82, 15.99); // I11
	glVertex2d(11.75, 15.99); // J11
	glVertex2d(11.63, 15.98); // K11
	glVertex2d(11.52, 15.99); // L11
	glVertex2d(11.44, 16); // M11
	glVertex2d(11.34, 16.02); // N11
	glVertex2d(11.26, 16.06); // O11
	glVertex2d(11.15, 16.09); // P11
	glVertex2d(11.05, 16.13); // Q11
	glVertex2d(10.95, 16.19); // R11
	glVertex2d(10.86, 16.26); // S11
	glVertex2d(10.74, 16.34); // T11
	glVertex2d(10.65, 16.44); // U11
	glVertex2d(10.56, 16.56); // V11
	glVertex2d(10.51, 16.64); // W11
	glVertex2d(10.45, 16.76); // Z11
	glVertex2d(10.42, 16.85); // A12
	glVertex2d(10.38, 16.97); // B12
	glVertex2d(10.36, 17.06); // C12
	glVertex2d(10.35, 17.15); // D12
	glVertex2d(10.35, 17.24); // E12
	glVertex2d(10.36, 17.36); // F12


	glEnd();
}



void rectangulosNegro() {

	glLineWidth(2.5);
	colorNegro();
	glBegin(GL_LINE_LOOP);

	glVertex2d(11, 17.8); // T4
	glVertex2d(11.23, 17.8); // U4
	glVertex2d(11.5, 17.8); // V4
	glVertex2d(11.77, 17.8); // W4
	glVertex2d(11.93, 17.8); // Z4
	glVertex2d(12.07, 17.81); // A5
	glVertex2d(12.23, 17.81); // B5
	glVertex2d(12.23, 17.72); // C5
	glVertex2d(12.23, 17.6); // D5
	glVertex2d(12.23, 17.49); // E5
	glVertex2d(12.22, 17.36); // F5
	glVertex2d(12.05, 17.35); // G5
	glVertex2d(11.87, 17.35); // H5
	glVertex2d(11.69, 17.35); // I5
	glVertex2d(11.52, 17.36); // J5
	glVertex2d(11.25, 17.35); // K5
	glVertex2d(11.06, 17.36); // L5
	glVertex2d(11.04, 17.49); // M5
	glVertex2d(11.03, 17.6); // N5
	glVertex2d(11.02, 17.72); // O5


	glEnd();


	glBegin(GL_LINE_LOOP);

	glVertex2d(10.8, 17.2); // V5
	glVertex2d(10.96, 17.2); // W5
	glVertex2d(11.13, 17.2); // Z5
	glVertex2d(11.32, 17.2); // A6
	glVertex2d(11.5, 17.2); // B6
	glVertex2d(11.7, 17.2); // C6
	glVertex2d(11.9, 17.2); // D6
	glVertex2d(12.09, 17.2); // E6
	glVertex2d(12.3, 17.2); // F6
	glVertex2d(12.44, 17.2); // G6
	glVertex2d(12.44, 17.09); // H6
	glVertex2d(12.43, 16.99); // I6
	glVertex2d(12.43, 16.88); // J6
	glVertex2d(12.41, 16.74); // K6
	glVertex2d(12.29, 16.72); // L6
	glVertex2d(12.09, 16.7); // M6
	glVertex2d(11.88, 16.68); // N6
	glVertex2d(11.7, 16.67); // O6
	glVertex2d(11.5, 16.65); // P6
	glVertex2d(11.3, 16.64); // Q6
	glVertex2d(11.13, 16.62); // R6
	glVertex2d(10.98, 16.61); // S6
	glVertex2d(10.83, 16.59); // T6
	glVertex2d(10.82, 16.75); // U6
	glVertex2d(10.8, 16.9); // V6
	glVertex2d(10.8, 17); // W6
	glVertex2d(10.76, 17.13); // Z6

	glEnd();



	glBegin(GL_LINE_STRIP);
	glVertex2d(11.03, 17.6); // N5
	glVertex2d(11.17, 17.6); // P5
	glVertex2d(11.32, 17.6); // Q5
	glVertex2d(11.48, 17.6); // R5
	glVertex2d(11.73, 17.6); // S5
	glVertex2d(11.89, 17.6); // T5
	glVertex2d(12.06, 17.6); // U5
	glVertex2d(12.23, 17.6); // D5
	glEnd();



	glBegin(GL_LINE_STRIP);
	glVertex2d(10.8, 16.9); // V6
	glVertex2d(10.93, 16.9); // A7
	glVertex2d(11.13, 16.91); // B7
	glVertex2d(11.31, 16.93); // C7
	glVertex2d(11.47, 16.94); // D7
	glVertex2d(11.68, 16.95); // E7
	glVertex2d(11.9, 16.96); // F7
	glVertex2d(12.09, 16.96); // G7
	glVertex2d(12.29, 16.98); // H7
	glVertex2d(12.43, 16.99); // I6
	glEnd();


	glBegin(GL_LINE_STRIP);

	glVertex2d(11.2, 18); // I7
	glVertex2d(11.26, 17.95); // J7
	glVertex2d(11.35, 17.93); // K7
	glVertex2d(11.46, 17.96); // L7
	glVertex2d(11.51, 18.05); // M7
	glVertex2d(11.56, 18.15); // N7
	glVertex2d(11.58, 18.27); // O7
	glVertex2d(11.59, 18.23); // P7
	glVertex2d(11.67, 18.21); // Q7
	glVertex2d(11.75, 18.21); // R7
	glVertex2d(11.88, 18.2); // S7
	glVertex2d(11.97, 18.24); // T7
	glVertex2d(11.93, 18.17); // U7
	glVertex2d(11.86, 18.1); // V7
	glVertex2d(11.8, 18.03); // W7
	glVertex2d(11.75, 17.97); // Z7
	glVertex2d(11.7, 17.9); // A8
	glVertex2d(11.66, 17.83); // B8
	glVertex2d(11.62, 17.73); // C8
	glVertex2d(11.59, 17.62); // D8
	glVertex2d(11.55, 17.5); // E8
	glVertex2d(11.52, 17.31); // F8
	glVertex2d(11.48, 17.09); // G8
	glVertex2d(11.46, 16.82); // H8
	glVertex2d(11.45, 16.58); // I8
	glVertex2d(11.46, 16.47); // J8
	glVertex2d(11.5, 16.4); // K8
	glVertex2d(11.54, 16.34); // L8
	glVertex2d(11.64, 16.3); // M8
	glVertex2d(11.73, 16.27); // N8
	glVertex2d(11.85, 16.26); // O8
	glVertex2d(11.96, 16.27); // P8
	glVertex2d(12.05, 16.29); // Q8
	glVertex2d(12.15, 16.35); // R8
	glVertex2d(12.22, 16.41); // S8
	glVertex2d(12.27, 16.47); // T8
	glVertex2d(12.28, 16.55); // U8
	glVertex2d(12.28, 16.61); // V8
	glEnd();



}



void lineas() {
	colorNegro();
	glBegin(GL_LINE_STRIP);
	glVertex2d(6.28, 14.39); // G12
	glVertex2d(6.32, 14.47); // H12
	glVertex2d(6.35, 14.56); // I12
	glVertex2d(6.43, 14.67); // J12
	glVertex2d(6.46, 14.77); // K12
	glVertex2d(6.52, 14.87); // L12
	glVertex2d(6.58, 14.96); // M12
	glVertex2d(6.64, 15.07); // N12
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2d(6.81, 14.45); // O12
	glVertex2d(6.81, 14.54); // P12
	glVertex2d(6.82, 14.65); // Q12
	glVertex2d(6.85, 14.76); // R12
	glVertex2d(6.89, 14.86); // S12
	glVertex2d(6.94, 14.96); // T12
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(12.73, 13.81); // U12
	glVertex2d(12.76, 13.95); // V12
	glVertex2d(12.79, 14.1); // W12
	glVertex2d(12.79, 14.3); // Z12
	glVertex2d(12.81, 14.48); // A13
	glVertex2d(12.77, 14.61); // B13
	glVertex2d(12.7, 14.73); // C13
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(13.34, 14.1); // D13
	glVertex2d(13.35, 14.2); // E13
	glVertex2d(13.34, 14.34); // F13
	glVertex2d(13.32, 14.51); // G13
	glVertex2d(13.29, 14.66); // H13
	glVertex2d(13.23, 14.78); // I13
	glEnd();


	glBegin(GL_LINE_STRIP);

	glVertex2d(5.72, 12.87); // J13
	glVertex2d(5.83, 12.74); // K13
	glVertex2d(5.97, 12.6); // L13
	glVertex2d(6.1, 12.51); // M13
	glVertex2d(6.23, 12.35); // N13
	glVertex2d(6.37, 12.25); // O13
	glVertex2d(6.51, 12.19); // P13
	glVertex2d(6.6, 12.11); // Q13
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(8.32, 14.03); // R13
	glVertex2d(8.28, 13.9); // S13
	glVertex2d(8.24, 13.7); // T13
	glVertex2d(8.21, 13.5); // U13
	glVertex2d(8.21, 13.32); // V13
	glVertex2d(8.24, 13.12); // W13
	glVertex2d(8.27, 12.92); // Z13
	glVertex2d(8.32, 12.7); // A14
	glVertex2d(8.4, 12.49); // B14
	glVertex2d(8.44, 12.31); // C14
	glVertex2d(8.53, 12.12); // D14
	glVertex2d(8.59, 11.96); // E14
	glVertex2d(8.64, 11.86); // F14
	glVertex2d(8.71, 11.78); // G14
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(8.04, 12.42); // H14
	glVertex2d(8.08, 12.28); // I14
	glVertex2d(8.17, 12.09); // J14
	glVertex2d(8.24, 11.9); // K14
	glVertex2d(8.34, 11.74); // L14
	glVertex2d(8.43, 11.54); // M14
	glVertex2d(8.5, 11.42); // N14
	glVertex2d(8.56, 11.33); // O14
	glVertex2d(8.6, 11.25); // P14

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(7.89, 11.52); // Q14
	glVertex2d(8.04, 11.45); // R14
	glVertex2d(8.22, 11.37); // S14
	glVertex2d(8.37, 11.3); // T14
	glVertex2d(8.5, 11.25); // U14
	glVertex2d(8.74, 11.18); // V14
	glVertex2d(8.87, 11.16); // W14
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(10.06, 11.01); // Z14
	glVertex2d(10.22, 11.09); // A15
	glVertex2d(10.4, 11.2); // B15
	glVertex2d(10.59, 11.25); // C15
	glVertex2d(10.75, 11.32); // D15
	glVertex2d(10.97, 11.41); // E15
	glVertex2d(11.14, 11.48); // F15
	glVertex2d(11.31, 11.55); // G15
	glVertex2d(11.53, 11.64); // H15
	glVertex2d(11.7, 11.73); // I15
	glVertex2d(11.93, 11.83); // J15
	glVertex2d(12.14, 11.9); // K15
	glVertex2d(12.33, 11.96); // L15
	glVertex2d(12.57, 12.04); // M15
	glVertex2d(12.72, 12.09); // N15
	glVertex2d(12.87, 12.11); // O15
	glVertex2d(12.97, 12.11); // P15
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(11.16, 11.41); // Q15
	glVertex2d(11.3, 11.43); // R15
	glVertex2d(11.41, 11.46); // S15
	glVertex2d(11.54, 11.49); // T15
	glVertex2d(11.7, 11.5); // U15
	glVertex2d(11.83, 11.54); // V15
	glVertex2d(12.01, 11.55); // W15
	glVertex2d(12.17, 11.58); // Z15
	glVertex2d(12.32, 11.6); // A16
	glVertex2d(12.47, 11.61); // B16
	glVertex2d(12.65, 11.64); // C16
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(9.08, 10.14); // D16
	glVertex2d(9.08, 10.03); // E16
	glVertex2d(9.04, 9.9); // F16
	glVertex2d(9, 9.76); // G16
	glVertex2d(8.94, 9.67); // H16
	glVertex2d(8.85, 9.54); // I16
	glVertex2d(8.79, 9.44); // J16
	glVertex2d(8.7, 9.34); // K16
	glVertex2d(8.62, 9.25); // L16
	glVertex2d(8.53, 9.14); // M16
	glVertex2d(8.44, 9.06); // N16
	glVertex2d(8.35, 8.96); // O16
	glVertex2d(8.26, 8.91); // P16
	glVertex2d(8.17, 8.84); // Q16
	glVertex2d(8.09, 8.77); // R16
	glVertex2d(7.97, 8.67); // S16
	glVertex2d(7.85, 8.58); // T16
	glVertex2d(7.74, 8.48); // U16
	glVertex2d(7.65, 8.41); // V16
	glVertex2d(7.58, 8.36); // W16
	glVertex2d(7.49, 8.29); // Z16
	glVertex2d(7.4, 8.2); // A17
	glVertex2d(7.32, 8.18); // B17
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(9, 10); // C17
	glVertex2d(8.94, 9.93); // D17
	glVertex2d(8.86, 9.85); // E17
	glVertex2d(8.79, 9.76); // F17
	glVertex2d(8.71, 9.68); // G17
	glVertex2d(8.62, 9.6); // H17
	glVertex2d(8.55, 9.54); // I17
	glVertex2d(8.48, 9.49); // J17
	glVertex2d(8.43, 9.43); // K17
	glVertex2d(8.3, 9.35); // L17
	glVertex2d(8.2, 9.3); // M17
	glVertex2d(8.15, 9.25); // N17
	glVertex2d(8.05, 9.18); // O17
	glVertex2d(7.95, 9.12); // P17
	glVertex2d(7.87, 9.06); // Q17
	glVertex2d(7.77, 9.01); // R17
	glVertex2d(7.67, 8.96); // S17
	glVertex2d(7.59, 8.92); // T17
	glVertex2d(7.54, 8.89); // U17
	glVertex2d(7.46, 8.84); // V17

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(14.92, 8.85); // W17
	glVertex2d(14.85, 8.7); // Z17
	glVertex2d(14.78, 8.51); // A18
	glVertex2d(14.73, 8.31); // B18
	glVertex2d(14.64, 8.08); // C18
	glVertex2d(14.56, 7.94); // D18
	glVertex2d(14.5, 7.76); // E18
	glVertex2d(14.43, 7.63); // F18
	glVertex2d(14.37, 7.48); // G18
	glVertex2d(14.26, 7.29); // H18
	glVertex2d(14.17, 7.12); // I18
	glVertex2d(14.07, 6.97); // J18
	glVertex2d(14.01, 6.84); // K18
	glVertex2d(13.94, 6.73); // L18
	glVertex2d(13.84, 6.61); // M18
	glVertex2d(13.76, 6.47); // N18
	glVertex2d(13.69, 6.36); // O18
	glVertex2d(13.61, 6.26); // P18
	glVertex2d(13.51, 6.17); // Q18
	glVertex2d(13.46, 6.06); // R18
	glVertex2d(13.36, 5.96); // S18

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(15, 5.17); // T18
	glVertex2d(14.89, 5.06); // U18
	glVertex2d(14.78, 4.96); // V18
	glVertex2d(14.67, 4.83); // W18
	glVertex2d(14.59, 4.73); // Z18
	glVertex2d(14.48, 4.64); // A19
	glVertex2d(14.37, 4.51); // B19
	glVertex2d(14.29, 4.45); // C19
	glVertex2d(14.19, 4.36); // D19
	glVertex2d(14.08, 4.28); // E19
	glVertex2d(14, 4.2); // F19
	glVertex2d(13.92, 4.13); // G19
	glVertex2d(13.81, 4.07); // H19
	glVertex2d(13.73, 3.99); // I19
	glVertex2d(13.62, 3.92); // J19
	glVertex2d(13.52, 3.84); // K19

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(12.46, 3.84); // L19
	glVertex2d(12.36, 3.88); // M19
	glVertex2d(12.27, 3.94); // N19
	glVertex2d(12.15, 4); // O19
	glVertex2d(12.04, 4.08); // P19
	glVertex2d(11.94, 4.16); // Q19
	glVertex2d(11.86, 4.22); // R19
	glVertex2d(11.77, 4.29); // S19
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(7.28, 5.48); // T19
	glVertex2d(7.4, 5.6); // U19
	glVertex2d(7.48, 5.7); // V19
	glVertex2d(7.56, 5.8); // W19
	glVertex2d(7.57, 5.89); // Z19
	glVertex2d(7.55, 5.94); // A20
	glVertex2d(7.45, 5.92); // B20
	glVertex2d(7.34, 5.86); // C20
	glVertex2d(7.23, 5.82); // D20
	glVertex2d(7.13, 5.75); // E20
	glVertex2d(7.02, 5.69); // F20
	glVertex2d(6.91, 5.62); // G20
	glVertex2d(6.78, 5.54); // H20
	glVertex2d(6.6, 5.41); // I20
	glVertex2d(6.42, 5.3); // J20
	glVertex2d(6.26, 5.19); // K20
	glVertex2d(6.17, 5.12); // L20
	glVertex2d(6.07, 5.04); // M20
	glVertex2d(6.01, 4.95); // N20
	glEnd();


	glBegin(GL_LINE_STRIP);

	glVertex2d(4.68, 5.99); // O20
	glVertex2d(4.73, 5.9); // P20
	glVertex2d(4.8, 5.8); // Q20
	glVertex2d(4.83, 5.68); // R20
	glVertex2d(4.9, 5.59); // S20
	glVertex2d(4.95, 5.49); // T20
	glVertex2d(5.01, 5.39); // U20
	glVertex2d(5.08, 5.31); // V20
	glVertex2d(5.13, 5.23); // W20
	glVertex2d(5.18, 5.15); // Z20
	glEnd();


	glBegin(GL_LINE_STRIP);

	glVertex2d(10.51, 6.66); // A21
	glVertex2d(10.41, 6.72); // B21
	glVertex2d(10.32, 6.79); // C21
	glVertex2d(10.23, 6.88); // D21
	glVertex2d(10.15, 6.95); // E21
	glVertex2d(10.08, 7.04); // F21
	glVertex2d(10.02, 7.09); // G21
	glEnd();



}



void lineasRostro() {
	colorNegro();
	glBegin(GL_LINE_STRIP);


	glVertex2d(12.4, 24.3); // C
	glVertex2d(12.45, 24.37); // D
	glVertex2d(12.5, 24.42); // E
	glVertex2d(12.58, 24.46); // F
	glVertex2d(12.64, 24.48); // G
	glVertex2d(12.71, 24.51); // H
	glVertex2d(12.78, 24.52); // I
	glVertex2d(12.82, 24.52); // J
	glEnd();


	glBegin(GL_LINE_STRIP);

	glVertex2d(12.61, 24.42); // K
	glVertex2d(12.65, 24.4); // L
	glVertex2d(12.72, 24.4); // M
	glVertex2d(12.8, 24.4); // N
	glVertex2d(12.87, 24.39); // O
	glVertex2d(12.94, 24.38); // P
	glVertex2d(13.01, 24.37); // Q
	glVertex2d(13.08, 24.36); // R
	glVertex2d(13.15, 24.36); // S
	glEnd();



	// OREJA DERECHA  LINEAS 
	glLineWidth(2.5);
	glBegin(GL_LINE_STRIP);

	glVertex2d(14, 23.86); // T
	glVertex2d(14.08, 23.93); // U
	glVertex2d(14.19, 24.03); // V
	glVertex2d(14.29, 24.13); // W
	glVertex2d(14.37, 24.27); // Z
	glVertex2d(14.4, 24.4); // A1
	glVertex2d(14.37, 24.51); // B1
	glVertex2d(14.32, 24.57); // C1
	glVertex2d(14.24, 24.63); // D1
	glVertex2d(14.19, 24.67); // E1
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(14.17, 24.19); // F1
	glVertex2d(14.1, 24.22); // G1
	glVertex2d(14.04, 24.26); // H1
	glVertex2d(14.03, 24.34); // I1
	glVertex2d(14.05, 24.45); // J1
	glVertex2d(14.1, 24.56); // K1
	glVertex2d(14.16, 24.64); // L1
	glVertex2d(14.24, 24.77); // M1
	glVertex2d(14.32, 24.87); // N1
	glVertex2d(14.38, 24.95); // O1
	glVertex2d(14.44, 25.03); // P1
	glVertex2d(14.52, 25.1); // Q1
	glVertex2d(14.6, 25.17); // R1
	glVertex2d(14.68, 25.22); // S1
	glVertex2d(14.77, 25.22); // T1
	glVertex2d(14.86, 25.2); // U1
	glVertex2d(14.9, 25.17); // V1
	glVertex2d(14.94, 25.12); // W1
	glVertex2d(14.97, 25.03); // Z1
	glVertex2d(14.97, 24.96); // A2
	glVertex2d(14.95, 24.9); // B2
	glVertex2d(14.91, 24.85); // C2
	glVertex2d(14.89, 24.83); // D2
	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex2d(14.4, 24.83); // E2
	glVertex2d(14.45, 24.8); // F2
	glVertex2d(14.5, 24.76); // G2
	glVertex2d(14.55, 24.72); // H2
	glVertex2d(14.59, 24.67); // I2
	glVertex2d(14.63, 24.63); // J2
	glVertex2d(14.66, 24.6); // K2
	glEnd();


	//LINEAS CUELLO
	glBegin(GL_LINE_STRIP);

	glVertex2d(8.73, 21.24); // L2
	glVertex2d(8.8, 21.23); // M2
	glVertex2d(8.9, 21.22); // N2
	glVertex2d(8.99, 21.2); // O2
	glVertex2d(9.06, 21.18); // P2
	glVertex2d(9.15, 21.14); // Q2
	glVertex2d(9.23, 21.11); // R2
	glVertex2d(9.29, 21.07); // S2
	glVertex2d(9.33, 21.04); // T2
	glVertex2d(9.38, 20.99); // U2
	glVertex2d(9.4, 20.95); // V2

	glEnd();


	glBegin(GL_LINE_STRIP);
	glVertex2d(10.47, 21); // W2
	glVertex2d(10.58, 21.03); // Z2
	glVertex2d(10.69, 21.05); // A3
	glVertex2d(10.8, 21.06); // B3
	glVertex2d(10.92, 21.07); // C3
	glVertex2d(11.05, 21.09); // D3
	glVertex2d(11.16, 21.09); // E3
	glVertex2d(11.27, 21.08); // F3
	glVertex2d(11.38, 21.08); // G3
	glVertex2d(11.46, 21.07); // H3
	glVertex2d(11.57, 21.05); // I3
	glVertex2d(11.67, 21.02); // J3
	glVertex2d(11.76, 21); // K3
	glEnd();

	// LINEA POLO
	glBegin(GL_LINE_STRIP);

	glVertex2d(7.36, 16.97); // L3
	glVertex2d(7.5, 17.01); // M3
	glVertex2d(7.71, 17.05); // N3
	glVertex2d(7.88, 17.13); // O3
	glVertex2d(8.08, 17.16); // P3
	glVertex2d(8.32, 17.27); // Q3
	glVertex2d(8.49, 17.28); // R3
	glVertex2d(8.7, 17.38); // S3
	glVertex2d(8.92, 17.47); // T3
	glVertex2d(9.11, 17.54); // U3
	glVertex2d(9.36, 17.63); // V3
	glVertex2d(9.56, 17.74); // W3
	glVertex2d(9.75, 17.83); // Z3
	glVertex2d(9.93, 17.95); // A4
	glVertex2d(10.14, 18.06); // B4
	glVertex2d(10.36, 18.19); // C4
	glVertex2d(10.51, 18.29); // D4
	glVertex2d(10.71, 18.42); // E4
	glVertex2d(10.88, 18.51); // F4
	glVertex2d(11.06, 18.65); // G4
	glVertex2d(11.23, 18.79); // H4
	glVertex2d(11.37, 18.9); // I4
	glVertex2d(11.49, 19.03); // J4
	glVertex2d(11.62, 19.17); // K4
	glVertex2d(11.75, 19.3); // L4
	glVertex2d(11.94, 19.45); // M4
	glVertex2d(12.07, 19.63); // N4
	glVertex2d(12.2, 19.8); // O4
	glVertex2d(12.36, 19.96); // P4
	glVertex2d(12.45, 20.1); // Q4
	glVertex2d(12.56, 20.25); // R4
	glVertex2d(12.65, 20.41); // S4

	glEnd();

}




void lineaRostroInferior() {
	colorNegro();
	glBegin(GL_LINE_STRIP);

	glVertex2d(7.24, 24.75); // O
	glVertex2d(7.17, 24.63); // P
	glVertex2d(7.09, 24.54); // Q
	glVertex2d(7.07, 24.45); // J1
	glVertex2d(7.02, 24.36); // K1
	glVertex2d(6.95, 24.24); // L1
	glVertex2d(6.9, 24.15); // M1
	glVertex2d(6.85, 24.04); // N1
	glVertex2d(6.8, 23.93); // O1
	glVertex2d(6.78, 23.86); // P1
	glVertex2d(6.75, 23.75); // Q1
	glVertex2d(6.76, 23.63); // R1
	glVertex2d(6.77, 23.54); // S1
	glVertex2d(6.79, 23.45); // T1
	glVertex2d(6.84, 23.35); // U1
	glVertex2d(6.91, 23.25); // V1
	glVertex2d(7.08, 23.09); // W1
	glVertex2d(7.3, 22.93); // Z1
	glVertex2d(7.46, 22.83); // A2
	glVertex2d(7.56, 22.76); // B2
	glVertex2d(7.69, 22.68); // C2
	glVertex2d(7.89, 22.58); // D2
	glVertex2d(8.08, 22.48); // E2
	glVertex2d(8.25, 22.41); // F2
	glVertex2d(8.4, 22.33); // G2
	glVertex2d(8.58, 22.27); // H2
	glVertex2d(8.77, 22.23); // I2
	glVertex2d(8.92, 22.19); // J2
	glVertex2d(9.13, 22.15); // K2
	glVertex2d(9.36, 22.13); // L2
	glVertex2d(9.52, 22.09); // M2
	glVertex2d(9.72, 22.06); // N2
	glVertex2d(9.9, 22.04); // O2
	glVertex2d(10.08, 22.05); // P2
	glVertex2d(10.3, 22.04); // Q2
	glVertex2d(10.49, 22.04); // R2
	glVertex2d(10.71, 22.06); // S2
	glVertex2d(10.9, 22.08); // T2
	glVertex2d(11.14, 22.11); // U2
	glVertex2d(11.32, 22.15); // V2
	glVertex2d(11.52, 22.21); // W2
	glVertex2d(11.73, 22.25); // Z2
	glVertex2d(11.93, 22.31); // A3
	glVertex2d(12.12, 22.37); // B3
	glVertex2d(12.29, 22.45); // C3
	glVertex2d(12.51, 22.53); // D3
	glVertex2d(12.7, 22.6); // E3
	glVertex2d(12.9, 22.72); // F3
	glVertex2d(13.09, 22.83); // G3
	glVertex2d(13.3, 22.94); // H3
	glVertex2d(13.48, 23.07); // I3
	glVertex2d(13.63, 23.21); // J3


	glEnd();
}




void xxxx() {
	glColor3ub(250, 213, 154);
	glBegin(GL_LINE_STRIP);

	glEnd();
}



void configuracionInicial() {
	glLoadIdentity();
	gluOrtho2D(0, 24, 0, 38); // ANCHO Y ALTO
	//gluOrtho2D(0, 48, 0, 76); // ANCHO Y ALTO

	double red = 170 / 255.0;
	double green = 170 / 255.0;
	double blue = 170 / 255.0;
	glClearColor(red, green, blue, 1);		// color de fondo

	glClear(GL_COLOR_BUFFER_BIT);
	
}


void dibujar() {
	configuracionInicial();

	// metodos a implementar...
	caraFondo();
	primerPelo();
	segundoPelo();
	tercerPelo();
	cuartoPelo();
	
	ultimoCabelloConOrejaDerecha();
	pelosCabeza();
	entradaAladoOreja();
	entradaAladoOreja2();
	entradaAladoOreja3();

	// OJO IZQUIERDO
	ojoIzquierdoFondo();
	ojoIzquierdoContorno();
	ojoIzquierdoFondoNegro();
	
	
	// OREJA IZQUIERDA
	orejaIzquierdaColor();
	orejaIzquierdaContorno();
	
	// ROSTRO INFERIOR
	rostroInferior();
	
	// INICIO OJO DERECHO 
	ojoDerechoFondo();
	ojoDerechoContorno();
	ojoDerechoFondoNegro();
	
	// nariz boca
	narizBoca();
	cejas();
	pantalonLadoIzq();
	pantalonLadoDer();

	correa();
	polo();
	cuello();

	//BRAZO IZQUIERDO
	brazoIzquierdoMunequera();
	brazoIzquierdo();
	BrazoIzquierdInferior();

	// BRAZO DERECHO
	brazoDerechoMunequera();
	brazoDerechoSuperior();
	brazoDerechoInferior();

	// CORREA
	correaLazoIzqu();
	correaLazoDere();

	// ZAPATO IZQUIERDO 
	zapatoParteBlanco1();
	zapatoParteBlanco2();
	zapatoParteNegro();
	zapatoParteAzul();
	zapatoParteBlanco1();

	// ZAPATO DERECHO
	zapatoDerParteBlanco1();
	zapatoDerParteBlanco2();
	zapatoDerParteNegro();
	zapatoDerParteAzul();
	zapatoDerParteBlanco1();


	//COLA
	colaLarga();

	circuloAmarillo();
	rectangulosNegro();



	lineas();
	lineasRostro();
	lineaRostroInferior();


	glFlush();
}




int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(800, 50); // POSICION VENTANA
	glutInitWindowSize(600, 950); // ANCHO Y ALTO 
	glutCreateWindow("Goku");
	glutDisplayFunc(dibujar);
	glutMainLoop();

	return 0;
}

*/ 