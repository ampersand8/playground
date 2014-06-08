#include <stdio.h>

void myforloop();
void mywhilelloop();
void mydowhileloop();

int main() {
    myforloop();
    mywhilelloop();
    mydowhileloop();
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

/* playing with do while loop */
void mydowhileloop() {
    int i = 0, m;
    printf("Enter a number: ");
    scanf("%d", &m);
    do {
        i++;
        printf("%d\n", i);
    }
    while (i < m);
}
