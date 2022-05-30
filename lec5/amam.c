#include <stdio.h>
#include <math.h> 
#define PI 3.141593
int DrawLine( int, int, int, int );
int KochCurve( int x1, int y1, int x2, int y2, int dim )
 {
 	int x3, y3, x4, y4, x5, y5;
 	if (dim<=0) 
 	DrawLine( x1, y1, x2, y2 );
 	else {
	x3 = ( 2 * x1 + x2 ) / 3;
	y3 = ( 2 * y1 + y2 ) / 3;
	x5 = ( x1 + 2 * x2 ) / 3;
	y5 = ( y1 + 2 * y2 ) / 3;
	x4 = x3 + (x5 - x3) * cos(PI/3) + (y5 - y3) * sin(PI/3);
	y4 = y3 - (x5 - x3) * sin(PI/3) + (y5 - y3) * cos(PI/3);
	KochCurve( x1, y1, x3, y3,dim-1  );
	KochCurve( x3, y3, x4, y4,dim-1);
	KochCurve( x4, y4, x5, y5,dim-1);
	KochCurve( x5, y5, x2, y2,dim-1);
	}
}
int void main()
{
KochCurve( 0, 180, 180, 180, 1 );
}