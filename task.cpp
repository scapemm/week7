/*#include <bits/stdc++.h>
using namespace std;
int main() {
    double temperature,speed;
    do{
        cout << "Enter the temperature in Fahrenheit between -58F and 41F:\n";
        cin >> temperature;
        //temperature = temperature *9/5 + 32;
    }
    while(temperature<-58 || temperature>41);
    
    do{
        cout << "Enter the wind speed (>=2) in miles per hour:\n";
        cin >> speed;
    }
    while(speed<2);
    
    
    double ans;
    ans = 35.74 + 0.6215*temperature - 35.75*pow(speed,0.16) + 0.4275*temperature*pow(speed,0.16);
    cout << "The wind chill index is "<<ans << "\n";

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(c%b==0 && c%a==0){
        cout << "Yes they are\n";
    }
    else cout << "No they are not!\n";
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int fib(int x){
    if(x==1) return 0;
    else if(x==2) return 1;
    else return fib(x-1)+fib(x-2);
}
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n+1; ++i){
        cout << fib(i);
        if(i!=n+1) cout << ',';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << "Encryption\n";
    for(int i=0; i<s.size(); ++i){
        s[i] = char(48+(int(s[i])-48+7) % 10);
    }
    swap(s[0],s[2]);
    swap(s[1],s[3]);
    cout << s << "\n";
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// '5' - 48+5; !=5

int main() {
    string s;
    cin >> s;
    cout << "Decryption\n";
    for(int i=0; i<s.size(); ++i){
        s[i] = char(48+((int(s[i])-48-7)+10)% 10);
    }
    swap(s[0],s[2]);
    swap(s[1],s[3]);
    cout << s << "\n";
    
    return 0;
}
*/
