#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

void display();
void GoMenu(int value);

void fish_first();
void fish_second();
void fish();

void land();
void sea();
void sky();
void water();
void wire();

void man();
void man_first();

void scalefish_first();
void scalefish_second();
void scalefish_third();

void scaleman();
void scaleman_first();
void scaleman_second();

GLfloat x, y, a, b, theta;
float move, angle;

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void fish_first()
{
    //Body of Fish
    glColor3f(0.3, 0.0, 0.7);
    glBegin(GL_POLYGON);
    glVertex2i(100, 100);
    glVertex2i(125, 125);
    glVertex2i(150, 100);
    glVertex2i(125, 75);
    glVertex2i(100, 100);
    glEnd();

    //Stripes on Fish
    glColor3f(1.0, 0.0, 0.9);
    glBegin(GL_LINES);
    glVertex2i(147, 105);
    glVertex2i(147, 95);
    glEnd();
    glColor3f(1.0, 0.0, 0.9);
    glBegin(GL_LINES);
    glVertex2i(135, 115);
    glVertex2i(135, 85);
    glEnd();
    glColor3f(1.0, 0.0, 0.9);
    glBegin(GL_LINES);
    glVertex2i(127, 125);
    glVertex2i(127, 75);
    glEnd();

    //Fins of Fish
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.9);
    glVertex2i(125, 125);
    glVertex2i(120, 160);
    glVertex2i(125, 140);
    glVertex2i(130, 160);
    glVertex2i(125, 125);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.9);
    glVertex2i(125, 75);
    glVertex2i(120, 45);
    glVertex2i(125, 60);
    glVertex2i(130, 45);
    glVertex2i(125, 75);
    glEnd();

    //Tail of Fish
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.9);
    glVertex2i(150, 100);
    glVertex2i(175, 125);
    glVertex2i(175, 75);
    glVertex2i(150, 100);
    glEnd();

    //Eye of fish
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(115, 105);
    glEnd();
}

