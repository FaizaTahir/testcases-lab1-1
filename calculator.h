
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;
void add2(int **arr, int **arr2,int row1,int col1,int row2,int col2);  // add 2 matrices
void sub2(int **arr, int **arr2,int row1,int col1,int row2,int col2);  // subtract 2 matrices
int** multiply2(int **arr, int **arr2,int row1,int col1,int row2,int col2); // multiply 2 matrices
void add3(int **arr, int **arr2,int **arr3,int row1,int col1,int row2,int col2,int row3,int col3); //add 3 matrices


void add2(int **arr, int **arr2,int row1,int col1,int row2,int col2){
	
	//cout << row1;cout<<endl;cout << col1;cout << endl;    // for debugging
	//cout << row2;cout<<endl;cout << col2;cout << endl;

	    if((row1 != row2) || (col1 != col2)){
			cout<<"Order of matrix did not matched!!"; exit(0);}    //checking order
    int **res2;
	int i,j;

    res2 = (int **)malloc(row1 * sizeof(int *));                   // allocating the size of result matrix
    for (i=0; i<row1; i++)                                         // by using size of the input matrix
         res2[i] = (int *)malloc(col1 * sizeof(int));
 

           for(i = 0 ; i < row1; i++){
              for(j = 0; j < col1; j++)
                res2[i][j] = arr[i][j] + arr2[i][j];}              // adding

    cout<<" --> The sum of the matrix is :\n"; cout<<"\n";

    for(i = 0 ; i < row1; i++){                                 // displaying result
      for(j = 0; j < col1; j++){
        cout<<res2[i][j];
        cout<<"\t";
        }
     cout<<"\n"; }
	
}



void add3(int **arr, int **arr2,int **arr3,int row1,int col1,int row2,int col2,int row3,int col3){
	int **res1;
	int i,j;
	int resrow=0;int rescol=0;

	//cout << row1;cout<<endl;cout << col1;cout << endl;         // for debugging
	//cout << row2;cout<<endl;cout << col2;cout << endl;

	    if((row1 != row2) || (col1 != col2) || (row1 != row3) || (col1 != col3) || (row3 != row2) || (col3 != col2)){
			cout<<"Order of matrix did not matched!!"; exit(0);}          // matching the order there should be

    res1 = (int **)malloc(row1 * sizeof(int *));
    for (i=0; i<row1; i++)
         res1[i] = (int *)malloc(col1 * sizeof(int));                    // allocating the size of result matrix

           for(i = 0 ; i < row1; i++){
              for(j = 0; j < col1; j++)
                res1[i][j] = arr[i][j] + arr2[i][j] + arr3[i][j];}      // adding three matrices

    cout<<" --> The sum of the matrix is :\n"; cout<<"\n";

    for(i = 0 ; i < row1; i++){
	  
      for(j = 0; j < col1; j++){
        cout<<res1[i][j];                                // displaying result
        cout<<"\t";
        }
     cout<<"\n"; }
	
}


int** multiply2(int **arr, int **arr2,int row1,int col1,int row2,int col2){
	
	//cout << row1;cout<<endl;cout << col1;cout << endl;          // for debugging
	//cout << row2;cout<<endl;cout << col2;cout << endl;

	    if((col1 != row2)){                                         // for matching the required order
			cout<<"Order of matrix did not matched!!"; exit(0); 
			//return 0;
		}         

 int **res1;
 int i,j;
    res1 = (int **)malloc(row1 * sizeof(int *));
    for (i=0; i<row1; i++)
         res1[i] = (int *)malloc(col2 * sizeof(int));              // allocating the size of result matrix
 
    
	int c,d,k,sum=0;
	

	for ( c = 0 ; c < row1 ; c++ )
    {
      for ( d = 0 ; d < col2 ; d++ )
      {
        for ( k = 0 ; k < row2 ; k++ )
        {
          sum = sum + arr[c][k] * arr2[k][d];                   // multiplying two matrices
        }
 
        res1[c][d] = sum;                                     // storing the result
        sum = 0;
      }
    }
 
  

    cout<<" --> The multiplication of the matrix is :\n"; cout<<"\n";

    for(i = 0 ; i < row1; i++){
      for(j = 0; j < col2; j++){
        cout<<res1[i][j];                    // displaying result
        cout<<"\t";
        }
     cout<<"\n"; }

	return res1;
	
}







void sub2(int **arr, int **arr2,int row1,int col1,int row2,int col2){
	
	//cout << row1;cout<<endl;cout << col1;cout << endl;    // for debugging
	//cout << row2;cout<<endl;cout << col2;cout << endl;

	    if((row1 != row2) || (col1 != col2)){
			cout<<"Order of matrix did not matched!!"; exit(0);}    //checking order
    int **res2;
	int i,j;

    res2 = (int **)malloc(row1 * sizeof(int *));                   // allocating the size of result matrix
    for (i=0; i<row1; i++)                                         // by using size of the input matrix
         res2[i] = (int *)malloc(col1 * sizeof(int));
 

           for(i = 0 ; i < row1; i++){
              for(j = 0; j < col1; j++)
                res2[i][j] = arr[i][j] - arr2[i][j];}              // adding

    cout<<" --> The subtraction of the matrix is :\n"; cout<<"\n";

    for(i = 0 ; i < row1; i++){                                 // displaying result
      for(j = 0; j < col1; j++){
        cout<<res2[i][j];
        cout<<"\t";
        }
     cout<<"\n"; }
	
}
