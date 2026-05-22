#include <iostream>
#include <cmath>
using namespace std;

struct Ingredient{
    string name;
    float amount;
    string unit;
};

void showIngredients(Ingredient recipe[], int size, int baseServing) {
     int serving;
     cout << "\nhow many people? ";
     cin >> serving;
     
     if (serving <= 0) {
          cout << "Invalid number of people." << endl;
          return;
     }

     float scale = (float)serving / baseServing;
     
     cout << "\ningredient for " << serving <<" people: \n";
     for (int i = 0; i < 6; i++){
          cout << round(recipe[i].amount * scale) << " "
               << recipe[i].unit << " "
               << recipe[i].name << endl;
     }   
}

void browniesRecipe() {
     int baseServing = 4;
     int serving;
     
     ingredient brownies[6] = { 
     {"dark chocolate", 200, "g"}, 
     {"sugar", 150, "g"}, 
     {"butter", 100, "g"}, 
     {"egg", 2, "eggs"}, 
     {"flour", 100, "g"}, 
     {"cocoa powder", 2, "tbsp"} 
     };
     
     cout << "=====simple brownies recipe=====" << endl;
     cout << "serving for 4 people\n";
     
     showIngredients(brownies, 6, baseServing);
     
     cout << "\nInstructions:"<<endl;
     cout << "\t1. Melt the butter and chocolate together.\n"
          << "\t2. Mix in the sugar and eggs.\n"
          << "\t3. Add the flour and cocoa powder. Stir well.\n"
          << "\t4. Pour the batter into a baking pan.\n"
          << "\t5. Bake at 180 C for about 25 minutes.\n"
          << "\t6. Let it cool, then cut into pieces." << endl;
}

void pancakesRecipe() {
     int baseServing = 4;
     int serving;

     ingredient pancakes[6] = {
     {"flour", 200, "g"},
     {"milk", 300, "ml"},
     {"egg", 2, "eggs"},
     {"sugar", 50, "g"},
     {"butter", 30, "g"},
     {"baking powder", 1, "tsp"}
     };

     cout << "=====simple pancakes recipe=====" << endl;
     cout << "serving for 4 people\n";
     cout << "\nhow many people? ";
     cin >> serving;

     cout << "\ningredient for "
          << serving
          <<" people: \n";
    
     showIngredients(pancakes, 6, baseServing);
    
     cout << "\nInstructions:"<<endl;
     cout << "\t1. Mix dry ingredients.\n"
          << "\t2. Add milk and eggs.\n"
          << "\t3. Stir until smooth.\n"
          << "\t4. Cook on a pan until golden.\n" << endl;
}

void cookiesRecipe() {
     int baseServing = 4;
     int serving;

     ingredient cookies[6] = {
     {"flour", 250, "g"},
     {"butter", 120, "g"},
     {"sugar", 100, "g"},
     {"egg", 1, "eggs"},
     {"chocolate chips", 80, "g"},
     {"vanilla", 1, "tsp"}
     };

     cout << "=====simple cookies recipe=====" << endl;
     cout << "serving for 4 people\n";
    
     showIngredients(cookies, 6, baseServing);

     cout << "\nInstructions:"<<endl;
     cout << "\t1. Mix butter and sugar.\n"
          << "\t2. Add egg and vanilla.\n"
          << "\t3. Add flour and chocolate chips.\n"
          << "\t4. Shape into cookies.\n"
          << "\t5. Bake at 170 C for 15 minutes.\n" << endl;
 }

int main() {
     int choice;

     cout << "====Recipe Scaler====" << endl;
     cout << "1. Brownies\n";
     cout << "2. Pancakes\n";
     cout << "3. Cookies\n";
     cout << "Choose recipe: ";
     cin >> choice;

     switch (choice)
     {
     case 1:
          /* code for Brownies */
          browniesRecipe();
          break;
     case 2:
          /* code for Pancakes */
          pancakesRecipe();
          break;
     case 3:
          /* code for Cookies */
          cookiesRecipe();
          break;
     default:
          cout << "Invalid choice." << endl;
          break;
     }

     return 0;
}
