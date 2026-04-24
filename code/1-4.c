#include <stdio.h>

int my_strcmp (const char *dst, const char *src){

    while(*dst != '\0' || *src != '\0'){
        dst++;
        src++;
    }

    return *dst - *src;
}

int main() {
    printf("%d\n",my_strcmp("abc","abcd"));
    printf("%d\n",my_strcmp("abc","abc"));
    printf("%d\n",my_strcmp("b","a"));
    
    return 0;
}
