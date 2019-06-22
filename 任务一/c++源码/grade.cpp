#include "grade.h"


grade::grade(void)
{
}


grade::~grade(void)
{
}

void grade::menu()
{cout<<"学生成绩管理系统："<<endl;
 cout<<"     1 创建"<<endl;
 cout<<"     2 添加"<<endl;
 cout<<"     3 汇总"<<endl;
 cout<<"     4 排序"<<endl;
 cout<<"     5 查询"<<endl;
 cout<<"     6 显示"<<endl;
 cout<<"     7 文件导入"<<endl;
 cout<<"     8 文件导出"<<endl;
 cout<<"     9 退出"<<endl;
 cout<<"  请选择："<<endl;
}
void grade::xianshi()
{  int number,i;
  cout<<"输入所要显示的学号："<<endl;
   cin>>number;
  int b=1,c=1;
	for(i=0;i<100;i++)
	{  if(a[i].num==number)
		    {c=0;}
		else b=0;
       if(c==0) break;
	}
	if(c!=0) 
		cout<<"没有查询到此学号的相关内容！"<<endl;
	else
	{ cout<<"你想要查询的学号的内容是："<<endl;
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
