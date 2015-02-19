#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "calculator.h"
using namespace std;

vector<vector<double> > matrix1;     // choose vector to read the matrices
vector<vector<double> > matrix2;
vector<vector<double> > matrix3;

int matrix1row;
int matrix1col;

int matrix2row;
int matrix2col;

int matrix3row;
int matrix3col;



int main()
{
	
	ifstream file("D:\\test.txt");                  // file path
	string line;
	int matrixNo = 0;

	// read 1st matrix
	while (getline(file, line)&& line != ";")        // matrices are seperated by " ; "
	{
		if (line == ";"){
			matrixNo++;
		}
		matrix1.push_back(vector<double>());      // Adds a new no at the end of the vector (null)
		istringstream ss(line);
		double value;
		while (ss >> value)           //shifting bit right
		{
			matrix1.back().push_back(value);    // access last element Adds read int to that vector
		}
	}

	cout<<"\n\n";cout<<" 1st matrix : \n"<<endl;

	for (int y = 0; y < matrix1.size(); y++)              // displaying read matrix
	{
		for (int x = 0; x < matrix1[y].size(); x++)
		{
			cout << matrix1[y][x] << " ";
		}
		cout << endl;
	}

	// read 2nd matrix

	while (getline(file, line)&& line != ";")       
	{
		if (line == ";"){
			matrixNo++;
		}
		matrix2.push_back(vector<double>());           // Adds a new no at the end of the vector 
		istringstream ss(line);
		double value;
		while (ss >> value)
		{
			matrix2.back().push_back(value);
		}
	}

	cout<<"\n\n";cout<<" 2nd matrix : \n"<<endl;

	for (int y = 0; y < matrix2.size(); y++)           // displaying read matrix
	{
		for (int x = 0; x < matrix2[y].size(); x++)
		{
			cout << matrix2[y][x] << " ";
		}
		cout << endl;
	}



	// read 3rd matrix

	while (getline(file, line)&& line != ";")
	{
		if (line == ";"){
			matrixNo++;
		}
		matrix3.push_back(vector<double>());     // Adds a new no at the end of the vector (null)
		istringstream ss(line);
		double value;
		while (ss >> value)
		{
			matrix3.back().push_back(value);
		}
	}

	cout<<"\n\n";cout<<" 3rd matrix : \n"<<endl;

	for (int y = 0; y < matrix3.size(); y++)
	{
		for (int x = 0; x < matrix3[y].size(); x++)
		{
			cout << matrix3[y][x] << " ";             // displaying read matrix
		}
		cout << endl;
	}

	cout<<"\n\n";

	//calculate 2d vector size

	matrix1row=matrix1.size();                              //getting row size of matrix 1
    matrix1col=matrix1[0].size();                           // getting column size by 1st row
	//cout << matrix1row;cout << matrix1col;cout << endl;     // for debugging    

	matrix2row=matrix2.size();                             //getting row size of matrix 2
    matrix2col=matrix2[0].size();                          // getting column size by 1st row
	//cout << matrix2row;cout << matrix2col;cout << endl;       // for debugging

	matrix3row=matrix3.size();                             //getting row size of matrix 3
    matrix3col=matrix3[0].size();                           // getting column size by 1st row
	//cout << matrix3row;cout << matrix3col;cout << endl;     // for debugging


	int row1=0,row2=0,col1=0,col2=0,col3=0,row3=0;


	//    assing vector to 2D array for further calcultion
	
		
		int r1 = matrix1row, c1 = matrix1col, i, j, count;
		int r2 = matrix2row, c2 = matrix2col;
		int r3 = matrix3row, c3 = matrix3col;

		// assigning to array 1
 
    int **arr = (int **)malloc(r1 * sizeof(int *));
    for (i=0; i<r1; i++)
         arr[i] = (int *)malloc(c1 * sizeof(int));
    count = 0;
    for (i = 0; i <  matrix1.size(); i++)
      for (j = 0; j < matrix1[i].size(); j++)
         arr[i][j] = matrix1[i][j]; 
	
    for (i = 0; i <  matrix1.size(); i++){                  //size calculation
		row1++;col1=0;
      for (j = 0; j < matrix1[i].size(); j++){
		  //cout<<" "<<arr[i][j];  
	  col1++;}
	  //cout<<endl;
	} 
		
	
  // assigning to array 2

    int **arr2 = (int **)malloc(r2 * sizeof(int *));
    for (i=0; i<r2; i++)
         arr2[i] = (int *)malloc(c2 * sizeof(int));
 
    count = 0;
    for (i = 0; i <  matrix2.size(); i++)
      for (j = 0; j < matrix2[i].size(); j++)
         arr2[i][j] = matrix2[i][j];  
    for (i = 0; i <  matrix2.size(); i++){    // for size calculation
		row2++;
		col2=0;
      for (j = 0; j < matrix2[i].size(); j++){
		 // cout<<" "<<arr2[i][j];
	  col2++;}
	  ///cout<<endl;
	}

	// assigning to array 3
 
    int **arr3 = (int **)malloc(r3 * sizeof(int *));
    for (i=0; i<r3; i++)
         arr3[i] = (int *)malloc(c3 * sizeof(int));
    count = 0;
    for (i = 0; i <  matrix3.size(); i++)
      for (j = 0; j < matrix3[i].size(); j++)
         arr3[i][j] = matrix3[i][j];  
 
    for (i = 0; i <  matrix3.size(); i++){             // size calculation
		row3++;col3=0;
      for (j = 0; j < matrix3[i].size(); j++){
		  //cout<<" "<<arr3[i][j];
	  col3++;}
	 // cout<<endl;
	}
	
/*	cout << row1;cout<<endl;cout << col1;cout << endl;      // for debugging 
	cout << row2;cout<<endl;cout << col2;cout << endl;
	cout << row3;cout<<endl;cout << col3;cout << endl; */

	cout<<"\n\n\n";
	int **res11;
	int **res22;

	cout<<"Enter testcase to run press \n1 for testcase 1 or \n2 for testcase 2 or \n3 for testcase 3 and \n4 to exit\n";
	int input=0;
	cin>> input;

	while(input != 4){

	 switch ( input ) {


    case 1:
	cout << "--> \t *** Output of testcase 1 - Multiply 2 matrices ***"<< endl; cout<<"\n";   // test case 1
    res11=multiply2(arr,arr2,row1,col1,row2,col2); cout<<"\n\n";
	cout<<"\n\n\n";
	cout<<"\n\n\n";
	break;

    case 2: 
	cout << "--> \t *** Output of testcase 2 - Add 3 matrices ***"<< endl; cout<<"\n"; // test case 2
	add3(arr,arr2,arr3,row1,col1,row2,col2,row3,col3); cout<<"\n\n";
    cout<<"\n\n\n";
	break;


	case 3:
	cout << "--> \t *** Output of testcase 3 - Multiply 2 matrices then add a 3rd one ***"<< endl;cout<<"\n";  // test case 3
	cout << " --> Part 1- Multiplication Result"<< endl;cout<<"\n";
	res22=multiply2(arr,arr2,row1,col1,row2,col2);cout<<"\n";
	cout << " --> Part 2- Addition Result"<< endl;cout<<"\n";
	add2(res22,arr3,row1,col2,row3,col3);cout<<"\n";
	cout<<"\n\n\n";
	break;

	case 4:
		exit(0);
		break;
	//cout << " --> Part 2- subtraction Result"<< endl;cout<<"\n";
	//sub2(arr,arr2,row1,col1,row2,col3);cout<<"\n";
	
	//return 0;
		

	}//for switch

	 cout<<"Enter testcase to run press \n1 for testcase 1 or \n2 for testcase 2 or \n3 for testcase 3 and \n4 to exit\n";
	    cin>> input;
	}// for while
	return 0;
}

