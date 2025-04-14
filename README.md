# ⚡ Modular Exponentiation & Power Tower Calculator

This C++ program provides two powerful number theory-based calculators:

1. **Power Tower Calculator**: Computes expressions of the form `a^(b^(c^(...))) % g` using efficient recursive exponentiation with Euler's Totient optimization.
2. **Product Exponent Calculator**: Computes `a^(b * c * d * ...) % z` using fast modular exponentiation.

---

## 🧮 Features

- **Fast Exponentiation (Binary Exponentiation)** for efficient computation of large powers.
- **Euler’s Totient Function** (`φ(n)`) for modulus reduction in recursive power towers.
- Handles very large exponent values gracefully.
- Interactive CLI (Command Line Interface).
- Clean and modular codebase.

---

## 📦 Usage

### 🔧 Compile

Use any modern C++ compiler. Example with `g++`:

```bash
g++ -o modcalc index.cpp
./modcalc
```

### 🌐 Option 2: Run on GDB Online

You can run this code online using [GDB Online](https://www.onlinegdb.com/online_c++_compiler), a free web-based C++ compiler.

#### 🔗 Steps:

1. Go to: [https://www.onlinegdb.com/online_c++_compiler](https://www.onlinegdb.com/online_c++_compiler).
2. Copy and paste the contents of `index.cpp` into the editor.
3. Scroll down to the **Standard Input** box.
4. Enter the input as expected by the program. Example:
5. Click **"Run"** to execute the program.
6. View the output in the **Output** section.
