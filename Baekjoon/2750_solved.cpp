#include <iostream>

using namespace std;

int array[1001];

int main(void) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < N-1; i++) {
        int j = i;
        while (j >= 0 && array[j] > array[j+1]) {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }        
    }
    for (int i = 0; i < N; i++) {
        cout << array[i] << endl;
    }
}
