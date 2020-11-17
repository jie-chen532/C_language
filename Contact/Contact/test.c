#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("******************************\n");
	printf("*****1.Add       2.Delete*****\n");
	printf("*****3.Search    4.Modify*****\n");
	printf("*****5.Sort      6.Show  *****\n");
	printf("*****     0.Exit         *****\n");
}

enum Option
{
	Exit,
	Add,
	Delete,
	Search,
	Modify, 
	Sort,
	Show
};


void test()
{
	//����ͨѶ¼
	Contact con = { 0 };

	//��ʼ��
	InitPeoInfo(&con);

	//�����ļ�����
	LoadPeoInfo(&con);

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddPeoInfo(&con);
			break;
		case Delete:
			DeletePeoInfo(&con);
			break;
		case Search:
			SearchPeoInfo(&con);
			break;
		case Modify:
			ModifyPeoInfo(&con);
			break;
		case Sort:
			SortPeoInfo(&con);
			break;
		case Show:
			ShowPeoInfo(&con);
			break;
		case Exit:
			//���浽�ļ�
			SavePeoInfo(&con);
			DestoryPeoInfo(&con);
			//ClearPeoInfo();
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}