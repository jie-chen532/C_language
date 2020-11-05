#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<assert.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADD 100
#define MAX_QQ 15
#define MAX_COUNT 100 //�������



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
typedef struct Contact
{
	PeoInfo data[MAX_COUNT];
	int size;//����
}Contact;


//������Ϣ
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


//�������
void ClearPeoInfo();
