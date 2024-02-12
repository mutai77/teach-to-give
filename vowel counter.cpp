//Question 6: Count Vowels
//Write a program that counts the number of vowels in a sentence.


#include <stdio.h>
#include <ctype.h>
int main() {

  char line[150];
  int vowels;

  

  // get full line of string input
  printf("Enter your sentence here: ");
  fgets(line, sizeof(line), stdin);

  // loop through each character of the string
  for (int i = 0; line[i] != '\0'; ++i) {
 line[i] = tolower(line[i]);


    // check if the character is a vowel
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      // increment value of vowels by 1
      ++vowels;
    }

   
  }

  printf("Vowels: %d", vowels);

  return 0;
}

