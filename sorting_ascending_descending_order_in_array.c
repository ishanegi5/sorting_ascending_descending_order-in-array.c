#include<stdio.h>
int main()
{
    int i,j,temp,min,max;
    int arr2[10],arr1[]={35,64,254,677,234,87,8998,567,986,56};
    for(i=0;i<10;i++)
    {
       arr2[i]=arr1[i];
    }
    
    for(i=0;i<10-1;i++)
    { min=i;
       for(j=i+1;j<10;j++) 
     {
        if(arr1[min]>arr1[j])
        {  min=j;
        }
          
     }
            temp=arr1[min];
            arr1[min]=arr1[i];
            arr1[i]=temp; 
        }
     printf("Ascending order= ");
     for(i=0;i<10;i++)
     {
          printf("%d ",arr1[i]);
     }
     for(i=0;i<10-1;i++)
    {   max=i;

        for(j=i+1;j<10;j++) 
     {
         if(arr2[max]<arr2[j])  
          {
            max=j;
          }
     }
            temp=arr2[max];
            arr2[max]=arr2[i];
            arr2[i]=temp; 
            
     }
     printf("\ndescending order= ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
