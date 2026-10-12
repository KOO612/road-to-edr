/*
배열 최댓값
요구사항: size <= 0이면 어떻게 할지 직접 정하고, 그 이유를 주석으로 적기
테스트: {3, 7, 2} → 7 / {-5, -1, -9} → -1 / {42} → 42
*/
#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {3, 7, 2, 9, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
}

int findMax(const int* arr, int size)
{
    int maxVal = +max_element(arr, arr + n);

    cout << 
}

