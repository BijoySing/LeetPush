Pure “click-to-switch tabs” like a web app doesn’t exist in normal GitHub `README.md`. Markdown is static. But you can get very close using anchor links + collapsible sections + badge-style buttons.

Here’s a clean pattern that people actually use.

---

## ✅ Option: Tabs using anchors + sections (best for README)

### Top “tabs”

```md
### 🧭 Select Level

[Simple](#simple) • [Medium](#medium) • [Optimal](#optimal)
```

---

## 🟢 SIMPLE

### Language options

```md
[CPP](#simple-cpp) • [Python](#simple-python) • [Java](#simple-java) • [JS](#simple-js) • [Go](#simple-go)
```

### C++

```cpp
// Simple - C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello Simple C++";
}
```

### Python

```python
print("Hello Simple Python")
```

### Java

```java
class Main {
    public static void main(String[] args) {
        System.out.println("Hello Simple Java");
    }
}
```

### JavaScript

```javascript
console.log("Hello Simple JS");
```

### Go

```go
package main
import "fmt"

func main() {
    fmt.Println("Hello Simple Go")
}
```

---

## 🟡 MEDIUM

```md
[CPP](#medium-cpp) • [Python](#medium-python) • [Java](#medium-java) • [JS](#medium-js) • [Go](#medium-go)
```

(then same structure with medium solutions)

---

## 🔴 OPTIMAL

```md
[CPP](#optimal-cpp) • [Python](#optimal-python) • [Java](#optimal-java) • [JS](#optimal-js) • [Go](#optimal-go)
```

(then optimized solutions)

---

## ⭐ Better UI Trick (looks like buttons)

You can also make it look like real buttons using badges:

```md
### 🧭 Select Level

[![Simple](https://img.shields.io/badge/Simple-green)](#simple)
[![Medium](https://img.shields.io/badge/Medium-yellow)](#medium)
[![Optimal](https://img.shields.io/badge/Optimal-red)](#optimal)
```

And for languages:

```md
[![C++](https://img.shields.io/badge/C++-blue)](#simple-cpp)
[![Python](https://img.shields.io/badge/Python-yellow)](#simple-python)
[![Java](https://img.shields.io/badge/Java-red)](#simple-java)
[![JS](https://img.shields.io/badge/JS-black)](#simple-js)
[![Go](https://img.shields.io/badge/Go-cyan)](#simple-go)
```

---

## Bottom line

* Real tabs → ❌ not possible in README.md
* Anchor navigation → ✅ best standard solution
* Badge buttons → ✅ makes it feel like UI
* `<details>` → optional for collapsible sections

---

If you want, I can turn this into a **fully ready LeetCode README template** with 3 problems structure + auto-generated sections for all 5 languages.
