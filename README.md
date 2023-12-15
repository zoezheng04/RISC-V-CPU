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

Provide a brief introduction to the project.

## Individual Statements

| Name           | CID      | GitHub                 | Email                                                | Link to Individual Statements                |
|----------------|----------|------------------------|------------------------------------------------------|----------------------------------------------|
| Arjan Hayre    | xxxxxxxx | **The-Asgardian**      | ah321@imperial.ac.uk   &nbsp; &nbsp; &nbsp; &nbsp;   | [Arjan's Statement](statements/arjan.md)
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
| Version name | Explanation | 
| -----------------|-------------|
| `v1.0-Single-Cycle` | 
| `v2.0-Pipeline` | 
| `v3.0-Data-Cache` |
## Testing Evidence
### F1 Program
### PDF Program
## Contribution Table

| Task                                       | Files    | Arjan | Gurjan | Natalie | Zoe |
|--------------------------------------------|----------|----------|--------|------------|--------|
| **Single Cycle**                           |          |          |        |            |        |
| Repo Setup                                 | |  | | |
| F1 Program                                 | |  | | |
| Program Counter & Instruction Memory        | |  | | |
| Control Unit                               | |  | | |
| Sign Extend                             | |  | | |
| ALU                                        | |  | | |
| Register File                           | |  | | |
| Data Memory                                | |  | | |
| Top Level Debugging                             | |  | | |
| README.md                                  |  | | | |
| **Pipeline**                               |          |          |        |            |        |
|                                 |  | | | |
|                                 |  | | | |
|                                 |  | | | |
| **Cache**                               |          |          |        |            |        |
|                                 |  | | | |
|                                 |  | | | |
|                                 |  | | | |

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
| Data Memory Size        |       |
| Data Width              |    32 bits      |
| Data Cache Size         |   128 bytes   |
| Data Cache Sets         |       8      |
| Data Cache Ways         |     1         |
| Data Cache Block Size    |  4*32 bits   |

### Instructions Implemented
| Type | Instructions         |
|------|-----------------------|
| R    |ADD, SUB, XOR, OR, AND, SLL, SRL           |
| SB    |   BEQ, BNE               |
| I    |LBU, JALR  |
| S    |  SB              |
| U    |  LUI                  |
| J    |      JAL        |
