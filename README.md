# Stranger things alphabet display

An Arduino-powered LED display for encoding secret messages inspired by Stranger Things!

![image](https://amp.businessinsider.com/images/59c1236138d20d2a008b7e64-960-480.jpg "image")

### Arduino project specifications
- each letter has an LED
- secret message blinks lights sequentially
- supports Arduino Uno and Due (for Due, check out the due branch)

### Project details
- A-H (8 letters) in first row
- I-Q (9 letters) in second row
- R-Z (9 letters) in third row
- Input: passed to board via serial monitor
- Output: series of LED flashes

### Challenges
- Arduino uno only has 14 digital pins
  - Solution: multiplex with shift register?

## Step 1
- digits only
- support blinking 0-9


## Future ideas
- handle multiplexing inputs to support all A-Z
- pass messages through web server? instead of serial monitor
- plans for Twitch channel and Twitch bot inputs


## Related ideas
- programmable music box, ala [Wintergatan](https://www.youtube.com/watch?v=IvUU8joBb1Q)
