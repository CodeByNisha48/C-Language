//  WAP to find the area of the circle. Take radius of circle from user as input 
// and print the result in below given format.  

// Expected output format – “Area of circle is A having the radius R”. 
// Replace A with area & R with radius.  

#include<stdio.h>
#include<conio.h>

int main() {
    int radius, area;
    printf("ENter the radius: ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;

    printf("Area of circle is %.2d having the radius %.2d", area, radius);
}