#include <iostream>
#include <string>
using namespace std;

//Function prototypes

// 1) Reverse a string 
string reverseString(string input);

// 2) Count words in a sentence
int countWords(string sentence);

// 3) Check if a number is a palindrome
bool isPalindrome(int num);

// 4) Average of numbers in an array
double average(int arr[], int size);

// 5) Celcius to Farenheit 
double celsiusToFahrenheit(double celsius);

int main() {
    // 1) Reverse a string
    string userInput;
    cout << "1. Enter a string to reverse: ";
    cin >> userInput;

    string result = reverseString(userInput);
    cout << "Reversed string: " << result << endl;

    // 2) Count words in a sentence
    string sentence;
    cout << "2. Enter a sentence: ";
    getline(cin >> ws, sentence); // to allow spaces **

    int wordCount = countWords(sentence);
    cout << "Number of words: " << wordCount << endl;

    // 3) Check if a number is a palindrome
    int userNumber;
    cout << "3. Enter a number: ";
    cin >> userNumber;

    cout << isPalindrome(userNumber) << endl; //outputs 1 for true and 0 for false because bool function

    // 4) Average of numbers in an array
    int size;

    cout << "4. Enter the number of elements: ";
    cin >> size;

    int numbers[size];  // array of that size

    // Take input from user
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Call the function and print result
    cout << "Average: " << average(numbers, size) << endl;

    // 5) Celcius to Farenheit 
    double tempC;

    cout << "5. Enter temperature in Celsius: ";
    cin >> tempC;

    double tempF = celsiusToFahrenheit(tempC);
    cout << "Temperature in Fahrenheit: " << tempF << endl;

    return 0;
}

// #1 Definition
string reverseString(string input) {
    string reversed = "";

    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    return reversed;
}

// #2 Definition
int countWords(string sentence) {
    int count = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            count++;
        }
    }

    // Add 1 only if there's at least one non-space character!!
    if(sentence.length() > 0 && sentence != " ") {
        count++;
    }

    return count;
}

// #3 Definition
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10; //Get the last digit of the number
        reversed = (reversed * 10) + digit; //update reversed number by adding the digit we just got
        num = num / 10; //Remove the last digit from the original number
    }

    return (original == reversed); // Return true if the number reads the same backward and forward
}

// #4 Definition
double average(int arr[], int size) {
    int sum = 0;

    // Add all elements in the array
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Divide by size, multiply by 1.0 to make it double
    return (sum * 1.0) / size;
}

// #5 Definition
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5) + 32;
}
