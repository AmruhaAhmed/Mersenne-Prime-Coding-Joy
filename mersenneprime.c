#include<stdio.h>
#include<math.h>
#include<stdbool.h>
    bool prime(int n)//checking if the number is prime or not
    {
        int i;//loop counter
        int ctr=0;//count of divisors
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            ctr++;
        }
        if(ctr==2)
        return true;//if number is prime
        else
        return false;//if number is not prime
    }
    void main()
    {
        int n;//number to be checked for mersenne prime
        int flag=0;//flag to check if the number is mersenne prime or not
        printf("Enter a number:");
        scanf("%d",&n);        
        bool result1=prime(n);//stores the result whether 'n' is prime or not
        for(int i=2;i<n;i++)//i is the loop counter
        {
             bool result2=prime(i);//stores the result whether 'i' is prime or not
             if(result2==true && result1==true)//if both 'i' and 'n' are prime
             {
             int power2n=((int)pow(2,i))-1;//calculating 2^i-1
             if(power2n==n)// if 2^i -1 is equal to n
             {
                 flag=1;
                 break;
                }
                 
            }
        }
        if(flag==1)
        printf("\n %d is a Mersenne Prime",n);
        else
        printf("\n %d is not a Mersenne Prime",n);
    }


            
            
        
       