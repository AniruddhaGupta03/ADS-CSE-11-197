#include<iostream>
using namespace std;
int reverse(int n,int rev=0){
    if(n==0){
        return rev;
    }

    rev=(rev*10)+n%10;

    return reverse(n/10,rev);

}
int main(){
    int a=reverse(53564);
    cout<<a<<endl;
}