void fish_second()
{
    //Body of Fish
    glColor3f(0.9, 0.8, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(200, 350);
    glVertex2i(225, 375);
    glVertex2i(250, 350);
    glVertex2i(225, 325);
    glEnd();

    //Stipes on Fish
    glColor3f(0.9, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(205, 355);
    glVertex2i(205, 345);
    glEnd();
    glColor3f(0.9, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(215, 365);
    glVertex2i(215, 335);
    glEnd();
    glColor3f(0.9, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(225, 375);
    glVertex2i(225, 325);
    glEnd();

    //Fins of Fish
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);
    glVertex2i(225, 325);
    glVertex2i(205, 300);
    glVertex2i(215, 335);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);
    glVertex2i(225, 375);
    glVertex2i(205, 400);
    glVertex2i(215, 365);
    glEnd();

    //Tail of Fish
    glBegin(GL_POLYGON);
    glColor3f(0.9, 0.0, 0.0);
    glVertex2i(200, 350);
    glVertex2i(175, 375);
    glVertex2i(175, 325);
    glVertex2i(200, 350);
    glEnd();

    //Eye of fish
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(235, 355);
    glEnd();
}

void land()
{
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 350);
    glVertex2i(50, 350);
    glVertex2i(350, 0);
    glVertex2i(0, 0);
    glVertex2i(0, 350);
    glEnd();
}

void scaleman_second()
{
    glPushMatrix();
    glTranslated(-110.0, 220.0, 0.0);
    glScaled(0.9, 0.9, 0);
    man_first();
    glPopMatrix();
}

void scalefish_first()
{
    glPushMatrix();
    glScaled(0.7, 0.7, 0.0);
    glTranslated(170, 35, 0);
    fish_first();
    glTranslated(180, 75, 0);
    fish_first();
    glTranslated(200, 335, 0);
    fish_first();
    glTranslated(200, -65, 0);
    fish_first();
    glTranslated(-50, -315, 0);
    fish_first();
    glPopMatrix();
}

void scalefish_second()
{
    glPushMatrix();
    glScaled(0.7, 0.7, 0.0);
    glTranslated(200, 30, 0);
    fish_second();
    glTranslated(270, -20, 0);
    fish_second();
    glTranslated(200, -100, 0);
    fish_second();
    glTranslated(70, -180, 0);
    fish_second();
    glTranslated(-800, 300, 0);
    fish_second();
    glPopMatrix();
}
void scalefish_third()
{
    glPushMatrix();
    glScaled(0.5, 0.6, 0.0);
    glTranslated(200, 80, 0);
    fish_first();
    glTranslated(-240, -165, 0);
    fish_second();
    glTranslated(100, 50, 0);
    fish_second();
}

void man_first()
{
    glColor3ub(0, 0, 0);
    glPushMatrix();
    glTranslatef(270, 105, 0);
    glutSolidTorus(1, 15, 100, 90);
    glPopMatrix();

    //Filling face
    glColor3ub(255, 191, 128);
    glPushMatrix();
    glTranslatef(270, 105, 0);
    glutSolidTorus(7, 7, 100, 90);
    glPopMatrix();

    //Drawing Nose and Eyebrow
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(270, 107);
    glVertex2i(270, 100);
    glVertex2i(261, 113);
    glVertex2i(267, 113);
    glVertex2i(273, 113);
    glVertex2i(279, 113);
    glEnd();

    //Eyes
    glBegin(GL_POLYGON);
    glVertex2i(263, 111);
    glVertex2i(265, 111);
    glVertex2i(265, 109);
    glVertex2i(263, 109);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(275, 111);
    glVertex2i(277, 111);
    glVertex2i(277, 109);
    glVertex2i(275, 109);
    glEnd();

    //Mouth
    glBegin(GL_POLYGON);
    glVertex2i(266, 97);
    glVertex2i(270, 95);
    glVertex2i(274, 97);
    glVertex2i(270, 95);
    glEnd();

    //Shirt
    glBegin(GL_POLYGON);
    glColor3ub(55, 50, 70);
    glVertex2i(259, 90);
    glVertex2i(281, 90);
    glVertex2i(296, 79);
    glVertex2i(291, 71);
    glVertex2i(286, 75);
    glVertex2i(286, 55);
    glVertex2i(254, 55);
    glVertex2i(254, 75);
    glVertex2i(249, 70);
    glVertex2i(244, 79);
    glEnd();

    //Hands
    glBegin(GL_POLYGON);
    glColor3ub(255, 191, 128);
    glVertex2i(295, 78);
    glVertex2i(305, 63);
    glVertex2i(297, 64);
    glVertex2i(292, 72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(305, 63);
    glVertex2i(286, 48);
    glVertex2i(286, 55);
    glVertex2i(297, 64);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(286, 55);
    glVertex2i(340, 55);
    glEnd();
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(340, 55);
    glEnd();
    glBegin(GL_LINES);

    glVertex2i(340, 55);
    glVertex2i(340, 1.5);
    glEnd();

    //Body
    glBegin(GL_POLYGON);
    glColor3f(0.256, 1.0, 0.693);
    glVertex2i(335, 1);
    glVertex2i(340, -15);
    glVertex2i(345, 1);
    glVertex2i(350, -25);
    glVertex2i(340, -50);
    glVertex2i(330, -25);
    glVertex2i(335, 1.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.5);
    glVertex2i(340, -50);
    glVertex2i(349, -65);
    glVertex2i(332.5, -65);
    glVertex2i(340, -50);
    glEnd();

    //Fins of Fish
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.5);
    glVertex2i(330, -25);
    glVertex2i(325, -40);
    glVertex2i(332.5, -30);
    glVertex2i(325, -40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.8, 0.5);
    glVertex2i(350, -25);
    glVertex2i(355, -40);
    glVertex2i(347.5, -30);
    glVertex2i(350, -25);
    glEnd();
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(338.5, -8);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 191, 128);
    glVertex2i(245, 78);
    glVertex2i(235, 63);
    glVertex2i(243, 64);
    glVertex2i(248, 72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(235, 63);
    glVertex2i(254, 48);
    glVertex2i(254, 55);
    glVertex2i(243, 64);
    glEnd();

    //Belt
    glBegin(GL_POLYGON);
    glColor3ub(100, 120, 130);
    glVertex2i(286, 55);
    glVertex2i(254, 55);
    glVertex2i(254, 50);
    glVertex2i(286, 50);
    glEnd();

    //Collar
    glBegin(GL_POLYGON);
    glColor3ub(200, 140, 110);
    glVertex2i(259, 90);
    glVertex2i(281, 90);
    glVertex2i(276, 80);
    glVertex2i(264, 80);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(20, 140, 110);
    glVertex2i(270, 87);
    glVertex2i(275, 80);
    glVertex2i(265, 80);
    glEnd();

    //Pant
    glBegin(GL_POLYGON);
    glColor3ub(10, 10, 10);
    glVertex2i(285, 50);
    glVertex2i(254, 50);
    glVertex2i(250, 15);
    glVertex2i(260, 15);
    glVertex2i(263, 48);
    glVertex2i(280, 15);
    glVertex2i(290, 15);
    glEnd();
}

void water()
{
    glColor3f(0.0, 0.5, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(180, 200);
    glVertex2i(500, 200);
    glVertex2i(500, 0);
    glVertex2i(350, 0);
    glVertex2i(180, 200);
    glEnd();
}

void wire()
{
    // For Food Wire
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(375, 500);
    glVertex2i(375, 460);
    glVertex2i(372.5, 460);
    glVertex2i(372.5, 500);
    glEnd();

    //For Food Block
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(368, 460);
    glVertex2i(368, 445);
    glVertex2i(382, 445);
    glVertex2i(382, 460);
    glEnd();
}

void scaleman()
{
    glPushMatrix();
    glTranslated(270, 105, 0);
    glScaled(0.3, 0.6, 0);
    glTranslated(-270, -105, 0);
    man();
    glPopMatrix();
}

void sky()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 350);
    glVertex2i(0, 500);
    glVertex2i(500, 500);
    glVertex2i(500, 200);
    glVertex2i(180, 200);
    glVertex2i(50, 350);
    glVertex2i(0, 350);
    glEnd();
}

