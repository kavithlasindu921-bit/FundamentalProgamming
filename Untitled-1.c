#include<stdio.h>
int main(){

    char name[20];
    int age;
    float GPA;
    char grade;
     
    printf("welcome to the student information system!\n");
    printf("-------------------------------------------\n");
    
    printf("enter your name: ");
    scanf("%s", &name);

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your GPA: ");
    scanf("%f", &GPA);

    printf("enter your grade: ");
    scanf("%c", &grade);

    printf("\n---student information---\n");
    printf("-----------------------------\n");

    printf("name: %s\n" ,name);
    printf("age: %d\n" ,age);
    printf("GPA: %.2f\n" ,GPA);
    printf("grade: %c\n" ,grade);


    return 0;
}
   




        


