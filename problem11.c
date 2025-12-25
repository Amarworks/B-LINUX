#include <stdio.h>

int main()
{
 float m, c, b, e, p;
 float total_marks, percentage;

 printf("Enter marks of 5 subjects (out of 100):\n");
 scanf("%f %f %f %f %f", &m, &c, &b, &e, &p);

 total_marks = m + c + b + e + p;
 percentage = (total_marks / 500) * 100;

 printf("PERCENTAGE = %.2f%%\n", percentage);

 return 0;
}


