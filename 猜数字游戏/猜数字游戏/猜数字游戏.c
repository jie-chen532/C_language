#define _CRT_SECURE_NO_WARNINGS


#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()  //��Ϸ�˵�
{
	printf("****************************\n");
	printf("*********  1.play  *********\n");
	printf("*********  2.exit  *********\n");
	printf("****************************\n");
}
void game()
{
	//RAND_MAX��32767
	//rand();��ΧΪ0-32767
	int random = rand()%100+1; 
	int com = 0;
	while (1)
	{
		printf("������µ�����>>:");
	    scanf("%d", &com);
		if (com > random)
		{
			printf("�´���\n");
		}
		else if (com < random)
		{
			printf("��С��\n");
		}
		else
		{
			printf("������\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	//�ڵ���rand����֮ǰ��Ҫʹ��srand�����������������������
	//srandֻ��Ҫ����һ��
	//һ����ʱ�������������ĵ���㡣srand��time��������һ�����time����
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		printf("��ѡ��>>:");
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 2)
		{
			break;
		}
		else
		{
			printf("ѡ��������ٴ�ѡ��\n");
		}
	} 
	return 0;
}