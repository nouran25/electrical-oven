# electrical-oven
It is required to simulate the operation of the electric oven. The set temperature of the oven 
is first entered through the keyboard. The entrance of the current oven temperature 
(ambient temperature if the oven was not working for a while) then follows. At this instant 
the computer should first make sure that the oven door is closed. When it is so, the 
temperature will start to rise (use an incremental scaling factor of 0.001 for the temperature 
increment loop). The oven temperature needs to be displayed on the screen while it is 
incrementing, in addition to an indication of the “OVEN ON”. A 10% range over the 
temperature in both directions is to be implemented so that when the higher temperature 
limit is reached, the electrical supply is disconnected. The screen should display “OVEN 
OFF”. The oven then starts to cool down with a decremental scaling factor of –0.0001 for 
the temperature decrement loop. The temperature decrease is also displayed on the screen. 
For each new temperature. When the temperature reaches the lower temperature limit set 
by the tolerance, the electric heater of the oven will then restart. In this case, the 
temperature starts to increase again until it reaches the upper limit and then the whole cycle 
is repeated continuously.
Note that if the temperature setting is 230C
The higher limit is 230+0.1*230 = 253C
The lower limit is 230-0.1*230 = 207C
