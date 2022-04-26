#include <stdio.h>

int main() {
    while(true) {
        int h, w = 0;
        scanf("%d %d", &h, &w);
        if (h == 0 && w == 0) break;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (i == 0 || i == h - 1) {
                    printf("#");
                } else {
                    if (j == 0 || j == w - 1) {
                        printf("#");
                    } else {
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
