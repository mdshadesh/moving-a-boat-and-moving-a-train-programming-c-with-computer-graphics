#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
	initwindow(1500,700);
	
	// Backround
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(100,500,WHITE);
	
	for(int i = 0; i <= 1200; i++)
	{
	
	//// fast part ship 
	
	line(200+i,400,900+i,400);
	line(200+i,400,280+i,480);
	line(900+i,400,820+i,480);
	line(280+i,480,820+i,480);
	
	
	/// fast part circle
	circle(350+i,440,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(351+i,441,WHITE);
	
	circle(450+i,440,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(451+i,440,WHITE);
	
	circle(550+i,440,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(551+i,441,WHITE);
	
	circle(650+i,440,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(651+i,441,WHITE);
	
	circle(750+i,440,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(751+i,441,WHITE);
	
	
	//// sceond part ship
	rectangle(280+i,480,820+i,490);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(281+i,481,WHITE);
	
	rectangle(280+i,320,820+i,400);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(281+i,321,WHITE);
	
	/// sceond part window
	rectangle(320+i,340,370+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(321+i,341,WHITE);
	
	rectangle(400+i,340,450+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(401+i,341,WHITE);
	
	rectangle(480+i,340,530+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(481+i,341,WHITE);
	
	rectangle(560+i,340,610+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(561+i,341,WHITE);
	
	rectangle(640+i,340,690+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(641+i,341,WHITE);
	
	rectangle(720+i,340,770+i,380);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(721+i,341,WHITE);
	
	
	/// third part ship
	rectangle(330+i,270,780+i,320);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(331+i,271,WHITE);
	
	
	//third pari window circle
	circle(390+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(391+i,296,WHITE);
	
	circle(440+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(441+i,296,WHITE);
	
	circle(490+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(491+i,296,WHITE);
	
	circle(540+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(541+i,296,WHITE);
	
	circle(590+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(591+i,296,WHITE);
	
	circle(640+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(641+i,296,WHITE);
	
	circle(690+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(691+i,296,WHITE);
	
	circle(740+i,295,15);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(741+i,296,WHITE);
	
	
	///  four part ship 
	rectangle(380+i,200,730+i,270);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(381+i,201,WHITE);
	
	//// four part window ship
	rectangle(410+i,220,440+i,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(411+i,221,WHITE);
	
	rectangle(470+i,220,500+i,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(471+i,221,WHITE);
	
	rectangle(530+i,220,560+i,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(531+i,221,WHITE);
	
	rectangle(590+i,220,620+i,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(591+i,221,WHITE);
	
	rectangle(650+i,220,680+i,250);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(651+i,221,WHITE);
	


    //// gass line final part 
    rectangle(420+i,140,470+i,200);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(421+i,141,WHITE);
	
    rectangle(530+i,140,580+i,200);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(531+i,141,WHITE);
	
    rectangle(640+i,140,690+i,200);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(641+i,141,WHITE);
    
    
    
    // rood 
    line(0,130,1550,130);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(100,100,WHITE);
	
    line(0,50,1550,50);
    setfillstyle(SOLID_FILL,GREEN);
	floodfill(100,20,WHITE);
    
    
    /// trein 
    rectangle(600-i,80,650-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(601-i,81,WHITE);
	
    rectangle(605-i,70,615-i,80);
    setfillstyle(SOLID_FILL,BLACK);
	floodfill(606-i,71,WHITE);
	
    rectangle(660-i,80,720-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(661-i,81,WHITE);
	
    rectangle(730-i,80,790-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(731-i,81,WHITE);
	
    rectangle(800-i,80,860-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(801-i,81,WHITE);
	
    rectangle(870-i,80,920-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(871-i,81,WHITE);
	
    rectangle(930-i,80,990-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(931-i,81,WHITE);
	
    rectangle(1000-i,80,1060-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(1001-i,81,WHITE);
	
    rectangle(1070-i,80,1130-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(1071-i,81,WHITE);
	
    rectangle(1140-i,80,1200-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(1141-i,81,WHITE);
	
    rectangle(1210-i,80,1270-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(1211-i,81,WHITE);
	
    rectangle(1280-i,80,1330-i,110);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
	floodfill(1281-i,81,WHITE);
	
	
	/// trein cunnect 
	line(650-i,95,660-i,95);
	line(720-i,95,730-i,95);
	line(790-i,95,800-i,95);
	line(860-i,95,870-i,95);
	line(920-i,95,930-i,95);
	line(990-i,95,1000-i,95);
	line(1060-i,95,1070-i,95);
	line(1130-i,95,1140-i,95);
	line(1200-i,95,1210-i,95);
	line(1270-i,95,1280-i,95);
	
	
	///// trein chaka 
	circle(610-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(611-i,121,WHITE);
	
	circle(640-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(641-i,121,WHITE);
	
	circle(670-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(671-i,121,WHITE);
	
	circle(710-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(711-i,121,WHITE);
	
	circle(740-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(741-i,121,WHITE);
	
	circle(780-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(781-i,121,WHITE);
	
	circle(810-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(811-i,121,WHITE);
	
	circle(850-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(851-i,121,WHITE);
	
	circle(880-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(881-i,121,WHITE);
	
	circle(910-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(911-i,121,WHITE);
	
	circle(940-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(941-i,121,WHITE);
	
	circle(980-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(981-i,121,WHITE);
	
	circle(1010-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1011-i,121,WHITE);
	
	circle(1050-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1051-i,121,WHITE);
	
	circle(1080-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1081-i,121,WHITE);
	
	circle(1120-i,120,10);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1121-i,121,WHITE);
	
    circle(1150-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1151-i,121,WHITE);
	
    circle(1190-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1191-i,121,WHITE);
	
    circle(1220-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1221-i,121,WHITE);
	
    circle(1260-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1261-i,121,WHITE);
	
    circle(1290-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1291-i,121,WHITE);
	
    circle(1320-i,120,10);
    setfillstyle(SOLID_FILL,WHITE);
	floodfill(1321-i,121,WHITE);
	
	delay(10);
    cleardevice(); 
   }

	
		
	getch();
}
