# 💳 Credit Card Validator (C++)

This project is a console-based credit card validator built in **C++**, which uses the **Luhn Algorithm** to verify the authenticity of a credit card number.

---

## 📌 Features

- ✅ Validates credit card numbers using the Luhn algorithm
- 🚫 Rejects invalid input (non-numeric characters)
- 🔁 Allows continuous input until the user types `exit`
- 💬 Clear and friendly user interface

---

## 📚 How the Luhn Algorithm Works

1. Starting from the **rightmost digit**, move left and **double every second digit**.
2. If doubling the digit results in a number **greater than 9**, subtract **9** from it.
3. Sum all digits.
4. If the total modulo 10 is 0, the card is **valid** otherwise **invalid**.

---

## 🛠️ Technologies Used

- C++
- Standard Input/Output
- STL `string`
- Luhn Algorithm

---
## How to Use

1. Clone or download the repository.
2. Compile the `CCvalidator.cpp` file using a C++ compiler:

---

## Example
Please enter a CC number to validate: 79927398713
Credit card number 79927398713 is valid.

Please enter a CC number to validate: 123456789
Credit card number 123456789 is invalid.

---


