// There are literally dozens of snooker competitions held each year, and team Jinotega tries to attend them all (for some reason they prefer
// name "snookah")! When a competition takes place somewhere far from their hometown, Ivan, Artsem and Konstantin take a flight to the contest
// and back.

// Jinotega's best friends, team Base have found a list of their itinerary receipts with information about departure and arrival airports.
// Now they wonder, where is Jinotega now: at home or at some competition far away? They know that:

// this list contains all Jinotega's flights in this year (in arbitrary order),
// Jinotega has only flown from his hometown to a snooker contest and back,
// after each competition Jinotega flies back home (though they may attend a competition in one place several times),
// and finally, at the beginning of the year Jinotega was at home.
// Please help them to determine Jinotega's location!

// Input
// In the first line of input there is a single integer n: the number of Jinotega's flights (1 ≤ n ≤ 100). In the second line there is a
// string of 3 capital Latin letters: the name of Jinotega's home airport. In the next n lines there is flight information, one flight per
// line, in form "XXX->YYY", where "XXX" is the name of departure airport "YYY" is the name of arrival airport. Exactly one of these airports
// is Jinotega's home airport.

// It is guaranteed that flights information is consistent with the knowledge of Jinotega's friends, which is described in the main part of
// the statement.

// Output
// If Jinotega is now at home, print "home" (without quotes), otherwise print "contest".

// Examples
// inputCopy
// 4
// SVO
// SVO->CDG
// LHR->SVO
// SVO->LHR
// CDG->SVO
// outputCopy
// home
// inputCopy
// 3
// SVO
// SVO->HKT
// HKT->SVO
// SVO->RAP
// outputCopy
// contest

#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main()
{

    int a;
    cin >> a;
    string d;
    cin >> d;
    vector<string> v;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string s1, s2;
    int dep = 0, arr = 0;
    for (int i = 0; i < v.size(); i++)
    {
        s1 = v[i].substr(0, 3);
        s2 = v[i].substr(5, 8);
        if (s1 == d)
        {
            dep++;
        }
        else if (s2 == d)
        {
            arr++;
        }
        s1.clear();
        s2.clear();
    }

    if (arr >= dep)
        cout << "home\n";
    else
        cout << "contest\n";

    return 0;
}