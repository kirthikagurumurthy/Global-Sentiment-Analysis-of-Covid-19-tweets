/**
 * @input A : Integer
 * 
 * @Output Integer
 */
#include<stdio.h>
#include<stdlib.h>
 int getbits(int A){
     int count = 0;
     while(A>0){
         count++;
         A=A/2;
     }
     return count;
 }
 
 int checkispalindrome(int A,int bits){
     int l=0,r=bits-1;
     
     while(l<r){
        if((A & (1<<l)) != (A & (1<<r))) return 0;
        l++;
        r--;
     }
     return 1;
 }
 
int solve(int A) {
    int count = 0;
    int value = 1;
    while(count != A){
        if(checkispalindrome(value,getbits(value))) count++;
        value++;
    }
    return value-1;
}

int main(){
    printf("%d\n",solve(2));
}