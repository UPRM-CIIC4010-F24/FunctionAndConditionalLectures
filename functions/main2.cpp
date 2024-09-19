#include<iostream>

using namespace std;
int main() {
    int i = 10;
    int arr[] = {1, 2, 3};
    cout << arr[1] << endl;
    arr[1] = 100;
    cout << arr[1] << endl << endl;

    cout << i << endl;
    i = arr[1];
    arr[0] = i;
    cout << i << endl;

}