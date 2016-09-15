#include<stdio.h>
#include<gl\glut.h>
//#include <stdlib.h>
#include<string.h>
#include<iostream>
#include<sstream>
#include <time.h>

using namespace std;

int color = 0;
int width = 800;
int hight = 600;
int a = 200;
int b=500;



float posX = 0, posY = 0, posZ = 0;
float posA = 0, posB = 0, posC = 0;


void drawText(char ch[], int xpos, int ypos)
{
	int numofchar = strlen(ch);
	glRasterPos2f(xpos, ypos);
	for (int i = 0; i <= numofchar - 1; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[i]);
	}
}
void rect(){
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(75, 75);
    glVertex2f(125, 75);
    glVertex2f(125, 25);
    glVertex2f(75, 25);
    glEnd();

}
void rect2(){
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2f(75, 75);
    glVertex2f(125, 75);
    glVertex2f(125, 25);
    glVertex2f(75, 25);
    glEnd();

}

void init()
{
	glClearColor(0, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, width, 0, hight);
}

void drawSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	if (color == 0)
	{
		glColor3f(255, 255, 0);
		color = 1;
	}
	else
	{
		glColor3f(255, 0, 0);
		color = 0;
	}


	glBegin(GL_POLYGON);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glVertex2i(x3, y3);
	glVertex2i(x4, y4);
	glEnd();


}

