#include <stdio.h>

//출처: 한 눈에 끝내는 C언어 기초 (구름edu)

int main() {
	/*p 가 가르키는 것 = 주소
	*p가 가르키는 것 = 주소에 있는 값

	 ++ -- 같은 증감연산자가 * 포인터보다 우선순위가 높다.
	따라서 (*p)++은 p가 가리키는 값이 증가되지만,
	*p++는 p가 가리키는 값이 아니라 p의 값인 주소값이 ++ 됨.	*/

	/*
	ㅇ배열의 이름은 포인터 변수와 같은 역할을 하며, 첫번째 요소인 주소값을 나타낸다.
		ㅇscanf로 입력받을 때 문자열은& 붙이지 않아도 되는 이유임.
		  배열로 입력받게 되는데, 배열의 이름이 주소값이기 때문.
		ex) scanf("%d", &num1);
		ex) scanf("%s", s1);

	ㅇ 이 예제에서 보면 알 수 있듯이, 포인터를 배열처럼 사용할 수 있음.
		*(arr+i) == arr[i] 이기 때문.*/

		int arr[5] = { 10, 20, 30, 40, 50 };
		double arr2[5] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
		int* arrPtr = arr;
		double* arrPtr2 = arr2;

		printf("포인터 주소 : %d %d\n", arrPtr++, arrPtr2++);
		printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
		printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);

		arrPtr += 2;
		arrPtr2 += 2;

		printf("증가 연산 후 : %d %d\n", arrPtr, arrPtr2);
		printf("변수 값 : %d %.2f\n", *arrPtr, *arrPtr2);

		return 0;
		

	 /*ㅇ const int *ptr 과 같이 const를 앞에 사용하게 되면, 이 포인터를 이용해 변수의 값을 변경하는 것을 막음.
		 ex) int num = 10, const int *ptr1 = &num 인 경우, num = 30 으로 변경할 수 있으나, 
		 *ptr1 = 30으로 변경하려고 하면 에러가 뜸.

	 ㅇ int* const ptr 과 같이 자료형 다음에 const를 쓰게 되면, 포인터 변수 자체가 상수화 됨.
		 즉, 주소값을 변경할 수 없다는 뜻임.
		 이 때, int const * ptr로 쓰면 const int *ptr과 다를 바 없음.
		 (비주얼 스튜디오의 파란색 글자 처리에 감사할 것...)
	 
	 ㅇ 물론 const를 두 번 쓰는 것도 가능함.
		 const int const * ptr1 = &num;
		 이렇게 되면, 값 변경도, 주소값 변경도 불가능하게 됨.*/



	 /*ㅇ 이중 포인터!!
		 포인터의 주소값을 담는 변수, 포인터의 포인터임.

	 ㅇ 포인터 배열

		 int num1 = 10, num2 = 20, num3 = 30;
		 int* parr[3];

		 parr[0] = &num1;
		 parr[1] = &num2;
		 parr[2] = &num3;

		 for (int i = 0; i < 3; i++)
		 {
			 printf("parr[%d] : %d\n", i, *parr[i]);
		 }

		 return 0;*/



	

	 
}