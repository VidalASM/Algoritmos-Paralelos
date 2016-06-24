#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

const double MAX = 10;

double product_block(double A[MAX][MAX], Double B [MAX][MAX],){
    return 0;
}


int main(){

    int MAX = 500;

    double A [MAX][MAX], B [MAX][MAX], R [MAX][MAX];

    for (int i = 0; i < MAX ; i ++)
        for (int j = 0; j < MAX ; j ++){
            A [i][j] = rand() % 10 + 1;
            B [i][j] = rand() % 10 + 1;
        }

	///âˆ— Initialize A and x, assign y = 0 âˆ—/
	///âˆ— First pair of loops âˆ—/

    for (int i = 0; i < MAX ; i ++){
        for (int j = 0; j < MAX ; j ++){
            R[i][j]=0;
            for (int k=1; k<= MAX; k++)
                R[i][j] = R[i][j] + A[i][k]*B[k][j];
        }
    }

    /*for (int i = 0; i < MAX ; i ++){
        for (int j = 0; j < MAX ; j ++)
            cout << R [i][j] << " ";
        cout << "\n";
    }*/

	return 0;
	
}