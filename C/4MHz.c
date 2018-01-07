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

#include <stdio.h>

int main(void)
{
  int A[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<1000000; i++){
    int tmp= A[9];
    for(int j=8; j>=0; j--){
      if(j==1 || j==2 || j==7){
        A[j+1] = A[j]^tmp;
      }
      else{
        A[j+1]=A[j];
        A[0]=tmp;//2번과 성능이 다른이유는 여기서 발생! 1번은 A[0]를 tmp로 계속 바꿔주지만 2번은 아니다!
      }
    }
  }
   printf("number : %d %d %d %d %d %d %d %d %d %d",A[9], A[8], A[7], A[6], A[5], A[4], A[3], A[2], A[1], A[0]);
 }
//1번과 2번이 다른 이유는 i<1로 해놓고 돌려보면 A[1]의 값이 다른 것으로 부터 시작된다.

/*int main(void)
{
  int A[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<1000000; i++){
    int tmp = A[9];
    A[9]=A[8];
    A[8]=A[7]^tmp;
    A[7]=A[6];
    A[6]=A[5];
    A[5]=A[4];
    A[4]=A[3];
    A[3]=A[2]^tmp;
    A[2]=A[1]^tmp;
    A[1]=A[0];
    A[0]=tmp;
  }
  printf("number : %d %d %d %d %d %d %d %d %d %d",A[9], A[8], A[7], A[6], A[5], A[4], A[3], A[2], A[1], A[0]);
}
*/

/*int main()
{
    int size1, size2;

    FILE *fp = fopen("1.c", "r");// hello.txt 파일을 읽기 모드(r)로 열기.
    FILE *fpp = fopen("2.c", "r");// 파일 포인터를 반환


    fseek(fp, 0, SEEK_END);// 파일 포인터를 파일의 끝으로 이동시킴
    fseek(fpp, 0, SEEK_END);
    size1 = ftell(fp);// 파일 포인터의 현재 위치를 얻음
    size2 = ftell(fpp);

    printf("first file size :%d\nsecond file size : %d", size1,size2);

    fclose(fp);
    fclose(fpp);

    return 0;
}//첫 번째 파일의 크기가 더 큰 이유는 if문을 돌리기 때문이다.
*/
