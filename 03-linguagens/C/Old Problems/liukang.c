#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long t, n, m; 
    scanf("%llu %llu", &t, &m); 
    n = sqrt(t);

    for (int i = 0; i < m; i++) {
        if (n % 2 == 0) {
            n = n - 1;
        } else {
            n = (2 * n) - 1;
        }
        t = n * n;    
        printf("%llu\n", t);
    }

    return 0;
}