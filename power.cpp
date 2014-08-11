#include <cmath>
using namespace std;

int i = 0;
int j = 0;
int k = 0;

int power1(int x, int n){

    unsigned int temp;
    if (n == 0){
        i++;
        return 1;
    }
    if (n == 1){
        i++;
        return x;
    }
    else {
        for (temp = x; n > 1; n--){
            temp *= x;
            i++;
        }
        return temp;
    }
}

int power2(int y,int z){

    j++;
    if (z == 0) return 1;
    if (z == 1) return y;
    else if (z > 1) return y * power2(y, z - 1);
}

int power3(int p, int q){

    k++;
    if (q == 0) return 1;
    if (q == 1) return p;
    if (q == 2) return p * p;
    if (q%2 == 0) return power3((power3(p,(q/2))),2);
    else if (q%2 != 0) return p * power3((power3(p,((q-1)/2))),2);
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << power1(a, b) << "\n";
    cout << "mults: " << i << endl;
    cout << power2(a, b) << "\n";
    if (j > 1) cout << "mults: " << j - 1 << endl;
    else cout << "mults: " << j << endl;
    cout << power3(a, b) << "\n";
    cout << "mults: " << k << endl;
    return 0;
}
