#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_POINTS);         //Points
    glColor3f(4.0f,0.0f,0.0f);
    glVertex2f(0.4f,0.2f);
    glVertex2f(-0.6f,0.9f);
    glVertex2f(0.3f,-0.2f);
    glEnd();
    
    glBegin(GL_TRIANGLES);       //Triange
    glColor3f(0.5f,0.2f,0.9f);             
    glVertex2f(-0.9f,0.4f);
    glVertex2f(0.9f,0.4f);
    glVertex2f(0.0f,-0.4f);            
    glEnd();
    
    glBegin(GL_POLYGON);         //Polygon
    glColor3f(0.1f,0.7f,0.0f);		
    glVertex2f(-0.9f,0.9f);
    glVertex2f(0.5f,-0.9f);
    glVertex2f(-0.9f,0.2f);
    glVertex2f(0.5f,-0.2f);
    glEnd();
    
    glBegin(GL_LINES);           //Line
    glColor3f(0.0f,0.4f,0.9f);   
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.9f,-0.9f);
    glColor3f(0.2f,0.7f,1.0f);   
    glVertex2f(0.6f,0.2f);
    glVertex2f(-0.2f,-0.4f);
    glColor3f(0.9f,0.5f,0.0f);   
    glVertex2f(0.4f,0.8f);
    glVertex2f(0.1f,0.2f);
    glEnd();
    
    glBegin(GL_LINE_STRIP);       //Line Strip
    glColor3f(0.4f,0.1f,0.1f);   
    glVertex2f(0.8f,0.1f);
    glVertex2f(0.5f,-0.5f);
    glColor3f(0.2f,0.7f,1.0f);   
    glVertex2f(0.6f,0.2f);
    glVertex2f(0.2f,0.4f);
    glColor3f(0.5f,0.2f,0.1f);   
    glVertex2f(0.6f,0.5f);
    glVertex2f(0.7f,0.1f);
    glEnd();
   
    glBegin(GL_LINE_LOOP);         //Line Loop
    glColor3f(1.0f,0.0f,0.0f);   
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.9f,-0.9f);
    glColor3f(0.2f,0.7f,1.0f);   
    glVertex2f(-0.6f,-0.2f);
    glVertex2f(-0.2f,0.8f);
    glColor3f(0.5f,0.5f,1.0f);   
    glVertex2f(0.7f,0.6f);
    glVertex2f(0.6f,0.5f);
    glColor3f(0.0f,0.9f,0.2f);   
    glVertex2f(0.6f,-0.2f);
    glVertex2f(0.2f,0.3f); 
    glEnd();
   
    glBegin(GL_QUADS);      		//Quad       
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(-0.7f,0.2f);
    glVertex2f(0.5f,-0.3f);
    glEnd();
    
    glBegin(GL_TRIANGLE_STRIP); 	//Triangle Strip
    glColor3f(1.0f,0.4f,0.0f);             
    glVertex2f(0.6f,0.1f);
    glVertex2f(0.2f,-0.4f);
    glVertex2f(-0.0f,-0.0f);   
    glColor3f(1.0f,0.7f,0.0f);             
    glVertex2f(-0.9f,0.9f);
    glVertex2f(0.9f,0.4f);
    glVertex2f(0.0f,-0.4f);   
    glColor3f(1.0f,0.5f,0.0f);             
    glVertex2f(0.6f,0.1f);
    glVertex2f(0.1f,0.6f);
    glVertex2f(0.1f,0.0f);           
    glEnd();
    
    glBegin(GL_TRIANGLE_FAN);		  //Triangle Fan
    glColor3f(0.4f,0.4f,0.4f);             
    glVertex2f(0.9f,0.6f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(0.2f,-0.8f);   
    glColor3f(0.7f,0.7f,0.0f);             
    glVertex2f(0.9f,0.5f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(0.0f,-0.4f);   
    glColor3f(0.3f,0.3f,0.2f);             
    glVertex2f(0.4f,0.5f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(-0.1f,0.8f);           
    glEnd();
    
    glBegin(GL_QUAD_STRIP);				//Quad Strip   
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(0.9f,-0.9f);
    glVertex2f(0.5f,-0.9f);
    glVertex2f(0.7f,-0.2f);
    glVertex2f(0.5f,-0.3f);
    glColor3f(0.0f,1.0f,1.0f);    
    glVertex2f(-0.1f,0.5f);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();
    
     glFlush();
}
int main( int argc, char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Basic: Vertex, Primitive and Colour");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 150);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
