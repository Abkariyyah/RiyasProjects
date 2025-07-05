#include <iostream>
#include <cctype>  // for toupper
using namespace std;

// squares whatever int this pointer points to
void squareByPointer(int* n) {
    if (n) {
        *n = (*n) * (*n);  // *n *= *n
    }
}



void capitalizeFirst(char* word) {
    if (word && word[0] != '\0') {
        word[0] = toupper(word[0]);  
    }
}


void fillWithSquares(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i * i;
    }
}

int sumArray(const int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// swap using references
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// creates a new array and fills it with the same value
int* makeFilledArray(int size, int val) {
    int* newArr = new int[size];  // dynamic allocation
    for (int i = 0; i < size; i++) {
        newArr[i] = val;
    }
    return newArr;  // must use delete[] for arrays
}

// returns the pointer to the bigger value
int* maxPointer(int* a, int* b) {
    if (*a > *b)
        return a;
    else
        return b;
}

// swaps first and last, then second and second to last and so on
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}


void printCharArray(const char* arr) {
    while (*arr != '\0') {
        cout << *arr;
        arr++;  // move to next char
    }
    cout << endl;
}


void zeroOddIndices(int* arr, int size) {
    for (int i = 1; i < size; i += 2) {
        arr[i] = 0;
    }
}

int main() {
    
    // 1. squareByPointer
    
    int x = 5;
    squareByPointer(&x);  // passing address of x
    cout << "Square of 5: " << x << endl;

    // 2. capitalizeFirst
    
    char word[] = "hello";  
    capitalizeFirst(word);
    cout << "Capitalized: " << word << endl;

    // 3. fillWithSquares
    
    int squares[5];
    fillWithSquares(squares, 5);  
    cout << "Squares: ";
    for (int i = 0; i < 5; i++) cout << squares[i] << " ";
    cout << endl;

    // 4. sumArray
    
    int sum = sumArray(squares, 5);
    cout << "Sum of squares: " << sum << endl;

    // 5. swap
    
    int a = 3, b = 7;
    swap(a, b);  // should be a = 7, b = 3 now
    cout << "Swapped: " << a << ", " << b << endl;

    // 6. makeFilledArray
    
    int* filled = makeFilledArray(4, 9);  // dynamically filled with 9s
    cout << "Filled array: ";
    for (int i = 0; i < 4; i++) cout << filled[i] << " ";
    cout << endl;
    delete[] filled;  // free memory!

    // 7. maxPointer
    
    int p = 10, q = 20;
    int* maxPtr = maxPointer(&p, &q);
    cout << "Max value: " << *maxPtr << endl;

    // 8. reverseArray
    
    int nums[] = {1, 2, 3, 4, 5};
    reverseArray(nums, 5);  
    cout << "Reversed: ";
    for (int i = 0; i < 5; i++) cout << nums[i] << " ";
    cout << endl;

    // 9. printCharArray
    
    const char* text = "Print this!";
    cout << "Char array: ";
    printCharArray(text);

    // 10. zeroOddIndices
    
    int testArr[] = {10, 11, 12, 13, 14, 15};
    zeroOddIndices(testArr, 6);  // should zero out 11, 13, 15
    cout << "Zero odd indices: ";
    for (int i = 0; i < 6; i++) cout << testArr[i] << " ";
    cout << endl;

    return 0;
}
