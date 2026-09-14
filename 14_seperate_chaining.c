#include <stdio.h> 
#define SIZE 10 

#define CHAIN 5 

int main() 

{ 

   int hashTable[SIZE][CHAIN]; 

   int key, index; 

   int i, j; 


   // Initialize table 

   for (i = 0; i < SIZE; i++) 

   { 

       for (j = 0; j < CHAIN; j++) 

       { 

           hashTable[i][j] = -1; 

       } 

   } 

   // Insert 5 numbers 

   printf("Enter 5 numbers:\n"); 
   for (i = 0; i < 5; i++) 

   { 

       scanf("%d", &key); 

       index = key % SIZE; 

       // Find empty position in the chain 

       for (j = 0; j < CHAIN; j++) 

       { 

           if (hashTable[index][j] == -1) 

           { 

               hashTable[index][j] = key; 

               break; 

           } 

       } 

   } 

   // Display 

   printf("\nHash Table:\n"); 
   for (i = 0; i < SIZE; i++) 

   { 

       printf("%d -> ", i); 
       for (j = 0; j < CHAIN; j++) 

       { 
           if (hashTable[i][j] != -1) 

               printf("%d -> ", hashTable[i][j]); 
       } 
       printf("NULL\n"); 
   } 
   return 0; 

} 

  