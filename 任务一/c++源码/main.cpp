#include "grade.h"
void main()
{student a[100];
grade xxx;
int n,x,i;
 float sum[100]={0},avg[100]={0};
do{
  xxx.menu();
 cin>>x;
 switch(x)
 {case(1):
     { cout<<"输入创建数量n:"<<endl;
	   cin>>n;
	   for(i=0;i<n;i++)
	     { cin>>a[i].num>>a[i].name>>a[i].yu>>a[i].math>>a[i].ying;
	     }
	   for(i=0;i<n;i++)
	     {cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].yu<<" "<<a[i].math<<" "<<a[i].ying<<endl;
	     }
	 }break;
  case(3):
   	
	 for(i=0;i<n;i++)
	 {sum[i]=a[i].yu+a[i].math+a[i].ying;
	 avg[i]=sum[i]/3;
	 cout<<"第"<<i+1<<"个人的总分为："<<sum[i]<<endl<<"第"<<i+1<<"个人的平均分为："""<<avg[i]<<endl;
	 }
    break;
  case(4):
	
	 int i,j,aa;
	 char na[20];
	 float k,yu1,math1,ying1;
	 for(i=0;i<n;i++)
	  {for(j=0;j<n-i;j++)
	    if(sum[j]<sum[j+1])
		 {k=sum[j];aa=a[j].num;strcpy(na,a[j].name);yu1=a[j].yu;math1=a[j].math;ying1=a[j].ying;
	      sum[j]=sum[j+1];a[j].num=a[j+1].num;strcpy(a[j].name,a[j+1].name);a[j].yu=a[j+1].yu;a[j].math=a[j+1].math;a[j].ying=a[j+1].ying;
		  sum[j+1]=k;a[j+1].num=aa;strcpy(a[j+1].name,na);a[j+1].yu=yu1;a[j+1].math=math1;a[j+1].ying=ying1;
	     }
	   }
	 for(i=0;i<n;i++)
	 {cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].yu<<" "<<a[i].math<<" "<<a[i].ying<<endl;
	 }break;
	 case(6):
	  for(i=0;i<n;i++)
	     { cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].yu<<" "<<a[i].math<<" "<<a[i].ying<<endl;
	     }
	 break;
  case(7):
	  {ofstream outfile("f1.txt",ios::out);
   if(!outfile)
   {cerr<<"open error!"<<endl;
     exit(1);}
   for(i=0;i<n;i++)
   {outfile<<a[i].num<<" "<<a[i].name<<" "<<a[i].yu<<" "<<a[i].math<<" "<<a[i].ying<<endl;
   }
   outfile.close();}
	 break;
  case(8):
	  xxx.daochu();break;
  case(9):
	  exit(0);break;
  case(5):
	  int number;

      cout<<"输入所要查询的学号："<<endl;
      cin>>number;
      int b=1,c=1;
	  for(i=0;i<n;i++)
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
	}break;
  

   
 }
 
}while(x!=9);
}