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

// ��ó:https://m.blog.naver.com/sharonichoya/220501242693

// ������Ʈ ��Ŭ�� - �Ӽ� - ����� - ��� �μ� �� I love you so much �־��

// �Ǵ� cmd â��
// ���� cd�� ��� ������ ��
// commandlineArgument.exe I love you so much �� �� �ĺ���
