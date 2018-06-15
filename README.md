# Stranger things alphabet display

An Arduino-powered LED display for encoding secret messages inspired by Stranger Things! This branch is specifically for the 
Arduino Due implementation of the project.

![image](https://amp.businessinsider.com/images/59c1236138d20d2a008b7e64-960-480.jpg "image")

### Arduino project specifications
- each letter has an LED driven by a single pin
- secret message blinks lights sequentially

### Project details
- A-H (8 letters) in first row
- I-Q (9 letters) in second row
- R-Z (9 letters) in third row
- Input: passed to board via serial monitor
- Output: series of LED flashes


## Steps:
1. wait for user message via serial monitor
2. blink the message
3. ????
4. profit!


## Future ideas
- pass messages through web server instead of serial monitor
- plans for Twitch channel and Twitch bot inputs


## Related ideas
- programmable music box, ala [Wintergatan](https://www.youtube.com/watch?v=IvUU8joBb1Q)
