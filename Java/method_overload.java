import java.io.PrintStream;

public class method_overload 
{
    static int factorial(int n)
    {    
     if (n == 0)    
       return 1;    
     else    
       return(n * factorial(n-1));    
    }
    static int factorial(int n, int r)
    {    
        int fact=1;
        if (n == 0)    
            fact= 1;    
        else    
            fact=(n * factorial(n-1));    
        if(fact==r)
            return 1;
        else
            return 0;
    }
    public static void main(String[] args)   
    {
        PrintStream out = System.out;
        int i,fact=1;
        int number=4;
        int res=24;
        //direct calculation of factorial
        for(i=1;i<=number;i++)
        {
            fact=fact*i;
        } 
        out.print("Factorial (direct method) of "+number+" is:"+fact);
        //factorial calculated by function with one parameter
        fact = factorial(number);   
        out.print("Factorial of "+number+" is: "+fact);
        //factorial calculated by function with two parameters
        fact = factorial(number, res);  
        if (fact==1) 
            out.print("The Factorial of "+number+" is: "+res);
        else
            out.print("The Factorial of "+number+" is not: "+res);
    }
}
