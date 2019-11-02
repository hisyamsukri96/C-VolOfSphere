/*
Program to calculate volume of a sphere
*/
	
#include <stdio.h>  
int main()  
{  
    const double PI=3.142; 
	float radius, mRadius, volume, mVolume; 
    
	printf("Calculate Volume of Sphere \n"); 
	
	printf("Enter the radius of the sphere in milimetres: "); //example 1m = 1000mm
	scanf("%f", &radius);
	printf("\n");
	
	mRadius = radius / 1000; //formula to convert radius milimetres to metres
	
	printf("Radius of sphere in metres: %.2f \n", mRadius); //display radius in metres
	     
    volume = (4.0 * PI * radius * radius * radius ) / 3;
    mVolume = volume / 1000; //formula to convert volume milimetres to metres
	 
    printf("Volume of the sphere in metres: %.2f", mVolume);  //display volumes in metres
    
    //notes : .2f is to return value with 2 decimal points only.
}  
