#include <stdio.h>
 
int main(){   
    int score;

    printf("Enter score(0-100): ");
    scanf("%d", &score);

    if(score < 0 || score > 100) {
        printf("Invalid score!\n");
        return 0;  
    }
    
    switch (score / 10) ;
    
        case 10:
        case 9:
            printf("Grade: A\n");
            printf("Excellent\n");
            break;

        case 8:
            printf("Grade: B\n");
            printf("Very good\n");
            break;
             
        case 7:
            printf("Grade: C\n");
            printf("Good\n");
            break; 

        case 6:
            printf("Grade: D\n");
            printf("Pass\n");
            break; 

        default:
            printf("Grade: F\n");
            printf("Fail\n");
            
    
    return 0;
}