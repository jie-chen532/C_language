#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

struct stu
{
	char name[20];
	int age;
	char sex[3];
};

//д��������ļ�
//int main()
//{
//	struct stu s1 = { "����", 20, "Ů" };
//	FILE *pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("Fopen");
//		return 1;
//	}
//	fwrite(&s1, sizeof(s1), 1, pf); 
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���������ļ�
//int main()
//{
//	struct stu s2 = { 0 };
//	FILE *pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("Fopen");
//		return 1; 
//	}
//	fread(&s2, sizeof(struct stu), 1, pf);
//	printf("%s %d %s\n", s2.name, s2.age, s2.sex);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fseek
//�����ļ�ָ���λ�ú�ƫ�����������ļ�ָ��
int main()
{
	FILE *pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fseek::fopen");
		return 1;
	}
	fputs("ABCDEF", pf);

	fseek(pf,4,SEEK_SET );

	rewind(pf);

	int ret = ftell(pf);
	printf("%d\n", ret);

	//fputc('H', pf);
	fclose(pf);
	pf = NULL;
	return 0;
}


