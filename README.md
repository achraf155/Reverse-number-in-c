# Reverse-number-in-c
Program to reverse a given number in c languague

	#include<stdio.h>
	#include<math.h> // math.h to use fmod
	int main(void){
		int givenNum, reversedNum = 0, testNum;
		
		printf("Enter a number: ");
		scanf("%d", &givenNum); // ask user for a number
		
		testNum = givenNum;
		while(testNum>0){ // 
			
			reversedNum = reversedNum * 10 + (int) fmod(testNum, 10) ; // fmod computes remainder of the floating-point division operation
			// following expresion return last degit of a decimal number (int) fmod(testNum, 10)
			testNum = testNum / 10;
				
			}
		
		printf("%d reversed To %d", givenNum, reversedNum);
		
		return 0;
 	}


![Screenshot (72)](https://github.com/user-attachments/assets/f1426297-80cd-45e4-869f-02acaec4c024)
