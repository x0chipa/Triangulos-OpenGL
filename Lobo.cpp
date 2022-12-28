#include <GL/glut.h>
//Rutina de inicializacion
void inicializa(void){
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,500,0,500);

}
float color(float color){
	return color/255;
}
	
void pinta(void){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(9); //GROSOR
	
	
	glBegin(GL_TRIANGLES);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(0,0);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(0,500);
	glVertex2i(500,0);
	
	glColor3f(color(48),color(52),color(87));
	glVertex2i(0,500);
	glVertex2i(500,0);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(500,500);
	
	
	glColor3f(color(53),color(53),color(103));
	glVertex2i(96,312);
	glColor3f(color(0),color(0),color(0));
	glVertex2i(219,150);
	glVertex2i(326,337);
	glEnd();
	
	//une triangulos
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(109,182);
	glVertex2i(100,225);
	glColor3f(color(52),color(69),color(112));
	glVertex2i(145,159);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(127,220);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(color(255),color(255),color(255));
	glVertex2i(190,23);
	glVertex2i(185,0);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(240,33);
	glColor3f(color(255),color(255),color(255));
	glVertex2i(262,0);
	glEnd();
	
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(240,33);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(262,0);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(327,29);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(335,0);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(262,95);
	glVertex2i(327,29);
	glVertex2i(320,95);
	glVertex2i(261,182);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(297,295);
	glVertex2i(253,312);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(264,237);
	glVertex2i(357,198);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(137,362);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(135,320);
	glVertex2i(198,272);				
	glVertex2i(189,321);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(137,362);
	glColor3f(color(0),color(0),color(0));
	glVertex2i(155,384);
	glVertex2i(121,397);
	glVertex2i(101,383);
	glVertex2i(102,367);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(258,328);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(281,322);
	glVertex2i(285,316);
	glVertex2i(271,314);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(314,339);
	glColor3f(color(255),color(255),color(255));
	glVertex2i(281,322);
	glVertex2i(258,328);
	glVertex2i(236,348);
	glVertex2i(264,352);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(409,98);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(357,198);
	glVertex2i(320,95);
	glVertex2i(378,34);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(357,198);
	glVertex2i(409,98);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(480,52);
	glVertex2i(430,170);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(378,34);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(409,98);
	glVertex2i(464,62);
	glVertex2i(484,11);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(443,20);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(443,0);
	glVertex2i(354,0);
	glVertex2i(378,34);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(327,303);
	glVertex2i(285,316);
	glVertex2i(357,198);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(450,159);
	glVertex2i(421,244);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(58),color(52),color(87));
	glVertex2i(417,378);
	glVertex2i(327,303);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(421,244);
	glVertex2i(434,386);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(281,322);
	glVertex2i(285,316);
	glColor3f(color(58),color(52),color(87));
	glVertex2i(327,303);
	glVertex2i(314,339);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(434,386);
	glVertex2i(441,366);
	glVertex2i(438,266);
	glColor3f(color(58),color(52),color(87));
	glVertex2i(421,244);
	glEnd();
	

	
	
	//Hace un triangulo cada 3 puntos
	glBegin(GL_TRIANGLES);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(320,95);
	glVertex2i(357,198);
	glColor3f(color(40),color(40),color(40));		
	glVertex2i(246,205);
	
	glColor3f(color(254),color(254),color(254));
	glVertex2i(141,169);
	glVertex2i(127,220);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(233,194);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(117,154);
	glVertex2i(73,219);
	glVertex2i(100,225);
	glVertex2i(178,148);
	glVertex2i(176,21);
	glVertex2i(220,119);
	
	glColor3f(color(40),color(40),color(40));
	glVertex2i(155,173);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(178,148);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(233,194);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(178,148);
	glVertex2i(233,194);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(220,119);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(176,21);
	glColor3f(color(52),color(69),color(112));
	glVertex2i(240,33);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(220,119);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(190,23);
	glVertex2i(185,0);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(240,33);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(262,0);
	glVertex2i(185,0);
	glColor3f(color(100),color(201),color(243));
	glVertex2i(240,33);
	
	glColor3f(color(53),color(53),color(102));
	glVertex2i(240,33);
	glVertex2i(262,95);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(327,29);
	
	glColor3f(color(41),color(175),color(229));
	glVertex2i(240,33);
	glVertex2i(262,95);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(220,119);
	
	glColor3f(color(41),color(175),color(229));
	glVertex2i(220,119);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(262,95);
	glColor3f(color(199),color(234),color(251));
	glVertex2i(233,194);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(233,194);
	glVertex2i(261,182);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(262,95);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(261,204);
	glVertex2i(233,194);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(261,182);
	
	glColor3f(color(40),color(40),color(40));				
	glVertex2i(327,29);
	glVertex2i(320,95);
	glVertex2i(341,-18);
	
	glColor3f(color(40),color(40),color(40));				
	glVertex2i(320,95);
	glColor3f(color(40),color(40),color(40));				
	glVertex2i(341,-18);
	glColor3f(color(53),color(53),color(102));
	glVertex2i(378,34);
	
	glColor3f(color(40),color(40),color(40));				
	glVertex2i(261,204);
	glVertex2i(264,237);
	glColor3f(color(53),color(53),color(102));				
	glVertex2i(357,198);
	
	glColor3f(color(48),color(52),color(87));				
	glVertex2i(264,237);
	glColor3f(color(39),color(97),color(170));				
	glVertex2i(198,272);
	glVertex2i(253,312);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(189,321);
	glColor3f(color(41),color(175),color(299));
	glVertex2i(253,312);
	glVertex2i(198,272);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(118,330);
	glVertex2i(137,362);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(135,320);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(118,330);
	glVertex2i(137,362);
	glVertex2i(102,367);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(96,327);
	glVertex2i(102,367);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(118,330);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(189,321);
	glVertex2i(155,384);
	glColor3f(color(41),color(175),color(229));				
	glVertex2i(137,362);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(246,312);
	glVertex2i(155,384);
	glVertex2i(189,321);
	
	
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(213,338);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(246,331);
	glVertex2i(245,313);
	
	glColor3f(color(40),color(40),color(40));
	glVertex2i(245,313);
	glVertex2i(253,312);
	glVertex2i(246,331);
	
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(246,331);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(253,312);
	glVertex2i(258,328);
	
	glColor3f(color(53),color(53),color(102));
	glVertex2i(271,314);
	glColor3f(color(40),color(40),color(40));
	glVertex2i(258,328);
	glVertex2i(253,312);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(253,312);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(297,295);
	glVertex2i(285,316);
	
	glColor3f(color(199),color(234),color(251));
	glVertex2i(213,338);
	glVertex2i(236,348);
	glColor3f(color(41),color(175),color(229));
	glVertex2i(258,328);
	

	glColor3f(color(238),color(56),color(92));
	glVertex2i(402,318);
	glColor3f(color(58),color(52),color(87));
	glVertex2i(314,339);
	glVertex2i(327,303);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(118,330);
	glVertex2i(96,327);
	glVertex2i(96,312);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(119,316);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(39),color(97),color(170));
	glVertex2i(119,316);
	glVertex2i(118,330);
	glVertex2i(135,320);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(198,272);
	glVertex2i(196,262);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(198,272);
	glVertex2i(196,262);
	glVertex2i(259,226);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(264,237);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(251,209); //C
	glColor3f(color(238),color(56),color(92));
	glVertex2i(264,237); //A
	glVertex2i(261,204); //B
	glEnd();				
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(231,205);
	glVertex2i(233,194);
	glColor3f(color(238),color(56),color(92));
	glVertex2i(261,204); //B
	glColor3f(color(48),color(52),color(87));
	glVertex2i(252,209); //C
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(231,205);
	glVertex2i(233,194);
	//glColor3f(color(238),color(56),color(92));
	glColor3f(color(48),color(52),color(87));
	glVertex2i(100,225);
	glVertex2i(103,236);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(color(48),color(52),color(87));
	glVertex2i(100,225);
	glVertex2i(103,236);
	glVertex2i(73,219);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(197,213);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(175,218);
	glVertex2i(191,226);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(167,220);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(155,223);
	glVertex2i(166,239);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(142,226);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(128,229);
	glVertex2i(141,243);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(103,236);
	glVertex2i(118,250);
	glVertex2i(117,232);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(103,236);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(88,228);
	glVertex2i(100,255);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(73,219);
	glVertex2i(84,247);
	glVertex2i(88,228);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(140,255);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(130,269);
	glVertex2i(132,250);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(122,280);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(113,291);
	glVertex2i(113,272);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(183,272);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(173,279);
	glVertex2i(169,260);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(161,287);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(146,296);
	glVertex2i(150,274);
	
	glColor3f(color(214),color(217),color(221));
	glVertex2i(118,296);
	glColor3f(color(141),color(152),color(159));
	glVertex2i(108,314);
	glVertex2i(119,316);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(126,312);
	glVertex2i(128,293);
	glVertex2i(135,305);
	
	glColor3f(color(255),color(255),color(255));
	glVertex2i(96,312);
	glVertex2i(102,289);
	glVertex2i(108,314);
	glEnd();		
	glFlush();
}
		
int main (int argc, char **argv) {
	glutInitWindowSize(500,500);
	glutInit (&argc, argv);
	glutCreateWindow("Triangulos en OpenGl");
	inicializa();
	glutDisplayFunc(pinta);
	glutMainLoop();
	return 0;
}
