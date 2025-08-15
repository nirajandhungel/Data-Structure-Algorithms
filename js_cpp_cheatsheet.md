# JavaScript vs C++ Cheat Sheet

## 1️⃣ Arrays / Vectors

| Operation                        | JavaScript (Array)                  | C++ (Array / Vector)                             |
|----------------------------------|-----------------------------------|-------------------------------------------------|
| Declare                           | `let arr = [1,2,3];`             | `int arr[3] = {1,2,3};` <br> `vector<int> v = {1,2,3};` |
| Length / Size                     | `arr.length`                      | `sizeof(arr)/sizeof(arr[0])` (array) <br> `v.size()` (vector) |
| Access element                    | `arr[0]`                          | `arr[0]` / `v[0]`                               |
| Modify element                     | `arr[1] = 5`                     | `arr[1] = 5` / `v[1] = 5`                       |
| Push / Append                      | `arr.push(4)`                     | `v.push_back(4)`                                |
| Pop / Remove last                  | `arr.pop()`                        | `v.pop_back()`                                  |
| Remove first                       | `arr.shift()`                      | `v.erase(v.begin())`                            |
| Add at beginning                   | `arr.unshift(0)`                   | `v.insert(v.begin(), 0)`                        |
| Reverse                            | `arr.reverse()`                    | `reverse(arr, arr+n)` (array) <br> `reverse(v.begin(), v.end())` (vector) |
| Sort                               | `arr.sort()`                        | `sort(arr, arr+n)` <br> `sort(v.begin(), v.end())` |
| Find index                          | `arr.indexOf(3)`                   | Manual loop or `find(v.begin(), v.end(), 3) - v.begin()` (vector) |
| Map / Transform                     | `arr.map(x => x*2)`               | Manual loop or algorithm with `vector`         |
| Filter                              | `arr.filter(x => x>2)`            | Manual loop                                     |
| Includes / Contains                 | `arr.includes(3)`                  | `find(v.begin(), v.end(), 3) != v.end()`      |

---

## 2️⃣ Strings

| Operation                          | JavaScript (String)               | C++ (`std::string`)                             |
|-----------------------------------|---------------------------------|------------------------------------------------|
| Declaration                        | `let str = "hello";`             | `string str = "hello";`                        |
| Length                             | `str.length`                     | `str.length()` or `str.size()`                 |
| Access char                        | `str[0]`                         | `str[0]` or `str.at(0)`                        |
| Modify char                        | `str[0] = 'H'` (not recommended) | `str[0] = 'H'`                                  |
| Uppercase                          | `str.toUpperCase()`              | `transform(str.begin(), str.end(), str.begin(), ::toupper)`    |
| Lowercase                          | `str.toLowerCase()`              | `transform(str.begin(), str.end(), str.begin(), ::tolower)`    |
| Substring                          | `str.slice(1, 4)`                 | `str.substr(1, 3)`                              |
| Find char                           | `str.indexOf('e')`               | `str.find('e')`                                |
| Find substring                      | `str.indexOf('ell')`             | `str.find("ell")`                             |
| Not found                           | Returns -1                        | Returns `string::npos`                          |
| Replace                             | `str.replace('l', 'x')`          | `replace(str.begin(), str.end(), 'l', 'x')`    |
| Concatenate                         | `str + " world"`                 | `str + " world"`                               |
| Split                               | `str.split(' ')`                  | Manual with `getline` or `stringstream`        |
| Join (array → string)               | `arr.join(' ')`                    | Manual loop or `ostringstream`                |
| Trim whitespace                     | `str.trim()`                      | No built-in (use algorithms)                   |
| Starts with                         | `str.startsWith("he")`          | `str.rfind("he", 0) == 0`                     |
| Ends with                           | `str.endsWith("lo")`            | `str.size() >= s2.size() && str.compare(str.size()-s2.size(), s2.size(), s2) == 0` |
| Reverse                             | `str.split('').reverse().join('')` | `reverse(str.begin(), str.end())`              |
| Convert to array                     | `str.split('')`                    | `vector<char> v(str.begin(), str.end())`       |

---

### 💡 Notes / Tips

1. Arrays in JS are dynamic; in C++ raw arrays are fixed-size, vectors are dynamic.
2. Strings in JS are immutable; `str.toUpperCase()` returns a new string.
3. C++ often uses loops + algorithms instead of built-in methods.
4. `reverse()` in C++ always needs iterators / pointers.
5. `string::npos` is used to indicate "not found".
6. `::` is the **scope resolution operator**, used to access members inside classes or namespaces.