void sea()
{
    glColor3f(0.3, 0.4, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 500);
    glVertex2i(500, 500);
    glVertex2i(500, 0);
    glVertex2i(0, 0);
    glVertex2i(0, 500);
    glEnd();
}

void man()
{
    glColor3ub(0, 0, 0);
    glPushMatrix();
    glTranslatef(270, 105, 0);
    glutSolidTorus(1, 15, 100, 90);
    glPopMatrix();

    //Filling Face
    glColor3ub(255, 191, 128);
    glPushMatrix();
    glTranslatef(270, 105, 0);
    glutSolidTorus(7, 7, 100, 90);
    glPopMatrix();

    //Drawing Nose and Eyebrow
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(270, 107);
    glVertex2i(270, 100);
    glVertex2i(261, 113);
    glVertex2i(267, 113);
    glVertex2i(273, 113);
    glVertex2i(279, 113);
    glEnd();

    //Eyes
    glBegin(GL_POLYGON);
    glVertex2i(263, 111);
    glVertex2i(265, 111);
    glVertex2i(265, 109);
    glVertex2i(263, 109);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(275, 111);
    glVertex2i(277, 111);
    glVertex2i(277, 109);
    glVertex2i(275, 109);
    glEnd();

    //Mouth
    glBegin(GL_POLYGON);
    glVertex2i(266, 97);
    glVertex2i(270, 95);
    glVertex2i(274, 97);
    glVertex2i(270, 95);
    glEnd();

    //Shirt
    glBegin(GL_POLYGON);
    glColor3ub(55, 50, 70);
    glVertex2i(259, 90);
    glVertex2i(281, 90);
    glVertex2i(296, 79);
    glVertex2i(291, 71);
    glVertex2i(286, 75);
    glVertex2i(286, 55);
    glVertex2i(254, 55);
    glVertex2i(254, 75);
    glVertex2i(249, 70);
    glVertex2i(244, 79);
    glEnd();

    //Hands
    glBegin(GL_POLYGON);
    glColor3ub(255, 191, 128);
    glVertex2i(295, 78);
    glVertex2i(305, 63);
    glVertex2i(297, 64);
    glVertex2i(292, 72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(305, 63);
    glVertex2i(286, 48);
    glVertex2i(286, 55);
    glVertex2i(297, 64);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(286, 55);
    glVertex2i(340, 55);
    glEnd();
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(340, 55);
    glEnd();
    glBegin(GL_LINES);
    glVertex2i(340, 55);
    glVertex2i(340, 1);
    glVertex2i(340, 1);
    glVertex2i(333, 1);
    glVertex2i(333, 1);
    glVertex2i(333, -8);
    glVertex2i(333, -8);
    glVertex2i(340, -8);
    glVertex2i(340, -8);
    glVertex2i(340, -4);
    glVertex2i(340, -4);
    glVertex2i(337, -4);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 191, 128);
    glVertex2i(245, 78);
    glVertex2i(235, 63);
    glVertex2i(243, 64);
    glVertex2i(248, 72);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(235, 63);
    glVertex2i(254, 48);
    glVertex2i(254, 55);
    glVertex2i(243, 64);
    glEnd();

    //Belt
    glBegin(GL_POLYGON);
    glColor3ub(100, 120, 130);
    glVertex2i(286, 55);
    glVertex2i(254, 55);
    glVertex2i(254, 50);
    glVertex2i(286, 50);
    glEnd();
    //Collar
    glBegin(GL_POLYGON);
    glColor3ub(200, 140, 110);
    glVertex2i(259, 90);
    glVertex2i(281, 90);
    glVertex2i(276, 80);
    glVertex2i(264, 80);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(20, 140, 110);
    glVertex2i(270, 87);
    glVertex2i(275, 80);
    glVertex2i(265, 80);
    glEnd();

    //Pant
    glBegin(GL_POLYGON);
    glColor3ub(10, 10, 10);
    glVertex2i(285, 50);
    glVertex2i(254, 50);
    glVertex2i(250, 15);
    glVertex2i(260, 15);
    glVertex2i(263, 48);
    glVertex2i(280, 15);
    glVertex2i(290, 15);
    glEnd();
}

