# 🚦 Traffic Light Timer Simulation 

This is a simple C++ console application that simulates a traffic light cycle based on user input. It prompts the user for the traffic light location and the durations of the red, yellow, and green lights, then displays a simulation summary with basic validation. This serves as a prototype for observing and evaluating the timing of traffic lights around high-risk areas near Ghana Communication Technology University (GCTU).

### 🎯 Goals

* Assess the adequacy of current traffic light cycles.
* Propose improvements to reduce road accidents and traffic congestion.
* Provide pedestrians with clear and reliable wait times to safely cross roads.
* Help drivers anticipate transitions, reducing the risk of collisions.

We believe this system can contribute to a safer and more organized traffic environment, especially for vulnerable road users such as students and pedestrians.


## ❗ Problem Statement

The areas surrounding **Ghana Communication Technology University (GCTU)**, particularly the Business School junction leading to the Lapaz main road and the main campus road that connects Circle, Accra, and Lapaz, are plagued by dangerously poor traffic management.

At the Business School junction, pedestrians—especially students—are frequently knocked down due to the absence of a proper pedestrian signaling system. Similarly, the main road outside the campus has become a *notorious accident zone* due to unregulated traffic flow and the lack of real-time control mechanisms. The chaotic state of vehicular and pedestrian movement has led to numerous preventable collisions, injuries, and near-death incidents.

What makes this more alarming is that these roads are used by thousands of students, staff, and community members daily—yet there's **no reliable system** to alert or control either side. This persistent problem has created an environment of anxiety, hesitation, and danger around the university.


## ✅ Proposed Solution

To address this critical safety concern, we propose a **Traffic Light Timer Simulation** system—an entry-level digital tool built in C++ that mimics how a functional traffic control system could work.

### 🧪 Sample Interaction:

Enter traffic light location: Location  of choice
Enter red light duration (in seconds): 15
Enter yellow light duration (in seconds): 30
Enter green light duration (in seconds): 60

--- Traffic Light Simulation at Lapaz ---
Red light ON for 15 seconds.
[STOP 🚫]
Green light ON for 60 seconds.
[GO ✅]
Yellow light ON for 30 seconds.
[CAUTION ⚠️]
Cycle time is within normal range.

This confirms the tool can simulate real-life traffic patterns and detect anomalies in timing.

### Future Vision🔭 

We aim to evolve this system into a more robust smart traffic solution that includes:

* Pedestrian wait-time notifications
* Automated alerts for unsafe cycle durations (e.g., over 180 seconds)
* Visual and audible countdowns

While basic, this simulation serves as a **prototype** for future digital traffic control systems that incorporate real-time feedback and pedestrian-focused enhancements. It can support discussions around urban planning, road safety, and infrastructure improvements near GCTU.

Even this simple and accessible tool, when scaled, can help reduce accidents, prevent traffic gridlocks, and ultimately save lives.

---

## 🛠️ Features

* User Input:

  * Traffic light location
  * Red light duration
  * Yellow light duration
  * Green light duration

* Outputs:

  * Light durations with instructions:

    * Red: \[STOP 🚫]
    * Green: \[GO ✅]
    * Yellow: \[CAUTION ⚠️]
  * Cycle time validation:

    * **Too short** (less than 10 seconds): Unsafe — may not allow time to stop or cross.
    * **Too long** (more than 180 seconds): Inefficient — may keep pedestrians waiting too long, causing riskier crossings.
    * **Normal range** (10–180 seconds): Acceptable operation.



## 💻 Requirements

* C++ compiler (e.g., `g++`)
* Visual Studio Code or any IDE that supports C++
* Windows PowerShell or Command Prompt



## 🚀 How to Run

- Compile the code in the terminal:
   ```bash g++ main.cpp -o main ```
  -  Run the executable:
   ```bash.\main.exe ```
  -  Follow the prompts in the terminal.


