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

Team 8 was able to complete and test a fully pipelined RISC-V RV32I with hazard prevention, branch prediction and direct mapped cache. 

## Individual Statements

| Name           | CID      | GitHub                 | Email                                                | Link to Individual Statements                |
|----------------|----------|------------------------|------------------------------------------------------|----------------------------------------------|
| Arjan Hayre    | 02137475 | **The-Asgardian**      | ah321@imperial.ac.uk   &nbsp; &nbsp; &nbsp; &nbsp;   | [Arjan's Statement](statements/arjan.md)
| Gurjan Samra   | xxxxxxxx | **Gurjan-Singh-Samra** | xxxx@imperial.ac.uk                                  | [Gurjan's Statement](statements/gurjan.md)
| Natalie Lin    | 02203331 | **natalietklin**       | nkl22@imperial.ac.uk                                 | [Natalie's Statement](statements/natalie.md)
| Zoe Zheng      | 02083556 | **zoezheng04**         | zz4221@imperial.ac.uk                                | [Zoe's Statement](statements/zoe.md)

---
## Quick Start
Highlight the key features

Provide step-by-step instructions on testing

```bash
# Example testing commands
npm install
```

## Versions
| Version name                  | Explanation | 
| ------------------------------|-------------|
| [`v1.0-Single-Cycle`](https://github.com/zoezheng04/Team-8/tree/v1.0-Single-Cycle)           | Verified full implementation of single cycle RISC-V
| [`v2.0-Pipeline`](https://github.com/zoezheng04/Team-8/tree/v2.0-Pipeline)               | Verified full implementation of a pipelined RISC-V with hazard prevention and branch prediction
| [`v3.0-Direct-Mapping-Cache`](https://github.com/zoezheng04/Team-8/tree/v3.0-Direct-Mapping-Cache)   | Verified full implementation of a pipelined RISC-V with hazard prevention and branch prediction and a direct-mapped data cache
| [`v3.1-2-Way-Associative-Cache`](https://github.com/zoezheng04/Team-8/tree/v3.1-2-Way-Associative-Cache)| Attempted implementation of a RISC-V with a 2-way set-associative data cache
## Testing Evidence

### F1 Program (v2.0-Pipeline)

https://github.com/zoezheng04/Team-8/assets/77071320/fd6822dc-5333-4c37-a1f4-6c229a29222f

### PDF Program (v2.0-Pipeline)

https://github.com/zoezheng04/Team-8/assets/77071320/125d735b-eac5-423f-b6af-26eb5b7fdf0b

Vbuddy is plotting every 8th value, making the waveform look like this.
## Contribution Table

**Single Cycle**
| Task                                       | Files    | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|----------|--------|------------|--------|
| Repo Setup                                 |          |          |        |p           |x
| F1 Program                                 |          |          |        |x           |
| Program Counter                            |          |          |        |x           |
| Instruction Memory                         |          |          |        |            |
| Control Unit                               |          |    x     |        |p           |
| Sign Extend                                |          |          |        |            |
| ALU                                        |          |          |        |p           |x
| Register File                              |          |          |        |            |x
| Data Memory                                |          |          |        |x           |
| Top files                                  |          |          |        |p           |
| Testing                                    |          |          |        |x           |
| README.md                                  |          |    p     |        |            |p

**Pipeline** 
| Task                                       | Files    | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|----------|--------|------------|--------|
| Pipelining Register Files                  |          |    x     |        |            |
| Hazard Unit                                |          |    x     |        |            |
| Branch Prediction                          |          |    x     |        |            |
| Top files and Testing                      |          |    x     |        |            |

**Cache**
| Task                                       | Files    | Arjan    | Gurjan | Natalie    | Zoe    |
|--------------------------------------------|----------|----------|--------|------------|--------|
| Direct Mapped Cache                                           |          |          |        |            | x
| Two Way Set Associative Cache              |          |         |        |            | x
| Top files and Testing                      |          |          |        |            | p

**Legend:**
 "x" - full responsibility
 "p" - partial contribution

---
## Specification
### General Specifications

| Property                | Value         |
|-------------------------|---------------|
| Instruction Memory Size |       |
| Instruction Width       |       |
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








