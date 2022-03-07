#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int main()
#include  <stdio.h>
#include <string.h>
#include <ctype.h>
void NONO();
int fun(char* s)
{
	int t = 0;
	while (*s)
	{
		if (isdigit(*s))
			t++;
		s++;


	}
	return t;

}

void main()
{
	char* s = "2def35adh25  3kjsdf 7/kj8655x";
	printf("%s\n", s);
	printf("%d\n", fun(s));
	NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	FILE* fp, * wf;
	int i;
	char s[256];

	fp = fopen("in.dat", "r");
	wf = fopen("out.dat", "w");
	for (i = 0; i < 10; i++) {
		fgets(s, 255, fp);
		fprintf(wf, "%d\n", fun(s));
	}
	fclose(fp);
	fclose(wf);
}

