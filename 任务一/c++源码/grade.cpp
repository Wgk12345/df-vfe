#include "grade.h"


grade::grade(void)
{
}


grade::~grade(void)
{
}

void grade::menu()
{cout<<"ѧ���ɼ�����ϵͳ��"<<endl;
 cout<<"     1 ����"<<endl;
 cout<<"     2 ���"<<endl;
 cout<<"     3 ����"<<endl;
 cout<<"     4 ����"<<endl;
 cout<<"     5 ��ѯ"<<endl;
 cout<<"     6 ��ʾ"<<endl;
 cout<<"     7 �ļ�����"<<endl;
 cout<<"     8 �ļ�����"<<endl;
 cout<<"     9 �˳�"<<endl;
 cout<<"  ��ѡ��"<<endl;
}
void grade::xianshi()
{  int number,i;
  cout<<"������Ҫ��ʾ��ѧ�ţ�"<<endl;
   cin>>number;
  int b=1,c=1;
	for(i=0;i<100;i++)
	{  if(a[i].num==number)
		    {c=0;}
		else b=0;
       if(c==0) break;
	}
	if(c!=0) 
		cout<<"û�в�ѯ����ѧ�ŵ�������ݣ�"<<endl;
	else
	{ cout<<"����Ҫ��ѯ��ѧ�ŵ������ǣ�"<<endl;
	 cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].yu<<" "<<a[i].math<<" "<<a[i].ying<<endl;
	}
}
void grade::daochu()
{char c;
  ifstream infile("f1.txt",ios::in);
   if(!infile)
   {cerr<<"open error!"<<endl;
     exit(1);}
   while(infile.get(c))
		{
			cout<<c;
		}
  infile.close();
}
