#include <stdio.h>

char *my_strcat(char *dst, const char *src){
    char *dst_c = dst;

    while (*dst != '\0'){
        dst++;
    }
    while(*src != '\0'){
        *dst = *src;
        dst++;
        src++;
    }
    return dst_c;
}

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n",str1);
    my_strcat(str1,str2);
    printf("%s\n",str1);
    
    return 0;
}
