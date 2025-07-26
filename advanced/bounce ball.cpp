# include <iGraphics.h>
int cx,cy=5,dx,dy;
int flagx,flagy;
void iDraw()
{
	iClear();
		iSetColor(0,255,0);
	iFilledRectangle(dx,dy,150,15);
	    iSetColor(255,0,0);
	iFilledCircle(cx,cy,10);

}


void iMouseMove(int cx, int cy)
{
	//place your codes here
	cy+=100;
	cx+=100;

}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	}

}

void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
	 iPauseTimer(0);
	}
	if(key == 'r')
	{
		iResumeTimer(0);
	}

}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_RIGHT && dx<850)
	{
		dx+=20;
	}
	if(key==GLUT_KEY_LEFT && dx>0)
	{
		dx-=20;
	}
		if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}


void change()
{
	
	cy += flagy*5;

	if(cx>1000)
		flagx = -1;
	else if(cx<0)
		flagx = 1;

	if(cy>600)
		flagy = -1;

	if(cx+10>=dx && cx-10<=dx+150 && cy-10<=15)
	flagy= 1;


}
int main()
{
	cx = 430;
	cy = 0;
	dx=430;
	dy=0;
	flagx =1;
	flagy =1;

	iSetTimer(1,change);

	iInitialize(1000, 600, "DX_BALL");


	return 0;
}
