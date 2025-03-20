# Regular Expressions (regex) possibilities in C++
This repository will be the place where I'll explore the possiblities of the Regular Expressions (Regex) in C++ using the <regrex> module of the std library.

### What are Regular Expressions?
Sequence of characters that define a search pattern. Used for text processing tasks such as searching, matching and replacing strings.

### Basic examples of Regular Expressions
| **Regex Pattern** | **Description** | **Example Matches** |
|------------------|---------------|----------------|
| `\d+` | Matches one or more digits | `"123"`, `"42"` |
| `\w+` | Matches one or more word characters (letters, numbers, `_`) | `"hello"`, `"user_123"` |
| `\s+` | Matches one or more whitespace characters | `" "` (space), `"\t"` (tab) |
| `^Hello` | Matches `"Hello"` only at the **start** of a string | `"Hello world"` ✅, `"Say Hello"` ❌ |
| `world$` | Matches `"world"` only at the **end** of a string | `"hello world"` ✅, `"worldwide"` ❌ |
| `colou?r` | Matches `"color"` and `"colour"` (optional `u`) | `"color"`, `"colour"` |
| `\bcat\b` | Matches the whole word `"cat"` (not part of another word) | `"cat"` ✅, `"catch"` ❌ |

You can check out a basic example of use of regex [here.](https://github.com/duartemv00/CPPRegrexPossibilities/blob/main/regexBasicExample.cpp)

In the example we use the regex_search() function that returns True if the pattern appears at least once.
The std::regex object is the one that stores the pattern we are searching for.

### Regex Iterators
Regex uses iterators to run through strings searching for multiple occurrences of a certain pattern, using functions like regex_iterator().
The elements used to construct an iterator are:
- Initial iterator index like string.begin()
- End interator index like string.end()
- std::regex object that represents the pattern to search
- An integer with value 
    - 0 if we want the matches to be stored or
    - -1 if we want the opposite to be stored.

So regex iterator works like this:
1. We buld a regex_iterator(). In that moment the iterator gets its first result, storing it into the std::smatch object.
2. Now the std::smatch object value can be accessed using a pointer to the iterator.
3. Each time we call ++ on the iterator, it will move to the next match using std::regex_search()
4. The iterator updates the std::smatch object with the new match in the std::smatch object.
5. When no more matches are found, the it iterator is set to std::sregex_iterator{}, which is like an empty iterator.

You can find a basic example of this logic [here](https://github.com/duartemv00/CPPRegrexPossibilities/blob/main/regexIteratorBasicExample.cpp).

### Real uses of Regular Expressions:
- **Split Text**
    - [Split text by a pattern]()
    - [Split text by a custom pattern]()
- **Search and Replace**: Finding patterns in text (e.g., validating email addresses).  
- **Data Extraction**: Extracting useful information from logs, web pages, or documents.  
- **Input Validation**: Checking if user input matches expected formats (e.g., phone numbers).  
