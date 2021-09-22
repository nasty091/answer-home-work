#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

bool isPrimeNumber(int x){
    if (x<2) return false;
    if (x>2){
        for(int i = 2; i<= sqrt(x);i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    int k;
    cin >> n;
    queue<int>q;
    for(int i = 2; i < 10;i++){
        if(isPrimeNumber(i)==true){
            q.push(i);
        }
    }
    while(!q.empty()){
        for(int i = 1; i <= 9; i++){
            k = q.front()*10 + i;       
            if(isPrimeNumber(k) && k<=n){
                q.push(q.front()*10 + i);
            }
        }
            cout << q.front()<< " ";
            q.pop();
    }
    return 0;
}