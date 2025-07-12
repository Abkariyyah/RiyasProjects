#include <iostream>
#include <vector>
using namespace std;

class Recipe {
private:
    string title;
    vector<string> ingredients;
    int cookTime;

public:
    // Constructor
    Recipe(string t, int time) {
        title = t;
        cookTime = time;
    }

    // addIngredient
    void addIngredient(string ing) {
        ingredients.push_back(ing);  //push_back = add to the end
    }

    // printRecipe
    void printRecipe() {
        cout << "Recipe Title: " << title << endl;
        cout << "Cook Time: " << cookTime << " minutes" << endl;
        cout << "Ingredients:" << endl;
        for (string ing : ingredients) {
            cout << "- " << ing << endl;
        }
    }
};

int main() {
    // Create a Recipe object on the stack (no new)
    Recipe pancakes("Pancakes", 20);

    // Add a few ingredients using addIngredient()
    pancakes.addIngredient("Eggs");
    pancakes.addIngredient("Milk");
    pancakes.addIngredient("Flour");

    // Call printRecipe() to test your class
    pancakes.printRecipe();

    return 0;
}

