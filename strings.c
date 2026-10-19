// wap to convert a lowercase string to upper case
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}

// wap to count  total no. of vowels in a string
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }

    printf("Total number of vowels: %d\n", count);

    return 0;
}

// wap to count  total no. of words in a string
#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
       
        if((str[i] != ' ' && str[i] != '\n') &&
           (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\0')) {
            words++;
        }
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
