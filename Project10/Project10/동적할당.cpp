#include<iostream>

using namespace std;

int main() {
	/*동적할당 --> 메모리 생성을 원하는 시점에 할당 할 수 있는 기능, 힙 양역에 메모리를 할당 & 저장
	힙 영역의 메모리는 자동으로 해제되지 않기 때문에 명시적으로 해제해주어야 함
	
	new 키워드를 이용하여 동적할당 가능(C++) - new 할당할 타입;
	/ C언어는 malloc() 함수
	==> 힙영역에 메모리 공간을 할당하고 해당 메모리의 주소를 반환한다
	*/

	int* pnumber = new int;

	//new 뒤에 들어오는 타입인 int 크기만큼 공간 할당 & 할당한 메모리 주소를 pnumber에 넣어줌

	*pnumber = 100;
	//포인터 변수를 통해 할당한 메모리 변수에 값 저장

	delete pnumber;
	//delete 키워드를 이용해 동적할당한 메모리를 해제
	//delete 뒤에 메모리 주소를 넣어주면 된다

	/*
	동적배열 할당방법 : new 타입[개수]; 의 형태로 사용가능
	*/

	int* pArray = new int[100];
	// --> 동적배열로 할당 : 메모리 공간에 400바이트만큼 공간을 할당하고 해당 메모리의 시작 주소 반환
	//100대신 입력 받은 변수가 들어올 수 있다.
	
	//동적 배열 선언과 동시에 원소들을 0으로 초기화
	// int* pArray = new int[100] {};

	pArray[0] = 100;

	delete[] pArray;
	//동적배열 해제시에는 delete  뒤에 []를 붙여줌으로 배열 메모리 주소를 지울 것이라는 것을 알려줌

	
	return 0;
}

