# 🎵 Music Playlist Manager (C++ Linked List)

A simple console-based application that simulates a music playlist using a **Singly Linked List** data structure. This project demonstrates dynamic memory allocation, pointer manipulation, and basic CRUD operations in C++.

## 🚀 Features

* **Add Songs:** Appends a new song to the end of the playlist.
* **Delete Songs:** Removes the song currently at the top of the playlist (Head).
* **View Playlist:** Displays the entire queue of songs visually (e.g., `Song A -> Song B -> NULL`).
* **Interactive Menu:** Clean command-line interface for user interaction.

## 🛠️ Technologies Used

* **Language:** C++
* **Concepts:**
    * Singly Linked Lists
    * Structs & Pointers
    * Dynamic Memory Allocation (`new`/`delete`)
    * Standard Input/Output

## 📋 How to Run

1.  **Clone the repository** (or download the source code):
    ```bash
    git clone [https://github.com/your-username/playlist-manager.git](https://github.com/your-username/playlist-manager.git)
    ```
2.  **Compile the code** using a C++ compiler (like g++):
    ```bash
    g++ main.cpp -o playlist
    ```
3.  **Run the executable**:
    * **Windows:**
        ```bash
        playlist.exe
        ```
    * **Mac/Linux:**
        ```bash
        ./playlist
        ```

## 💻 Usage Example

```text
===== MUSIC PLAYLIST =====
1. Add Song
2. Delete Song
3. Display Playlist
4. Exit
Enter choice: 1
Enter song name: Shape of You
Song Added: Shape of You

===== MUSIC PLAYLIST =====
...
Enter choice: 1
Enter song name: Blinding Lights
Song Added: Blinding Lights

===== MUSIC PLAYLIST =====
...
Enter choice: 3

--- Current Playlist ---
Shape of You -> Blinding Lights -> NULL
