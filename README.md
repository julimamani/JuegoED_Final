# README for Player Management and Game Board System

## JuegoED_Final: A C++ Adventure with Data Structures
Welcome to the JuegoED_Final repository! This is a text-based role-playing game (RPG) developed in C++ for a Data Structures course. Its main goal is to demonstrate the practical application of programming concepts and key data structures in creating a functional game system.

## Project Overview
This game immerses the player in a maze where they must explore, interact with characters, collect items, and solve puzzles to find the way out. The game's design is based on the implementation of key data structures, making it a solid proof of concept of my programming and logic skills.

## Implemented Data Structures
 The project is designed to function as a data structures lab. Each main game element is modeled using a specific structure to maximize efficiency and functionality.

* Graphs: The maze map is represented as an undirected graph, where each room is a node and the hallways are edges. This allows the player to move from one node to another and ensures the map is explorable.

* Binary Search Trees (BST): The collectible items in the game are organized in a binary search tree. This optimizes inventory management and allows the system to find objects quickly and efficiently.

* Stacks: To provide the "go back" functionality, a stack is used. Each player's movement is saved to the stack, allowing them to undo actions and return to a previous room.

* Queues: The logic for enemy turns is managed with a queue. Enemies are added to the queue and processed in a "first-in, first-out" (FIFO) order, ensuring a predictable and fair gameplay flow.

## Game Features
* Maze Exploration: Navigate a complex maze represented by a graph.

* Interaction: Talk to non-player characters (NPCs) to get clues or complete quests.

* Inventory System: Collect and manage items organized in a BST.

* Turn-Based Combat: Face enemies whose turns are managed via a queue.

* Undo Movements: Use the stack to retrace your steps.

Puzzle Solving: Use your logic and collected items to solve the final puzzle and escape the maze.
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
