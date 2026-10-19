# Obstacle-Avoiding Robot


\


> University of Hertfordshire - BEng (Hons) Robotics and Artificial Intelligence
> Module: Applied Robotics and AI Project

---

## Table of Contents

- [Overview](#overview)
- [Objectives](#objectives)
- [How It Works](#how-it-works)
- [Hardware and Simulation](#hardware-and-simulation)
- [Software and Tools](#software-and-tools)
- [Planned Pin Connections](#planned-pin-connections)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Git Workflow](#git-workflow)
- [Common Git Commands](#common-git-commands)
- [Project Management](#project-management)
- [Roadmap](#roadmap)
- [Author](#author)

---

## Overview

This project focuses on developing an autonomous **obstacle-avoiding mobile robot**. The robot uses an ultrasonic distance sensor to measure the distance to objects in front of it. When an obstacle is detected within a predefined distance, the robot stops, changes direction, and continues moving.

The project demonstrates fundamental robotics concepts, including sensing, decision-making, and actuation, using a microcontroller-based control system.

## Objectives

- Design and build a robot that can navigate without colliding with obstacles.
- Read distance data reliably using an HC-SR04 ultrasonic sensor.
- Control two DC motors through a motor driver to move forward, stop, and turn.
- Test and adjust the obstacle detection threshold, turning time, and motor speed.
- Use Git, GitHub, and Trello to plan, track, manage, and back up project work.

## How It Works

The robot follows a simple **Sense–Think–Act** cycle.

1. **Sense:** The ultrasonic sensor measures the distance to the nearest object.
2. **Think:** The microcontroller compares the measured distance with a threshold, for example, 15 cm.
3. **Act:**
   - If the path is clear, the robot moves forward.
   - If an obstacle is detected, the robot stops, turns, and checks the path again.

The control logic and threshold will be tested and adjusted during development.

## Hardware and Simulation

| Component                 | Purpose                                       |
| ------------------------- | --------------------------------------------- |
| Arduino Uno               | Main microcontroller running the control code |
| HC-SR04 ultrasonic sensor | Measures the distance to obstacles            |
| L298N motor driver        | Controls the DC motors using Arduino signals  |
| 2 DC motors with wheels   | Provide movement                              |
| Robot chassis             | Holds the robot components                    |
| Battery pack              | Supplies power to the system                  |

**Simulation:** The circuit and code are planned to be tested using Tinkercad or Wokwi before physical testing.

## Software and Tools

| Tool              | Purpose                                  |
| ----------------- | ---------------------------------------- |
| Arduino IDE (C++) | Writing and uploading robot control code |
| Tinkercad / Wokwi | Circuit simulation                       |
| Git and GitHub    | Version control and code backup          |
| Trello            | Project planning and task tracking       |

## Planned Pin Connections

The following connections are planned and may change after circuit design and testing.

| Component | Signal | Arduino Pin |
| --------- | ------ | ----------- |
| HC-SR04   | TRIG   | D9          |
| HC-SR04   | ECHO   | D10         |
| L298N     | IN1    | D5          |
| L298N     | IN2    | D6          |
| L298N     | IN3    | D7          |
| L298N     | IN4    | D8          |

**Note:** Verify the pin connections against the actual circuit before uploading the code.

## Project Structure

```text
obstacle-avoiding-robot/
├── src/
│   └── obstacle_detection.ino
├── docs/
│   ├── circuit_diagram.png
│   └── testing_notes.md
└── README.md
```

- `src/`: Arduino source code.
- `docs/`: Circuit diagrams, screenshots, and project notes.
- `README.md`: Project overview, setup instructions, and Git workflow.

The example files should be added to the repository as they are created.

## Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/sakthi7sg/Obstacle-avoiding-robot.git
cd Obstacle-avoiding-robot
```

### 2. Open the Code

Open `src/obstacle_detection.ino` in the Arduino IDE.

### 3. Configure the Board

- Select **Arduino Uno** as the board.
- Select the correct COM port.
- Verify the circuit connections.

### 4. Upload and Test

Upload the code to the Arduino board and test the robot in a safe environment after verifying the wiring and power supply.

**Note:** The repository must contain the Arduino source file before the code can be opened and uploaded.

## Git Workflow

This project uses a feature-branch workflow to organise development and maintain a record of changes.

| Branch                       | Purpose                                  |
| ---------------------------- | ---------------------------------------- |
| `main`                       | Stable, working code                     |
| `feature/obstacle-detection` | Ultrasonic sensor and obstacle detection |
| `feature/motor-control`      | Motor driver and movement control        |

### Development Process

1. Create a separate branch for each feature.
2. Make changes and test the code.
3. Stage changes using `git add`.
4. Commit changes with clear, meaningful messages.
5. Push the branch to GitHub.
6. Open a Pull Request and review the changes before merging into `main`.

Example commit messages:

- `Add obstacle detection code`
- `Update README with Git workflow`
- `Implement motor control logic`

## Common Git Commands

| Command                    | Purpose                                                      |
| -------------------------- | ------------------------------------------------------------ |
| `git clone <url>`          | Copies a remote repository to the local computer             |
| `git status`               | Shows the current working tree and staging status            |
| `git add <file>`           | Stages changes for the next commit                           |
| `git commit -m "message"`  | Records staged changes in the local repository               |
| `git push origin <branch>` | Uploads local commits to the remote repository               |
| `git checkout -b <branch>` | Creates and switches to a new branch                         |
| `git pull origin main`     | Fetches and integrates changes from the remote `main` branch |
| `git log --oneline`        | Displays a concise commit history                            |

### Difference Between Add, Commit, and Push

**Git Add:** Selects the file changes to be included in the next commit by placing them in the staging area.

**Git Commit:** Records the staged changes as a snapshot in the local repository history. Each commit includes a descriptive message.

**Git Push:** Uploads local commits to a remote repository, such as GitHub, so the changes are available remotely.

In summary, `add` prepares changes, `commit` records them locally, and `push` sends the commits to the remote repository.

## Project Management

Project tasks are organised and tracked using Trello. The board uses the following lists:

- **Backlog:** Tasks planned for future work.
- **To Do:** Tasks ready to be started.
- **In Progress:** Tasks currently being worked on.
- **Review:** Tasks awaiting checking or testing.
- **Done:** Tasks that have been completed and verified.

Labels, due dates, checklists, and task updates are used to monitor progress and organise the project workflow.

**Trello Board:** [https://trello.com/invite/b/6ad4a5709c190b455e2bf12a/ATTI5760407b427f4dd465fa5cb31620aef8425C6F20/obstacle-avoidance-robot-applied-robotics-and-ai-projects]

## Roadmap

- [x] Set up the project workspace.
- [x] Create the Trello board.
- [x] Create the GitHub repository and README.
- [x] Complete the circuit design.
- [x] Implement the ultrasonic sensor code.
- [x] Develop the motor control code.
- [x] Integrate sensor and motor control logic.
- [x] Test and tune obstacle avoidance.
- [x] Record the demonstration video.
- [x] Complete the final assignment documentation.

**Progress note:** Update the checklist based on actual project progress. Mark a task as complete only after it has been completed.

## Author

**Sakthivel Selvaraj**
BEng (Hons) Robotics and Artificial Intelligence
University of Hertfordshire

GitHub: [sakthi7sg](https://github.com/sakthi7sg)
