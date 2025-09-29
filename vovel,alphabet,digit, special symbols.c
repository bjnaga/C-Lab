#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
    char str[100];
      scanf("%[^\n]s",str);
      printf("%s\n",str);

      int vowels = 0, consonant = 0, specialChar = 0, 
        digit = 0,space=0;

    // str.length() function to count number of
    // character in given string.
    for (int i = 0; i < strlen(str); i++) {
         
        char ch = str[i];

        if ( (ch >= 'a' && ch <= 'z') || 
              (ch >= 'A' && ch <= 'Z') ) {

            // To handle upper case letters
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonant++;
        }
        else if (ch >= '0' && ch <= '9')
            digit++;
        else if(ch ==' ')
            space++;
        else
            specialChar++;
    }
    printf("vovel=%d\n consonant=%d\n no. of alphabets=%d\n space=%d\n specialChar=%d\n digit=%d",vowels, consonant,vowels+ consonant, space, specialChar, digit);
    return 0;
}
