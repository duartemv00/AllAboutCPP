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

### Where Regular Expressions Are Used:
- **Search and Replace**: Finding patterns in text (e.g., validating email addresses).  
- **Data Extraction**: Extracting useful information from logs, web pages, or documents.  
- **Input Validation**: Checking if user input matches expected formats (e.g., phone numbers).  
