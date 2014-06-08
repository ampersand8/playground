#include <stdio.h>

int *bubblemeone(int n, int numbers[]);

int main() {
    int n,i,numbers[100];
    int *sortone;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integers:\n",n);
    for (i=0; i < n;i++) {
        scanf("%d", &numbers[i]);
    }

    sortone = bubblemeone(n,numbers);
    printf("The output of bubblemeone:\n");
    for (i=0;i<n;i++) {
        printf("%d\n",sortone[i]);
    }
    return 0;
}

int *bubblemeone(int n, int numbers[]) {
    int i,d,swap;

    for (i=0;i<(n-1);i++) {
        for (d=0;d<(n-i-1);d++) {
            if (numbers[d] > numbers[d+1]) {
                swap = numbers[d];
                numbers[d] = numbers[d+1];
                numbers[d+1] = swap;
            }
        }
    }
    return numbers;
}
