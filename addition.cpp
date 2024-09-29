/**
 * @file addition.cpp
 * @author Gandla Bhargavi
 * @brief addition of number by using function calling method
 * @version 0.1
 * @date 2024-09-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>
using namespace std;

int  addition(int a, int b);


int main()
{
    int X,Y;
    int result;
    cout<<"enter the value of x and y"<<endl;
    cin>>X>>Y;
    result=addition(X,Y);
    cout<<"the sum of addition :"<<result<<endl;

 
}

int  addition(int a, int b){

    return a+b;
}