### TI Projects

This repository contains a collection of educational and experimental projects for the CC3220SF LAUNCGXL board.
Each project demonstrates the use of low-level based on `driverlib`

Peripheral drivers are stored in a shared submodule:
[here](https://github.com/GIYura/uSDK.git)

### Repository Structure `examples/`

| SW module name  |      Description                        |       Notes      |
|-----------------|-----------------------------------------|------------------|
| led             | Simple LED control via GPIO             |                  |

### Build and Run

#### Prerequisites

Toolchain: ARM GCC (arm-none-eabi-gcc)

Debugger: OpenOCD

SDK: simplelink_cc32xx_sdk_7_10_00_13

Board: CC3220FS-LAUNCHXL

TI MCU SDK: [here](https://www.ti.com/tool/SIMPLELINK-CC32XX-SDK#downloads)

### Build the project

1. Clone the repository:

```
git clone git@github.com:GIYura/cc3220sf-launchxl.git
```

2. Select one of the project directories, for example:

```
cd led/
```

3. Initialize and update the shared submodule:

```
git submodule update --init --recursive
```

4. Build the project:

```
./scripts/build
```

5. Select desired target.

6. Follow the instructions

### Eclipse integration

1. Run Eclipse

2. Create new empty C project

3. Import source files

4. Project->Propeties->C/C++ Build edit:
- Build command: make
- Build directory: specify path the makefile

5. Run->Debug Configuration:
- Project: specify a name
- C/C++ Application: specify path to .elf

6. Debugger:
- GDB command: specify path to gdb client
- Select Use remote target
- Debug server: Generic TCP/IP
- Protocol: remote
- Connection: localhost:3333

7. Startup
- Initialization commands: monitor reset halt
- Set breakpoint at: main
- Select Resume

8. Select Debug (F11)
