#include<iostream>
using namespace std;
int main(){
int n;
for (n=1 ; n<=4 ; n++){
    n++;
    
}
cout<<n<<endl;
return 0;
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 2;

    while (count < 10) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
    return 0;
}
}