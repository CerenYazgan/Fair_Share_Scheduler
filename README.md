# 1. INTRODUCTION 
In operating systems, a scheduler is a vital component that oversees the execution of processes or threads on a computer system's CPU (Central Processing Unit). Its main objective is to distribute the CPU's time among various processes or threads, aiming for efficient and equitable utilization of system resources. 
The scheduler's role involves determining which processes or threads are allowed to run, when they can run, and for how long. This decision-making process relies on specific scheduling algorithms, which may vary depending on the operating system and its configuration. The chosen scheduling algorithm seeks to optimize system performance, responsiveness, throughput, fairness, or a combination of these factors. 
Having the best possible outcome and fairness throughout the systems has always been the priority. For this project we tried to see if we could create a fairer scheduling algorithm than the default Linux 2.4.27 scheduler. We observed our experiments average CPU utilization and MSE calculation for several users with several process’. And then, we compared the test cases between each other. To achieve a fair full system we made the required adjustments to this kernel and explained this whole procedure from to start to finish. 
# 2.TEST CASES
# 2.1. TEST 1 
In TEST1; user1 has 2 processes, user2 has 1 processes.

<img width="282" alt="Ekran görüntüsü 2023-07-06 142850" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/4dd10699-ae47-4f31-803b-59f9706ee280">

# 2.2. TEST 2
In TEST2; user1 has 2 processes, user2 has 2 processes, user3 has 1 processes.

<img width="276" alt="Ekran görüntüsü 2023-07-06 143052" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/cea6487d-8b26-4101-920f-877640f4e8c6">

# 2.3. TEST 3
In TEST3; user1 has 2 processes, user2 has 2 processes, user3 has 2 processes, user4 has 2 processes.
 

<img width="276" alt="Ekran görüntüsü 2023-07-06 143211" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/888a97c6-86d7-476a-8db9-7772f43eada3">

# 2.4. TEST 4
In TEST4; user1 has 4 processes, user2 has 2 processes, user3 has 2 processes, user4 has 2 processes , user5 has 1 processes.
 

<img width="283" alt="4" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/021830bf-d4d6-43a0-a3f9-4bfb4441b38f">
<img width="247" alt="t4" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/653ba05d-bbae-4258-8030-ba4aca618628">

# 2.5. TEST 5
In TEST5; user1 has 4 processes, user2 has 2 processes, user3 has 2 processes, user4 has 2 processes , user5 has 1 processes, user6 has 1 processes.


 <img width="280" alt="t5" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/0744a2c3-2e48-4795-9232-3dc26fd180e7"> 
<img width="248" alt="5" src="https://github.com/CerenYazgan/Fair_Share_Scheduler/assets/129899574/7ca3e2a9-f147-4a29-a79f-4a616bc01ef0">
