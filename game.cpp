//============================================================================

// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<sstream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<cmath>

using namespace std;
                                                     
int a;int b_1,b_2,b_3,b_4,b_5,b_6;  
   int c_1,c_2,c_3,c_4,c_5,c_6;     
   int d_1,d_2,d_3,d_4,d_5,d_6;  
   int e_2,e_3,e_4,e_6;     
   int e_5=0;
int names; int rand_x; int rand_y;
                                                               
 string drivername="";  string score="";
 
    int e_1=0;  int taxi; int color_1=0;
    
     int color_2; string name;
     
int score_1 , score_2 , score_3 , score_4 , score_5 , score_6 ; int score0=0;

int a_1=2 , a_2=2 , a_3=2 , a_4=2 , a_5=2 , a_6=2;

char dis_score='0'; 
  string dis_strscore="";
  
 string dis_drivername1="";
 
  int dis_x=400;  int dis_y=650; int dis_check =2;
  
int ch=1; int display_sec=0; string display_strsec=""; 

 int display_min=0;   string display_strmin="";
  
  
int start_time=0;      string time0=""; 

/*********************************/


void SetCanvasSize(int width, int height)                                     // set the screen size to given width and height.
	{
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); 
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
		}

/**************************/
int xI = 60, yI = 695;                                                // taxi car

void drawCar() {
	  
         
         DrawRectangle( xI-32,yI-20,21, 4, colors[GREEN]);
         if ( e_1==1 ){ 
         DrawRoundRect(xI-35, yI-30, 25, 10, colors[ORANGE], 5);
         }
          if (  e_1==2 ){
         DrawRoundRect(xI-35, yI-30, 25, 10, colors[RED], 5);
         }
         DrawCircle(xI-32,yI-31,4,colors[GREEN]);
         DrawCircle(xI-13,yI-31,4,colors[GREEN]);
         DrawCircle(xI-16,yI-26,4,colors[ORANGE]);
        
	glutPostRedisplay();
}
 
/******************************************************/

int x2 = 35, y2 = 333;                                                            // 

void drawCar_2() {
	  
         DrawRectangle( x2+5,y2+10,14, 4, colors[GREEN]);  
         DrawRoundRect(x2, y2, 25, 10, colors[BROWN], 5);
         DrawCircle(x2+3,y2-2,3,colors[GREEN]);
         DrawCircle(x2+18,y2-2,3,colors[GREEN]);
         DrawCircle(x2+19,y2+5,2,colors[BROWN]);
         
         glutPostRedisplay();
}
 bool flag2 = true;
void moveCar_2() {
	
	       if (y2 > 10 && flag2) {
		y2 -= 10;
		cout << "going left";
		if(y2 < 20)
			
		flag2 = false;
                          }
                               
	else if (y2 < 700 && !flag2) {
		cout << "go right";
		y2 += 10;
		if (y2 > 580)
		flag2 = true;
	}
}
/*********************************/



int x3 = 257, y3 = 290;

void drawCar_3() {
	  
         
         DrawRectangle( x3+5,y3+6,14, 4, colors[GREEN]);  
         DrawRoundRect(x3, y3, 25, 10, colors[BROWN], 5);
         DrawCircle(x3+3,y3-1,3,colors[GREEN]);
         DrawCircle(x3+18,y3-1,3,colors[GREEN]);
         DrawCircle(x3+19,y3+5,2,colors[BROWN]);
         
        glutPostRedisplay();
}
 
bool flag3 = true;
void moveCar_3() {
	
	if (x3 > 10 && flag3) {
		x3 -= 10;
		cout << "going left";
		if(x3 < 80)
			
		flag3 = false;

	  }
	else if (x3 < 700 && !flag3) {
		cout << "go right";
		x3 += 10;
		if (x3 > 660)
		flag3 = true;
	}
}



int x4 = 389, y4 = 473;

void drawCar_4() {
	  
         DrawRectangle( x4+3,y4+10,14, 4, colors[GREEN]);  
         DrawRoundRect(x4, y4, 25, 10, colors[BROWN], 5);
         DrawCircle(x4+3,y4+1,3,colors[GREEN]);
         DrawCircle(x4+18,y4+1,3,colors[GREEN]);
         DrawCircle(x4+24,y4+5,2,colors[BROWN]);
         
	 glutPostRedisplay();
}
 
bool flag4 = true;
void moveCar_4() {
	
	if (y4 > 10 && flag4) {
	    y4 -= 10;
	    cout << "going left";
	    if(y4 < 330)
			
         flag4 = false;

	}
	else if (y4 < 700 && !flag4) {
		cout << "go right";
		y4 += 10;
		if (y4 > 560)
		flag4 = true;
	}
}

int x5 = 560, y5 = 330;

void drawCar_5() {
	  
         DrawRectangle( x5+3,y5+10,14, 4, colors[GREEN]);  
         DrawRoundRect(x5, y5, 25, 10, colors[BROWN], 5);
         DrawCircle(x5+3,y5+1,3,colors[GREEN]);
         DrawCircle(x5+18,y5+1,3,colors[GREEN]);
         DrawCircle(x5+24,y5+5,2,colors[BROWN]);
         
	 glutPostRedisplay();
}
 
