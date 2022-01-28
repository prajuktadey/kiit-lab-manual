#include <stdio.h>

int main()
{
  char ra_name[5] = {'r', 'a','h', 'u', 'l'};
  char ra_duplicate[5] = {'r', 'a', 'h', 'u', 'l'};
  int ra_vowels = 0;


  for (int i = 0; i < 5; i++) {

    ra_name[i] = tolower(ra_name[i]);

    if (ra_name[i] == 'a' || ra_name[i] == 'e' || ra_name[i] == 'i' || ra_name[i] == 'o' || ra_name[i] == 'u') {
      ++ra_vowels;
    }
  }

  printf("Vowels: %d\n", ra_vowels);
    
    
    for (int i = 0; i < 5; i++) {     
      printf("%c", ra_duplicate[i]); 
        
        for (int j = 0; j < 3; j++) {
            printf("r");
        }
    }  
    
   
  return 0;
}