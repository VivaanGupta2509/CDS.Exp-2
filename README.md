# Experiment 2

## Aim - 
To write a C++ program that determines the size of different data types.

## Theory-
Understanding the size of various data types is crucial for memory management and optimization in programming. 
Different data types (e.g., int, float, double, char) occupy different amounts of memory.

## Code - 
```
#include<iostream>
using namespace std;
long int D;

int main(){
   
   char A;
   int B;
   static short int C;
   float E;
   double F;
   wchar_t G;
    A = 'T';
    B = 93;
    C = 46;
    D = 5;
    E = 8.22;
    F = 102.22;
    cout<<"Size of char: "<<sizeof(A)<<endl;
    cout<<"Size of int: "<<sizeof(B)<<endl;
    cout<<"Size of short int: "<<sizeof(C)<<endl;
    cout<<"Size of long int: "<<sizeof(D)<<endl;
    cout<<"Size of float: "<<sizeof(E)<<endl;
    cout<<"Size of double: "<<sizeof(F)<<endl;
    cout<<"Size of wchar_t: "<<sizeof(G)<<endl;   
}
```

## Explanation - 
The program uses the sizeof operator to determine and display the size of various data types in bytes. It includes common data types such as int, float, double, char, and others.

## Conclusion - 
This program helps in understanding how much memory is allocated for different data types, which is important for writing efficient and optimized code.
