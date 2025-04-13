# Regular Expressions (regex) possibilities in C++

### What are Regular Expressions?
Sequence of characters that define a search pattern. Used for text processing tasks such as searching, matching and replacing strings.

### Basic examples of syntaxis of Regular Expressions
| **Regex Pattern** | **Description** | **Example Matches** |
|------------------|---------------|----------------|
| `\d+` | Matches one or more digits | `"123"`, `"42"` |
| `\w+` | Matches one or more word characters (letters, numbers, `_`) | `"hello"`, `"user_123"` |
| `\s+` | Matches one or more whitespace characters | `" "` (space), `"\t"` (tab) |
| `^Hello` | Matches `"Hello"` only at the **start** of a string | `"Hello world"` ✅, `"Say Hello"` ❌ |
| `world$` | Matches `"world"` only at the **end** of a string | `"hello world"` ✅, `"worldwide"` ❌ |
| `colou?r` | Matches `"color"` and `"colour"` (optional `u`) | `"color"`, `"colour"` |
| `\bcat\b` | Matches the whole word `"cat"` (not part of another word) | `"cat"` ✅, `"catch"` ❌ |

### Vocabulary
- **Full match**: When the whole string matches the pattern.
- **Sub match**: Every concurrency of the pattern within the string.

### Regex Algorithms
- **regex_search**(std::string text, std::regex pattern) 
    - Returns True is the pattern appears at least once in the text. 
    - You can optionaly store the results inside a std::smatch object: regex_search(std::string text, std::smatch match, std::regex pattern) 
    - [Example](https://github.com/duartemv00/CPPRegrexPossibilities/blob/main/regexBasicExample.cpp)
- **regex_match(std::string text, std::smatch match, std::regex pattern)** 
    - Returns True only if the entire text matches the pattern. 
    - You can optionaly store the results inside a std::smatch object: regex_match(std::string text, std::smatch match, std::regex pattern) 
    - [Example]()
- **regex_replace(std::string text, std::regex pattern, std::string replacement)** 
    - Returns a std::string with all matches of the pattern inside the text replaced with the replacement. 
    - [Example]()

### Regex Iterators
Regex uses iterators to run through strings searching for multiple occurrences of a certain pattern.

The elements used to construct an iterator are:
- Initial iterator index like string.begin()
- End interator index like string.end()
- std::regex object that represents the pattern to search

So regex iterator works like this:
1. We buld a regex_iterator(). In that moment the iterator gets its first result, storing it into the std::smatch object.
2. Now the std::smatch object value can be accessed using a pointer to the iterator.
3. Each time we call ++ on the iterator, it will move to the next match using std::regex_search()
4. The iterator updates the std::smatch object with the new match in the std::smatch object.
5. When no more matches are found, the it iterator is set to std::sregex_iterator{}, which is like an empty iterator.

We have 2 different iterators:
- **regex_iterator()** is useful when you need to iterate over all full matches of a regex pattern. [Example]()
- **regex_token_iterator()** allows specific functionality like:
    - Extract specific submatches from each match. [Example]()
    - Split a string based on a regex pattern. [Example]()
    - Iterate over both matching and non-matching parts. [Example]()

### Real uses of Regular Expressions:
- **Split Text**
    - [Split text by a pattern]()
    - [Split text by a custom pattern]()
- **Search and Replace**: Finding patterns in text (e.g., validating email addresses).  
- **Data Extraction**: Extracting useful information from logs, web pages, or documents.  
- **Input Validation**: Checking if user input matches expected formats (e.g., phone numbers).  


### Bibliography
- [cppreference](https://en.cppreference.com/w/cpp/regex)