bool flag5 = true;
void moveCar_5() {
	
	if (y5 > 10 && flag5) {
	    y5 -= 10;
	    cout << "going left";
	    if(y5 < 330)
			
	   flag5 = false;

	}
	else if (y5 < 700 && !flag5) {
		cout << "go right";
		y5 += 10;
		if (y5 > 560)
		flag5 = true;
	}
}

/*************************************/


int x6 = 541, y6 = 175;

void drawCar_6() {
	  
         DrawRectangle( x6+3,y6+10,14, 4, colors[GREEN]);  
         DrawRoundRect(x6, y6, 25, 10, colors[BROWN], 5);
         DrawCircle(x6+3,y6,3,colors[GREEN]);
         DrawCircle(x6+18,y6,3,colors[GREEN]);
         DrawCircle(x6+24,y6+4,2,colors[BROWN]);
	 glutPostRedisplay();
}

   /***********************************************/          // cordinates of pessengers

void pessenger1()   {
                           
                    int x_p=300 ; int y_p=210;
                           
        DrawLine(x_p, y_p, x_p+5, y_p+10, 3, colors[GREEN]);
        DrawLine(x_p+5, y_p+10, x_p+10, y_p, 3, colors[GREEN]);
        DrawLine(x_p+6, y_p+12, x_p+8, y_p+24, 4, colors[GREEN]);
        DrawLine(x_p+7, y_p+22, x_p-1, y_p+20, 2.5, colors[GREEN]);
        DrawCircle(x_p+8,y_p+29,4,colors[GREEN]);

}


