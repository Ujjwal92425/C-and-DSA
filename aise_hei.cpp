// You have been tasked with creating a program that calculates the average word length in a given sentence.


// Write a function calculateAverageWordLength that takes a sentence (string) as input and returns the average length of the words in the sentence.


// Implement the function calculateAverageWordLength and write a main program to test it. The main program should prompt the user to enter a sentence, and then display the calculated average word length.


// Note: This kind of question helps in clearing mPhasis tests.
// Input format :

// The input consists of a sentence.
// Output format :

// The program outputs the average length of the words in the sentence rounded off to three decimal places.
// Code constraints :

// Length of the sentence < 1000
// Sample test cases :
// Input 1 :

// The quick brown fox jumps over the lazy dog.

// Output 1 :

// 4.000

// Input 2 :

// The future is gonna be okay

// Output 2 :

// 3.667

#include <iostream>
using namespace std;
int main () {
    string n;
    getline(cin,n);
    int x ;
    x=n.size();
    double y;
    y=x/2;
    cout<<y;
}