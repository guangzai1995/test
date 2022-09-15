#include"test.h"

int main() {
    int n = 0, m = 0;
    int sum = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[][10] = { 0 };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}