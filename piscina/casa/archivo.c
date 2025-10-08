#include <unistd.h>

void printalphabet(void){
    char letter = 'a';
    while(letter<='z'){

        write(1, &letter, 1);
        letter = letter + 1;
    }
}

int main(void){
    printalphabet();
    return 0;
}