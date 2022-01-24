/* Ruwan Duminda Rathnayaka */
#include<stdio.h>  
#include<graphics.h>  
#include<math.h>  
void setPixel(int x, int y, int h, int k)  
{  
    putpixel(x+h, y+k, RED);  
    putpixel(x+h, -y+k, RED);  
    putpixel(-x+h, -y+k, RED);  
    putpixel(-x+h, y+k, RED);  
    putpixel(y+h, x+k, RED);  
    putpixel(y+h, -x+k, RED);  
    putpixel(-y+h, -x+k, RED);  
    putpixel(-y+h, x+k, RED);  
}  
int main()  
{  
    int gd=0, gm;
	float h,k,r;  
    double x,y,x2;
    /*clrscr(); clrscr() will not work here because this function is old. 
	we will use system("cls") insted of clrscr()*/
	system("cls");
	
	/* to Read Two end points of line */
	printf("(h,k) = coordinates of circle center \n  r = circle radius \n"); 
	printf("Enter the value of h: ");  
    scanf("%f", &h); 
	printf("Enter the value of k: ");  
    scanf("%f", &k); 
    printf("Enter the value of r: ");  
    scanf("%f", &r);  
    
	/* to initialise graphics mode. */  
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,""); 
	 
    
    x=0,y=r;  
    x2 = r/sqrt(2);  
    while(x<=x2)  
    {  
        y = sqrt(r*r - x*x);  
        setPixel(floor(x), floor(y), h,k);  
        x += 1;
		delay(10);/*delay fuction is used to suspend execution of a 
		program for a particular time.*/   
    }  
    getch();
    closegraph();  
    return 0;  
}  
