#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


//������Ϣ
void AddPeoInfo(Contact *p)
{
	assert(p != NULL);
	if (p->size == MAX_COUNT)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s", p->data[p->size].name);
		printf("�������Ա�>:");
		scanf("%s", p->data[p->size].sex);
		printf("����������>:");
		scanf("%d", &(p->data[p->size].age));
		printf("������绰>:");
		scanf("%s", p->data[p->size].tele);
		printf("�������ַ>:");
		scanf("%s", p->data[p->size].address);
		printf("������qq>:");
		scanf("%s", p->data[p->size].qq);

		p->size++;
		printf("��ӳɹ�\n");
	}
}



//��ӡ��Ϣ
void ShowPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("%10s %12s %5s %12s %5s %20s\n", "����", "�绰", "����", "qq", "�Ա�", "��ַ");
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		printf("%10s %12s %5d %12s %5s %20s\n", p->data[i].name, p->data[i].tele, p->data[i].age,
			p->data[i].qq, p->data[i].sex, p->data[i].address);
	}
}



//������ϵ������λ��
static int FindPeoByName(Contact *p,char name[])
{
	assert(p != NULL);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (strcmp(name, p->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}


//ɾ��ָ����ϵ��
void DeletePeoInfo(Contact *p)
{
	assert(p != NULL);
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("������Ҫɾ������ϵ��>:");
		scanf("%s", name);
		int ret=FindPeoByName(p, name);
		if (ret == -1)
		{
			printf("ͨѶ¼û�д���");
		}
		else
		{
			int i = 0;
			for (i = ret; i < p->size-1; i++)
			{
				p->data[i] = p->data[i + 1];
			}
			p->size--;
			printf("ɾ���ɹ�\n");
		}
	}
}


//������ϵ��
void SearchPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("������Ҫ��ѯ����ϵ��>:");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int ret = FindPeoByName(p, name);
	if (ret == -1)
	{
		printf("û�д���ϵ��\n");
	}
	else
	{
		printf("%10s %12s %5s %12s %5s %20s\n", "����", "�绰", "����", "qq", "�Ա�", "��ַ");
		printf("%10s %12s %5d %12s %5s %20s\n", p->data[ret].name, p->data[ret].tele, p->data[ret].age,
			p->data[ret].qq, p->data[ret].sex, p->data[ret].address);
	}
}



//�޸���ϵ��
void ModifyPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("������Ҫ�޸ĵ���ϵ��>:");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int ret = FindPeoByName(p, name);
	if (ret == -1)
	{
		printf("û�д���ϵ��\n");
	}
	else
	{
		printf("�������޸ĺ������>:");
		scanf("%s", p->data[ret].name);
		printf("�������޸ĺ���Ա�>:");
		scanf("%s", p->data[ret].sex);
		printf("�������޸ĺ������>:");
		scanf("%d", & p->data[ret].age);
		printf("�������޸ĺ�ĵ绰>:"); 
		scanf("%s", p->data[ret].tele);
		printf("�������޸ĺ�ĵ�ַ>:");
		scanf("%s", p->data[ret].address);
		printf("�������޸ĺ��qq>:");
		scanf("%s", p->data[ret].qq);

		printf("�޸ĳɹ�\n");
	}
}



//ͨѶ¼����
void SortPeoInfo(Contact *p)
{
	//������������
	assert(p != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < p->size-1; i++)
	{
			int flag = 1;
		for (j = 0; j < p->size - 1 - i; j++)
		{
			if (strcmp(p->data[j].name, p->data[j+1].name))
			{
				flag = 0;
				PeoInfo tmp = p->data[j];
				p->data[j] = p->data[j+1];
				p->data[j+1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	printf("����ɹ�\n");
}


//�������
void ClearPeoInfo()
{
	Contact con = { 0 };
}
