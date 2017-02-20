 #include <stdio.h>

int main(void) 
{

 int num;

 printf("숫자를 입력하시오(단, 정수만): ");

 scanf("%d", &num); // 숫자 입력

 printf("16진수로 표현하면? \n");

 printf("%x\n",num);



 return 0;

}