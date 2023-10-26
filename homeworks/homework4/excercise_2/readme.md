2. Round-Robin Scheduling
   Bootstrap Exercise
   In this exercise, we will be creating a program that schedules tasks on a machine in a round-robin fashion. The input to the program consists of names of people and the amount of time they need on the machine. The program then reads in the maximum period allowed on the machine. It should then output the schedule, where people get to use the machine in the order that they came in, but if they require more time than the maximum allowed period, then they should use the machine for that period and then they should go back to the end of the line for another turn after everyone else has gone.

The program in main.cpp already reads the inputs from STDIN, where the first input is an int jobCount specifying the number of jobs we have. This is followed by 2 \* jobCount lines where each pair of lines is the name of a person, and the amount of time they need on the machine. This is then followed by another line for the variable int period that specifies the maximum allowable period a person can spend on the machine.

The output should be of the form:

​name - time spent on machine
