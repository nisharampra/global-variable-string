//
//  main.cpp
//  global variable-string
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include<iostream>
using namespace std;
    
int g=5;
void fun()
{
    int a=10;
    a++;
    g++;
        
    cout<<a<<" "<<g<<endl;
}
    
int main()
{
    cout<<g<<endl;
    fun();
        
    cout<<g<<endl;
        
}
