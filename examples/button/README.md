### Description

Button press example

### Structure

- `bsp/config` - contains platform-specific make file
- `bsp/stm32f4xx` - contains board-specific files
- `scripts` - contains bash script to create build
- `src` - applcation code
- `uSDK` - link to shared SDK

### Set up

Target: CC3220SF-LAUNCHXL

### Connection 

| Nucleo pin   | GPIO   | Board pin | Button |
|--------------|--------|-----------|--------|
| built-in     | A1_5   | P4        | SW2    |
| built-in     | A2_6   | P15       | SW3    |
