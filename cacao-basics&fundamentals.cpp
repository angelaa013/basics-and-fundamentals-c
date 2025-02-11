/*Princess Angela Cacao
IT2B */

#include <iostream>

using namespace std;

int main() {
    int array1[10], array2[10], mergedArray[20];
    int size1, size2;

    cout<<"Input first array"<<endl;
    cout << "Enter the number of elements in the first array (max 10): ";
    cin >> size1;
    cout << "Enter " << size1 << " elements for the first array:" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    cout<<"Input second array"<<endl;
    cout << "Enter the number of elements in the second array (max 10): ";
    cin >> size2;
    cout << "Enter " << size2 << " elements for the second array:" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

   
    int mergedSize = size1 + size2;
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    
    for (int i = 0; i < mergedSize - 1; i++) {
        for (int j = i + 1; j < mergedSize; j++) {
            if (mergedArray[i] < mergedArray[j]) {
                
                int temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray[j] = temp;
            }
        }
    }

    
    cout << "Merged the array in descending order: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
