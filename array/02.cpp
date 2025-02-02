#include <iostream>  // 입출력
#include <vector>    // 벡터
#include <algorithm> // 정렬, min/max 등

// 주어진 길이 N의 int배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을
// 존재하지 않으면 0을 반환하는 함수 func2를 작성하라
// 메모이제이션을 이용할것
int func2(int v[], int size) {
	int arr[101];
	for (int i = 0; i < size; i++) {
		if (arr[100 - v[i]] == 1)
			return 1;
		arr[v[i]] = 1;
	}
	return 0;
}

int main()
{
	int arr1[] = {1, 52, 48};  // 배열을 명시적으로 선언
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};
    std::cout << func2(arr1, 3) << "\n";
    std::cout << func2(arr2, 2) << "\n";
    std::cout << func2(arr3, 4) << "\n";
}