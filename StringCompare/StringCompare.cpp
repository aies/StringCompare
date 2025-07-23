#include <stdexcept>
#include <string>

using namespace std;

class StringCompare {
public:
    int getLengthScore(string str1, string str2) {

        if (str1.length() == str2.length())
            return 60;
        else
            return 0;
    }
};