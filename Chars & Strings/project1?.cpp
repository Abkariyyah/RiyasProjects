#include <iostream>
#include <string>
using namespace std;

int main() {
string fullName = "Abkariyyah Ahmed";
string slice = fullName.substr(0, 10);
string slice2 = fullName.substr(11, 5);

//first name to uppercase
for (int i = 0; i < slice.length(); i++) {
        if (slice[i] >= 'a' && slice[i] <= 'z') {
            slice[i] = slice[i] - 32;
        }
    }

//last name to uppercase
for (int i = 0; i < slice2.length(); i++) {
        if (slice2[i] >= 'a' && slice2[i] <= 'z') {
            slice2[i] = slice2[i] - 32;
        }
    }

string transformedName = slice + " " + slice2;
cout << "Transformed name: " << transformedName << endl;
    

return 0;
}