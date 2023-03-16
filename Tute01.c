/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float avg;

  printf("Enter Subject 01 Mark : ");     //Input subject 01 mark 
  scanf("%d", &mark1);

  printf("Enter Subject 02 Mark : ");     //Input subject 02 mark 
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2;              //Calculate average

  printf("Average is : %.2f", avg);       //Display average

  return 0;
}

