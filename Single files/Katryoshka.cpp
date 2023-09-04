#include<cmath>
#include <iostream>
using namespace std;


int main()
{
	long long eye,mouth,body, Katryoshka=0;
    cin >> eye>>mouth>>body;

    if (eye == 0 || body == 0){
        cout << "0" << endl;

    }
	else{ 
        
        long long  mn = min(min(eye, mouth), body);
        eye -= mn;
        mouth -= mn;
        body -= mn;
        Katryoshka = mn;
           
        Katryoshka += min(eye / 2, body);
       
           
        cout << Katryoshka << endl;
    }

    return 0;
}
