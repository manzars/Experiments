#include<stdio.h>

#include<graphics.h>

int main()
{
  int gd=0,gm;

initgraph(&gd,&gm,"");

   line(200,442,398,442);    // bottom line
   line(188,40,188,430);     //left line
   line(412,40,412,430);     //right line
   line(200,28,400,28);      //top line


   arc(400, 430,0,90,12);   //bottom right corner
   arc(200,430,90,180,12);   //bottom left corner
   arc(200,40,180,270,12);   //top left corner
   arc(400,40,270,360,12);   //top right corner


   circle(299,420,16);          //home button
   circle(299,420,17);
   rectangle(193,75,407,398);       //screen



   line(273,52,313,52);
   line(273,55,313,55);
   arc(273,53.5,90,270,2);
   arc(313,53.5,270,90,2);

   circle(250,53.5,5);         //front camera
   circle(250,53.5,5.5);
   circle(293,40,3);           //sensor

   rectangle(185,73,188,80);
   rectangle(185,100,188,130);     //volume button
   rectangle(185,135,188,165);
   rectangle(412,110,415,140);

  line(258,215,333,215);       //battery Top line
  line(258,250,333,250);       //battery bottom line
  line(254,219,254,246);       //battery Left line
  line(337,219,337,246);       //battery Right line
  bar(337,222,340,243);

  arc(258,219,180,270,4);    //battery TL corner
  arc(333,219,270,360,4);      //        TR corner
  arc(258,246,90,180,4);   //        BL corner
  arc(333,246,0,90,4);   //        BR corner


  setcolor(4);
  line(255,220,255,246);
  line(256,219,256,247);
  line(257,218,257,248);     //charging indicator
  line(258,216,258,249);
  line(259,216,259,249);
  line(260,216,260,249);
  line(261,216,261,249);





 getch();
return 0;
 }
