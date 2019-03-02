#include<stdio.h>
#include<math.h>
#define N 100

void matrixprint(double A[N][N])
{
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      printf("\t%f,",A[i][j]);
    printf("\n");
  }
}

void matrixrandom(double A[N][N])
{
   int i,j;
   for(i=0;i<N;i++)
     for(j=0;j<N;j++){
       A[i][j]=sin(sin((double)(i)+1.1)/cos((double)(j)-1.1));
     }
}

void matrixmul(double C[N][N],double A[N][N],double B[N][N])
{
  int i,j,s;
  for(i=0;i<N;i++)
    for(j=0;j<N;j++){
      C[i][j]=0.;
      for(s=0;s<N;s++)
        C[i][j]+=A[i][s]*B[s][j];
    }
}

int main()
{
  double A[N][N];
  double C[N][N];
  int i;
  matrixrandom(A);
  printf("%f\n",A[10][10]);
  /*matrixprint(A);*/
  for(i=0;i<1000;i++)
    matrixmul(C,A,A);
  return 0;
}
