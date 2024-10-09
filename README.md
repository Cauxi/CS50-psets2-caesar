# psets2-caesar

<strong>NOTE</strong>: Copying this data and using it for your submission will breach the academic honesty policy of CS50. Please make sure to understand the material and solve the problem yourself—it's worth it!

<p>This is my solution to the CS50 "Caesar" problem set, implemented in C. You can find the full problem description <a href="https://cs50.harvard.edu/x/2024/psets/2/caesar/">here</a>.</p>
Problem Overview
<p>In this problem set, I implemented a program that encrypts messages using Caesar’s cipher. The program takes in a plaintext message and a key, then shifts each letter by the given key according to the rules of Caesar’s cipher.</p> <p>This was completed as part of <strong>CS50: Introduction to Computer Science</strong>. Posting this solution on GitHub complies with CS50’s academic honesty policy. For more context on sharing solutions, see this <a href="https://www.reddit.com/r/cs50/comments/63235w/is_this_reasonable/">Reddit thread</a>.</p>
Program Structure
<ul> <li><strong>Command-line Argument Handling</strong>: The program takes a single command-line argument (the key).</li> <li><strong>Encryption</strong>: The program shifts each alphabetical character in the plaintext by the number of positions specified by the key.</li> <li><strong>Case Preservation</strong>: It keeps the case (upper or lower) of each letter intact during encryption.</li> <li><strong>Non-alphabetic Characters</strong>: The program leaves non-alphabetic characters unchanged.</li> </ul>
Key Steps:
<ol> <li><strong>Command-line Input</strong>: The program expects a single integer key as a command-line argument. If the input is invalid, it prompts the user with an error message.</li> <li><strong>Prompt for Plaintext</strong>: After validating the key, the program asks the user to enter the text they want to encrypt.</li> <li><strong>Cipher Calculation</strong>: Each letter in the input is shifted by the key using modular arithmetic, wrapping around the alphabet as necessary.</li> <li><strong>Print Ciphertext</strong>: The encrypted message (ciphertext) is printed out with all non-letter characters unchanged.</li> </ol> <p>Note: This repository does not include CS50-provided files such as the Makefile or any standard libraries that were part of the course.</p>
