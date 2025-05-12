#include <iostream>
#include <cstdlib>  // rand()
#include <ctime>    // time()
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // 1. 初始化随机数种子
    srand(time(0));

    // 2. 生成 10 个 0~99 的随机数，填入数组
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = rand() % 100;
    }

    // 3. 输出数组内容
    cout << "Zahlen im Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 4. 查找最大值
    int max_number = numbers[0];
    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }
    cout << "Groesste Zahl: " << max_number << endl;

    // 5. 计算平均值
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / SIZE;
    cout << "Mittelwert: " << average << endl;

    return 0;
}

