// Problem
// Chef has started learning about the stock market and has already selected a favourite stock.

// He traded the stock for 
// �
// N consecutive days. Let 
// �
// �
// A 
// i
// ​
//   denotes the profit earned by Chef on the 
// �
// �
// ℎ
// i 
// th
//   day.
// Note that 
// �
// �
// <
// 0
// A 
// i
// ​
//  <0 indicates that Chef had a loss on the 
// �
// �
// ℎ
// i 
// th
//   day.

// Chef wants to find the maximum amount of of profit he would have earned, if he skipped trading for exactly one day.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains 
// �
// N — the number of days.
// The next line denotes 
// �
// N space-separated integers, denoting the profit earned by Chef on the 
// �
// �
// ℎ
// i 
// th
//   day.
// Output Format
// For each test case, output on a new line, the maximum amount of of profit he would have earned, if he skipped trading for exactly one day.



// Sample 1:


// input

// 4
// 3
// 1 -2 3
// 4
// 4 1 5 1
// 4
// 10 -10 -10 10
// 5
// -5 -4 -3 -2 -1


//output
// 4
// 10
// 10
// -10







#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,j,temp;
    
    cin>>t;
    for (i=0;i<t;i++) 
    {
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    

    int sum=0;
    for(j=0;j<n;j++) {
        sum=sum+arr[j];
    }
    sum=sum-arr[0];
    cout<<sum<<endl;
  
  
}
    
}
