#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name (First and Last): " << endl;
    getline(cin, fullName); //to handle inputs with spaces

    //First name
    int i = 0; // index to loop over fullName
    
    while (i < fullName.length() && 
          ((fullName[i] >= 'a' && fullName[i] <= 'z') || 
           (fullName[i] >= 'A' && fullName[i] <= 'Z'))) {

         i++; //iterate for every i that is not a space (stops when space is found)
    }
    string first = fullName.substr(0, i); //store first name into variable
    
    //skip the space
    while (i < fullName.length() && fullName[i] == ' ') {
    i++;
}
    // Find where last name ends
    int Last_start = i; // starting index of last name
    while (i < fullName.length() && 
          ((fullName[i] >= 'a' && fullName[i] <= 'z') || 
           (fullName[i] >= 'A' && fullName[i] <= 'Z'))) {
        
        i++;
    }   
    string last = fullName.substr(Last_start, i - Last_start); //store last name into variable

    //PT 2 - convert first and last into uppercase!

    for (int c = 0; c < first.length(); c++) {
        if (first[c] >= 'a' && first[c] <= 'z') {
            first[c] = first[c] - 32;
    }
}
    for (int c = 0; c < last.length(); c++) {
        if (last[c] >= 'a' && last[c] <= 'z') {
            last[c] = last[c] - 32;
    }
}
    string transformedname = first + " " + last;
    cout << "Transformed name: " << transformedname << endl;

    return 0;

}