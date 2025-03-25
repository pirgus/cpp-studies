#include <iostream>

void concat_string(char *str1, char *str2, char *result){
    int i, j;
    i = 0;
    j = 0;
    char c;
    while(str1[i] != '\0'){
        result[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0'){
        result[j+i] = str2[j];
        j++;
    }

    result[i+j] = '\0'; // sinalizar final da string
}

void concat_str_pointers(char *s1, char *s2, char *sres){
    while(*s1){
        *sres++ = *s1++;
    }

    while(*s2){
        *sres++ = *s2++;
    }

    *sres = '\0';
}

int main(){
    char str1[] = "teste";
    char str2[] = "123";

    char result[20];

    std::cout << str1 << ", " << str2 << std::endl;
    concat_str_pointers(str1, str2, result);
    std::cout << str1 << ", " << str2 << ", " << result << std::endl;

    return 0;
}