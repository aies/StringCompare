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
            float long_length = getLongStrLen(str1, str2);
            float short_length = getShortStrLen(str1, str2);

            if (!isZeroScore(long_length, short_length)) {
                return getSubScore(long_length, short_length);
            }
        }
        return 0;
    }

private:
    float getSubScore(float long_length, float short_length)
    {
        return (1.0f - ((long_length - short_length) / short_length)) * 60.0f;
    }
    bool isZeroScore(float long_length, float short_length)
    {
        return long_length >= short_length * 2;
    }
    size_t getShortStrLen(std::string& str1, std::string& str2)
    {
        return (str1.length() < str2.length()) ? str1.length() : str2.length();
    }
    size_t getLongStrLen(std::string& str1, std::string& str2)
    {
        return (str1.length() > str2.length()) ? str1.length() : str2.length();
    }
};