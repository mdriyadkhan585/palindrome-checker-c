# Palindrome Checker Program 🕵️‍♂️
---
[In Python](https://github.com/mdriyadkhan585/palindrome-checker-python)

[In Python GUI](https://github.com/mdriyadkhan585/palindrome-checker-gui)

![Logo](logo.svg)

---
Welcome to the Palindrome Checker program! This C application checks whether a given string is a palindrome—a word, phrase, or sequence that reads the same backward as forward. Follow the instructions below to use and understand this program.

## Features ✨

- **Checks for Palindromes**: Determines if the input string reads the same forward and backward, ignoring non-alphanumeric characters and case.
- **User-Friendly Loop**: Allows multiple checks in one run of the program.
- **Input Validation**: Handles empty strings and provides informative messages.

## How to Use 📜

### Compilation ⚙️

1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Save the code into a file named `palindrome_checker.c`.

```bash
    git clone https://github.com/mdriyadkhan585/palindrome-checker-c
    cd palindrome-checker-c
    gcc -o palindrome_checker palindrome_checker.c
```

This command compiles the code and generates an executable named `palindrome_checker`.

### Running the Program 🚀

1. Run the compiled executable.

```bash
./palindrome_checker
```

2. The program will prompt you to enter a string.

3. After you enter a string, it will determine if the string is a palindrome and display the result.

4. You will then be asked if you want to check another string. Type `y` or `Y` to continue, or `n` or `N` to exit.

### Example Usage 🖥️

```plaintext
Enter a string: A man a plan a canal Panama
The input string is a palindrome.
Do you want to check another string? (y/n): y
Enter a string: Hello, World!
The input string is not a palindrome.
Do you want to check another string? (y/n): n
Exiting the program.
```

## Code Overview 📝

### `isPalindrome` Function 🔍

- **Purpose**: Checks if the string is a palindrome.
- **How It Works**:
  - Uses two pointers to compare characters from the start and end.
  - Skips non-alphanumeric characters and ignores case.

### `main` Function 🏠

- **Purpose**: Manages user input and interaction.
- **Features**:
  - Reads the input string.
  - Removes the newline character.
  - Checks if the string is empty and prompts the user accordingly.
  - Asks if the user wants to check another string.

## Troubleshooting 🛠️

- **Input Issues**: If you encounter errors reading input, ensure your environment supports `fgets`.
- **Compilation Errors**: Make sure you have a compatible C compiler and that the code is saved correctly.

## Contributing 🤝

Feel free to contribute by improving the code or adding features. Submit pull requests or suggestions via [GitHub](https://github.com/mdriyadkhan585).

## License 📜

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
