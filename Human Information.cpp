#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    struct human
    {
        string name;
        float height;
        int age;
        string color_eyes;
        string color_hair;

    };
    vector<human>vek(4);
    vek[0]={"Kevin",178,15,"green","brown"};
    vek[1]={"Johny",185,21,"brown","dark"};
    vek[2]={"Bob",180,34,"blue","blonde"};
    vek[3]={"Jakub",189,21,"green","brown"};
    for(int i=0;i<4;i++)
    {
        cout << "INFORMATION about " << "HUMAN " << i+1 << endl;
        cout << " -------------------------------------" << endl;
        cout << "Name: " << vek[i].name << endl;
        cout << "Height: " << vek[i].height << endl;
        cout << "Age: " << vek[i].age << endl;
        cout << "Eyes color: " << vek[i].color_eyes << endl;
        cout << "Hair color: " << vek[i].color_hair << endl;
        cout << " -------------------------------------" << endl;
        cout << endl;

    }
    return 0;
}
