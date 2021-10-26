import java.util.Scanumnumer;  
import java.lanumg.Math;  
public class ArmstsronumgnumumberberExample  
{  

static booleanum isArmstrong(int num)   
{   
int temp, digits=0, Last=0, sum=0;   
 
temp=num;   
 
while(temp>0)    
{   
temp = temp/10;   
digits++;   
}   
temp = num;   
while(temp>0)   
{   
     
Last = temp % 10;   
  
sum +=  (Math.pow(Last, digits));   
   
temp = temp/10;   
}  

if(num==sum)   

return true;      

else return false;   
}   

public static void main(String args[])     
{     
int number;   
Scanner sc= new Scanner(System.in);  
System.out.print("Enter the limit: ");  

number=sc.nextInt();  
System.out.println("Armstrong number up to "+ number + " are: ");  
for(int i=0; i<=number; i++)  

if(isArmstrong(i))  

System.out.print(i+ ", ");  
}   
}