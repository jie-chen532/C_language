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
	//创建通讯录
	Contact con = { 0 };

	//初始化
	InitPeoInfo(&con);

	//加载文件内容
	LoadPeoInfo(&con);

	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
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
			//保存到文件
			SavePeoInfo(&con);
			DestoryPeoInfo(&con);
			//ClearPeoInfo();
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}