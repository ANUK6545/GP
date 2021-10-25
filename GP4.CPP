#include <conio.h>
#include <graphics.h>
#include <stdio.h>
void main()
{
 int gm, gd = DETECT, ax;
 int x1,y1,x2,y2,x3,y3;
 initgraph(&gd, &gm,"C:\\TC\\BGI");
 cleardevice();
 line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
 line(0, getmaxy() / 2, getmaxx(),getmaxy() / 2);
 printf("Enter coordiante for triangle:");
scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
 setcolor(14);
 line(x1, y1, x2, y2);

 line(x2, y2, x3, y3);
 line(x3, y3, x1, y1);
 getch();
 printf("\nAfter Reflection");
 setcolor(4);
 line(getmaxx() - x1, getmaxy() - y1, getmaxx() - x2, getmaxy() - y2);
 line(getmaxx() - x2, getmaxy() - y2, getmaxx() - x3, getmaxy() - y3);
 line(getmaxx() - x3, getmaxy() - y3, getmaxx() - x1, getmaxy() - y1);
 setcolor(3);
 line(getmaxx() - x1, y1,getmaxx() - x2, y2);
 line(getmaxx() - x2, y2,getmaxx() - x3, y3);
 line(getmaxx() - x3, y3,getmaxx() - x1, y1);
 setcolor(2);
 line(x1, getmaxy() - y1, x2, getmaxy() - y2);
 line(x2, getmaxy() - y2, x3, getmaxy() - y3);
 line(x3, getmaxy() - y3, x1, getmaxy() - y1);
 getch();
 closegraph();
}