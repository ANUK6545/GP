#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT , gm = DETECT ;
// x,y,x1,y1,x2,y2,x3,y3,
int shear_f;
initgraph(&gd,&gm,"C:\\TC\\BGI");
/*printf("\n please enter first coordinate = ");
scanf("%d %d",&x,&y);
printf("\n please enter second coordinate = ");
scanf("%d %d",&x1,&y1);
printf("\n please enter third coordinate = ");
scanf("%d %d",&x2,&y2);
printf("\n please enter last coordinate = ");
scanf("%d %d",&x3,&y3);
printf("\n please enter shearing factor y = "); */
int x=100 ; int y=100;
int x1=100 ; int y1 = 200;
int x2=200 ; int y2=200;
int x3=200 ; int y3=100;
scanf("%d",&shear_f);
cleardevice();
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);

setcolor(RED);
y=y + y*shear_f;
y1=y1+ x1*shear_f;
y2=y2 + y2*shear_f;
y3=y3+ x3*shear_f;

line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);
getch();
closegraph();
}