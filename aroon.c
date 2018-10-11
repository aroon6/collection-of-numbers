#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

#include<sys/wait.h>
int main()
{
    int arr1[1000];
    int arr2[10][2];
    int cpid1=fork(),cpid2=fork(),cpid3=fork(),cpid4=fork(),id5=fork(),cpid6=fork(),cpid7=fork(),cpid8=fork(),cpid9=fork(),cpid10=fork();
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,Rsum=0,s=0;
    for(int i=1;i<=1000;i++)
    {
        arr1[i]=i;
    }
    if(cpid1==0)
    {
        for(int i=1;i<100;i++)
        {
            sum1=sum1+arr1[i];
        }
        write(arr2[0][1],&sum1,sizeof(sum1));
        close(arr2[0][1]);
    }
    else
    {
         wait(NULL);
        read(arr2[0][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[0][0]);
        if(cpid2==0)
        {
            for(int i=101;i<200;i++)
         {
            sum2=sum2+arr1[i];
         } 
          write(arr2[1][1],&sum2,sizeof(sum2));
         close(arr2[1][1]);
        }
    
    else
    {
         wait(NULL);
        read(arr2[1][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[1][0]);
        if(cpid3==0)
        {
            for(int i=201;i<300;i++)
         {
            sum3=sum3+arr1[i];
         } 
          write(arr2[2][1],&sum3,sizeof(sum3));
         close(arr2[2][1]);
        }
    
    else
    {
         wait(NULL);
        read(arr2[2][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[2][0]);
        if(cpid4==0)
        {
            for(int i=301;i<400;i++)
         {
            sum4=sum4+arr1[i];
         } 
          write(arr2[3][1],&sum4,sizeof(sum4));
         close(arr2[3][1]);
        }
    
    else
    {
         wait(NULL);
        read(arr2[3][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[3][0]);
        
        if(cpid5==0)
        {
            for(int i=401;i<500;i++)
         {
            sum5=sum5+arr1[i];
         } 
          write(arr2[4][1],&sum5,sizeof(sum5));
         close(arr2[4][1]);
        }
    
    else
    {
         wait(NULL);
         read(arr2[4][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[4][0]);
        if(cpid6==0)
        {
            for(int i=501;i<600;i++)
         {
            sum6=sum6+arr1[i];
         } 
         write(arr2[5][1],&sum6,sizeof(sum6));
         close(arr2[5][1]);
        }
    
    else
    {
         wait(NULL);
         read(arr2[5][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[5][0]);
        if(cpid7==0)
        {
            for(int i=601;i<700;i++)
         {
            sum7=sum7+arr1[i];
         }
         write(arr2[6][1],&sum7,sizeof(sum7));
         close(arr2[6][1]);
        }
    
    else
    {
         wait(NULL);
        read(arr2[6][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[6][0]);
        if(cpid8==0)
        {
            for(int i=701;i<800;i++)
         {
            sum8=sum8+arr1[i];
         } 
          write(arr2[7][1],&sum8,sizeof(sum8));
         close(arr2[7][1]);
        }
    
    else
    {
         wait(NULL);
         read(arr2[7][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[7][0]);
        if(cpid9==0)
        {
            for(int i=801;i<900;i++)
         {
            sum9=sum9+arr1[i];
         } 
          write(arr2[8][1],&sum9,sizeof(sum9));
         close(arr2[8][1]);
        }
    
    else
    {
         wait(NULL);
         read(arr2[8][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[8][0]);
        if(cpid10==0)
        {
            for(int i=901;i<1000;i++)
         {
             sum10=sum10+arr1[i];
         } 
          write(arr2[9][1],&sum10,sizeof(sum10));
         close(arr2[9][1]);
        }
    
    else
    {
        wait(NULL);
        read(arr2[9][0],&Rsum,sizeof(Rsum));
        s=s+Rsum;
        close(arr2[9][0]);
        printf("Sum of the 1000 numbers is: %d\n",s);
    
    
    
    
    }
    }
    }
    }
    }
    }
    }
    }
    }

    } 
   

    return 0;
    }


