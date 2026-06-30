/* Background: You are building a matrix calculator for a math application. The matrices can vary in
size, and you need to perform operations dynamically.
Task:
1. Ask the user to input the dimensions of two matrices.
2. Dynamically allocate memory for both matrices.
3. Populate the matrices with user-provided values.
4. Implement the following operations:
• Matrix addition.
• Matrix multiplication.
• Transpose of a matrix.
5. Display the results of each operation.
6. Deallocate the memory after use. */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j,rows,col;
	cout<<"\nEnter rows for both Matrices: ";
	cin>>rows;
	cout<<"\nEnter columns for both Matrices: ";
	cin>>col;
//	For 1st Matrix
    cout<<"\nMatrix:1\n";
    cout<<"-----------\n";
	int **matrix1;
	matrix1=new int *[rows];
	for(i=0;i<rows;i++)
	{
		matrix1[i]=new int [col];
	}
//	Populate the array 
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter value for ["<<i<<","<<j<<"]: ";
			cin>>matrix1[i][j];
		}
	}
//	For 2nd Matrix
	cout<<"\nMatrix:2\n";
    cout<<"-----------\n";
	int **matrix2;
	matrix2=new int *[rows];
	for(i=0;i<rows;i++)
	{
		matrix2[i]=new int [col];
	}
	//	Populate the array 
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter value for ["<<i<<","<<j<<"]: ";
			cin>>matrix2[i][j];
		}
	}
	
//	Displaying Both Matrices
    cout<<"\n\n\tMatrix:1\n";
    cout<<"\t---------";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<col;j++)
		{
			cout<<matrix1[i][j]<<" ";
		}
	}
//	Matrix 2
	cout<<"\n\n\n\tMatrix:2\n";
	cout<<"\t---------";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<col;j++)
		{
			cout<<matrix2[i][j]<<" ";
		}
	}
//	Matrix Operations:

//	1) Addition of Matrices
	int sum[rows][col];
	cout<<"\n\n\n\tSum of Marix '1' & Matrix '2':\n";
	cout<<"\t------------------------------";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<col;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			cout<<sum[i][j]<<" ";
		}
	}
//	2) Multiplication of Matrices
	int product[rows][col];
	cout<<"\n\n\n\tProduct of Marix '1' & Matrix '2':\n";
	cout<<"\t-------------------------------------";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<col;j++)
		{
			product[i][j]=matrix1[i][j]*matrix2[i][j];
			cout<<product[i][j]<<" ";
		}
	}
	
//	3) Transpose of Matrices
	int transpose[rows][col];
	cout<<"\n\n\n\tTranspose of Marix '1' & Matrix '2':\n";
	cout<<"\t-------------------------------------\n\n";
	cout<<"\tMatrix:1\n";
	cout<<"\t--------";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			transpose[j][i]=matrix1[i][j];
		}
	}
//	Displaying transpose
	for(i=0;i<col;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<rows;j++)
		{
			cout<<transpose[i][j]<<" ";
		}
	}
	cout<<"\n\n\tMatrix:2\n";
	cout<<"\t--------";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			transpose[j][i]=matrix2[i][j];
		}
	}
	//	Displaying transpose
	for(i=0;i<col;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<rows;j++)
		{
			cout<<transpose[i][j]<<" ";
		}
	}
	
//	De-Allocating Memory
	for(i=0;i<rows;i++)
	{
		delete [] matrix1[i];
		delete [] matrix2[i];
	}
	delete [] matrix1;
	delete [] matrix2;
	
	
	return 0;	
}