void scaleman_first()
{
    glPushMatrix();
    glTranslated(-250.0, 200.0, 0.0);
    glScaled(0.9, 0.9, 0);
    man();
    glPopMatrix();
    glFlush();
}

void scalefishfood()
{
    glPushMatrix();
    glScaled(0.6, 0.5, 0.0);
    glTranslated(250, 515, 0);
    fish();
    glPopMatrix();
}

void fish()
{
    //For food eating fish body
    glColor3f(0.256, 1.0, 0.693);
    glBegin(GL_POLYGON);
    glVertex2i(370, 375);
    glVertex2i(370, 330.5);
    glVertex2i(330, 330.5);
    glVertex2i(340, 390);
    glVertex2i(360.5, 390);
    glVertex2i(355, 370);
    glVertex2i(370, 375);
    glEnd();

    //Right fin
    glColor3f(0.6, 0.8, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(370, 335.5);
    glVertex2i(365, 300);
    glVertex2i(360.5, 335.5);
    glEnd();

    //Left fin
    glColor3f(0.6, 0.8, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(345, 390);
    glVertex2i(325, 400);
    glVertex2i(340, 380);
    glEnd();
    glColor3f(0.6, 0.8, 0.5);

    //Tail
    glBegin(GL_POLYGON);
    glVertex2i(335, 330.5);
    glVertex2i(335.5, 300);
    glVertex2i(315.5, 350);
    glVertex2i(335, 330.5);
    glEnd();
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(360, 370);
    glEnd();
}

void display5()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    sky();
    land();
    water();
    scaleman_second();
    scalefish_third();
    glFlush();
}

void display4(void)
{
    x = 0.0;
    y = 10.0;
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.5, 0.9, 0.0);
    for (int i = 0; i <= 5000; i++)
    {
        {
            glClear(GL_COLOR_BUFFER_BIT);
            wire();
            scalefishfood();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glTranslatef(x, 0.0, 0.0);
            scalefish_first();
            x = x - 0.3;
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glTranslatef(y, 0.0, 0.0);
            y = y + 0.3;
            scalefish_second();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glFlush();
        }
        if (x < -675)
        {
            x = 300;
        }
        if (y > 350)
        {
            y = -675;
        }

        glFlush();
    }
    glClear(GL_COLOR_BUFFER_BIT);
    wire();
    scalefishfood();
    scalefish_first();
    scalefish_second();
    glFlush();
}

