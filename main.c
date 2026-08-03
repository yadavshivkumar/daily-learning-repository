#include<stdio.h> #include<stdlib.h>  #include<time.h>
int main() {srand(time(0));
    int player, computer = rand() % 3 + 0;
    /*   0 --> Snake   1 --> Water    2 --> Gun */
   printf("Choose 0 for Snake, 1 for Water, 2 for Gun \n");
   scanf("%d", &player); printf("%d", computer);
   if (player == 0 && computer == 1) {
       printf("Player wins! Snake drinks the water\n");
   } else if (player == 1 && computer == 0) {
       printf("Computer wins! Snake drinks the water\n");
   } else if (player == 1 && computer == 2) {
       printf("Player wins! Water damages the gun\n");
   } else if (player == 2 && computer == 1) {
       printf("Computer wins! Water damages the gun\n");
   } else if (player == 2 && computer == 0) {
       printf("Player wins! Gun kills the snake\n");
   } else if (player == 0 && computer == 2) {
       printf("Computer wins! Gun kills the snake\n");
   } else if (player == computer) {
       printf("It's a draw!\n");
   } else {       printf("Invalid input! Please choose 0, 1, or 2.\n");
   }    return 0; }