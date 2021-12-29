#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour_string;
    hour_string = s.substr(0,2);
    int intSum = stoi(hour_string);
    size_t pos = s.find("PM");
    if(pos != std::string::npos){
        if(intSum + 12 < 24){
            hour_string = to_string(intSum + 12);
        }
    }
    else
    {
        if(intSum == 12)
            hour_string = "00";
    }
        
    return s.replace(0,2,hour_string).erase(s.size() - 2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
