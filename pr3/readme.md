# 📘 Assignment(Looper) — C Programming (Q-1 to Q-3)

This document contains 3 C programs demonstrating loop, arithmetic operations, and digit processing concepts.

---

## ✅ Q.1) Alphabet Skipper : Develop a program that prints all alphabets from "a' to "z' by skipping 3 alphabets using a do-while loop.

### 📌 **Problem Statement**
Develop a program that prints all alphabets from **'a' to 'z'** by **skipping 3 alphabets** using a **do-while loop**.

### 🛠 **Logic Used**
- Start from character `'a'`
- Print current character
- Increase it by **4** (skip 3 letters)
- Repeat until `'z'`

### 🧠 **Concepts**
✔ ASCII character handling  
✔ do-while loop  
✔ Increment logic

### ▶️ **Sample Output**

<img width="1536" height="1024" alt="img1" src="https://github.com/user-attachments/assets/55319ada-4786-4787-9b3f-f50f398cf983" />


```
a e i m q u y
```

---

## ✅ Q.2) Digit Counter : Develop a Program to count the total number of digits in a number.

### 📌 **Problem Statement**
Develop a program to **count total digits** in a number.

### 🛠 **Logic Used**
- If number is `0`, digit count = 1
- Otherwise divide number by **10** until it becomes **0**
- Count total iterations

### 🧠 **Concepts**
✔ while loop  
✔ integer division  
✔ conditional logic  

### ▶️ **Sample Output**

<img width="1536" height="1024" alt="img-2" src="https://github.com/user-attachments/assets/b38beb01-0ede-4ca0-a5a4-b22c6358cff6" />


```
Input: 50836
Output: Total number of digits: 5
```

---

## ✅ Q.3) Digit Addition : Develop a Program to find the sum of a number's first and last digits.

### 📌 **Problem Statement**
Develop a program to **find the sum of the first and last digits** of a number.

### 🛠 **Logic Used**
- Last digit = `num % 10`
- First digit = repeatedly divide by `10` until `< 10`
- Sum = first digit + last digit

### 🧠 **Concepts**
✔ modulus operator  
✔ while loop  
✔ digit extraction  

### ▶️ **Sample Output**

<img width="1536" height="1024" alt="img3" src="https://github.com/user-attachments/assets/decd65b5-6eee-4ff2-9a02-5e2068a6bf0e" />

```
Input: 82647
Output: The sum of the first and the last digit: 15
```

---

## 🏁 **Conclusion**
These three programs cover basic C programming techniques:

✔ Character handling & skipping logic  
✔ Mathematical operations on integers  
✔ Loop-based digit extraction  

They are essential foundations for building more advanced C algorithms.
