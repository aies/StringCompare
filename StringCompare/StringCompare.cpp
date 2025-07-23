#include <stdexcept>
#include <string>

using namespace std;

class StringCompare {
public:
    int getLengthScore(string str1, string str2) {
        int long_length = getLongStrLen(str1, str2);
        int short_length = getShortStrLen(str1, str2);

        return getCalcScore(long_length, short_length);
    }

private:
    float getCalcScore(const float& long_length, const float& short_length)
    {
        return (1.0f - fpMin((long_length - short_length) / short_length, 1.0f)) * 60.0f;
    }

    size_t getShortStrLen(std::string& str1, std::string& str2)
    {
        return (str1.length() < str2.length()) ? str1.length() : str2.length();
    }

    size_t getLongStrLen(std::string& str1, std::string& str2)
    {
        return (str1.length() > str2.length()) ? str1.length() : str2.length();
    }

    float fpMin(float a, float b)
    {
        return (a > b) ? b : a;
    }
};