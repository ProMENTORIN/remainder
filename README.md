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
g++ -o modcalc main.cpp
