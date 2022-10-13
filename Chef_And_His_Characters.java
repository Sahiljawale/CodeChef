import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    Set<Integer>s=new HashSet<>();
	    for(int i=0;i<n;i++){
	        s.add(sc.nextInt());
	    }
	    for(int i=1;i<=n;i++){
	        if(!s.contains(i)){
	            System.out.print(i+" ");
	        }
	    }
	}
}
