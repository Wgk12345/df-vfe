#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student
{int num;
 char name[20];
 float yu,math,ying;
};
class grade
{  student a[100];
public:
	grade(void);
	~grade(void);
	void menu();
	void xianshi();
	void daochu();
};

