### Description

SW-Timer demo.

Two gpios (P02, P01) toggled based on sw-timer. Sw-timer based on RTC (1 ms).

### Structure

- `bsp/config` - contains platform-specific make file
- `bsp/cc32xx` - contains board-specific files
- `scripts` - contains bash script to create build
- `src` - applcation code
- `uSDK` - link to shared SDK

### Set up

Target: CC3220SF-LAUNCHXL

### Connection 

| Nucleo pin   | GPIO   | Function    |
|--------------|--------|-------------|
| Build-in     | P02    | Green       |
| Build-in     | P01    | Yellow      |

