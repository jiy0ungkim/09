#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, char *argv[])
{
    int i, grade[SIZE];
    int average, sum;
    
    sum = 0;
    for(i=0; i<SIZE; i++)
    {
             printf("학생 성적을 입력하세요: ");
             scanf("%d", &grade[i]); 
             sum += grade[i];
    }
    
    average = sum / SIZE;
    printf("성적 평균: %d\n", average);
    
    system("PAUSE");	
    return 0;
}
