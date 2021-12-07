#include <iostream>
#include <vector>

using namespace std;
bool isPrime_v_01(int n){
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


bool isPrime_v_02(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i*i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool isPrime_v_03(int n) {
    //Optimized School Method

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    isPrime_v_01(11) ? cout << " true\n" : cout << " false\n";
    isPrime_v_02(11) ? cout << " true\n" : cout << " false\n";
    isPrime_v_03(11) ? cout << " true\n" : cout << " false\n";

}
