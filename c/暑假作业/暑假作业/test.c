#include"test.h"

int* printNumbers(int n, int* returnSize) {
    for (int i = 0; i < pow(10, n) - 1; i++) {
        returnSize[i] = i + 1;
    }
    return returnSize;
}

void printf_x() {
    int n = 0;
    while ((scanf("%d", &n)) != EOF) {
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < i; j++)
                printf(" ");
            printf("*");
            for (int j = 0; j < n - 2 * (i + 1); j++)
                printf(" ");
            printf("*\n");
        }
        for (int i = 0; i < n - n / 2; i++) {
            for (int j = 0; j < n - n / 2 - 1 - i; j++)
                printf(" ");
            if (i == 0) {
                if (n % 2 == 0) {
                    printf("**\n");
                    continue;
                }
                else {
                    printf("*\n");
                    continue;
                }
            }
            else
                printf("*");
            if (n % 2 == 0) {
                for (int j = 0; j < 2 * i; j++)
                    printf(" ");
            }
            else {
                for (int j = 0; j < 2 * i - 1; j++)
                    printf(" ");
            }
            printf("*\n");
        }
    }
}

void guess_order() {
        for (int a = 1; a <= 5; a++)
        {
            for (int b = 1; b <= 5; b++)
            {
                for (int c = 1; c <= 5; c++)
                {
                    for (int d = 1; d <= 5; d++)
                    {
                        for (int e = 1; e <= 5; e++)
                        {
                            if (((b == 2) + (a == 3)) == 1 &&
                                ((b == 2) + (e == 4)) == 1 &&
                                ((c == 1) + (d == 2)) == 1 &&
                                ((c == 5) + (d == 3)) == 1 &&
                                ((e == 4) + (a == 1)) == 1)
                            {
                                if (a * b * c * d * e == 120)           
                                    printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
                            }
                        }
                    }
                }
            }
        }
}
void muder() {
    for (int A = 0; A < 2; A++) {
        for (int B = 0; B < 2; B++) {
            for (int C = 0; C < 2; C++) {
                for (int D = 0; D < 2; D++) {
                    if (((A == 0) + (C == 1) + (D == 1) + (D == 0)) == 3) {
                        if (A + B + C + D == 1)
                            printf("A=%d\nB=%d\nC=%d\nD=%d\n",A,B,C,D);
                    }
                }
            }
        }
    } 
}
void Pascals_triangle() {
    int n;
    while ((scanf("%d", &n)) != EOF) {
        int arr[100][100] = { 0 };
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == j) {
                    arr[i][j] = 1;
                }
                else
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%-4d ", arr[i][j]);
            }
            printf("\n");
        }
    }
}

void search() {
    int num = 10,flag=0;
    int arr[5][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9} };
    for (int i = 0; i < 5; i++) {
        if (arr[i][4] < num)
            continue;
        else
        {
            int j = 4;
            while (j--) {
                if (arr[i][j] == num) {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    if (flag == 0)
        printf("NO\n");
}

void reverse(char* left,char*right) {
    while (left < right) {
        int tmp = 0;
        tmp = *right;
        *right = *left;
        *left = tmp;
        left++; right--;
    }
}
void turn_left() {
    char arr[20] = { 0 };
    gets(arr);
    int num = 0;
    scanf("%d", &num);
    int len = strlen(arr);
    if (num > len)
        num %= len;
    reverse(arr,arr+num-1);
    reverse(arr + num, arr + len - 1);
    reverse(arr, arr + len - 1);
    printf("%s", arr);
}
int  is_turn() {
    char arr1[20] = { 0 };
    gets(arr1);
    char arr2[20] = { 0 };
    gets(arr2);
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    if (len1 != len2)
        return 0;
    else {
        for (int i = 0; i <len1; i++) {
            reverse(arr1, arr1 + i);
            reverse(arr1 + i, arr1 + len1 - 1);
            reverse(arr1, arr1 + len1 - 1);
            if (strcmp(arr1, arr2) == 0)
                return 1;
        }
        for (int i = 0; i < len1; i++) {
            reverse(arr1 + i, arr1 + len1 - 1);
            reverse(arr1, arr1 + i);
            reverse(arr1, arr1 + len1 - 1);
            if (strcmp(arr1, arr2) == 0)
                return 1;
        }
        return 0;
    }
}

int dominantIndex(int* nums, int numsSize) {
    int max = -9999;
    int flag = 0;
    int count = 0;
    if (numsSize <= 1)
        return 0;
    else {
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] >= max) {
                max = nums[i];
                flag = i;
            }
        }
        nums[flag] = 1;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == 0) {
                count++;
                continue;
            }
            if (max / nums[i] >= 2)
                count++;
        }
        if (count == numsSize)
            return flag;
        else
            return -1;
    }
}