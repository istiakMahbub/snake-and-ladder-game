# 🎲 Snake and Ladder Game 🎲

A **Computer Graphics project** developed as part of the **Computer Graphics course** during my **Bachelor's at AIUB**.  
This project simulates the classic **Snake and Ladder game** using **OpenGL (GLUT)**.

## 📸 Game Screenshot
![Game Screenshot](./screenshot.png)  
*(Replace `screenshot.png` with the actual file name of your screenshot.)*

## 🛠️ Features
- 🎮 **Player-controlled dice rolls**
- 🐍 **Snakes bring you down**
- 🪜 **Ladders move you up**
- 🖥️ **Rendered using OpenGL**
- 🎲 **Randomized dice rolls**
- 🔄 **Two-player turn-based gameplay**

## 🚀 How to Run (Mac M1/M2)
### **Install Dependencies**
```bash
brew install freeglut

### **Compile the Code**
g++ -o snake_game main.cpp -I/opt/homebrew/opt/freeglut/include -L/opt/homebrew/opt/freeglut/lib -framework OpenGL -framework GLUT

### **Run the Game**
./snake_game

🎮 How to Play
Click inside the game window to roll the dice.

Players take turns automatically.

Ladders boost you up, and snakes drop you down.

The first player to reach the final tile wins! 🏆

📌 About the Project
Course: Computer Graphics

Institution: American International University-Bangladesh (AIUB)

Technology: OpenGL (GLUT), C++

Year: 2014


