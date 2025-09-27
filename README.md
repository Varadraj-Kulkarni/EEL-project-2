PROJECT 1

NAME: Varadraj Kulkarni
ROLL: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C


AIM:   simulation of electrical switch, designing a C program to  simulate the operation of an electrical switch where the program takes input values of either ‘0’ or ‘1’ representing the switch being off and on respectively. Using suitable condition statements the program should interpret input values and display the corresponding condition as ‘on’ or ‘off’. 

RESEARCH:
Electrical switches are fundamental components in electronic systems, operating in binary states: ON (1) and OFF (0). Simulating such behavior in software provides a conceptual understanding of digital logic and real-world applications such as traffic control, security systems, and parking management. By exploring this idea, we bridge the gap between hardware operation and software simulation, making it easier to visualize how a system interprets and responds to binary inputs.

IDEAS: 
1. Window Lock (On/Off for Car or Home)
2. Smart Door Locks (On/Off for Privacy or Security)
3. Gas Leak Sensor (On/Off)

PROJECT:  Timer based parking system.

Overview of a Timer-Based Parking System:

A timer-based parking system aims to monitor how long a car spends in a parking lot. The concept is to give a parking ticket or a token for a given time (e.g., 1 hour, 2 hours) and then keep track of the car's entry and exit so as to know whether the parking time has been exhausted. The system will provide a signal (such as 0 or 1) depending on whether the customer is within the time allowed.

Important Parts and Procedure:

Issue of Ticket:
Upon the arrival of a vehicle into the parking lot, there is an issuance of a ticket. The ticket has important details such as the vehicle ID, the time of entry, and the time allowed to stay.

Time Monitoring:
The system keeps monitoring the time. This can be accomplished through a real-time clock that records when the vehicle arrived and compares it with the present time as the vehicle sits idle. The permitted time (e.g., 2 hours) is specified and utilized to monitor whether the vehicle has exceeded its given time.

Input Mechanism:
At any time, a check is done to see if the current time has passed the permitted parking time. In case the time is more than the given parking time, the system reads 0, signifying a time breach. If the time is less than or equal to the permitted duration, the system reads 1, showing no breach.

Exit Process:
Once the vehicle exits, the system checks the exit time against the ticket's entry time. If the car departs after the time limit has passed, the system will normally impose a penalty or mark the vehicle for a penalty. This is typically combined with a payment system that penalizes users for the additional time they occupied the parking spot.

Use Cases:

Public Parking Lots: Public parking lots (such as those at shopping malls or airports) can utilize these systems to make sure the users are charged appropriately according to time, and violations are automatically monitored.

Event Parking: Timer-based systems are used for special events to oversee short-term parking and enforcing time limits effectively.

ANALYSIS:
The key behavior of a switch lies in its ability to accept two distinct states. In the case of this project, the states are represented through user inputs:
Input 1 → switch is ON → system considers the process as active.


Input 0 → switch is OFF → system interprets the process as inactive.


In the parking system context, the allowed parking time acts as the threshold, and the user’s actual parked time serves as the input signal. Comparing these values determines whether the simulated switch condition remains ON (active session) or shifts to OFF (ended session).
IDEATE:
To design the simulation, the following ideas were considered:
Use of conditional statements (if-else) to mimic the switching logic.


Linking time-based conditions to represent real-world usage, where the switch “turns off” automatically once the session expires.


Displaying clear messages to the user, translating abstract binary states into meaningful outputs such as “session not ended” (ON) or “session ended” (OFF).


BUILD:
The program was developed in the C language due to its simplicity, efficiency, and strong connection to hardware-level logic. The steps included:
Accepting inputs from the user (time_limit and time_parked).


Comparing the values to decide the state of the simulated switch.


Mapping the outcomes to binary states:


1 → Session active (ON).


0 → Session expired (OFF).


TESTING:
CODE:

#include <stdio.h>

int main() {
    int time_limit, time_parked;
    printf("WELCOME TO TIMER BASED PARKING SYSTEM!\n\n");
    printf("Enter allowed parking time (in minutes): ");
    scanf("%d", &time_limit);
    printf("Enter time parked (in minutes): ");
    scanf("%d", &time_parked);
    if (time_parked < time_limit) {
        printf("\nINPUTING 1....\nParking session not ended yet.");  
    } 
    else {
        printf("\nINPUTING 0....\nParking session ended, please buy a new ticket.");  
    }
    return 0;
}
Several test cases were run to validate correct switching behavior:
Case 1: time_parked < time_limit → Program outputs 1 and states the session is ongoing.


Case 2: time_parked >= time_limit → Program outputs 0 and states the session has ended.


Case 3: Boundary condition where time_parked == time_limit → Correctly identified as session ended (OFF). (considered in case 2)



The results confirmed the program behaves like an electrical switch, toggling based on input conditions.
IMPLEMENTATION:
Github link:
https://github.com/Varadraj-Kulkarni/EEL-project-1/blob/7adf90dbf5e4e86b7fa7e7e8c0399c76d0cec343/project1.c
CONCLUSION:
This project successfully demonstrates the simulation of an electrical switch through a C program. By interpreting input values (0 or 1) using conditional logic, the system mimics the real-world operation of a switch. The parking system example illustrates how binary logic governs practical applications, showcasing the direct relevance of simple programming constructs to real-life technological solutions.

Sources:
Parkopedia
IoT for Smart Parking
T2 Systems
PayByPhone
Flowbird
Smart ParkingStripe
ResearchGate 
ThingSpeak