void pessenger_1()  {
				int x_p1 = 490 ; int y_p1 = 350 ;
		
        DrawLine(x_p1, y_p1, x_p1+5, y_p1+10, 3, colors[GREEN]);
        DrawLine(x_p1+5, y_p1+10, x_p1+10, y_p1, 3, colors[GREEN]);
        DrawLine(x_p1+6, y_p1+12, x_p1+8, y_p1+24, 4, colors[GREEN]);
        DrawLine(x_p1+7, y_p1+22, x_p1-1, y_p1+20, 2.5, colors[GREEN]);
        DrawCircle(x_p1+8,y_p1+29,4,colors[GREEN]);
}
/**********/
 void pessenger2(){
 				  int x_a=490 ; int y_a=490;
        
         DrawLine(x_a, y_a, x_a+5, y_a+10, 3, colors[WHITE]);
         DrawLine(x_a+5, y_a+10, x_a+10, y_a, 3, colors[WHITE]);
         DrawLine(x_a+6, y_a+12, x_a+8, y_a+24, 4, colors[WHITE]);
         DrawLine(x_a+7, y_a+22, x_a-1, y_a+20, 2.5, colors[WHITE]);
         DrawCircle(x_a+8,y_a+29,4,colors[WHITE]);
 }
 
 void pessenger_2()  {
            			int x_a1=660 ; int y_a1=112;
        
         DrawLine(x_a1, y_a1, x_a1+5, y_a1+10, 3, colors[WHITE]);
         DrawLine(x_a1+5, y_a1+10, x_a1+10, y_a1, 3, colors[WHITE]);
         DrawLine(x_a1+6, y_a1+12, x_a1+8, y_a1+24, 4, colors[WHITE]);
         DrawLine(x_a1+7, y_a1+22, x_a1-1, y_a1+20, 2.5, colors[WHITE]);
         DrawCircle(x_a1+8,y_a1+29,4,colors[WHITE]);
 }
 /********/
 void pessenger3()   {
                        int x_b=280 ; int y_b=350;
                           
         DrawLine(x_b, y_b, x_b+5, y_b+10, 3, colors[WHITE]);
         DrawLine(x_b+5, y_b+10, x_b+10, y_b, 3, colors[WHITE]);
         DrawLine(x_b+6, y_b+12, x_b+8, y_b+24, 4, colors[WHITE]);
         DrawLine(x_b+7, y_b+22, x_b-1, y_b+20, 2.5, colors[WHITE]);
         DrawCircle(x_b+8,y_b+29,4,colors[WHITE]);
 }
 
 void pessenger_3()  {
                           int x_b1=350 ; int y_b1=130;
                        
         DrawLine(x_b1, y_b1, x_b1+5, y_b1+10, 3, colors[WHITE]);
         DrawLine(x_b1+5, y_b1+10, x_b1+10, y_b1, 3, colors[WHITE]);
         DrawLine(x_b1+6, y_b1+12, x_b1+8, y_b1+24, 4, colors[WHITE]);
         DrawLine(x_b1+7, y_b1+22, x_b1-1, y_b1+20, 2.5, colors[WHITE]);
         DrawCircle(x_b1+8,y_b1+29,4,colors[WHITE]);
 
 }
 /******/
 void pessenger4()   {
 				            int x_c=610 ; int y_c=170;
         DrawLine(x_c, y_c, x_c+5, y_c+10, 3, colors[WHITE]);
         DrawLine(x_c+5, y_c+10, x_c+10, y_c, 3, colors[WHITE]);
         DrawLine(x_c+6, y_c+12, x_c+8, y_c+24, 4, colors[WHITE]);
         DrawLine(x_c+7, y_c+22, x_c-1, y_c+20, 2.5, colors[WHITE]);
         DrawCircle(x_c+8,y_c+29,4,colors[WHITE]);
 }
 
 void pessenger_4()  {
 				 int x_c1=140 ; int y_c1=630;
         DrawLine(x_c1, y_c1, x_c1+5, y_c1+10, 3, colors[WHITE]);
         DrawLine(x_c1+5, y_c1+10, x_c1+10, y_c1, 3, colors[WHITE]);
         DrawLine(x_c1+6, y_c1+12, x_c1+8, y_c1+24, 4, colors[WHITE]);
         DrawLine(x_c1+7, y_c1+22, x_c1-1, y_c1+20, 2.5, colors[WHITE]);
         DrawCircle(x_c1+8,y_c1+29,4,colors[WHITE]);
 }
 /*********/
 void pessenger5()   {
 				  int x_d=175 ; int y_d=525;   
         DrawLine(x_d, y_d, x_d+5, y_d+10, 3, colors[WHITE]);
         DrawLine(x_d+5, y_d+10, x_d+10, y_d, 3, colors[WHITE]);
         DrawLine(x_d+6, y_d+12, x_d+8, y_d+24, 4, colors[WHITE]);
         DrawLine(x_d+7, y_d+22, x_d-1, y_d+20, 2.5, colors[WHITE]);
         DrawCircle(x_d+8,y_d+29,4,colors[WHITE]);
 }
 
 void pessenger_5()  {
 				int x_d1=525 ; int y_d1=30;   
         DrawLine(x_d1, y_d1, x_d1+5, y_d1+10, 3, colors[WHITE]);
         DrawLine(x_d1+5, y_d1+10, x_d1+10, y_d1, 3, colors[WHITE]);
         DrawLine(x_d1+6, y_d1+12, x_d1+8, y_d1+24, 4, colors[WHITE]);
         DrawLine(x_d1+7, y_d1+22, x_d1-1, y_d1+20, 2.5, colors[WHITE]);
         DrawCircle(x_d1+8,y_d1+29,4,colors[WHITE]);
 }
 /*********/
 void pessenger6()   {
 					  int x_0=490 ; int y_0=630;  
          DrawLine(x_0, y_0, x_0+5, y_0+10, 3, colors[WHITE]);
         DrawLine(x_0+5, y_0+10, x_0+10, y_0, 3, colors[WHITE]);
         DrawLine(x_0+6, y_0+12, x_0+8, y_0+24, 4, colors[WHITE]);
         DrawLine(x_0+7, y_0+24, x_0-1, y_0+20, 2.5, colors[WHITE]);
         DrawCircle(x_0+8,y_0+29,4,colors[PINK]);
 }
 
 void pessenger_6()  {
 				  int x_01=670 ; int y_01=255;  
          DrawLine(x_01, y_01, x_01+5, y_01+10, 3, colors[WHITE]);
         DrawLine(x_01+5, y_01+10, x_01+10, y_01, 3, colors[WHITE]);
         DrawLine(x_01+6, y_01+12, x_01+8, y_01+24, 4, colors[WHITE]);
         DrawLine(x_01+7, y_01+24, x_01-1, y_01+20, 2.5, colors[WHITE]);
         DrawCircle(x_01+8,y_01+29,4,colors[WHITE]);
 
 }
 /*****************************/
bool flag6 = true;
void moveCar_6() {
	
	if (x6 > 10 && flag6) {
	    x6 -= 10;
	   cout << "going left";
	   if(x6 < 540)
			
	flag6 = false;

	}
	else if (x6 < 700 && !flag6) {
		cout << "go right";
		x6 += 10;
		if (x6 > 660)
		flag6 = true;
	}
}


/***********************************/
   void filehandling()
  {
               char comma=',';
               char point='.';
               
                DrawSquare(0, 0, 800, colors[BLACK]);
               DrawString(450,750 ,"SCORE BOARD",colors[WHITE]) ;
              
                fstream write;
                write.open("score.txt",ios::app);
           
                if (write.is_open())
                    {
                        getline(write,drivername , ',');
                         write<<comma;
                         write<<score<<endl;
                                               }
                    write.close(); 
                                                         
   		    DrawRectangle( dis_x,dis_y-50,140, 40, colors[WHITE]);
                    DrawString(dis_x+10,dis_y-45 ,dis_drivername1 ,colors[BLACK]) ;
                    DrawString(dis_x+100,dis_y-45 ,dis_strscore,colors[BLACK]) ;
                    dis_y=dis_y-60;
                    dis_check =1;
                    DrawString(100,550 ,"Press 1 for driver name" ,colors[WHITE]) ;     
            
 }
 
 
 
 /*******************************/
 

