#include <iostream>
#include <cmath>
using namespace std;

void browniesRecipe() {
     int baseServing = 4;
     int serving;
     
     float chocolate = 200;
     float sugar = 150;
     float butter = 100;
     float egg = 2;
     float flour = 100;
     float cocoa = 2;
     
     cout << "=====simple brownies recipe=====" << endl;
     cout << "serving for 4 people\n";
     
     cout << "\nhow many people? ";
     cin >> serving;
     
     float scale = (float)serving / baseServing;
     
     cout << "\ningredient for " << serving <<" people: \n";
     cout << round(butter * scale) << "g butter\n"
          << round(chocolate * scale) << "g dark chocolate\n"
          << round(sugar * scale) << "g sugar\n"
          << round(egg * scale) << " eggs\n"
          << round(flour * scale) << "g flour\n"
          << round(cocoa * scale) << " tbsp cocoa powder" << endl;
     
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

     float flour = 200;
     float milk = 300;
     float egg = 2;
     float sugar = 50;
     float butter = 30;
     float bakingPowder = 1;

     cout << "=====simple pancakes recipe=====" << endl;
     cout << "serving for 4 people\n";
     cout << "\nhow many people? ";
     cin >> serving;
     float scale = (float)serving / baseServing;
     cout << "\ningredient for " << serving <<" people: \n";
     cout << round(flour * scale) << "g flour\n"
          << round(milk * scale) << "ml milk\n"
          << round(egg * scale) << " eggs\n"
          << round(sugar * scale) << "g sugar\n"
          << round(butter * scale) << "g butter\n"
          << round(bakingPowder * scale) << " tsp baking powder" << endl;

     cout << "\nInstructions:"<<endl;
     cout << "\t1. Mix dry ingredients.\n"
          << "\t2. Add milk and eggs.\n"
          << "\t3. Stir until smooth.\n"
          << "\t4. Cook on a pan until golden.\n" << endl;
}

void cookiesRecipe() {
     int baseServing = 4;
     int serving;

     float Flour = 250;
     float Butter = 120;
     float Sugar = 100;
     float Egg = 1;
     float ChocolateChips = 80;
     float Vanilla = 1;

     cout << "=====simple cookies recipe=====" << endl;
     cout << "serving for 4 people\n";
     cout << "\nhow many people? ";
     cin >> serving;
     float scale = (float)serving / baseServing;
     cout << "\ningredient for " << serving <<" people: \n";
     cout << round(Flour * scale) << "g flour\n"
          << round(Butter * scale) << "g butter\n"
          << round(Sugar * scale) << "g sugar\n"
          << round(Egg * scale) << " eggs\n"
          << round(ChocolateChips * scale) << "g chocolate chips\n"
          << round(Vanilla * scale) << " tsp vanilla" << endl;

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
