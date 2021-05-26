/* acos example */
#include <stdio.h>      /* printf */
#include <math.h>       /* acos  */
#include <conio.h>		/* _getch() */

#define PI 3.14159265

/*	Source by CPPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

int main(){
	double param, result;
	param = 0.5;

	result = acos(param) * 180.0 / PI;
	printf("The arc cosine of %f is %f degrees.\n", param, result);

	_getch();
	return 0;
}