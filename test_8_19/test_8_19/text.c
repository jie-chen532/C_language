#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//switch���
//1-5������
//6-7��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:   //��˳���޹أ����߼���ȷ������£�
//		printf("�������\n");
//		break;
//	case 1:
//		printf("������\n");
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//1-5������
//6-7��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)     //n=1
//	{
//	case 1:m++;    //����case1   m=3
//	case 2:n++;    //n=2
//	case 3:
//		switch (n)    //n=2  ����case2
//		{
//		case 1:n++;
//		case 2:m++, n++;   //m=4  n=3
//			break;
//		}
//	case 4:
//		m++;   //m=5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d n = %d", m, n);   //m=5  n=3
//	return 0;
//}


//while�е�continue
//continue��������ѭ����continue�������䶼����ִ�У�������ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);    //1 2 3 4 ��ѭ��
//		i++;
//	}
//	return 0;
//}

//while�е�break
//���õĽ���ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);    //1 2 3 4
//		i++;
//	}
//	return 0;
//}


//int getchar(void)
//int main()
//{
//	//�Ӽ��̻��һ���ַ�
//	int ch = getchar();  //ASCII��
//	//printf("%d", ch);
//	putchar(ch);
//	return 0;
//}


//EOF��end of file   ����Ϊ-1   �ļ��Ľ�����־(crtl+z)
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);  //������ d \n  �����d��Ҳ�����\n
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	char password[30] = { 0 };
//	printf("���������룺");  //���룺chen      12345 chen
//	scanf("%s", password);   //������ chen \n   scanf�ӻ������õ�chen     
//	                         //scanf�ӻ������õ��ո�ǰ���12345
//	//getchar();
//	//��������������ַ�
//	while (getchar()!= '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(y/n):");
//	ch = getchar();    //getchar �ӻ������õ�\n != y   �ͻ�ȷ��ʧ��
//	if ('y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'|| ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);   //0-9���Դ�ӡ
//	}
//	return 0;
//}


//for�е�continue��break
//int main()
//{
//	int i = 0;
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	if (i == 5)
//	//		continue;
//	//	printf("%d ", i);   //0 1 2 3 4 6 7 8 9
//	//}
//
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);   //0 1 2 3 4
//	}
//	return 0;
//}


//��Ҫ����ʡ��for����е���������
//int main()
//{
//	//for (;;)
//	//{
//	//	//��forѭ�����жϲ���ʡ��ʱ��Ĭ�ϱ�ʾ��Ϊ��
//	//	printf("hehe\n");  //��ѭ��
//	//}
//
//	//1
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	//for (i=0; i < 10;i++)
//     	//for (j=0; j < 10; j++)
//	//    {
//	//		printf("hehe:%d\n", count);   //��ӡ100��hehe
//	//		count++;
//	//    }
//
//
//	//2	
//	for (; i < 10;i++)
//	    for (; j < 10; j++)
//	    {
//		  //����һѭ����֮��j=10,��ӡ10��hehe���ڶ��ν���������jû�г�ʼ��������j=10
//		  //������j<10������
//		  printf("hehe:%d\n", count);   //��ӡ10��hehe
//		  count++;
//	    }
//	return 0;
//}


//do while����е�continue��break
//int main()
//{
//	int i = 0;
//	//do
//	//{
//	//	if (5 == i)
//	//		continue;
//	//	printf("%d ", i);    //0 1 2 3 4 ��ѭ��
//	//	i++;
//	//} while (i <= 10);
//
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);    //0 1 2 3 4 
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//ѭ�����ٴΣ�
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	{
		k++;    //����ѭ����ÿ�����ʽ�����н����k=0�Ľ��Ϊ0��Ϊ�٣�ֱ������ѭ��
	}           //��b=3�����Ϊ3
	return 0;
 }