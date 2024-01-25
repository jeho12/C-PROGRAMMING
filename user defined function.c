#include <stdio.h>

int find_max(int num1, int num2) {
   // Function to find the maximum number
   if (num1 > num2) {
       return num1;  // Return the larger number
   } else {
       return num2;
   }
}

int main() {
   int num1, num2;

   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   int max_num = find_max(num1, num2);  // Call the find_max function

   printf("The maximum number is: %d\n", max_num);

   return 0;
}

