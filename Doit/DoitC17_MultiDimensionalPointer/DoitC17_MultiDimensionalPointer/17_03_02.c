// 해결 방법
	// main 함수의 지역 변수 p의 값을 변경하고 싶다면, GetMyData 함수에서 변수 p의 주소 값을 전달받아 처리해야 한다.
		// 다른 함수에 선언한 지역 변수의 이름은 사용할 수 없지만, 주소는 사용할 수 있기 때문이다.
		// 그런데 p가 일반 변수가 아니라 1차원 포인터 변수 -> p의 주소값을 전달받는 변수 q를 2차원 포인터로 선언해야!

// 2차원 포인터로 8바이트 동적 메모리를 할당하는 함수 만들기
#include <stdio.h>
#include <malloc.h>
void GetMyData(int **q) // 포인터 변수 q는 p 변수의 주소 값을 저장함
{
	// 할당한 메모리의 주소 값을 포인터 q가 가리키는 main 함수의 p에 저장함
	*q = (int *)malloc(8);
}

main()
{
	int *p; // p는 초기화되지 않아서 쓰레기값 저장
	GetMyData(&p); // 포인터 주소 p의 주소값을 매개변수로 전달함
	*p = 5; // 할당된 메모리의 첫 4바이트에 값 5를 넣음
	free(p); // 할당된 동적 메모리 해제
}