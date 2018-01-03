/*
[Training 목적] Branch가 C프로그램의 성능에 미치는 영향 이해
4.	다음 2개의 프로그램에 대해서 구현해보고 프로그램의 크기와 동작성능이 다른 이유를 논하라.

  		for(int i=0; i<1000000; i++)
		{
          tmp = A[9];
	  for(int j=8; j>=0; j++)
	     if(j==1 || j==2 || j==7) A[j+1] = A[j] ^ tmp;
             else                     A[j+1] = A[j];
          A[0] = tmp;
	}

  		for(int i=0; i<1000000; i++)
	{
          tmp = A[9];
          A[9] = A[8];
          A[8] = A[7] ^ tmp;
          A[7] = A[6];
          A[6] = A[5];
          A[5] = A[4];
          A[4] = A[3];
          A[3] = A[2] ^ tmp;
          A[2] = A[1] ^ tmp;
          A[1] = A[0];
          A[0] = tmp;
	}
*/

// what is the number of pulses in 4Mhz for 0.5 second.
// Important : Should not use Calculator. Write in English!
// Answer :

int main()
{

  return 0;
}
