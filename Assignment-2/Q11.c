//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed. 


#include<stdio.h>
#include<conio.h>

int main(){
    int math, physics, chemistry, biology, english;

    printf("Enter the number of Math: ");
    scanf("%d", &math);
    printf("Enter the number of phycish: ");
    scanf("%d", &physics);
    printf("Enter the number of chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the number of biology: ");
    scanf("%d", &biology);
    printf("Enter the number of english: ");
    scanf("%d", &english);

    if(math >= 33 && physics >= 33 && chemistry >= 33 && biology >= 33 && english >= 33){
        printf("candidate passed");
    }
    else{
        printf("candidate failed");
    }
    return 0;
    
}