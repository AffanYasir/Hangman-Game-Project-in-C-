# **README for Hangman Game in C++**

---

## **Hangman Game Overview**
- **This is a console-based implementation of the classic Hangman game in C++.**  
- The game challenges players to guess the hidden word by guessing individual letters.  
- Players have limited chances to guess incorrectly before the game ends.  
- The goal is to reveal the word and save the hangman character from being "hanged."  

---

## **Features**
1. **Dynamic Gameplay**:  
   - The game selects a random word from a predefined list of animal names.  
2. **Visual Representation**:  
   - ASCII art visuals display the hangman character's state, enhancing player engagement.  
3. **Customizable Player Name**:  
   - Players can enter their name, which is displayed throughout the game.  
4. **Hints**:  
   - The game provides a hint indicating the category of the word (animal names).  
5. **Retry Option**:  
   - Players can choose to replay the game after completing a round.  
6. **Console Aesthetics**:  
   - Uses color changes and text effects to improve the user experience.  

---

## **How to Play**
1. **Start the Game**:  
   - Run the program in a C++ IDE or terminal with proper C++ support.  
   - Enter your name when prompted.  
2. **Guess the Word**:  
   - A random word will be selected and displayed as a series of `x` characters (e.g., `xxxxx`).  
   - Guess one letter at a time by typing a character and pressing Enter.  
3. **Hints and Chances**:  
   - You will be told if your guess is correct or incorrect.  
   - The number of incorrect guesses is limited to 3.  
4. **Win or Lose**:  
   - If you guess all letters correctly, you win, and the hangman character is "released."  
   - If you run out of chances, the game ends, and the hangman character is "hanged."  
5. **Replay**:  
   - After each game, you can choose to play again or exit.  

---

## **System Requirements**
- **C++ Compiler**: (e.g., GCC, Visual Studio, Code::Blocks, etc.)  
- **Windows OS**: (for compatibility with `windows.h` and `Sleep()` function).  

---

## **Code Highlights**
- **Random Word Selection**:  
   - Utilizes `srand()` and `rand()` for random word generation.  
- **Dynamic ASCII Art**:  
   - Functions (`begin()`, `release()`, `hanged()`, `correct()`, `incorrect()`) update the visual representation of the game state.  
- **Game Loop**:  
   - The main game loop continues until the word is guessed or chances are exhausted.  
- **User Input**:  
   - Players interact through the console by guessing letters.  

---

## **Word List**
The game includes the following animal names:  
- Horse  
- Camel  
- Tiger  
- Lion  
- Cat  
- Yak  
- Fox  
- Donkey  
- Bear  
- Monkey  

---

## **How to Compile and Run**
1. **Open the Source Code**:  
   - Save the source code file as `hangman.cpp` in your preferred directory.  
2. **Compile the Program**:  
   ```bash
   g++ hangman.cpp -o hangman
## **Run the Executable:**

./hangman

**Play the Game:**
Follow the on-screen instructions to start playing the game.
## **Acknowledgments**
This game was developed by Affan Yasir and Mahnoor as part of their programming practice.
## **Future Improvements**
-Add more words and categories.
-Implement difficulty levels.
-Create a graphical user interface (GUI) version of the game.
-Save high scores and player progress.

**🎮 Enjoy playing Hangman and saving the day!**

Would you like me to save this updated version as a file for you?
