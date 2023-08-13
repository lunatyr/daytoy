package hello;

import Java.util.Scanner;

public class mooc{
	public static void main(string[] args){
		Scanner in=new Scanner(System.in);
		String temp=(String)(in.next());
		String C=(temp.substring(temp.length()-1));
		double temp_number=Double.parseDouble(temp.substring(0,(temp.length()-1)));
		if(C.equals("c")||C.equals("C")) {
        	 int F=(int)(9/5*temp_number+32);
        	 System.out.println("摄氏度转化成华氏度为："+F+"F");
         }else if(C.equals("f")|C.equals("F")) {
        	 int F=(int)((temp_number-32)*5/9);
        	 System.out.println("华氏度转化成摄氏度为："+F+"C");
         }else {
        	 System.out.println("输入有误");
         }
        	 



	}

}
