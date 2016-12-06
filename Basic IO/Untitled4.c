#include <stdio.h>


void print( int size)
{
int MOD=1000000007;
  printf("%d\t",size%MOD);
} // print


void visit(int *Value, int N, int k,int count)
{
	  int i;
  static level = -1;
  level = level+1; Value[k] = level;
 
  if (level == N)
      count++;
 //    print(Value, N);

  else
    for (i = 0; i < N; i++)
      if (Value[i] == 0)
        visit(Value, N, i,count);

  level = level-1; Value[k] = 0;



print(count);
}


main()
{
  
  int j,k;
  scanf("%d",&k);
  scanf("%d",&j);
  const int N = 4;
  int i;
  int Value[N];
  for (i = 0; i < N; i++) {
    Value[i] = 0;
  }
  visit(Value, N, 0,0);
  
}
