#include <stdio.h>

int main()
{
  int ar[3][3],n,i,j,m;
  printf("Enter the number of rows and column: ");
  scanf("%d  %d", &n, &m);
  printf("Enter the elements of the matrix: \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          scanf("%d",&ar[i][j]);
        }
    }
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      {
        if(i==j)
          printf("%d",ar[i][j]);
        else
          printf("\t ");
        if(j==m-1)
          printf("\n");
      }
  return 0;
}