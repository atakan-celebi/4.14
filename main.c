#include <stdio.h>

int main(void) {
    int i;
    float t1, t2, t3;
    printf("inserire la prima temperatura: \n");
    scanf("%f", &t1);
    printf("inserire la prossima temperatura: \n");
    scanf("%f", &t2);
    if (t2 > t1) {
        printf("%f: la giornata precendete era piu fredda \n", t2);
    } else if (t2 == t1) {
        printf("%f: la temperatura e' la stessa \n",t2);
    } else {
        printf("%f: la temperatura e' minore \n", t2);
    }
    for (i=1;i<=10;i++) {
        t3 = t2;
        printf("inserire la prossima temperatura: \n");
        scanf("%f", &t2);
        if (t3 > t2) {
            printf("%f: la giornata precendete era piu fredda \n", t3);
        } else if (t2 == t1) {
            printf("%f la temperatura e' la stessa \n", t3);
        } else {
            printf("%f: la temperatura e' minore \n", t3);
        }
    }
}
