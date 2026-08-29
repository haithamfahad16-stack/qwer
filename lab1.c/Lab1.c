#include <stdio.h>
int main( ){

printf("Haitham Aljohani"); //1. Write a program that will print your name to the screen.

printf("\n ####################next one######################################\n") ;//Write a C program that asks the user to enter 3 integer numbers, and then prints the  entered numbers in reverse order.

int a=0; /*   1st number  */
int b =0; /*    2st number     */
int c =0 ;  /*     3st number     */


printf("Enter 1st number :");
scanf("%d",&a);


printf("Enter  2st number:   ");
scanf(" %d" ,&b  );

printf("Enter  3st number:   ");
scanf(" %d" ,&c  );


printf("The number in reverse order: %d %d %d  " ,c,b,a);



printf("\n ####################next one######################################\n") ;// Write a program that reads two floating point numbers from the user. The program will  then  display the addition and the subtraction of the two numbers.
printf("\n########################calcolate#######################################\n");
float d=.2f;
float e=.2f;
float f=.2f;



printf("First namper =");
scanf("%f" ,&d);

 printf("Secand namper =");
scanf("%f",&e);


printf(" %.2f +%.2f =%.2f",d,e,(d+e)) ;
printf("\n%.2f-%.2f=%.2f",d,e,(d-e));



printf("\n ####################next one######################################\n") ;// Write a program that reads a temperature value in degrees centigrade and then converts and displays the equivalent temperature in Fahrenheit.

float  centigrade = .2f ;
float  Fahrenheit = .2f ;


printf("Enter The temperature in <Centigrade>: ");
scanf(" %f",&centigrade);


Fahrenheit = ( centigrade * 9.0 / 5.0 ) +32 ;

printf("Equivalent temperatrure in Fahrenchait %.2f" ,Fahrenheit);
return 0 ;

} 
