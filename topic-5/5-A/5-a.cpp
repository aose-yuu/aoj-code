#include <stdio.h>

int main() {
    for (int i = 0; ; i++) {
        int h, w = 0;
        scanf("%d %d", &h, &w);

        if (h == 0 && w == 0) {
            break;
        }

        for (int j = 0; j < h; j++) {
            for (int k = 0; k < w; k++) {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