void snakeboard()
{



	glClear(GL_COLOR_BUFFER_BIT);
	int x, y;
	int square_width = 135;
	int square_higth = 100;
	for (x = 0; x <= width; x += square_width)
	{
		for (y = 0; y <= hight; y += square_higth)
		{
			drawSquare(x, y + square_higth, x + square_width, y + square_higth, x + square_width, y, x, y);
		}
	}




	//snake 1

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(190, 150);
    glVertex2f(160, 150);
    glVertex2f(175, 120);
    glVertex2f(175, 120);

    glEnd();

	glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 200);
    glVertex2f(200, 200);
    glVertex2f(200, 150);
    glVertex2f(150, 150);

    glEnd();

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 250);
    glVertex2f(200, 250);
    glVertex2f(200, 200);
    glVertex2f(150, 200);

    glEnd();

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 300);
    glVertex2f(280, 300);
    glVertex2f(280, 250);
    glVertex2f(150, 250);

    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(280, 400);
    glVertex2f(330, 400);
    glVertex2f(330, 250);
    glVertex2f(280, 250);

    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(200, 440);
    glVertex2f(330, 440);
    glVertex2f(330, 400);
    glVertex2f(200, 400);

    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(200, 540);
    glVertex2f(250, 540);
    glVertex2f(250, 440);
    glVertex2f(200, 440);

    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(200, 560);
    glVertex2f(330, 560);
    glVertex2f(330, 520);
    glVertex2f(200, 520);

    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(330, 560);
    glVertex2f(360, 545);
    glVertex2f(360, 535);
    glVertex2f(330, 520);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(360, 542);
    glVertex2f(370, 542);
    glVertex2f(370, 538);
    glVertex2f(360, 538);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(320, 545);
    glVertex2f(330, 545);
    glVertex2f(330, 538);
    glVertex2f(320, 538);

    glEnd();

    //snake 2

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(700, 195);
    glVertex2f(750, 180);
    glVertex2f(750, 180);
    glVertex2f(700, 165);

    glEnd();

	glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(600, 200);
    glVertex2f(700, 200);
    glVertex2f(700, 160);
    glVertex2f(600, 160);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(600, 250);
    glVertex2f(650, 250);
    glVertex2f(650, 200);
    glVertex2f(600, 200);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(600, 290);
    glVertex2f(750, 290);
    glVertex2f(750, 250);
    glVertex2f(600, 250);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(700, 360);
    glVertex2f(750, 360);
    glVertex2f(750, 290);
    glVertex2f(700, 290);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(650, 360);
    glVertex2f(700, 360);
    glVertex2f(700, 320);
    glVertex2f(650, 320);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(610, 345);
    glVertex2f(650, 360);
    glVertex2f(650, 320);
    glVertex2f(610, 335);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(620, 345);
    glVertex2f(630, 360);
    glVertex2f(630, 320);
    glVertex2f(620, 335);

    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(600, 342);
    glVertex2f(610, 342);
    glVertex2f(610, 338);
    glVertex2f(600, 338);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(625, 342);
    glVertex2f(630, 342);
    glVertex2f(630, 338);
    glVertex2f(625, 338);

    glEnd();

    // ladder
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(305, 120);
    glVertex2f(320, 120);
    glVertex2f(420, 250);
    glVertex2f(405, 250);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(390, 120);
    glVertex2f(405, 120);
    glVertex2f(505, 250);
    glVertex2f(490, 250);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(335, 160);
    glVertex2f(430, 160);
    glVertex2f(430, 150);
    glVertex2f(335, 150);

    glEnd();

     glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(380, 220);
    glVertex2f(470, 220);
    glVertex2f(470, 210);
    glVertex2f(380, 210);

    glEnd();


    //ladder 2

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(305, 420);
    glVertex2f(320, 420);
    glVertex2f(420, 550);
    glVertex2f(405, 550);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(390, 420);
    glVertex2f(405, 420);
    glVertex2f(505, 550);
    glVertex2f(490, 550);

    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(335, 460);
    glVertex2f(430, 460);
    glVertex2f(430, 450);
    glVertex2f(335, 450);

    glEnd();

     glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(380, 520);
    glVertex2f(470, 520);
    glVertex2f(470, 510);
    glVertex2f(380, 510);

    glEnd();

	glFlush();

   //   glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    rect();
    glPopMatrix();
    glFlush();


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(posA,posB,posC);
    rect2();
    glPopMatrix();
    glFlush();


        glColor3f(1, 1, 1);
        drawText("0", 10, 20);
        drawText("1", 200, 20);
        drawText("2", 330, 20);
        drawText("3", 460, 20);
        drawText("4", 590, 20);
        drawText("5", 720, 20);

        drawText("6", 10, 120);
        drawText("7", 200, 120);
        drawText("8", 300, 170);
        drawText("9", 460, 120);
        drawText("10", 590, 120);
        drawText("11", 720, 120);

        drawText("12", 10, 220);
        drawText("13", 200, 220);
        drawText("14", 330, 220);
        drawText("15", 460, 270);
        drawText("16", 560, 220);
        drawText("17", 720, 220);

        drawText("18", 10, 320);
        drawText("19", 200, 320);
        drawText("20", 340, 320);
        drawText("21", 460, 320);
        drawText("22", 590, 370);
        drawText("23", 720, 370);

        drawText("24", 10, 420);
        drawText("25", 165, 420);
        drawText("26", 340, 420);
        drawText("27", 460, 420);
        drawText("28", 590, 420);
        drawText("29", 720, 420);

       // drawText("35", 10, 520);
        drawText("31", 200, 575);
        drawText("32", 330, 575);
        drawText("33", 460, 575);
        drawText("34", 590, 520);
        drawText("30", 10, 550);
//drawText(dice, 10, 550);

        drawText("END", 720, 520);

        glEnd();
        glFlush();

        glutSwapBuffers();

}

bool game_done = false;
bool BlackPlayer_move = true;
bool WhitePlayer_move = false;

