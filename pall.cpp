#include<iostream>
using namespace std;

int reverse(int n,int rev=0 ){
    if(n==0){
        return rev;
    }
    rev=(rev*10)+(n%10);

    return reverse(n/10,rev);

}
bool pall(int n){
    return n==reverse(n);
}
int main(){
    cout<< pall(2892)<<endl;

}