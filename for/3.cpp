#include <iostream>
using namespace std;

int sum_one_to_num(int num){
    int sum = 0;
    for(int i =1; i<=num;i++){
        sum += i;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;
    cout << sum_one_to_num(num);
    return 0;
}