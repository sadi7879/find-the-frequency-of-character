
#include <stdio.h>
#include <string.h>
int main(){
   char sentence[1000];
   char character;
   int i,count=0;
   printf("Enter a sentence: ");
   gets(sentence);
   printf("Enter a character to find frequency: ");
   scanf("%c",&character);

   for(i=0; sentence[i]!='\0';++i)
   {
       if(character==sentence[i])
           ++count;
   }
   printf("Frequency of %c = %d", character, count);
   return 0;
}
