#include <stdio.h>

void myforloop();
void mywhilelloop();

int main() {
    myforloop();
    mywhilelloop();
    return 0;
}

/* playing with for loop */
void myforloop() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Hello ");
        printf("World\n");
    }
}

/* playing with while loop */
void mywhilelloop() {
    int i = 0, m;
    printf("Enter a number: ");
    scanf("%d", &m);
    while (i < m) {
        i++;
        printf("%d\n", i);
    }
}
