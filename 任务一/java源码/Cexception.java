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
	  {reason="�����ղ���Ϊ����";
	   x=0;
	  }
  else{
   if(a.month==2)
   {y=a.panduan(a.year);
    if(y==1)
    {if(a.day>29)
    	{reason="����Ϊ���꣬���������29��";
        x=0;
    	}
    }
    else if(a.day>28)
    {reason="����Ϊƽ�꣬���������28��";
      x=0;	
    }
   }
   else if(a.month==1||a.month==3||a.month==5||a.month==7||a.month==8
			||a.month==10||a.month==12)
	{
		if(a.day>31)
		{
			reason="������󣡣����������31��";
			x=0;
		}
	}
	else if(a.month==3||a.month==6||a.month==9||a.month==11)
	{
		if(a.day>30)
		{
			reason="������󣡣����������30��";
			x=0;
		}
	}
	else
	{
		reason="������󣡣�һ��ֻ��12����";
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
