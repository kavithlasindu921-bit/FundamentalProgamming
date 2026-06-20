#include<stdio.h> 
int main(){ 
    char name[15];
    char reg[20];

    int sub1;
    int sub2;
    int sub3;

    int tot;

    float avg;

    printf("enter your name:");
    scanf("%s", &name);

    printf("enter your reg no:");
    scanf("%s", &reg);

    printf("Enter mark for subject 1:");
    scanf("%d" ,&sub1);

    printf("Enter mark for subject 2:");
    scanf("%d", &sub2);

    printf("Enter mark for subject 3:");
    scanf("%d", &sub3);

    tot = sub1 + sub2 + sub3 ;

    if ( tot <= 0 || tot > 100){
        printf("Invalid total mark entered.\n");
        return 1;
    }

    avg = tot / 3;

      printf("********Final Result*******\n");
      printf("student name: %s\n", name);
      printf("Registration number: %s\n", reg);
      printf("total mark: %d\n", tot);
      printf("average mark; %.2f\n", avg);

    if (tot>=75){ 
       printf("Grade: Distinction\n");
    }else if (tot>=60){
       printf("Grade: credits\n");
    }else if (tot>=50){
        printf("Grade: pass\n");
    }else { 
        printf("Grade: fail\n");
    }

    if (avg >= 75 && tot >= 50){
        printf("schoolarship status: Eligible\n");
    } else{
        printf("schoolarship status: Not Eligible\n");
    }  
    return 0;
    
    
}