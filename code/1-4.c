#include <stdio.h>

int my_strcmp (const char *dst, const char *src){
    int sum = 0;
    while(*dst != '\0' && *src != '\0'){
        sum = *dst - *src;
        dst++;
        src++;
        if (*dst != '\0'){dst--;}
        if (*src != '\0'){src--;}
    }
    return sum;
}

int main() {
    printf("%d\n",my_strcmp("abc","abcd"));
    printf("%d\n",my_strcmp("abc","abc"));
    printf("%d\n",my_strcmp("b","a"));
    
    return 0;
}
