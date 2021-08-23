/*
	PROBLEM STATEMENT-
		Accept two numbers from user and return its addition.
--------------------------------------------------------------------------------------------
	ALGORITHM
	
	START
		Accept First Number as iNo1
		Accept Second Number as iNo2
		
		Create one variable as iAns
		
		Perform Addition of num1 and num2
		Store the result in iAns
		
		Return value of iAns
		Display Result
	STOP
*/

#include<stdio.h>		//Headerfile used for IO function

//////////////////////////////////////////
//	Function Name : Addition 
//	Input : float , float
//	Output : float
//	Discription : It is used to Perform Addition
//	Date : 23th August 2021
//	Author : Sharayu Dipak Bagul.
//////////////////////////////////////////

float Addition(
				float num1, 	//1st number
				float num2		//2nd number
			)
{
	float fAns = 0.0;			//Local variable to store Addition
	fAns = num1 + num2;
	return fAns;			//return Addition
}

int main()					//Entry Point Function from here execution of our program starts  
{
	float fNo1 = 0.0;			//Local variable
	float fNo2 = 0.0;			//Local variable
	float fRet = 0.0;			//Local variable
	
	printf("Enter First Number ->\n");
	scanf("%f",&fNo1);
	printf("Enter Second Number ->\n");
	scanf("%f",&fNo2);
	
	fRet = Addition(fNo1,fNo2);
	printf("\nAddition is %f .\n",fRet);
	
	return 0;	//To indicate successful termination to OS
}
