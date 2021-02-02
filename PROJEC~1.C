#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int midx,midy;

void number8() {
  //Main Code Starts From Here ..

  delay(1000); //Time for Display
  cleardevice(); //ClearScreen
  delay(1000); //Time for New Number
  //White Frame..
  setcolor(WHITE);
  //Set Color Of Rectangle..
  setfillstyle(SOLID_FILL,RED);

  rectangle(midx-130,midy-210,midx+130,midy+210); //Frame is drawn..
  //Inside frame plot those rectangles which are generating Numbers & remove rest of rectangles..

  rectangle(midx-80,midy-180,midx+80,midy-160);//Top Bar
  floodfill(midx,midy-170,WHITE);//Fill Color Of Rect

  rectangle(midx-100,midy-150,midx-80,midy-20);//Top Left Bar
  floodfill(midx-90,midy-80,WHITE);

  rectangle(midx+80,midy-150,midx+100,midy-20);//Top Right Bar
  floodfill(midx+90,midy-80,WHITE);

  rectangle(midx-70,midy-10,midx+70,midy+10);//Center Bar
  floodfill(midx,midy,WHITE);

  rectangle(midx-100,midy+20,midx-80,midy+150);//Bottom Left Bar
  floodfill(midx-90,midy+80,WHITE);

  rectangle(midx+80,midy+20,midx+100,midy+150);//Bottom Right Bar
  floodfill(midx+90,midy+80,WHITE);

  rectangle(midx-80,midy+160,midx+80,midy+180);//Bottom Bar
  floodfill(midx,midy+170,WHITE);

}

void main() {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\TC\BGI");

  midx=getmaxx()/2; //Max X Cordinate/2
  midy=getmaxy()/2; //Max Y/2

  //---------------------Number 8 Plots Here---------------
  number8();
  //---------------------Number N Plots Here---------------

		   //Add New Function Inside Lines ..

  //-----------------------------------------------------------------

  getch();
  closegraph();

}