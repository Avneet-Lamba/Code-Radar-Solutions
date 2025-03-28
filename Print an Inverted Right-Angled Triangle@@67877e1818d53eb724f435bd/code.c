#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // Read the value of n

    for (int i = 1; i <= n; i++) { // Loop for rows
        for (int j = 1; j <=n+1-i; j++) {     // Loop for columns
            printf("*");
        }
        printf("\n");  // Print a new line after each row
    }

    return 0;
}