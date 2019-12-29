#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s1, s2, s3;
    for (int l = 0; l < n; ++l)
    {
      cin >> s1 >> s2 >> s3;
      if (s1.find(s2) == 0 || s2.find(s3) == 0 || s1.find(s3) == 0 || s3.find(s1) == 0 || s3.find(s2) == 0 ||
          s2.find(s1) == 0 || (s1.rfind(s2) != -1 && s1.rfind(s2) + s2.size() == s1.size()) || (s2.rfind(s3) != -1 &&s2.rfind(s3) + s3.size() == s2.size()) || (s1.rfind(s3) != -1 && s1.rfind(s3) + s3.size() == s1.size())|| (s3.rfind(s1) != -1 && s3.rfind(s1) + s1.size() == s3.size()) || (s3.rfind(s2) != -1 && s3.rfind(s2) + s2.size() == s3.size())|| (s2.rfind(s1) != -1 && s2.rfind(s1) + s1.size() == s2.size()))
          cout << "No" << endl;
      else
        cout << "Yes" << endl;
    }
    return 0;
}