void GameDisplay()/**/{
	

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); 
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	if (  display_sec<180 )                                           // condition is used to stop the game     
	{
	
	
	
     if (  color_1==0)                                                    // initial  window   
	  {
	 
	  DrawSquare(0, 0, 800, colors[BLACK]);
	  DrawCircle(400 ,200 ,20,colors[DARK_GRAY]);           //20
	DrawCircle(500, 200 ,20,colors[DARK_GRAY]);
	DrawRoundRect(340,200,200,70,colors[RED],25);
	DrawRoundRect(400,230,110,65,colors[RED],15);
	DrawRoundRect(405,250,35,40,colors[SKY_BLUE],10);
	DrawRoundRect(455,250,35,40,colors[SKY_BLUE],10);
	DrawTriangle(405, 280, 600, 330, 560, 430,colors[RED] );
	DrawLine( 340 ,210 ,540 ,220 , 60 , colors[RED] );
	DrawCircle(400 ,200 ,26,colors[DARK_GRAY]);
	DrawCircle(500, 200 ,26,colors[DARK_GRAY]);
	DrawCircle(400 ,200 ,21,colors[WHITE]);
	DrawCircle(500, 200 ,21,colors[WHITE]); 
	
	
	DrawString(50,370,"Press 5 to display score board", colors[BLUE]);
	
	
	

	DrawLine( 50 ,600 ,50 ,760 , 15 , colors[RED] );
	DrawLine( 60 ,750 ,130 ,750 , 15 , colors[RED] );
	DrawLine( 60 ,690 ,130 ,690 , 15 , colors[RED] );
	DrawLine( 120 ,690 ,120 ,750 , 15 , colors[RED] );
	DrawLine( 60 ,690 ,120 ,600 , 15 , colors[RED] );
	
	DrawLine( 160 ,760 ,160 ,600 , 15 , colors[RED] );
	DrawLine( 170 ,610 ,200 ,610 , 15 , colors[RED] );
	DrawLine( 210 ,760 ,210 ,600 , 15 , colors[RED] );
	
	DrawLine( 240 ,750 ,300 ,750 , 15 , colors[RED] );
	DrawLine( 250 ,750 ,250 ,670 , 15 , colors[RED] );
	DrawLine( 240 ,680 ,300 ,680 , 15 , colors[RED] );
	DrawLine( 290 ,670 ,290 ,600 , 15 , colors[RED] );
	DrawLine( 240 ,610 ,300 ,610 , 15 , colors[RED] );
	
	DrawLine( 320 ,760 ,320 ,600 , 15 , colors[RED] );
	DrawLine( 330 ,670 ,390 ,670 , 15 , colors[RED] );
	DrawLine( 390 ,760 ,390 ,600 , 15 , colors[RED] );
	
	DrawLine( 430 ,760 ,430 ,600 , 15 , colors[RED] );
	DrawLine( 440 ,670 ,500 ,670 , 15 , colors[RED] );
	DrawLine( 500 ,760 ,500 ,600 , 15 , colors[RED] );
	
	DrawLine( 530 ,760 ,530 ,600 , 15 , colors[RED] );
	DrawLine( 540 ,750 ,580 ,750 , 15 , colors[RED] );
	DrawLine( 590 ,760 ,590 ,600 , 15 , colors[RED] );
	DrawLine( 540 ,610 ,580 ,610 , 15 , colors[RED] );
	
	DrawLine( 620 ,760 ,620 ,600 , 15 , colors[RED] );
	DrawLine( 630 ,610 ,660 ,610 , 15 , colors[RED] );
	DrawLine( 670 ,760 ,670 ,600 , 15 , colors[RED] );
	
	
	DrawLine( 700 ,600 ,700 ,760 , 15 , colors[RED] );
	DrawLine( 710 ,750 ,780 ,750 , 15 , colors[RED] );
	DrawLine( 710 ,690 ,780 ,690 , 15 , colors[RED] );
	DrawLine( 770 ,690 ,770 ,750 , 15 , colors[RED] );
	DrawLine( 710 ,690 ,770 ,600 , 15 , colors[RED] );
	
	
         }
         
  /************************************/
         
          if (  color_1==1)    {                        // display score window
          
	     filehandling();
	  }
       
  /***********************************/  
         
         
           if ( color_1==3)                              //   main board window
	    {
	

	DrawSquare(315, 35, 35, colors[RED]);
	DrawSquare(315, 70, 35, colors[RED]);
	
	DrawSquare(595, 35, 35, colors[RED]);
	DrawSquare(630, 35, 35, colors[RED]);
	
	DrawSquare(70, 175, 35, colors[RED]);
	DrawSquare(70, 210, 35, colors[RED]);
	DrawSquare(70, 245, 35, colors[RED]);
	DrawSquare(105, 245, 35, colors[RED]);
	DrawSquare(105, 210, 35, colors[RED]);
	DrawSquare(105, 175, 35, colors[RED]);
	
	
	
	DrawSquare(175, 455, 35, colors[RED]);
	DrawSquare(210, 455, 35, colors[RED]);
	DrawSquare(245, 455, 35, colors[RED]);
	
	
	DrawSquare(315, 595, 35, colors[RED]);
	DrawSquare(350, 595, 35, colors[RED]);
	DrawSquare(385, 595, 35, colors[RED]);
	DrawSquare(420, 595, 35, colors[RED]);
	DrawSquare(455, 595, 35, colors[RED]);
	DrawSquare(490, 595, 35, colors[RED]);
	DrawSquare(525, 595, 35, colors[RED]);
	DrawSquare(560, 595, 35, colors[RED]);
	DrawSquare(595, 595, 35, colors[RED]);
	DrawSquare(630, 595, 35, colors[RED]);
	DrawSquare(665, 595, 35, colors[RED]);
	
	DrawSquare(420, 525, 35, colors[RED]);
	DrawSquare(420, 490, 35, colors[RED]);
	DrawSquare(420, 455, 35, colors[RED]);
	DrawSquare(455, 455, 35, colors[RED]);
	DrawSquare(490, 455, 35, colors[RED]);
	DrawSquare(515, 455, 35, colors[RED]);
	DrawSquare(420, 420, 35, colors[RED]);
	DrawSquare(420, 385, 35, colors[RED]);
	DrawSquare(420, 350, 35, colors[RED]);
	
	
	
	
	DrawSquare(245, 175, 35, colors[RED]);
	DrawSquare(280, 175, 35, colors[RED]);
	DrawSquare(315,175, 35, colors[RED]);
	DrawSquare(350, 175, 35, colors[RED]);
	DrawSquare(385, 175, 35, colors[RED]);

	
	DrawSquare(490, 105, 35, colors[RED]);
	DrawSquare(490, 140, 35, colors[RED]);
	DrawSquare(490, 175, 35, colors[RED]);
	DrawSquare(490, 210, 35, colors[RED]);
	DrawSquare(525, 210, 35, colors[RED]);
	DrawSquare(560, 210, 35, colors[RED]);
	DrawSquare(595, 210, 35, colors[RED]);
	DrawSquare(630, 210, 35, colors[RED]);
	DrawSquare(665, 210, 35, colors[RED]);
	
	DrawSquare(245, 315, 35, colors[RED]);
	DrawSquare(280, 315, 35, colors[RED]);
	DrawSquare(315, 315, 35, colors[RED]);
	
	
	

	DrawCircle(348,646,5,colors[GREEN]);
	DrawCircle(344,650,5,colors[GREEN]);
	DrawCircle(340,646,5,colors[GREEN]);
        DrawRectangle( 342,630,4, 14, colors[BROWN]);
        
      
        
        DrawCircle(535,444,5,colors[GREEN]);
	DrawCircle(530,450,5,colors[GREEN]);
        DrawCircle(525,444,5,colors[GREEN]);
        DrawRectangle( 530,427,4, 16, colors[BROWN]);
        
        DrawCircle(365,225,5,colors[GREEN]);
        DrawCircle(360,230,5,colors[GREEN]);
	DrawCircle(355,225,5,colors[GREEN]);
        DrawRectangle( 360,208,4, 16, colors[BROWN]);
        
       
         DrawRoundRect(148, 215, 25, 14, colors[BROWN], 6);
        
         DrawRoundRect(118, 572, 25, 14, colors[BROWN], 6);
         
         DrawRoundRect(570, 152, 25, 14, colors[BROWN], 6);
         
         display_strsec= Num2Str(display_sec);
         display_strmin= Num2Str(display_min);
         
         DrawString(500,750 ,"TIMER = ",colors[WHITE]) ;
      
         DrawString(630,750 ,display_strsec,colors[WHITE]) ;
         
/************************************************************************/    
  
          
int x_p=300 ; int y_p=210;  	int x_p1 = 490 ; int y_p1 = 350 ;                     //     play role as a taxi
	   
	  if ( ((xI-x_p>-15)&& (xI-x_p<15))and((yI-y_p>-50)&&(yI-y_p<50)) and a==32 )  {
	      
	                b_1=3;  a=0;        }
	         
	 else if (b_1!=3 )    {
	   
                  pessenger1(); e_4=0;   }
                  
        if ( ((xI-x_p1>-20)&&(xI-x_p1<20)) and ((yI-y_p1>-30)&&(yI-y_p1<30)) and (a==32) and b_1==3 )  {
         
                  c_1=3; a=0;     e_3=0;    }
                  
         else if ( c_1!=3 and b_1==3)    {
         
                                    DrawRectangle( 490,350,15, 25, colors[BLUE]);
                                    a_1=0;
                                          }
            else  if (c_1==3 ) {
            
                            pessenger_1(); d_1=0 ; e_3=0;
                               score_1 =10;     
                           
                              if ( score_1==10 and a_1==0)
                             {
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_1=1;
                             }
                             }
/***********************/                            
               	  int x_a=490 ; int y_a=490;  int x_a1=660 ; int y_a1=118;
               
                     // play role as a taxi
                
     if ( ((xI-x_a>-15)&& (xI-x_a<15))and((yI-y_a>-50)&&(yI-y_a<50)) and a==32 )  {
	      
	           b_2=3;  a=0;        }
	         
	  else if (b_2!=3 )    {
	   
                  pessenger2();     }
                  
          if ( ((xI-x_a1>-20)&&(xI-x_a1<20)) and ((yI-y_a1>-30)&&(yI-y_a1<30)) and (a==32) and b_2==3 )  {
         
                  c_2=3; a=0;         }
                  
         else if ( c_2!=3 and b_2==3)    {
                                   DrawRectangle( 660,118,15, 25, colors[BLUE]); a_2=0;    }
                   
          else  if (c_2==3) {
                            pessenger_2(); d_2=0 ;
                             score_2=10;
                                    
                             
                             if ( score_2==10 and a_2==0)
                             {
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_2=1;
                             }
                            }
  /**********************/ 
    
     int x_b=280 ; int y_b=350; int x_b1=350 ; int y_b1=130;
      
    if ( ((xI-x_b>-15)&& (xI-x_b<15))and((yI-y_b>-50)&&(yI-y_b<50)) and a==32 )  {
	      
	           b_3=3;  a=0;        }
	         
	  else if (b_3!=3 )    {
	   
                  pessenger3();    }
                  
          if ( ((xI-x_b1>-20)&&(xI-x_b1<20)) and ((yI-y_b1>-30)&&(yI-y_b1<30)) and (a==32) and b_3==3 )  {
         
                  c_3=3; a=0;         }
                  
         else if ( c_3!=3 and b_3==3)    {
                                  DrawRectangle( 350,130,15, 25, colors[BLUE]);       
                   			a_3=0;
                   			}
          else  if (c_3==3) {
                            pessenger_3(); d_3=0 ;
                            score_3=10;
                          
                            if ( score_3==10 and a_3==0)
                             {
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_3=1;
                             }
                            }
  /************************/   
      
         int x_c=610 ; int y_c=170; int x_c1=140 ; int y_c1=630;
         
   if ( ((xI-x_c>-15)&& (xI-x_c<15))and((yI-y_c>-50)&&(yI-y_c<50)) and a==32 )  {
	      
	           b_4=3;  a=0;        }
	         
	  else if (b_4!=3 )    {
	   
                  pessenger4();    }
                  
          if ( ((xI-x_c1>-20)&&(xI-x_c1<20)) and ((yI-y_c1>-30)&&(yI-y_c1<30)) and (a==32) and b_4==3 )  {
         
                  c_4=3; a=0;         }
                  
         else if ( c_4!=3 and b_4==3)    {
                                  
     DrawRectangle( 140,630,15, 25, colors[BLUE]); a_4=0;      }
                   
          else  if (c_4==3) {
                            pessenger_4(); d_4=0 ;
                             score_4=10;
                             
                             
                              if ( score_4==10 and a_4==0)
                             {
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_4=1;
                             }
     }
  /*****************************************/                      
     int x_d=175 ; int y_d=525; int x_d1=525 ; int y_d1=80; 
     
       if ( ((xI-x_d>-15)&& (xI-x_d<15))and((yI-y_d>-50)&&(yI-y_d<50)) and a==32 )  {
	      
	           b_5=3;  a=0;        }
	         
	  else if (b_5!=3 )    {
	   
                  pessenger5();    }
                  
          if ( ((xI-x_d1>-20)&&(xI-x_d1<20)) and ((yI-y_d1>-30)&&(yI-y_d1<30)) and (a==32) and b_5==3 )  {
         
                  c_5=3; a=0;         }
                  
         else if ( c_5!=3 and b_5==3)    {
                                DrawRectangle( 525,80, 15,25, colors[BLUE]);  a_5=0;       }
                   	
          else  if (c_5==3) {
                           pessenger_5();
                             d_5=0 ;
                              score_5=10;
                             
                             
 
                      if ( score_5==10 and a_5==0)
                             {
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_5=1;
                             }
                             }
  /********************/  
   
   	  int x_0=490 ; int y_0=630;   int x_01=670 ; int y_01=255;
      if ( ((xI-x_0>-15)&& (xI-x_0<15))and((yI-y_0>-50)&&(yI-y_0<50)) and a==32 )  {
	      
	           b_6=3;  a=0;        }
	         
	  else if (b_6!=3 )    {
	   
                 pessenger6(); 
                     }
                  
          if ( ((xI-x_01>-20)&&(xI-x_01<20)) and ((yI-y_01>-30)&&(yI-y_01<30)) and (a==32) and b_6==3 )  {
         
                  c_6=3; a=0;         }
                  
         else if ( c_6!=3 and b_6==3)    {
                                  DrawRectangle( 670,255, 15,25, colors[BLUE]);  a_6=0;    }
                   
          else  if (c_6==3) {
                            pessenger_6();
                             d_6=0 ;
                            score_6=10;
                               
                             
                              if ( score_6==10 and a_6==0){
                             
                               score0 +=10;
                                                              //  Num2Str(score0);
                             score= Num2Str(score0);
                             a_6=1;
                             }
                             
                            }
  /********************/
    
     
	 DrawString( 50, 750, "Score =", colors[MISTY_ROSE]);                                   // display score on window
	 DrawString(140, 750,score , colors[WHITE]);
	 	                 
   
     
	
	
	DrawLine(30, 720, 720, 720, 6, colors[WHITE]);
	DrawLine(30, 5, 720, 5, 6, colors[WHITE]);
	
	drawCar();
	drawCar_2();
	drawCar_3();
	drawCar_4();
	drawCar_5();
	drawCar_6();
	
	}
	
	
	  if ( score0>=100){                                                              // game ending status
		DrawSquare(0, 0, 800, colors[BLACK]);
		DrawString(400,460,"YOU WON THE GAME", colors[WHITE]);
		}
		  if (  display_sec>180) {
		DrawSquare(0, 0, 800, colors[BLACK]);
		DrawString(500,470,"GAME END", colors[WHITE]);
		}
	}
	glutSwapBuffers(); 
	
}	
 

