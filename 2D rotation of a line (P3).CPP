#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int x1 , y1 ,x2, y2;
float b1 , b2 , t , deg ;
int gd =DETECT , gm = DETECT ;
initgraph(&gd,&gm , "C:\\TC\\BGI");
printf("enter the coordinate of the line : \n");
scanf("%d%d%d%d",&x1 , &x2 , &y1 , &y2);
setcolor(6);
line(x1 , y1 ,x2, y2);
getch();
printf("enter the angle of rotation:");
scanf("%f",&deg);
t=(22*deg)/(180*7);
b1=abs((x2*cos(t))-(y2*sin(t)));
b2=abs((x2*sin(t))+(y2*cos(t)));
line(x1,y1,b1,b2);
getch();
closegraph();
}
