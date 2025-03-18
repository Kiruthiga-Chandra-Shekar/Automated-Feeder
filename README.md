# Automated-Feeder
A robotic arm presents a promising solution to address the challenges faced by individuals with disabilities during meals. This innovative technology can be tailored to assist in various aspects of the dining experience, enhancing independence and inclusivity.
https://github.com/user-attachments/assets/44cea6eb-88b8-4668-a23f-b9515c2de652
# Operation
A six-degrees-of-freedom robotic arm with six serial bus servos was used for the rotation of
different joints of the arm. The motors were serially powered using an expansion board. Two
push buttons to perform the start and stop operations were implemented using Arduino UNO.
Raspberry Pi and Arduino were used together to check the position of the mouth and then orient
the arm accordingly.
The person would be able to start the robot by pressing button 1. The robot will bend towards
the bowl, pick the food using a spoon and feed the person. The orientation of the spoon will be
set to the co-ordinates detected from the OpenCV code. When the user presses the stop button,
the robot will return to the home position. This way, a person can eat with the help of the robotic
arm.
# OpenCV model
The EAR value to detects when the mouth is
open. The threshold for determining an open mouth would depends on the specific application
and requires some experimentation. When the EAR drops below a certain threshold, it
could indicate that the mouth is open.
https://github.com/user-attachments/assets/0b1ad13d-1d1b-41db-a929-9851b8840707


