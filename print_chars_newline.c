#include <stdio.h> 
int main() {   

    char word[100];  /// string with word
    printf("Write Word: \n"); ///  word request
    scanf("%99s", word);  /// 99 symbol

    for (int i = 0; word[i] != '\0'; i++) {  /// while for every letter (it stopped when letter = \0(nothing))
        printf("%c ", word[i]);  ///Print every letter with space
    }
    return 0; 
}