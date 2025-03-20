#include <iostream>
#include <regex>
#include <string>
#include <vector>


int HowManyApples(const std::string text) {
    std::regex pattern(R"(apple?)");
    std::sregex_iterator it(text.begin(), text.end(), pattern);
    std::sregex_iterator end;

    int count = 0;
    while (it != end) {
        count++;
        ++it;
    }

    return count;
}

int main() {
    std::string text = "I went to the market to buy an apple. The vendor had a basket full of apples, each looking fresh and delicious. "
                       "I picked up an apple and took a bite—it was crisp and sweet. My friend also bought an apple, saying it was her favorite fruit. "
                       "As we walked home, we talked about different ways to eat an apple. Some like their apple sliced, while others prefer an apple whole. "
                       "I once tried baking an apple pie, but I accidentally burned the apple filling. "
                       "Later that day, I made an apple smoothie. The taste of blended apple with honey was amazing. "
                       "My brother stole an apple from my plate, laughing as he ran away. At night, I left an apple on the counter, thinking about how much I love this fruit.";
    
    std::cout << HowManyApples(text);

    return 0;
}