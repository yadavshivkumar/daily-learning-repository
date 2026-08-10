//if else statetments


#include<stdio.h>
int main() {
    int age = 5;
    if (age >10) {
        printf("WE are inside if\n");
        printf("Your age is greater than 10\n");
    }  
    
    else{
    printf("Your is age is not greater than 10");
 }
  return 0; 
}


// Write a program to find out whether a student is pass or fail. If it is necessary to get 40% to pass. Assume 3 subjects and take marks as input from the user.
#include<stdio.h>
int main() {            
    int marks1, marks2, marks3;
    printf("Enter the marks of subject 1\n");
    scanf("%d", &marks1);
    printf("Enter the marks of subject 2\n");
    scanf("%d", &marks2);
    printf("Enter the marks of subject 3\n");
    scanf("%d", &marks3);
    float average = (marks1 + marks2 + marks3) / 3.0;
    if (average >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33) {
        printf("Congratulations! You have passed the exam.\n");
    } else {
        printf("Sorry, you have failed the exam. Better luck next time!\n");
    }
    return 0;
}