int move_unit = 125;
void keyboardown(int key, int x, int y)
{
 if (!game_done)
 {
     if(BlackPlayer_move)
     {
         if(key==GLUT_KEY_DOWN)
        {
            srand(static_cast<unsigned int>(time(0)));
            int dice = rand()%6+1;
            printf("Black Player: %d\n",dice);
            WhitePlayer_move = true;
            BlackPlayer_move =false;


                posX+= move_unit *dice ;
                if(posX>625)
                {
                    posX =posX-750;
                    posY +=100;
                }

                if(posX==250 && posY==100)
                {
                    posX += move_unit;
                    posY+=100;
                    cout<<"BlackPlayer: Yahoo! I found the Ladder."<<endl;
                }

                if(posX==250 && posY==400)
                {
                    posX +=move_unit;
                    posY+=100;
                    cout<<"BlackPlayer: Yahoo! I found the Ladder."<<endl;
                }

                if(posX==500 && posY==300)
                {
                    posX +=move_unit;
                    posY -=200;
                    cout<<"BlackPlayer: OH! Snake bite me. "<<endl;
                }

                if(posX==250 && posY==500)
                {
                    posX -=move_unit;
                    posY-=400;
                    cout<<"BlackPlayer: OH! Snake bite me. "<<endl;
                }
                if(posX>=0 && posY==600 && dice==6)
                {
                    posX == posX;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posX>=0 && posY==600 && dice==5)
                {
                    posX += move_unit;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posX>=0 && posY==600 && dice==4)
                {
                    posX += move_unit+125;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posX>=0 && posY==600 && dice==3)
                {
                    posX += move_unit+250;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posX>=0 && posY==600 && dice==2)
                {
                    posX += move_unit+375;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posX>=0 && posY==600 && dice==1)
                {
                    posX += move_unit+500;
                    posY -=100;
                    cout<<"You can't move!"<<endl;
                }
                if(posY==500 && posX==625)
                {
                    cout<<"Black Player Win"<<endl;
                    cout<<"Game Over"<<endl;
                    game_done = true;
                }
            }

    glutPostRedisplay();
     }

if(WhitePlayer_move )
{
    if(key==GLUT_KEY_F1)
        {
            srand(static_cast<unsigned int>(time(0)));
            int dice = rand()%6+1;
            printf("White Player: %d\n",dice);

            BlackPlayer_move=true;
            WhitePlayer_move =false;

            posA+= move_unit *dice ;
            if(posA>625)
            {
                posA =posA-750;
                posB +=100;
            }

            if(posA==250 && posB==100)
            {
                posA += move_unit;
                posB+=100;
                cout<<"WhitePlayer: Yahoo! I found the Ladder."<<endl;
            }

            if(posA==250 && posB==400)
            {
                posA +=move_unit;
                posB+=100;
                cout<<"WhitePlayer: Yahoo! I found the Ladder."<<endl;
            }

            if(posA==500 && posB==300)
            {
                posA +=move_unit;
                posB -=200;
                cout<<"WhitePlayer: OH! Snake bite me. "<<endl;
            }

            if(posA==250 && posB==500)
            {
                posA -=move_unit;
                posB-=400;
                cout<<"WhitePlayer: OH! Snake bite me. "<<endl;
            }
            if(posA>=0 && posB==600 && dice==6)
            {
                posA == posA;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posA>=0 && posB==600 && dice==5)
            {
                posA += move_unit;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posA>=0 && posB==600 && dice==4)
            {
                posA += move_unit+125;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posA>=0 && posB==600 && dice==3)
            {
                posA += move_unit+250;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posA>=0 && posB==600 && dice==2)
            {
                posA += move_unit+375;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posA>=0 && posB==600 && dice==1)
            {
                posA += move_unit+500;
                posB -=100;
                cout<<"You can't move!"<<endl;
            }
            if(posB==500 && posA==625)
            {
                cout<<"White Player Win"<<endl;
                cout<<"Game Over"<<endl;
                game_done = true;
            }
        }
    glutPostRedisplay();
}
}

 }

int main(int agrc, char ** argv)
{
	glutInit(&agrc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutInitWindowPosition(100, 80);
	glutInitWindowSize(600, 500);
	glutCreateWindow("Snake and Ladder Game");

	init();
	glutDisplayFunc(snakeboard);
	glutSpecialFunc(keyboardown);
	glutMainLoop();
}
