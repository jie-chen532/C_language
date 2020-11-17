#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADD 100
#define MAX_QQ 15
#define MAX_COUNT 100 //最大人数


#define INI 5   //刚开始先开辟5个人
#define INCREASE  2   //内存不够，每次增加2个人的空间


typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TEL];//电话
	char address[MAX_ADD];//地址
	char qq[MAX_QQ];//qq号
	short age;
}PeoInfo;



//通讯录结构体
//typedef struct Contact
//{
//	PeoInfo data[MAX_COUNT];
//	int size;//人数
//}Contact;

typedef struct Contact
{

	PeoInfo *data;
	int size;//已经存储总人数
	int capacity;//当前最大容量
}Contact;



//动态开辟内存  初始化通讯录
void InitPeoInfo(Contact *p);

//free动态内存
void DestoryPeoInfo(Contact *p);

//增容
void CheckCapacity(Contact *p);

//加载文件
void LoadPeoInfo(Contact *p);

//增加信息
//void AddPeoInfo(Contact *p);
void AddPeoInfo(Contact *p);


//打印信息
void ShowPeoInfo(Contact *p);


//删除指定联系人
void DeletePeoInfo(Contact *p);


//查找联系人
void SearchPeoInfo(Contact *p);


//修改联系人
void ModifyPeoInfo(Contact *p);


//通讯录排序
void SortPeoInfo(Contact *p);


//保存到文件
void SavePeoInfo(Contact *p);

//清空数据
//void ClearPeoInfo();