void display3(void)
{
    x = 0.0, y = 10.0;
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.5, 0.9, 0.0);
    wire();
    for (int i = 0; i < 4000; i++)
    {
        {
            glClear(GL_COLOR_BUFFER_BIT);
            wire();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();

            glTranslatef(x, 0.0, 0.0);
            scalefish_first();
            x = x - 0.3;
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glTranslatef(y, 0.0, 0.0);
            y = y + 0.3;
            scalefish_second();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glFlush();
        }
        if (x < -675)
            x = 300;

        if (y > 350)
            y = -675;
    }
    glClear(GL_COLOR_BUFFER_BIT);
    wire();
    scalefish_first();
    scalefish_second();
    glFlush();
}
void display1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i <= 5000; i++)
    {
        {
            glClear(GL_COLOR_BUFFER_BIT);
            sea();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glTranslatef(x, 0.0, 0.0);
            scalefish_first();
            x = x - 0.4;
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();

            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glPushMatrix();
            glTranslatef(y, 0.0, 0.0);
            scalefish_second();
            y = y + 0.3;
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
            glFlush();
        }
        if (x < -675)
            x = 300;

        if (y > 350)
            y = -675;
    }
    glClear(GL_COLOR_BUFFER_BIT);
    sea();
    scalefish_first();
    scalefish_second();
    glFlush();
}
void display2(void)
{
    for (int i = 0; i < 700; i++)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        sky();
        land();
        water();
        glPushMatrix();
        glTranslatef(x, 0.0, 0.0);
        scaleman_first();
        x = x + 0.2;
        glPopMatrix();
        glFlush();
    }
    x = 0;
    glFlush();
}

//Landing page
void landingPage(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0.6234, 0.56, 0.4745);
    glVertex2i(0, 0);
    glVertex2i(0, 500);
    glVertex2i(500, 500);
    glVertex2i(500, 0);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glRasterPos2i(175, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'F');
    glRasterPos2i(200, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'I');
    glRasterPos2i(225, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'S');
    glRasterPos2i(250, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    glRasterPos2i(275, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'I');
    glRasterPos2i(300, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'N');
    glRasterPos2i(325, 450);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'G');
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glRasterPos2i(75, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'G');
    glRasterPos2i(100, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'R');
    glRasterPos2i(125, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'O');
    glRasterPos2i(150, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'U');
    glRasterPos2i(175, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'P');
    glRasterPos2i(200, 375);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, '1');
    
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glRasterPos2i(75, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'M');
    glRasterPos2i(100, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(125, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'D');
    glRasterPos2i(150, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    glRasterPos2i(175, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'U');
    glRasterPos2i(200, 350);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'R');
    // glRasterPos2i(225, 350);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'T');
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glRasterPos2i(75, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'S');
    glRasterPos2i(100, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(125, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'M');
    glRasterPos2i(150, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'Y');
    glRasterPos2i(175, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(200, 325);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'K');
    // glRasterPos2i(225, 325);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'Y');
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glRasterPos2i(75, 300);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(100, 300);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'B');
    glRasterPos2i(125, 300);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    glRasterPos2i(150, 300);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(175, 300);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'Y');
    // glRasterPos2i(200, 300);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'K');
    glEnd();

    // glColor3f(0.0, 0.0, 1.0);
    // glRasterPos2i(75, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'M');
    // glRasterPos2i(100, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'I');
    // glRasterPos2i(125, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'S');
    // glRasterPos2i(150, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    // glRasterPos2i(175, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'W');
    // glRasterPos2i(200, 275);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'I');
    // glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glRasterPos2i(75, 275);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'Y');
    glRasterPos2i(100, 275);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
    glRasterPos2i(125, 275);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'S');
    glRasterPos2i(150, 275);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    // glRasterPos2i(175, 250);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'N');
    // glRasterPos2i(200, 250);
    // glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'T');
    glEnd();

    glFlush();
}

void display(void)
{
    static bool once = []()
    {
        landingPage();
        return true;
    }();
    glFlush();
}

void GoMenu(int value)
{
    switch (value)
    {
    case 1:
        display1();
        break;
    case 2:
        display2();
        break;
    case 3:
        display3();
        break;
    case 4:
        display4();
        break;
    case 5:
        display5();
        break;
    case 6:
        exit(0);
        break;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1350, 1350);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Fishing");

    int sub1 = glutCreateMenu(GoMenu);
    glutAddMenuEntry("Fishes inside water", 1);
    glutAddMenuEntry("To see Scaleman", 2);
    glutAddMenuEntry("Fishing", 3);
    glutAddMenuEntry("Catched Fish", 4);
    glutAddMenuEntry("Scaleman with Fishes", 5);
    glutCreateMenu(GoMenu);
    glutAddSubMenu("Select Snapshots", sub1);
    glutAddMenuEntry("Exit", 6);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutDisplayFunc(display);
    init();
    glutMainLoop();
}