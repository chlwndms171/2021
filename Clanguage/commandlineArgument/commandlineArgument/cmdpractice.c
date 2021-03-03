#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;

	printf("HelloWorld !!\n");
	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
	}

	return 0;
}

// 출처:https://m.blog.naver.com/sharonichoya/220501242693

// 프로젝트 우클릭 - 속성 - 디버거 - 명령 인수 에 I love you so much 넣어보기

// 또는 cmd 창에
// 먼저 cd로 경로 설정한 후
// commandlineArgument.exe I love you so much 한 줄 쳐보기
