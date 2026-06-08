#include <stdio.h>
#include <stdlib.h>

int main()
{ /* INDEX- AS20250494
     Name - Hemanath Madhusanka Abertahne */

     printf("This is a C program that takes marks of a student in 3 subjects and calculates\n");
     printf("Please enter the marks\n");
     float Mathematics,Science,English,total,Average;
     int Total_Subjects = 3;
     printf("Please Enter the Marks of Mathematics\n");
     scanf ("%f",&Mathematics);
     printf("Please enter the Marks of Science\n");
     scanf ("%f",&Science);
     printf("Please enter the Marks of English\n");
     scanf ("%f",&English);
     total  =Mathematics + Science + English;

     Average=total / Total_Subjects;

   if (Average >= 80.0 && Average <= 100.0) {
        printf("A\n");
    }
    else if (Average >= 70.0) {
        printf("B\n");
    }
    else if (Average >= 60.0) {
        printf("C\n");
    }
    else if (Average >= 50.0) {
        printf("D\n");
    }
    else {
        printf("F\n");
    }
     if (Mathematics < 40.0 || Science < 40.0 || English < 40.0) {


    }
    else {



    }
      printf("\nYour Total Marks: %.2f\n", total);
      printf("\nAverage Marks: %.2f\n", Average);
      printf("Final Grade: F\n");
      printf("Status: PASS\n");



    return 0;
}
