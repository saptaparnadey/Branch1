// wap to print horoscope based on your birthday month
#include <stdio.h>

int main() {
    int month;

    printf("Enter your birth month (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("January: Capricorn / Aquarius\n");
            break;
        case 2:
            printf("February: Aquarius / Pisces\n");
            break;
        case 3:
            printf("March: Pisces / Aries\n");
            break;
        case 4:
            printf("April: Aries / Taurus\n");
            break;
        case 5:
            printf("May: Taurus / Gemini\n");
            break;
        case 6:
            printf("June: Gemini / Cancer\n");
            break;
        case 7:
            printf("July: Cancer / Leo\n");
            break;
        case 8:
            printf("August: Leo / Virgo\n");
            break;
        case 9:
            printf("September: Virgo / Libra\n");
            break;
        case 10:
            printf("October: Libra / Scorpio\n");
            break;
        case 11:
            printf("November: Scorpio / Sagittarius\n");
            break;
        case 12:
            printf("December: Sagittarius / Capricorn\n");
            break;
        default:
            printf("Invalid month. Enter 1 to 12.\n");
    }

    return 0;
}

// wap to check if the entered alphabet is a vowel or consonant.
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }

    return 0;
}
