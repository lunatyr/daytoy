package hello;

import java.util.Scanner;

public class shijianhuansuan {
	public static void main(String[] args) {
		int i,j=0,k=0;
		Scanner in=new Scanner(System.in);
		i=in.nextInt();
		while(i!=1) {
			if(i%2==0) j++;else
			k++;
			i=in.nextInt();
		}
		System.out.println(k+" "+j);
	}

}
