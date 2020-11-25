// 아래와 같은 함수 오버로딩은 함수 호출시 정확하게 찾을 수 없기 때문에 에러가 발생한다.


int SimpleFunc(int a = 10) {
	return a + 1;
}

int SimpleFunc(void) {
	return 10;
}