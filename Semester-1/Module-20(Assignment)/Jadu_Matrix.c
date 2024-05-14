#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r == c) {
        int flag = 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if ((i == j || i + j == r - 1) && a[i][j] != 1) {
                    flag = 0;
                    break;
                } else if (i != j && i + j != r - 1 && a[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
            if (!flag) {
                break;
            }
        }
        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }

    return 0;
}