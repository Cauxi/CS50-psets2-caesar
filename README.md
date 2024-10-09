# psets2-caesar

NOTE: Copying this data and using it for your submission will breach the academic honesty policy of CS50. Make sure to understand the material and solve the problem yourself—it's worth it!

This is my solution to the CS50 "Caesar" problem set, implemented in C. You can find the full problem description here: https://cs50.harvard.edu/x/2024/psets/2/caesar/

Problem Overview
In this problem set, I implemented a program that encrypts messages using Caesar’s cipher. The program takes in a plaintext message and a key, then shifts each letter by the given key according to the rules of Caesar’s cipher.

This was completed as part of CS50: Introduction to Computer Science. Posting this solution on GitHub complies with CS50’s academic honesty policy. For more context on sharing solutions, see this Reddit thread.

Program Structure
The main tasks in this program include:

Command-line Argument Handling: The program takes a single command-line argument (the key).
Encryption: The program shifts each alphabetical character in the plaintext by the number of positions specified by the key.
Case Preservation: It keeps the case (upper or lower) of each letter intact during encryption.
Non-alphabetic Characters: The program leaves non-alphabetic characters unchanged.
Key Steps:
Command-line Input: The program expects a single integer key as a command-line argument. If the input is invalid, it prompts the user with an error message.
Prompt for Plaintext: After validating the key, the program asks the user to enter the text they want to encrypt.
Cipher Calculation: Each letter in the input is shifted by the key using modular arithmetic, wrapping around the alphabet as necessary.
Print Ciphertext: The encrypted message (ciphertext) is printed out with all non-letter characters unchanged.

Note: This repository does not include CS50-provided files such as the Makefile or any standard libraries that were part of the course.

