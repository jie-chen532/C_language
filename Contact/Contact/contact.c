#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


//使用malloc动态开辟内存
//初始化
void InitPeoInfo(Contact *p)
{
	assert(p != NULL);
	p->size = 0;
	p->capacity = INI;
	p->data = (PeoInfo *)malloc(INI*sizeof(PeoInfo));
	if (NULL == p->data)
	{
		perror("InitPeoInfo::malloc");
		return;
	}
}

//free动态内存
void DestoryPeoInfo(Contact *p)
{
	assert(p != NULL);
	free(p->data);
	p->data = NULL;
	p->capacity = 0;
	p->size = 0;
}

//增容
void CheckCapacity(Contact *p)
{
	if (p->size == p->capacity)
	{
		PeoInfo * str = (PeoInfo *)realloc(p->data, p->capacity*sizeof(PeoInfo)+INCREASE*sizeof(PeoInfo));
		if (str == NULL)
		{
			perror("AddPeoInfo::realloc");
			return;
		}
		else
		{
			p->data = str;
			p->capacity = p->capacity + INCREASE;
			str = NULL;
			printf("增容成功\n");
		}
	}
}

//加载文件
void LoadPeoInfo(Contact *p)
{
	FILE *pf = fopen("Contact.data", "rb");
	if (pf == NULL)
	{
		perror("LoadPeoInfo::fopen");
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(p);
		p->data[p->size] = tmp;
		p->size++;
	}
	fclose(pf);
	pf = NULL;
}

//增加信息
void AddPeoInfo(Contact *p)
{
	assert(p != NULL);

	//判断容量
	CheckCapacity(p);

	printf("请输入姓名>:");
	scanf("%s", p->data[p->size].name);
	printf("请输入性别>:");
	scanf("%s", p->data[p->size].sex);
	printf("请输入年龄>:");
	scanf("%d", &(p->data[p->size].age));
	printf("请输入电话>:");
	scanf("%s", p->data[p->size].tele);
	printf("请输入地址>:");
	scanf("%s", p->data[p->size].address);
	printf("请输入qq>:");
	scanf("%s", p->data[p->size].qq);
		
	p->size++;
	printf("添加成功\n");
}

//增加信息
//void AddPeoInfo(Contact *p)
//{
//	assert(p != NULL);
//	if (p->size == MAX_COUNT)
//	{
//		printf("通讯录已满\n");
//	}
//	else
//	{
//		printf("请输入姓名>:");
//		scanf("%s", p->data[p->size].name);
//		printf("请输入性别>:");
//		scanf("%s", p->data[p->size].sex);
//		printf("请输入年龄>:");
//		scanf("%d", &(p->data[p->size].age));
//		printf("请输入电话>:");
//		scanf("%s", p->data[p->size].tele);
//		printf("请输入地址>:");
//		scanf("%s", p->data[p->size].address);
//		printf("请输入qq>:");
//		scanf("%s", p->data[p->size].qq);
//
//		p->size++;
//		printf("添加成功\n");
//	}
//}



//打印信息
void ShowPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("%10s %12s %5s %12s %5s %20s\n", "姓名", "电话", "年龄", "qq", "性别", "地址");
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		printf("%10s %12s %5d %12s %5s %20s\n", p->data[i].name, p->data[i].tele, p->data[i].age,
			p->data[i].qq, p->data[i].sex, p->data[i].address);
	}
}



//查找联系人所在位置
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


//删除指定联系人
void DeletePeoInfo(Contact *p)
{
	assert(p != NULL);
	if (p->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除的联系人>:");
		scanf("%s", name);
		int ret=FindPeoByName(p, name);
		if (ret == -1)
		{
			printf("通讯录没有此人\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < p->size-1; i++)
			{
				p->data[i] = p->data[i + 1];
			}
			p->size--;
			printf("删除成功\n");
		}
	}
}


//查找联系人
void SearchPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("请输入要查询的联系人>:");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int ret = FindPeoByName(p, name);
	if (ret == -1)
	{
		printf("没有此联系人\n");
	}
	else
	{
		printf("%10s %12s %5s %12s %5s %20s\n", "姓名", "电话", "年龄", "qq", "性别", "地址");
		printf("%10s %12s %5d %12s %5s %20s\n", p->data[ret].name, p->data[ret].tele, p->data[ret].age,
			p->data[ret].qq, p->data[ret].sex, p->data[ret].address);
	}
}



//修改联系人
void ModifyPeoInfo(Contact *p)
{
	assert(p != NULL);
	printf("请输入要修改的联系人>:");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int ret = FindPeoByName(p, name);
	if (ret == -1)
	{
		printf("没有此联系人\n");
	}
	else
	{
		printf("请输入修改后的姓名>:");
		scanf("%s", p->data[ret].name);
		printf("请输入修改后的性别>:");
		scanf("%s", p->data[ret].sex);
		printf("请输入修改后的年龄>:");
		scanf("%d", & p->data[ret].age);
		printf("请输入修改后的电话>:"); 
		scanf("%s", p->data[ret].tele);
		printf("请输入修改后的地址>:");
		scanf("%s", p->data[ret].address);
		printf("请输入修改后的qq>:");
		scanf("%s", p->data[ret].qq);

		printf("修改成功\n");
	}
}



//通讯录排序
void SortPeoInfo(Contact *p)
{
	//根据姓名排序
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
	printf("排序成功\n");
}

//保存到文件中
void SavePeoInfo(Contact *p)
{
	FILE *pf = fopen("Contact.data", "wb");
	if (pf == NULL)
	{
		perror("SavePeoInfo::writting");
		return;
	}
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		fwrite(p->data + i, sizeof(PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

//清空数据
void ClearPeoInfo()
{
	Contact con = { 0 };
}
