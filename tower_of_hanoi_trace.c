/*Write a C program to show the solution of Tower of Hanoi problem using recursive method.
	Date: 2016/7/21
	Author: Sashank Shakya
	Reference: Data structures using C and C++
*/
#include<stdio.h>
#include<conio.h>
void towers(int,char,char,char);
void main()
{
	int n;
	printf("enter the number of disks");
	scanf("%d",&n);
	towers(n,'A','C','B');
	
}
void towers(int n,char frompeg,char topeg,char auxpeg)
{
	if(n==1)
	{
		printf("\n%s%c%s%c","mov disk 1 from peg", frompeg ,"to peg", topeg);
		return;
	}
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n%s%d%s%c%s%c","move disk",n,"from peg", frompeg,"to peg", topeg);
	towers(n-1,auxpeg,topeg,frompeg);
}
