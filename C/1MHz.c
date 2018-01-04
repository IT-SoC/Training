/*
[Training Point] Understanding the performance and execution principles of C programs
for using functions

1. Describe the principle of operation / program operation speed
when using the function that receives three values ​​of A, B, and C as parameter and
rearranges them from maximum value to minimum value and outputs them to A, B,
and C, Make a program and verify it.


    [function declaration)]	void order (int A, int B, int C);
    [function Call)]	int A, B, C;
    		test_func (A, B, C);

   [function declaration)]	void order (int *A, int *B, int *C);
   [function Call)]	int A, B, C;
    		test_func (&A, &B, &C);
*/

//what second it is when we convert from 1Mhz.
// Important : Should not use Calculator!
// Answer :

#include <stdio.h>
#include <windows.h>

void order (int A, int B, int C)
{
  int max, center, min;
  if (A<B)
    {
      if (B<C)
      {
        max=C, center=B, min=A;
      }
      else if (C<A)
      {
        max=B, center=A, min=C;
      }
      else
      {
        max=B, center=C, min=A;
      }
    }
  else
    {
      if (A<C)
      {
        max=C, center=A, min=B;
      }
      else if (C<B)
      {
        max=A, center=B, min=C;
      }
      else
      {
        max=A, center=C, min=B;
      }
    }

    printf("you want numbers is  %d %d %d .\n", max, center, min);

}

int test_func (int A, int B, int C)
{
  __int64 freq, start, end;
  QueryPerformanceFrequency((LARGE_INTEGER*)(&freq));
  QueryPerformanceCounter((LARGE_INTEGER*)&start);
  order (A, B, C);
  QueryPerformanceCounter((LARGE_INTEGER*)&end);
  printf("time interval = %f(ms)\n", (double)(end-start)/freq);
  return 0;

}

int main(void)
{
  int A, B, C;
  printf("write 3 numbers. : \n");
  scanf("%d %d %d", &A, &B, &C);
  test_func (A, B, C);

}
