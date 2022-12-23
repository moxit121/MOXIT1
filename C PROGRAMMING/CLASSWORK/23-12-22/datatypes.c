#include <stdio.h>

void main ()
{
	int my_num = 15; //store integer 
	char my_char = 'm'; //store character 
	float my_float_num = 5.123456 ; //store point values
	double my_doublenum = 19.99 ; // floating point number
	
	//print variables 
	printf("----------------------------------\n");
	printf("\t Number is = %d \n", my_num);
	printf("\t character is = %c\n", my_char);
	printf("\t Float Number is = %f\n", my_float_num);
	printf("\t double number is = %lf", my_doublenum);

	printf("\n\t mynuber_%d , mychar_%c , and my float_%f",my_num,my_char,my_float_num);	
	
	return 0 ;
	
}