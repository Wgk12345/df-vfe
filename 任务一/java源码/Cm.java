package yichang;
import java.util.Scanner;
public class Cm {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
      try
      {int year,month,day;
      Scanner in=new Scanner(System.in);
      System.out.println("�������꣬�£��գ�");
      year=in.nextInt();
      month=in.nextInt();
      day=in.nextInt();	
       CDate a=new CDate(year,month,day);
       if(new Cexception(a).x==0)
		{
			Cexception b=new Cexception(a);
			b.outReason();
			throw b;
		}
		else
		{
			System.out.print("����������ȷ");
			System.out.println();
		    a.shuchu();
		}
	}catch(Cexception ex)
	{
		ex.printStackTrace();
	}
	}

}