void NonPrintableKeys(int key, int x, int y) {

if (key==GLUT_KEY_LEFT)                                       // check is used to stop car to move on building
		{
		 
		  if ( (xI>267 && xI<395) and ( yI>330 && yI<385) ){
		xI -=0;        } 
		 else if ( (xI>118 && xI<189) and ( yI>195 && yI<310)  ){
		 yI +=0;        } //
	      else   if ( (xI>627 && xI<705) and ( yI>45 && yI<100) ){//
		 yI +=0;        } 
	       else if ( (xI>325 && xI<395) and ( yI>45 && yI<135)  ){//
	        yI +=0;        }
	       else if ( (xI>312 && xI<745) and ( yI>605 && yI<660)  ){
		 yI +=0;        }
	       
              else if ( (xI>505 && xI<566) and ( yI>117 && yI<244)  ){
		yI +=0;        }
	      else if ( (xI>510 && xI<755) and ( yI>244 && yI<280) ){
		 yI +=0;        }
	       else if ( (xI>419 && xI<499) and ( yI>363 && yI<590) ){
		 yI +=0;        }
	       else if ( (xI>419 && xI<599) and ( yI>474 && yI<521)  ){
		 yI +=0;        }
	       else if ( (xI>244 && xI<389) and ( yI>320 && yI<390) ){
		 yI +=0;        }
	       else if ( (xI>254 && xI<474) and ( yI>190 && yI<245) ){
		yI +=0;        }
		  else if ( (xI>200 && xI<325) and ( yI>470 && yI<520) ){
		yI +=0;        }
		 else  if ( xI>45)
		          {
		    if(e_1==1)
		      {
		     xI -=8;
		     }
		     else if(e_1==2)   {
		     xI -=5;
		            }
		     }
	          else    {
		   xI -=0;
		         }
		}
		 
                
 /*****************************************/               
else if (key==GLUT_KEY_RIGHT )
	       {
	       
	   
		 
		      if ( (xI>65 && xI<250) and ( yI>200 && yI<315) ){
	          xI +=0;        } 
		 else if ( (xI>62 && xI<170) and ( yI>175 && yI<310)  ){
		 yI +=0;        } 
		  else if ( (xI>590 && xI<665) and ( yI>45 && yI<100) ){
		 yI +=0;        } 
		   else if ((xI>310 && xI<340) and ( yI>45 && yI<135)  ){
		 yI +=0;        } 
		   else if ( (xI>306 && xI<420) and ( yI>605 && yI<675)  ){
		 yI +=0;        }
		   else if ( (xI>626 && xI<675) and ( yI>395 && yI<595)  ){
		 yI +=0;        }
		  else if ( (xI>485 && xI<526) and ( yI>140  &&yI<280)  ){
		 yI +=0;        }
		   else if ( (xI>485 && xI<735) and ( yI>215 && yI<260)  ){
		 yI +=0;        }
		   else if ( (xI>415 && xI<456) and ( yI>349 && yI<675) ){
		 yI +=0;        }
		   else if ( (xI>415 && xI<561) and ( yI>550 && yI<590)  ){
		 yI +=0;        }
		 else if ( (xI>240 && xI<390) and ( yI>325 && yI<390) ){
		 yI +=0;        }
		   else if ((xI>240 && xI<420) and ((yI>190 && yI<245))){
		 yI +=0;        }
		  else if ( (xI>166 && xI<245) and ( yI>470 && yI<520) ){
		 yI +=0;        }
		   else if ( (xI>162 && xI<285) and ( yI>450 && yI<570) ){
		 yI +=0;        }
		 
	  else if ( xI<745)
		       {
		    if(e_1==1)  {
		     xI +=8;
		     }
		     else if(e_1==2){
		     xI +=5;
		     }
		     }
            else
		  {
		   xI +=0;
		      }
		  
		 }
		  
                
/********************************************/	
else if (key==GLUT_KEY_UP)
	       {
		
		 if ( (xI>170 && xI<250) and ( yI>84 && yI<300) ){
		yI +=0;        } 
		 else if ( (xI>65 && xI<170) and ( yI>179 && yI<310)  ){
		 yI +=0;        } 
		  else if ( (xI>595 && xI<685) and ( yI>39 && yI<100) ){
		 yI +=0;        } 
		   else if ( (xI>320 && xI<385) and ( yI>38 && yI<105)  ){
		 yI +=0;        } 
		  else if ( (xI>315 && xI<735) and ( yI>606 && yI<675)  ){
		 yI +=0;        } 
		   else if ( (xI>630 && xI<710) and ( yI>389 && yI<595)  ){
		 yI +=0;        }
		    else if ( (xI>489 && xI<526) and ( yI>108 && yI<244)  ){  yI +=0;        }
		   else if ( (xI>489 && xI<735) and ( yI>214 && yI<260)  ){
		 yI +=0;        }
		   else if ( (xI>419 && xI<456) and ( yI>354 && yI<701) ){
		 yI +=0;        }
		   else if ( (xI>419 && xI<561) and ( yI>475 && yI<535)  ){
		 yI +=0;        }
		 else if ( (xI>244 && xI<390) and ( yI>319 && yI<390) ){
		 yI +=0;        }
		   else if ( (xI>244 && xI<470) and ( yI>188 && yI<245)){
		 yI +=0;        }
		   else if ( (xI>170 && xI<245) and ( yI>454 && yI<495) ){
		 yI +=0;        }
		   else if ( (xI>170 && xI<285) and ( yI>454 && yI<570) ){
		 yI +=0;        }
	  else  if (yI<700)
		       {
		    if(e_1==1)
		      {
		     yI +=8;
		     }
		     else if(e_1==2)
		      {
		     yI +=5;
		     }
		     }
	    else
		  {
		   yI +=0;
		     }
	    }
		  
/**********************************************************/		
else if (key==GLUT_KEY_DOWN)

	  {
	      
	 
       if ( (xI>170 && xI<250) and ( yI>80 && yI<305) ){
		 yI +=0;        } 
		 else if ( (xI>65 && xI<170) and ( yI>195 && yI<325) ){
		 yI +=0;        } 
		  else if ( (xI>595 && xI<685) and ( yI>35 && yI<124) ){
		 yI +=0;        } 
		  else if ( (xI>320 && xI<385) and ( yI>40 && yI<158) ){
		 yI +=0;        }
		   else if ( (xI>315 && xI<735) and ( yI>610 && yI<679)  ){
		 yI +=0;        }
		  else if ( (xI>630 && xI<710) and ( yI>385 && yI<605) ){
		 yI +=0;        }
		   else if ( (xI>489 && xI<526) and ( yI>104 && yI<248)  ){
		 yI +=0;        }
		   else if ( (xI>489 && xI<735) and ( yI>260 && yI<299)  ){
		 yI +=0;        }
		    else if ( (xI>419 && xI<456) and ( yI>349 && yI<635) ){
		 yI +=0;        }
		   else if ( (xI>419 && xI<591) and ( yI>470 && yI<539)  ){
		 yI +=0;        }
		 else if ( (xI>244 && xI<390) and ( yI>315 && yI<399) ){
		 yI +=0;        }
		   else if ((xI>244 && xI<451) and (( yI>190 && yI<249))){
		 yI +=0;        }
		   else if ( (xI>170 && xI<245) and ( yI>495 && yI<534) ){
 yI +=0;        }
		   else if ( (xI>245 && xI<310) and ( yI>450 && yI<605) ){
		 yI +=0;        }
	else   if ( yI>47)
		    {
		    if(e_1==1)
		      {
		     yI -=8;
		     }
		     else if(e_1==2)
		      {
		     yI -=5;
		     }
		     }
	     else
		 {
		   yI -=0;
		    }
		  
	   }  

	glutPostRedisplay();

}

