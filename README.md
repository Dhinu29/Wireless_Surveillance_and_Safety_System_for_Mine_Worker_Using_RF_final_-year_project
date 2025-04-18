# Wireless_Surveillance_and_Safety_System_for_Mine_Worker_Using_RF_final_-year_project

DESIGN:
This project focuses on developing a wireless surveillance and safety system specifically designed for coal mining environments. The system leverages Radio Frequency (RF) technology to establish reliable communication between underground mining units and a central monitoring station on the surface. It includes integrated sensors to monitor critical environmental parameters such as gas levels (e.g., methane, carbon monoxide), temperature, and humidity, as well as real-time location tracking of workers.

The system is equipped with wireless cameras and alert modules that allow continuous video surveillance and instant communication in case of emergencies. In the event of hazardous conditions, the system automatically sends warning signals and alerts to the control room using RF transmitters.

This project enhances worker safety, ensures better environmental monitoring, and reduces the risks associated with manual inspection in dangerous mining zones. It offers a cost-effective, energy-efficient, and scalable solution for real-time safety management in coal mining operations.

The design of the Wireless Surveillance and Safety System for Mine Workers Using RF is crucial for ensuring efficient communication, monitoring, and alerting mechanisms. This system integrates sensors, microcontrollers, RF communication 
modules, and output devices to enhance worker safety in underground mining
operations. The main objective of the system is to detect hazardous gases, high 
temperatures, and emergency situations and immediately alert both workers and 
supervisors.

