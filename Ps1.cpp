#include <iostream>
using namespace std;

// 计算最大公约数（欧几里得算法）
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int result = 1;
    for (int i = 2; i <= 20; ++i) {
        result = lcm(result, i);
    }
    cout << "Kleinste Zahl, die durch 1 bis 20 ohne Rest teilbar ist: " << result << endl;
    return 0;
}

