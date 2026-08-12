#include<stdio.h>
 
int sum (int, int);

int sum (int x, int y) {
    printf ("the sum is %d\n", x + y );
    return(x + y);
}

int main() {
    int a = 1;
    int b = 2; 

//    int c = a + b ;

//     printf("The sum is %d\n", c);
  sum (a,b);

    int a1 = 12;     int b1 = 23;
     int a2= 23; int b2 = 54;
     int a3= 75; int  b3 = 56;

  //  int c1 = a1 + b1;
    //printf("The sum is %d\n", c1);

     sum (a1, b1);
    sum (a2, b2);
    sum (a3, b3);
     return 0; 
}





























