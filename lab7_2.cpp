#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string date;
    string movie;
    string quote;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    cin >> name;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << id-120000000 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: Next Monday....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin,quote);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \(^ ^)/";
}