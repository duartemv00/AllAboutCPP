#include<iostream>
#include<regex>
#include<string>
#include<vector>

/**
 * You can use the regex function to split a word due to a certain pattern using sregex_iterator()
 * 
 */
std::vector<std::string> splitStringWithCustomPattern(const std::string text, const std::string pattern) {
    std::vector<std::string> words;

    std::regex regexPattern("[" + pattern + "]");
    std::sregex_token_iterator it(text.begin(), text.end(), regexPattern, -1);
    // The -1 parameter in the sregex_token_iterator constructor is used to return the tokens that are not matched by the regex pattern.
    // If you want to return the tokens that are matched by the regex pattern, you should use 0 instead of -1.
    std::sregex_token_iterator end;

    while (it != end) {
        words.push_back(*it);
        ++it;
        // When ++it is called, it will move to the next match using std::regex_search()
        // and stores the match in the std::smatch object.
        // that is why we use *it to get the match in each iteration.
    }
    // When no more matches are found, the it iterator is set to std::sregex_iterator{} (empty iterator). That is why we compare it with end.

    return words;
}

int main() {
    std::string text = "apple,peach banana;grape|orange";
    std::string pattern = ",;| ";

    std::vector<std::string> words = 
        splitStringWithCustomPattern(text, pattern);

    for(auto word : words){
        std::cout<<word<<"\n";
    }

    return 0;
}