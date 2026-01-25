### Description

LED blinky

### Structure

- `bsp/config` - contains platform-specific make file
- `bsp/stm32f4xx` - contains board-specific files
- `scripts` - contains bash script to create build
- `src` - applcation code
- `uSDK` - link to shared SDK

### Set up

Target: CC3220SF-LAUNCHXL

### Connection 

| CC3220SF pin | GPIO   | LED        |
|--------------|--------|------------|
| P2 (18)      | P08    | Green Ext  |
| Build-in     | P02    | Green      |
| Build-in     | P01    | Yellow     |
| Build-in     | P64    | Red        |

![LEDs blink](led-animation.gif)
