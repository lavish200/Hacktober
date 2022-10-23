#include<stdio.h>
#include<conio.h>

int main()
{   int inp;
    printf("Enter Dimension ");
    scanf("%d",&inp);
    int A[inp][inp];
    int row1=0,col1=0,row2=inp-1,col2=inp-1,iter=1;
    while(iter<=(inp*inp))
    {
        for(int i=col1;i<=col2;i++)
        {A[row1][i]=iter++;}
        for(int j=row1+1;j<=row2;j++)
          {A[j][col2]=iter++;}
        for(int i=col2-1;i>=col1;i--)
        {
            A[row2][i]=iter++;
        }
        for(int j=row2-1;j>=row1+1;j--)
        {
            A[j][col1]=iter++;
        }
        row1++;row2--;col1++;col2--;
    }

   printf("Two Dimensional array elements:\n");
   for(int i=0; i<inp; i++)
    {
      for(int j=0;j<inp;j++)
      {
         printf("%d \t", A[i][j]);
      }

            printf("\n");
         }


   return 0;
}
