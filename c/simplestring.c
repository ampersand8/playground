#include <stdio.h>

int main() {
    /* Define string with a pointer */
    char * myhobby = "C programming";

    /* Define string with a char array */
    char myworld[] = "computers";

    /* Comparing a string */
    if(strncmp(myworld,"computers") != 0) {
        printf("Sorry, that's the wrong world.\n");
        return 1;
    }
    else {
        printf("Nice world you live in :-)\n");
    }

    printf("Hi, my hobby is %s and I live in the world of %s\n",myhobby,myworld);
    return 0;
}
