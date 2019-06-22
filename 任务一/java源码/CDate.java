package yichang;

import java.util.Scanner;
public class CDate
{Scanner in=new Scanner(System.in);

  public int year,month,day;
  public CDate(int y,int m,int d) throws Cexception
	{
		year=y;
		month=m;
		day=d;
	}
public void shuchu()
{ System.out.println("以下日期的格式为月/日/年：");
 System.out.println(month+"/"+day+"/"+year);
}
public int panduan(int year)
{if((year%400==0)&&(year%4==0&&year%100!=0))
	return 1;
else return 0;	
}
}
