/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    ofstream dosya2("dosya.txt");
    
    for(int i=0;i<3;i++){
        string okunanMesaj;
        cin>>okunanMesaj;
        dosya2<<okunanMesaj<<endl;
    }
   dosya2.close();

    return 0;
}