/***************************************************************/
void PrintableKeys(unsigned char key, int x, int y) {
     char ch1='0';
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	 if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	
	
       if(key =='5')           //   score board 
	   {
	  color_1=1;
	 
	        }
	
       if(key == '1')           //   driver names
	   {
	  color_1=2;
	 
	            }
	 if(key == '2'  )           //  for yellow taxi
 	   {
	  color_1=3;               
	   e_1=1;
	   start_time=1;
	 
	                 }
	
	 if(key == '3')             // for red taxi
	   {
	     color_1=3;           
	  e_1=2;
	  start_time=1;
	             }
	             
	if(key == 27)   {
	    exit(1);
	}           
           
	  
	 
	
	   if(key==32)           //   score board 
	   {
	    a=32;
	 
	           }
	
	if(key>93 && key < 123)// key is used to take name from string 
	 {
	  drivername +=key;
	   
	           } 
	                glutPostRedisplay();
}





void Timer(int m) {

	
	moveCar_2();
	moveCar_3();
	moveCar_4();
	moveCar_5();
	moveCar_6();

if ( start_time==1)
   { 	
	for ( int i=0 ; i<1 ; i++ )        /// loop is used to calculate ti
	   {
             ch = ch+1;
           
            display_sec=(ch%1600)/10;
                     
                }
                }
	glutTimerFunc(100, Timer, 0);
	
}


void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}


void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;
}

	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
	
	int width = 800, height = 800; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour "); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	
	
	cout<<rand_x<<endl;
	cout<<rand_y<<endl;

		
	

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
              cout<<endl;
            
         
	glutMainLoop();
	filehandling();
	
	return 1;
}
#endif /* RushHour_CPP_ */
