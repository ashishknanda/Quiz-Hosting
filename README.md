# Quiz-Hosting

A simple console-based quiz hosting application written in C++. The program allows a host to run through a set of quiz questions, accept answers from participants, keep track of scores, and display results at the end.

## Table of Contents

- [Features](#features)  
- [Requirements](#requirements)  
- [Compilation & Usage](#compilation-&-usage)  
- [Code Overview](#code-overview) 
- [Limitations & Known Issues](#limitations-&-known-issues)  
- [Future Enhancements](#future-enhancements)  
- [Author](#author)  
- [License](#license)  

## Features

- Uses a simple console interface to ask multiple‐choice questions.  
- Tracks the number of correct/incorrect answers and computes a score.  
- At the end, displays the final result (score) to the user.  
- Easy to compile and run on any environment with a C++ compiler (e.g., g++).

## Requirements

- A C++ compiler supporting at least C++11 (or as required by your code).  
- A terminal/console to run the executable.  
- Operating system: Windows, Linux or macOS (no external dependencies noted).

## Compilation & Usage

Clone the repository (if not already):
```bash
git clone https://github.com/ashishknanda/Quiz-Hosting.git
cd Quiz-Hosting

```


## Code Overview

- The main program (located in Quiz By Ashish.cpp) follows this high‐level flow:
- Defines a set of quiz questions (with options and correct answers).
- Presents each question in turn, prompts the user for input (e.g., A/B/C/D).
- Validates the input and updates a running score.
- After all questions are answered, prints the final score and possibly some feedback.

## Key points to note

- The questions appear to be hardcoded in the source file — to change or extend the quiz you must modify the file and recompile.
- The program assumes text‐based input and single player mode.
- The variable names, control flow and UI are minimal (console only).
- (If applicable) The code currently uses simple constructs and may not handle invalid input robustly (e.g., non‐option characters).
- (If applicable) There is no persistence (scores, history) or multi‐user support.

## Limitations & Known Issues

- Quiz questions are embedded in code — adding new questions requires modifying source and recompiling.
- Single player only; no multiplayer, no network or UI beyond console.
- Input validation may be minimal (e.g., unexpected characters might cause issues).
- No timer, no categorization of questions, no randomization/shuffling.
- Filename contains spaces (Quiz By Ashish.cpp) which may cause issues in some systems/scripts.

## Future Enhancements

Here are suggestions for upgrading the project:
- Move questions out to an external file (e.g., JSON, CSV) so you can add/edit questions without recompiling.
- Support multiple participants or turn‐based quizzes.
- Add a timer per question and limit responses.
- Randomize order of questions and/or shuffle options.
- Categorize questions by topic and allow selecting topic before quiz starts.
- Improve UI: colored output, menus, more polished console or even GUI/web version.
- Improve error handling and user input validation.
- Keep a record of past results (leaderboard) in a file or database.

## Author

Ashish K Nanda – GitHub: https://github.com/ashishknanda
Feel free to contact for feedback or improvements.

## License

This project is currently unlicensed. If you want others to use or contribute under defined terms, please add a license file (e.g., MIT License).
