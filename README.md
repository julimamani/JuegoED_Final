# README for Player Management and Game Board System

Welcome to the **Player Management and Game Board System**! This project is a C++ application designed to manage players, generate a game board, and facilitate gameplay. Below, you'll find an overview of the project structure, features, and how to get started.

---

## Project Structure

- **main.cpp**: The main C++ file that contains the core logic for player management, game board generation, and gameplay.
- **Includes**: Standard libraries for input/output and memory management.

---

## Features

- **Player Management**:
  - Register players with their name, surname, email, and initial score.
  - Consult and modify player information.
  - List all registered players.

- **Game Board Generation**:
  - Create a game board with various events (e.g., "ALIENS", "TORMENTAS", "ASTEROIDES", "ESTRELLAS") that affect player scores.

- **Gameplay**:
  - Two players can compete against each other.
  - Players roll a die to advance on the board and encounter events that can increase or decrease their scores.
  - The game announces the winner based on the final scores.

- **Ranking System**:
  - Display the top players based on their scores.

---

## Getting Started

To get started with the **Player Management and Game Board System**, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/PlayerManagementGame.git
   ```

2. **Navigate to the Project Directory**:
   ```bash
   cd PlayerManagementGame
   ```

3. **Compile the Code**:
   - Use a C++ compiler to compile the `main.cpp` file. For example, using g++:
   ```bash
   g++ main.cpp -o game
   ```

4. **Run the Application**:
   ```bash
   ./game
   ```

---

## Technologies Used

- **C++**: The programming language used for developing the application.
- **Standard Libraries**: Utilized for input/output operations and memory management.

---

## How to Use

1. **Administer Players**:
   - Choose the option to manage players from the main menu.
   - Register new players, consult or modify existing players, and list all players.

2. **Generate Game Board**:
   - Select the option to generate the game board.
   - The board will be populated with events that affect gameplay.

3. **Start the Game**:
   - Choose the option to start the game after ensuring at least two players are registered and the board is generated.
   - Players will take turns rolling a die and moving on the board.

4. **View Rankings**:
   - After gameplay, view the rankings of players based on their scores.

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Acknowledgments

- Thanks to the C++ community for providing resources and support for learning and development.
- Special thanks to contributors who helped improve this project.

---

Feel free to explore and modify the project as you see fit! Happy gaming!
