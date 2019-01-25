#include<stdio.h>
#include<graphics.h>

int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,NULL);

putpixel(100,200,RED);
putpixel(110,200,BLUE);
putpixel(120,200,GREEN);
putpixel(130,200,YELLOW);

line(140,200,300,400);

setcolor(BLUE);
line(100,230,100,330);  //vertical

setcolor(14);
line(230,100,330,100);  //horizontal

setcolor(4);
circle(200,300,50);
getch();
return 0;

}
