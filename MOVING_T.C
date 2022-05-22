#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd = DETECT,gm;
int i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

for(i=0;i<=400;i+=20){
// truck
rectangle(100+i,200,250+i,290);
rectangle(250+i,240,300+i,290);

//wheels
circle(150+i,310,20);
circle(250+i,310,20);

//ground
line(10,330,700,330);

delay(70);  //speed
cleardevice();
}

getch();
}