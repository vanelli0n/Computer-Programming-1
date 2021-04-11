// Letter Checker
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// October 28, 2020

#include <iostream>
using namespace std;

int main()
{
    string line;
    int vowels, consonants;

    vowels =  consonants = 0;

    cout << "Enter a line of string: ";
    getline(cin, line);

    for(int i = 0; i < line.length(); ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
