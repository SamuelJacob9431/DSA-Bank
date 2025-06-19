#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) { 
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {12,24,54,109,120};
    int x = 32;

     
    int result = bs(arr, x);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found..." << endl;

    return 0;
}
