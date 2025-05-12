#include <iostream>
#include <cstdlib>  // rand()
#include <ctime>    // time()
using namespace std;

int main() {
    const int NUM_TRIALS = 1000;
    int kopf_count = 0;
    int zahl_count = 0;

    // 初始化随机数种子
    srand(time(0));

    // 1000 次投掷
    for (int i = 0; i < NUM_TRIALS; ++i) {
        int result = rand() % 2;  // 0 或 1
        if (result == 0) {
            ++kopf_count;
        }
        else {
            ++zahl_count;
        }
    }

    // 结果输出
    cout << "Kopf wurde " << kopf_count << " mal geworfen." << endl;
    cout << "Zahl wurde " << zahl_count << " mal geworfen." << endl;

    return 0;
}

