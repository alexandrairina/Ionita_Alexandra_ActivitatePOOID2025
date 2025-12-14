#include <iostream>
#include <string>

using namespace std;

int main() {
    string recipeNames[5];
    string ingredients[5][5];
    int recipeCount = 0;
    int choice;

    do {
        cout << "\n--- Recipe App ---\n";
        cout << "1. Add Recipe\n";
        cout << "2. View Recipes\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (recipeCount >= 5) {
                cout << "Recipe list is full.\n";
                continue;
            }

            cout << "Enter recipe name: ";
            cin.ignore();
            getline(cin, recipeNames[recipeCount]);

            cout << "Enter 5 ingredients:\n";
            for (int i = 0; i < 5; i++) {
                cout << "Ingredient " << i + 1 << ": ";
                getline(cin, ingredients[recipeCount][i]);
            }

            recipeCount++;
            cout << "Recipe added!\n";
        }

        else if (choice == 2) {
            if (recipeCount == 0) {
                cout << "No recipes available.\n";
            }
            else {
                for (int i = 0; i < recipeCount; i++) {
                    cout << "\nRecipe " << i + 1 << ": " << recipeNames[i] << endl;
                    cout << "Ingredients:\n";
                    for (int j = 0; j < 5; j++) {
                        cout << "- " << ingredients[i][j] << endl;
                    }
                }
            }
        }

        else if (choice == 3) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);

    return 0;
}
