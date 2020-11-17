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
#define MAX_COUNT 100 //�������


#define INI 5   //�տ�ʼ�ȿ���5����
#define INCREASE  2   //�ڴ治����ÿ������2���˵Ŀռ�


typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TEL];//�绰
	char address[MAX_ADD];//��ַ
	char qq[MAX_QQ];//qq��
	short age;
}PeoInfo;



//ͨѶ¼�ṹ��
//typedef struct Contact
//{
//	PeoInfo data[MAX_COUNT];
//	int size;//����
//}Contact;

typedef struct Contact
{

	PeoInfo *data;
	int size;//�Ѿ��洢������
	int capacity;//��ǰ�������
}Contact;



//��̬�����ڴ�  ��ʼ��ͨѶ¼
void InitPeoInfo(Contact *p);

//free��̬�ڴ�
void DestoryPeoInfo(Contact *p);

//����
void CheckCapacity(Contact *p);

//�����ļ�
void LoadPeoInfo(Contact *p);

//������Ϣ
//void AddPeoInfo(Contact *p);
void AddPeoInfo(Contact *p);


//��ӡ��Ϣ
void ShowPeoInfo(Contact *p);


//ɾ��ָ����ϵ��
void DeletePeoInfo(Contact *p);


//������ϵ��
void SearchPeoInfo(Contact *p);


//�޸���ϵ��
void ModifyPeoInfo(Contact *p);


//ͨѶ¼����
void SortPeoInfo(Contact *p);


//���浽�ļ�
void SavePeoInfo(Contact *p);

//�������
//void ClearPeoInfo();
