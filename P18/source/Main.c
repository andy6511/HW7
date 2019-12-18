#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE* in;
	FILE* out;
	int cnt, a, b;
	char str[100];

	a = fopen_s(&in, "?D://programing/107360235/P18/welcome.txt", "r");
	b = fopen_s(&out, "?D://programing/108360235/P18/output.txt", "w");

	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str);

		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);

	system("pause");
	return 0;
}