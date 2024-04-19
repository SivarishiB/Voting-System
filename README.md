# Voting System

This program simulates a voting system where users can cast their votes for different political parties based on their eligibility criteria.

## Features

- **Login:** Users are required to enter their phone number and an OTP (one-time password) to access the voting system.
- **Details Input:** Users provide their personal details such as name, Aadhar number, age, and gender.
- **Eligibility Check:** The program checks if the user is eligible to vote based on their age (18 years or older).
- **Party Selection:** Eligible voters can choose their preferred political party from a list of options.
- **Booth Assignment:** Based on the voter's gender, the program assigns them to a specific voting booth.
- **Voting:** Voters cast their votes for their chosen party, and the program displays a confirmation message.
- **Error Handling:** The program includes error handling for invalid inputs and ensures a smooth voting process.

## Usage

1. **Compilation:** Compile the source code using a C++ compiler. For example:
   ```
   g++ -o voting_system voting_system.cpp
   ```

2. **Execution:** Run the compiled executable file. For example:
   ```
   ./voting_system
   ```

3. **Login:** Enter your phone number and the OTP provided to access the voting system.

4. **Details Input:** Provide your personal details such as name, Aadhar number, and age when prompted.

5. **Party Selection:** Choose your preferred political party from the list of options displayed.

6. **Voting:** Cast your vote for the selected party, and the program will display a confirmation message.

7. **Exit:** Once you have voted, the program will display a thank you message, and you can exit the program.

## File Structure

- **voting_system.cpp:** Contains the source code for the voting system program.
- **README.md:** This file providing information about the program.

## Notes

- Ensure that the OTP provided is secure and unique for each login attempt.
- Customize the list of political parties and voting booth assignments according to the specific election scenario.
- Implement additional features such as result calculation, voter turnout tracking, or data encryption for enhanced security.

## Author

[SIVARISHI B]
