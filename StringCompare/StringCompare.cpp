#include <stdexcept>
#include <string>

using namespace std;

class StringCompare {
public:
    int getLengthScore(string str1, string str2) {
        if (str1.length() == str2.length()) {
            return 60;
        }
        else {
            float long_length = (str1.length() > str2.length()) ? str1.length() : str2.length();
            float short_length = (str1.length() < str2.length()) ? str1.length() : str2.length();

            if (long_length >= short_length * 2) {
                return 0;
            }
            return (1.0f - ((long_length - short_length) / short_length)) * 60.0f;
        }
        return 0;
    }
};