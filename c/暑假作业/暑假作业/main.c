#include"test.h"

//
//int main() {
//    //printf_x();
//   // guess_order();
//   // muder();
//   //Pascals_triangle();
//    //search();
//   // turn_left();
//    /*if (is_turn())
//        printf("YES\n");
//    else
//        printf("NO\n");*/
// /*   int n = 0;
//    scanf("%d", &n);
//    while (n--) {
//        char arr[100] = { 0 };
//        int num = 0, alf = 0, Alf = 0;
//        gets(arr);
//        int len = strlen(arr);
//        for (int j = 0; j < len; j++) {
//            if (arr[j] <= 0 || (arr[j] >= 58 && arr[j] <= 64) || (arr[j] >= 91 && arr[j] <= 96) || arr[j] >= 123) {
//                printf("NO\n");
//                break;
//            }
//            if (arr[0] >= '0' && arr[0] <= '9') {
//                printf("NO\n");
//                break;
//            }
//            if (arr[j] >= '0' && arr[j] <= '9')
//                num = 1;
//            if (arr[j] >= 'a' && arr[j] <= 'z')
//                alf = 1;
//            if (arr[j] >= '0' && arr[j] <= '9')
//                Alf = 1;
//        }
//        if ((num + alf + Alf) >= 2)
//            printf("YES\n");
//        else printf("NO\n");
//    }*/
//    int nums[] = {3,6,1,0};
//    printf("%d\n",dominantIndex(nums, 4));
//
//    return 0;
//}
//


int main() {
    int a, b, c, d, e, f, g;
    while ((scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g)) != EOF) {
        int arr[7] = { a,b,c,d,e,f,g };
        int max = 0, min = 100, maxf = 0, minf = 0, sum = 0;
        for (int i = 0; i < 7; i++) {
            if (arr[i] >= max) {
                max = arr[i];
                maxf = i;
            }
            if (arr[i] <= min) {
                min = arr[i];
                minf = i;
            }
            sum += arr[i];
        }
        sum = sum - arr[maxf] - arr[minf];
        printf("%.2f\n", sum / 7.0);
    }
    return 0;
}