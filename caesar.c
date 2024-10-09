#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


bool only_digits(string s);
int rotate(char c, int key);

int main(int argc, string argv[]) {

    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    } else {
    }

    int key = atoi(argv[1]);

    string plain_text = get_string("plaintext: ");

    int n = strlen(plain_text);
    printf("ciphertext: ");

    for (int i = 0; i < n; i++) {
        printf("%c", rotate(plain_text[i], key));
    }
    printf("\n");

    return 0;
}

bool only_digits(string s) {


    int n = strlen(s);
    // returns true if strings only contaings digits, 0 - 9, else returns false
    for (int i = 0; i < n; i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}


int rotate(char letter, int key) {
    int alphabet[26] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    bool is_lower = true;
    if (isalpha(letter)) {
         if (islower(letter)) {
            letter = alphabet[letter - 'a'];
        } else if (isupper(letter)) {
            letter = alphabet[letter - 'A'];
            is_lower = false;
        }
    letter = (letter + key) % 26;

    if (is_lower == true) {
        letter += 'a';
    } else {
        letter += 'A';
    }
    }
    return letter;

}
