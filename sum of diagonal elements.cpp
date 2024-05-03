#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX = 100; 
  
void printDiagonalSums(int mat[][MAX], int n) 
{ 
    int principal = 0, secondary = 0; 
    for (int i = 0; i < n; i++)  
    { 
        for (int j = 0; j < n; j++)     
        { 
            // Condition for principal diagonal 
            if (i == j) 
                principal += mat[i][j]; 
  
            // Condition for secondary diagonal 
            if ((i + j) == (n - 1)) 
                secondary += mat[i][j]; 
        } 
    } 
  
    cout << "Principal Diagonal:" <<  
             principal << endl; 
    cout << "Secondary Diagonal:" <<  
             secondary << endl; 
} 
  
// Driver code 
int main() 
{ 
    int a[][MAX] = {{1, 2, 3, 4},  
                    {5, 6, 7, 8},  
                    {1, 2, 3, 4},  
                    {5, 6, 7, 8}}; 
    printDiagonalSums(a, 4); 
    return 0; 
} #include <iostream> 
using namespace std; 
  
const int MAX = 100; 
  
void printBoundary(int a[][MAX], int m, int n) 
{ 
    for (int i = 0; i < m; i++)  
    { 
        for (int j = 0; j < n; j++)  
        { 
            if (i == 0 || j == 0 ||  
                i == n - 1 || j == n - 1) 
                cout << a[i][j] << " "; 
            else
                cout << " "
                     << " "; 
        } 
        cout << endl; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int a[4][MAX] = {{1, 2, 3, 4},  
                     {5, 6, 7, 8},  
                     {1, 2, 3, 4},  
                     {5, 6, 7, 8}}; 
    printBoundary(a, 4, 4); 
    return 0; 
} 
