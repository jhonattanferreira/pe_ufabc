#include <stdio.h>

int main() {

    int x = 0;
    
    scanf("%d", &x);
    
    int vetorA[x];

    for (int i = 0; i <= x; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < x; i++) {
        printf("%d ", vetorA[i]);
    }

    return 0;
}
