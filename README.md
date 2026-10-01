# Design project: Garbage Compactor 🗑️ 🔋 🌱 ⚡ 🔌

### Problem statement: garbage gets stacked, garbage space is not fully utilized, resulting in high volume low density waste disposal. 
* Garbage and recyclable waste can occupy a significant amount of physical space before collection, particularly when lightweight materials such as plastic containers, cardboard, and packaging are loosely disposed of. This can cause garbage bins to fill quickly, requiring more frequent emptying and reducing the amount of waste that can be stored within a given space (the bin and the garbage bag).
* The goal of this project was to develop a small-scale automated garbage compactor capable of mechanically compressing waste to reduce its volume.
  * The system combines electrical components, sensors, a linear actuator, and programmed control logic to automate the compaction process.
  * By integrating these subsystems into a single device, the project explores how automation can be used to improve the efficiency of waste storage and handling.
 * Personally, I observe piling and overflowing of garbage at my workplace, at the cafe, at school, and public garbage disposal bins. For the example at my workplace at the cafe, I can manually compress the garbage which can approximately reduce the volume by half compared to post-compression, however I think automating and optimizing this process can be beneficial in a vast array of situations, either commercially or casually.

 * Add pictures!
---
### Potential Impacts
* **Reduced waste volume:** compressing waste can allow more material to fit within a given container, reducing how frequently bins need to be emptied.
* **More efficient use of space:** reducing the volume of waste could be useful in environments where storing space is limited, such as homes, businesses, or public facilities.
* **Reduction in collection frequency:** if a container can hold more waste before reaching its capacity, collection may be required less frequently. This could potentially reduce the resources associated with waste collection.
* **Automation:** automating the compaction cycle reduces the need for users to manually compress waste and provides more consistent operation.
* **Scalability:** the underlying concept could potentially be adapted for different waste streams or larger systems, provided that the appropriate mechanical, electrical, and safety requirements are addressed.

* Pictures!
---
### Environmental Considerations
* The primary environmental benefit would come from improving the efficiency of waste storage and collection rather than directly reducing the amount of waste produced.
* Compaction does not eliminate waste or make materials inherently more recyclable. Its potential environmental value depends on how the system is integrated into a broader waste-management process.
* Future versions could explore additional features such as waste-level monitoring, energy-efficient actuation, sorting assistance, or data collection to better understand waste-generation patterns.
---
### My contributions
My primary work focused on the electrical and control aspects of the project:
* Designed and assembled the electrical wiring for the system
* Selected and integrated electrical components based on the system requirements; handled the budget, purchasing, and handling of materials and components (we had a reimbursable budget of $100)
* Programmed the control logic for the compaction cycle based on load-based control
* Troubleshot wiring and system-level issues during development
* Worked with the mechanical components to ensure the electrical system operated correctly with the compactor mechanism (my other teammates worked on the mechanical part of the compactor platform and the frame!)
* Tested the complete the system and made adjustments to improve reliability
* Also added UI indicators using LEDs - red, green, and blue.
---
### The system
The compactor operates by coordinating an actuator with the control system to perform a defined compression cycle. Electrical signals from the control system are used to control the actuator and determine when different stages of the cycle should occur. 
The project required considerations of:
* Power distribution - 12V power supply
* Motor/actuator control
* Sensor inputs
* Microcontroller logic
* Electrical wiring
* Mechanical-electrical integration
* Safe and repeatable operation

## The process flow diagram
<img width="858" height="411" alt="automatic-garbage-compactor-flow-diagram" src="https://github.com/user-attachments/assets/b2e8e969-83ec-4971-bc60-b0cc0b27399c" />


---
### What I Learned
This project was one of my first opportunities to work on a system where software, electronics, and mechanical hardware had to work together. Some of the most valuable parts of the project were troubleshooting problems that only became apparent when the complete system was assembled vs when I was testing each subcomponent separately. I learned that a circuit can work correctly in isolction while still causing problems when integrated with the rest of the system.
The project also strengthened my understanding of:
* Reading data sheets and electrical specifications
* Following signals through a larger electrical system
* Microcontroller programming
* Wiring and electrical troubleshooting
* Component selection
* System integration and testing
* Debugging hardware and software together
* Electrical safety in connections and handling 12V power supply to a 5V Arduino Uno

* Working on this project also changed the way I think about designing and building electronics. It made me more conscious of the environmental impact associated with the materials, components, energy, and eventually disposal of electronics devices. Since then, I have become increasingly interested in approaching electronics with sustainability in mind.
* This experience helped shape my interest in projects that combine electronics and engineering with sustainability, including electronics repair, e-waste reduction, and designing tools that can extend the life of devices and appliances
* This project also sparked my interest in working more with electronics, embedded systems, and hardware troubleshooting as well!
---
### Materials List
* working on it!
* Arduino Uno!
<img width="293" height="225" alt="View recent photos" src="https://github.com/user-attachments/assets/499ae7f7-28ea-4b5b-a1f3-54e95075fe08" />

