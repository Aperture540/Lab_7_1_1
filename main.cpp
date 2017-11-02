/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on November 2, 2017, 12:47 PM
 */

#include <iostream> 

using namespace std; 

int main(void) {
    
    int a = 8, b = 0, c = 0;
    cin >> b;
    try {
        if(b == 0)
            throw string("Your input is not valid, you can't divide by zero.");
        c = a / b;
        cout << c << endl;
    }
    catch(string &problem) {
        cout << problem << endl;
        cout << c << endl;
    }
    return 0;
}

