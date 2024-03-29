# Team 8: RISC-V CPU

## Table of Contents

- [Introduction](#introduction)
- [Individual Statements](#individual-statements)
- [Quick Start](#quick-start)
- [Versions](#versions)
- [Testing Evidence](#testing-evidence)
- [Contribution Table](#contribution-table)
- [Specification](#specification)


## Introduction

Team 8 was able to complete and verify a fully pipelined RISC-V RV32I with hazard prevention, branch prediction and a data cache. 

## Individual Statements

| Name           | CID      | GitHub                 | Email                                                | Link to Individual Statements                |
|----------------|----------|------------------------|------------------------------------------------------|----------------------------------------------|
| Arjan Hayre    | 02137475 | **The-Asgardian**      | ah321@imperial.ac.uk   &nbsp; &nbsp; &nbsp; &nbsp;   | [Arjan's Statement](statements/arjan.md)
| Gurjan Samra   | 02288570 | **Gurjan-Singh-Samra** | gss22@imperial.ac.uk                                 | [Gurjan's Statement](statements/gurjan.md)
| Natalie Lin    | 02203331 | **natalietklin**       | nkl22@imperial.ac.uk                                 | [Natalie's Statement](statements/natalie.md)
| Zoe Zheng      | 02083556 | **zoezheng04**         | zz4221@imperial.ac.uk                                | [Zoe's Statement](statements/zoe.md)

---
## Quick Start
### Step 1: Clone the Repo
### Step 2: Configure vbuddy.cfg
Connect Vbuddy to your computer's USB port using a USB cable provided. Find out the name of the USB device used, and configure vbuddy.cfg (which contains the device name as the only line (terminated with CR))

Currently all the vbuddy.cfg files have the port number set as USB0. If this is not the case for yours, please change it accordingly!

### Step 3: Execute Shell Script

#### F1 Program

```bash
source ./f1.sh

```

#### PDF Program

```bash
source ./pdf.sh

```

#### Gaussian PDF

```bash
source ./gaussian.sh

```
#### Sine PDF
```bash
source ./sine.sh

```
#### Triangle PDF
```bash
source ./triangle.sh

```
#### Noisy PDF
```bash
source ./noisy.sh

```
## Versions
| Version name                  | Explanation | 
| ------------------------------|-------------|
| [`v1.0-Single-Cycle`](https://github.com/zoezheng04/Team-8/tree/v1.0-Single-Cycle)           | Verified full implementation of single cycle RISC-V
| [`v2.0-Pipeline`](https://github.com/zoezheng04/Team-8/tree/v2.0-Pipeline)               | Verified full implementation of a pipelined RISC-V with hazard prevention and branch prediction
| [`v3.0-Direct-Mapping-Cache`](https://github.com/zoezheng04/Team-8/tree/v3.0-Direct-Mapping-Cache)   | Verified full implementation of a pipelined RISC-V with hazard prevention and branch prediction and a direct-mapped data cache
| [`v3.1-2-Way-Associative-Cache`](https://github.com/zoezheng04/Team-8/tree/v3.1-2-Way-Associative-Cache)| Attempted implementation of a RISC-V with a 2-way set-associative data cache
## Testing Evidence

### F1 Program (v3.0-Directed Mapping Cache)

https://github.com/zoezheng04/Team-8/assets/147711636/53857389-3ced-4123-9d85-0abe4dc64423

### PDF Program (v3.0-Directed Mapping Cache)

https://github.com/zoezheng04/Team-8/assets/147711636/4e12416f-69f2-4485-a892-d9c9677ccea4

Vbuddy is plotting every 8th value, making the waveform look like this.
## Contribution Table

**Single Cycle**
| Task                                       | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|--------|------------|--------|
| Repo Setup                                 |          |        |p           |x
| F1 Program                                 |          |  p     |x           |
| Program Counter                            |          |        |x           |
| Instruction Memory                         |          |  x     |            |
| Control Unit                               |    x     |  p     |p           |
| Sign Extend                                |          |  x     |            |
| ALU                                        |          |  p     |p           |x
| Register File                              |          |  p     |            |x
| Data Memory                                |          |  p     |x           |
| Top files                                  |          |  x     |p           |
| Testing                                    |          |  x     |x           |
| Debugging                                  |          |  x     |x           |
| README.md                                  |    p     |        |p           |x

**Pipeline** 
| Task                                       | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|--------|------------|--------|
| Pipelining Register Files                  |    x     |        |            |
| Hazard Unit                                |    x     |        |            |
| Branch Prediction                          |    x     |        |            |
| Top files and Testing                      |    x     |   p    |            |

**Cache**
| Task                                       | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|--------|------------|--------|
| Direct Mapped Cache                        |          |  p     |            | x
| Two Way Set Associative Cache              |          |  p     |            | x
| Top files and Testing                      |          |  x     |            | p

**Legend:**
 "x" - main contributor
 "p" - partial contribution

---
## Specification
### General Specifications

| Property                | Value         |
|-------------------------|---------------|
| Instruction Memory Size |   2^12 bits    |
| Instruction Width       |   32 bits    |
| Data Memory Size        |   2^17 bits   |
| Data Width              |    8-bit      |
| Data Cache Size         |   128 bytes   |
| Data Cache Sets         |       8      |
| Data Cache Ways         |     1         |
| Data Cache Block Size    |  4*32 bits   |

### Instructions Implemented
| Type | Instructions         |
|------|-----------------------|
| R    |ADD, SUB, XOR, OR, AND, SLL, SRL           |
| SB   |   BEQ, BNE               |
| I    |LBU, JALR  |
| S    |  SB              |
| U    |  LUI                  |
| J    |      JAL        |








