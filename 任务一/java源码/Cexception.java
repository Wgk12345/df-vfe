package yichang;

public class Cexception extends Exception
{String reason;
int x=1,y;
public Cexception()
{
	System.err.print(reason);
}
  public Cexception(CDate a)
  {if(a.year<0||a.month<0||a.day<0)
	  {reason="年月日不能为负数";
	   x=0;
	  }
  else{
   if(a.month==2)
   {y=a.panduan(a.year);
    if(y==1)
    {if(a.day>29)
    	{reason="此年为闰年，二月最多有29天";
        x=0;
    	}
    }
    else if(a.day>28)
    {reason="此年为平年，二月最多有28天";
      x=0;	
    }
   }
   else if(a.month==1||a.month==3||a.month==5||a.month==7||a.month==8
			||a.month==10||a.month==12)
	{
		if(a.day>31)
		{
			reason="输入错误！！此月最多有31天";
			x=0;
		}
	}
	else if(a.month==3||a.month==6||a.month==9||a.month==11)
	{
		if(a.day>30)
		{
			reason="输入错误！！此月最多有30天";
			x=0;
		}
	}
	else
	{
		reason="输入错误！！一年只有12个月";
		x=0;
	}
  }
 }
  public void outReason()
	{
		System.err.print(reason);
	}

	public Cexception(String reason)
	{
		super(reason);
	}

}
