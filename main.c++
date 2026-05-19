#include <iostream>
#include <cmath>
using namespace std;

int main() {
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

    return 0;
}
