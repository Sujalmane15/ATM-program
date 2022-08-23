#include<stdio.h>
#define size 2
struct bank
{
  int acco;
  char name[100];
  float bal;
  int pin;
};
int main()
{
  struct bank a[size];
  int i,j,key,flag,pos,ch,tree,flat;
float y;

  for(i=0;i<size;i++)
  {
    printf("\n NEW ACCOUNT CREATE:");
    printf("\n ENTER THE ACCOUNT NUMBER:");
    scanf("%d",&a[i].acco);
    printf("\n ENTER THE ACCOUNT NAME:");
    scanf("%s",&a[i].name);
    printf("\n ENTER THE ACCOUNT BALANCE:");
    scanf("%f",&a[i].bal);
    printf("\n GENERATE THE PINCODE:");
    scanf("%d",&a[i].pin);
    

  }

  printf("\n ENTER THE CUSTOMER ACCCOUNT NUMBER:");
  scanf("%d",&key);
  
  
  for(i=0;i<size;i++)
  {
    if(a[i].acco==key)
    {
      flag=1;
      pos=i;
      break;
    }
}
    
     printf("\n ENTER THE PINCODE:");
      scanf("%d",tree);
    
    for(j=0;j<size;j++)
    {
       if(a[i].pin==tree)
      { 
        flat=1;
       }
       else
       {
       	printf("INVALIDE YOUR OPTION:");
       	exit(0);
	}
     }

     if(flag=1)
     {
     	if(flat=1)
     	{
	     
        printf("\n CHOICE YOUR OPTION:");
        printf("\n PRESS 1 FOR CREDIT AMOUNT:");
        printf("\n PRESS 2 FOR DEBIT AMOUNT");
        printf("\n PRESS 3 FOR CHECK ACCOUNT BALANCE:");
        printf("\n SELECT THE YOUR OPTION:"); 
        scanf("%d",&ch);

    switch (ch)
    {
      case 1:
         printf("\n ENTER THE CREDIT AMOUNT:");
         scanf("%f",&y);
         a[pos].bal=(a[pos].bal)+y;
         printf("\n NEW ACCOUNT BALANCE:%f",a[pos].bal);
       break;

      case 2:
        printf("\n ENTER THE DEBIT AMOUNT:");
        scanf("%f",&y);
      if(a[pos].bal>=y)
        {
       a[pos].bal=(a[pos].bal)-y;
          printf("NEW ACCOUNT BALANCE:%f",a[pos].bal);
        }
        else
         printf("\n INSUFFICIENT BALANCE IN YOUR ACCOUNT");
        break;

        case 3:
          printf("BALANCE IN YOUR ACCOUNT:%f",a[pos].bal);
        break;

        default:
          printf("\n CHOSE CORRECT OPTION FOR OPERATION");
          break;

    }
    }
    }
    return 0;
  }