![Screenshot_2025-04-18-13-02-57-65_e2d5b3f32b79de1d45acd1fad96fbb0f](https://github.com/user-attachments/assets/0bfb9984-2937-45bc-8aa1-b42adeda4080)

The Data Flow Diagram (DFD) provides a structured representation of how 
information moves within the system, ensuring an efficient monitoring and alert 
mechanism. The system begins with sensors (MQ-2 & DHT-11), which continuously 
monitor environmental conditions by measuring gas concentration, temperature,
andhumidity levels. This data is then transmitted to the Arduino Uno, which serves as 
the processing unit, evaluating whether the recorded values exceed predefined safety 
thresholds.

If hazardous conditions are detected, the system initiates safety measures by
activating an alarm (buzzer) and displaying warning messages on an LCD screen. 
Simultaneously, the RF Transmitter (433MHz) sends a wireless signal to the control 
centre, where the RF Receiver alerts supervisors and higher officials about the potential 
danger. This real-time data flow ensures that both workers underground and authorities above ground are immediately informed, allowing forswift action to prevent accidents.
Through this efficient data processing and alert system, mine workers' safety is 
significantly enhanced

IMPLEMENTATION:
Mining is one of the most hazardous occupations, as workers operate in extreme 
underground conditions, often facing risks such as gas leaks, high temperatures, and 
insufficient ventilation. Ensuring the safety and surveillance of mine workers is crucial
to reducing fatalities and improving working conditions. Traditional safety systems in
mines rely on manual monitoring and periodic inspections, which may not be sufficient 
for detecting sudden hazardous situations. To address these challenges, the Wireless 
Surveillance and Safety System for Mine Workers Using RF has been developed. This 
system integrates real-time monitoring, wireless communication, and automated alerts 
to ensure the safety of mine workers

![Screenshot_2025-04-18-13-11-44-27_e2d5b3f32b79de1d45acd1fad96fbb0f](https://github.com/user-attachments/assets/702d5b6e-81bc-47c8-b188-f4a17389adde)


EXPLANATION OF KEY FUNCTIONS:

The Wireless Surveillance and Safety System for Mine Workers Using RF
consists of several essential functions that work together to provide real-time
monitoring, alerting, and communication in underground mining environments. The
system integrates sensor technology, wireless communication, and microcontroller-
based processing to detect hazardous gases, high temperatures, and other unsafe
conditions.

Gas and Temperature Monitoring:

![IMG20250408102114](https://github.com/user-attachments/assets/0d093e3e-be39-48bf-8a24-98e86fa024e0)


One of the primary functions of the system is hazard detection, which is 
accomplished using specialized sensors. The MQ-2 gas sensor is responsible for
detecting the presence of hazardous gases such as carbon monoxide (CO), methane
(CH₄), and LPG (liquefied petroleum gas). These gases can pose severe risks in underground mines, leading to suffocation, explosions, or poisoning. Additionally, the 
DHT-11 sensor is used to monitor temperature and humidity levels, ensuring that
workers are not exposed to extreme heat conditions. Both sensors continuously send 
real-time data to the microcontroller for analysis.

Data Processing and Decision Making:

![Screenshot_2025-04-18-13-16-43-96_e2d5b3f32b79de1d45acd1fad96fbb0f](https://github.com/user-attachments/assets/df9a868c-5d5d-49eb-ad2a-7077a5e31d7d)


In this system, data processing and decision making play a key role in ensuring 
quick and accurate responses to hazardous conditions. The Arduino Uno is responsible
for collecting and analyzing data from connected sensors such as the DHT11 for
temperature and the MQ-2 for gas detection.
When the Arduino reads the temperature and gas values, it compares them with 
pre-defined safe limits. For example, if the temperature reading is greater than or equal
to 37°C, the system identifies it as a high-temperature condition. Similarly, if the gas 
sensor detects the presence of flammable or toxic gas (indicated by a LOW signal from
the MQ- 2), the system recognizes it as a gas leak.

Alert Mechanism for Workers:

![Screenshot_2025-04-18-13-19-28-92_e2d5b3f32b79de1d45acd1fad96fbb0f](https://github.com/user-attachments/assets/a2a9a7c6-524e-4e1b-bfab-6442bc6307b9)


To ensure that mine workers receive immediate warnings, the system features 
multiple alert mechanisms. When hazardous conditions are detected, a buzzer is
activated, producing a loud sound to grab the attention of workers. Simultaneously, an
LCD display presents real-time sensor readings and warning messages, informing 
workers about the nature of the danger. These alerts allow workers to evacuate the area
of take precautionary measures before conditions worsen.

TESTING & VALIDATION:

Testing and validation are vital to confirming the functionality and reliability 

of the Wireless Surveillance and Safety System for Mine Workers Using RF. This 

phase ensures that the system components respond accurately under simulated

hazardous mining conditions, including gas exposure, elevated temperature, and 

manual emergency activation.

Fig 6.1 : TESTING AND VALIDATION

The tests were conducted using the developed Arduino-based system, which integrates

an MQ-2 gas sensor, DHT-11 temperature sensor, 433 MHz RF communication 

module, LCD, and buzzer. When hazardous conditions are simulated, the system

updates the LCD in real time, activates a buzzer, and sends encoded emergency 

messages (e.g., 1, 2, or 3) via RF to the remote receiver.

The Serial Monitor at the control centre side displays:

Miner 1: High Temperature 

Detected Miner 1: Poisonous Gas 

Detected Miner 1:

Emergency......Emergency......

This confirms the successful transmission and reception of alerts.
Validation also included checking power efficiency, ensuring the system operates 
effectively on limited power sources typical of underground settings. The test outcomes 
demonstrated that the sensors provide accurate data, the buzzer and LCD respond
promptly, RF signals transmit without loss, and the system maintains low

power consumption — confirming readiness for real-world deployment.

 Design of Test Cases and Scenarios
 
 Gas Detection Test:

• Scenario: Exposing the MQ-2 sensor to gas (e.g., butane/lighter gas).

• Expected Outcome:

➢ LCD displays gas status (GAS = 1)

➢ Buzzer activates

➢ Serial output shows Miner 1: Poisonous Gas Detected

➢ RF sends alert code 2 to the receiver

Temperature Monitoring Test

• Scenario: Increasing ambient heat using a warm object near the DHT-11.

• Expected Outcome:

➢ LCD shows updated temperature (e.g., TEMP = 38)

➢ Buzzer activates when TEMP ≥ 37

➢ Serial output: Miner 1: High Temperature Detected

➢ RF sends alert code 1

Emergency Switch Test

• Scenario: Pressing the emergency switch manually.

• Expected Outcome:

➢ LCD updates SW = 0

➢ Continuous buzzer sound

➢ Serial output: Miner 1: Emergency......Emergency.....

➢ RF sends alert code 3

RF Communication Test

• Scenario: Transmitting from underground to remote supervisor.

• Expected Outcome:

➢ Receiver displays correct message on Serial Monitor based on received code

➢ LED blinks to indicate signal reception

Power Efficiency Test

• Scenario: Powering system with a small DC supply over long hours.

• Expected Outcome:

➢ Continuous sensor monitoring with low energy consumption

➢ Stable operation without resets or hangs

System Failure Test

• Scenario: Disconnecting sensors or power fluctuations.

• Expected Outcome:

➢ System halts or shows abnormal readings

➢ No RF data transmitted (indicating failure detection)

VALIDATION

A comprehensive validation process confirmed that the system meets all safety and 

performance criteria before deployment:

Sensor Accuracy Validation:

• MQ-2 readings were cross-checked with standard gas detectors.

• DHT-11 output was validated using a laboratory thermometer and humidity meter.

Alert Mechanism Validation:

• Buzzer response time was under 1 second.

• LCD displayed accurate messages in real time.

• Switch response was immediate and continuous.

Wireless Communication Validation:

• RF modules were tested up to 50 meters with minimal signal loss.

• Delay between transmission and display on Serial Monitor was less than 500ms.

• Data integrity was verified using consistent message decoding (1 = temp, 2 = gas,

3 = emergency).

Power Validation:

• The complete setup operated on a 9V battery and a regulated 5V adapter for

extended durations, proving its suitability for underground deployment.

pictures:



