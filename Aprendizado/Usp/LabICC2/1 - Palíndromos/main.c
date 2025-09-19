#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
    Function that uses two pointers to check if a string is a palindrome.
    recieves: pointer to a string
    returns: bool 
    description: uses two pointers, and if is different it returns false
*/
bool interativePalindrome (char *str){ 
    int i = 0, j = (strlen(str)) - 1 ; // -1 since it starts counting from 0
    while (i <j){
        if (str[i++] != str[j--]){
            return false;
        }
    }
    return true;
}

/*
    Function that uses two pointers to check if a string is a palindrome.
    recieves: pointer to a string, start of the string, "end" of the string
    returns: bool 
    description: uses recursive to check if the string is a palindrome. for every comparison, it calls itself with the start pointer incremented and the end pointer decremented.
*/
bool recursivePalindrome(char *str, int i, int j){
    if(i >= j){
        return true;
    }
    if (str[i] != str[j]){
        return false;
    }
    return recursivePalindrome(str, ++i, --j);
}

int main() {
    char str[1000];
    char strClean[1000];

    while(fgets(str,100,stdin)){
        int size = 0;

        for(int i = 0; str[i] != '\0'; i++) {
            if(isalpha(str[i]) || isdigit(str[i])) { // remove alphanumeric characters and spaces
                strClean[size++] = tolower(str[i]); // copy the valid character
            }
            continue;
        }
        strClean[size] = '\0'; // add the null terminator
        //printf("String limpa: %s\n", strClean); // debug that str clean was wrong
        //printf("%d: ", size); // debug for recursive problem (was using ++ and -- before)

        printf("%s", recursivePalindrome(strClean,0, size - 1) ? "Sim\n" : "Não\n");
    }
    return 0;
}