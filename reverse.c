#include<stdio.h>
#include<math.h>
int main(void){
	int givenNum, reversedNum = 0, testNum;
	
	printf("Enter a number: ");
	scanf("%d", &givenNum);
	
	testNum = givenNum;
	while(testNum>0){
		
		reversedNum = reversedNum * 10 + (int) fmod(testNum, 10) ;
		
		testNum = testNum / 10;
			
		}
	
	printf("%d reversed To %d", givenNum, reversedNum);
	
	
}

