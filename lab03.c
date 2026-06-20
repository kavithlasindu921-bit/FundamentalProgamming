#include<stdio.h>
int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    printf("Addition of a& b: %d\n",a+b);
    printf("Substraction of a& b: %d\n",a-b);
    printf("Multiplication of a& b: %d\n",a*b);
    printf("Division of a& b: %d\n",a/b);
    printf("Remainder of a& b: %d\n",a%b);

    //RElational operators

    printf("a==b : %d\n", a==b);//equal
    printf("a!=b : %d\n", a!=b);//not equal
    printf("a>b : %d\n", a>b);//greater than
    printf("a<b : %d\n", a<b);//lees than
    printf("a>=b : %d\n", a>=b);//greater than or equal
    printf("a<=b : %d\n", a<=b);//less than or equal

    //logical operators

    printf("a&&b:%d\n", a&&b);
    printf("a||b:%d\n", a||b);
    printf("!b:%d\n", !b);
    printf("!c:%d\n", !c);

    //bitwise operators

    printf("a&b:%d\n", a&b);//bitwise AND
    printf("a|b:%d\n", a|b);//bitwise Or
    printf("a^b:%d\n", a^b);//bitwise XOR
    printf("!c:%d\n", !c);//bitwise NOT
    printf("a<<b:%d\n", a<<b);//left shift
    printf("a>>b:%d\n", a>>b);//right shift

    printf("%d\n", 2+3*4);
    printf("%d\n", (2+3)*4);
    printf("%d\n", 10/2+3);
    printf("%d\n", 10/(2+3));
    printf("%d\n", 5>3 && 2<4);
    printf("%d\n", 5>3 || 2>4);
    printf("%d\n", !(5==5));

    
    

}