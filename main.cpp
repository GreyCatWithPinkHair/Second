#include <iostream>
#include <vector>
using namespace std;

void optimisedBubbleSort(vector <int> & values) {
    for (int i = 0; i < values.size(); i++) {
        bool sorted = true;
        for (int j = 0; j < values.size() - (i + 1); j++) {
            if (values[j] > values[j + 1]) {
                sorted = false;
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
        if (sorted) break;
    }
}

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << "Where array";
    else if (n == 1) {
        int lonelyNumber;
        cin >> lonelyNumber;
        cout << lonelyNumber * lonelyNumber;
    }

    else {
        vector <int> inputData(n);
        vector <int> outputData(n);
        for (int i = 0; i < n; i++) {
            cin >> inputData[i];
        }

        for (int i = 0; i < n; i++) {
            outputData[i] = inputData[i] * inputData[i];
        }

        optimisedBubbleSort(outputData);

        for (int i : outputData) {
            cout << i << " ";
        }
    }
    return 0;
}
