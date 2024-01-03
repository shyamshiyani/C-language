
#include <stdio.h>

 int array(int a[],int n)
 {
 	int i,sum=0;

    for(i=0;i<n;i++)
    {
         sum=sum+a[i];
         
    }
    printf("sum of array is=%d",sum);
 	
 }
int main()
{
    int a[100],i,n,sum;
   
    printf("Enter size of the array=");
    scanf("%d", &n);
 
    printf("Enter elements in array=\n");
    for(i=0;i<n;i++)
    {
    	printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

   sum=array(a,n);

}


