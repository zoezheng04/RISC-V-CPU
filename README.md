# Team 8: RISC-V CPU
Google docs for team statement: https://docs.google.com/document/d/1l7sp5MAwc6VxAsa9gx5C7W7WRjY0C5XFlG5tcPZdECs/edit?usp=sharing \
-Put files into corresponding branch, do not merge to main until everyone has checked each other's work\
-Write your own test bench for each module in the corresponding branch\
-When every module is verified, merge to main and add top level file and testbench to main

| Task                               | Team Member Responsible   |
|------------------------------------|---------------------------|
| Assembly Program                   | Natalie, Gurjan                       |
| Control Unit, Sign Extend, Instruction Memory | Arjan, Gurjan          |
| PC                                 | Natalie                   |
| ALU, Register, Mux                 | Zoe                       |
| Data Memory                        | Natalie                   |
| Testbench, Assemble                | Gurjan                    |
| Pipelining                         | Arjan, Gurjan                      |
| Data Memory Cache                  | Zoe, Natalie                      |


## Table of Contents

- [Introduction](#introduction)
- [Group Details](#group-details)
- [Member Responsibilities](#member-responsibilities)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)


## Introduction

Provide a brief introduction to your project. Explain its purpose and what problem it solves.

## Group Details

| Name           | CID      | GitHub   | Email                     | Link to Personal Statement|
|----------------|----------|----------|---------------------------|--------------|
| Arjan Hayre   | xxxxxxxx | **The-Asgardian**  | xxxx@imperial.ac.uk   &nbsp; &nbsp; &nbsp; &nbsp;   | [Arjan's Statement](statements/arjan.md)
| Gurjan Samra  | xxxxxxxx | **Gurjan-Singh-Samra** | xxxx@imperial.ac.uk     | [Gurjan's Statement](statements/gurjan.md)
| Natalie Lin | 02203331 | **natalietklin** | nkl22@imperial.ac.uk | [Natalie's Statement](statements/natalie.md)
| Zoe Zheng  | 02083556 | **zoezheng04**  | zz4221@imperial.ac.uk  | [Zoe's Statement](statements/zoe.md)

---
## Member Responsibilities

| File Name     |  Arjan  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  | Gurjan &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;       | Natalie  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;       | Zoe   &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;         |
|:-------------|:----------------:|:----------:|:------------:|:--------------:|
| ALU.sv |  |  | |
| control.sv | | |  |
| ram_i.sv | | | |
| ram_o.sv | | | |
| ram.sv | | | |
| rom.sv | | | |
| register_file.sv | | | |
| memory.sv | | | |
| extend.sv | | | |
| fetch_reg_file.sv | | | |
| decode_reg_file.sv | | | |
| execute_reg_file.sv | | | |
| mem_reg_file.sv | | | |
| top.sv (singlecycle) | | | |
| top.sv (pipeline) | | | |
| cpu_tb.cpp | | | |
| README.md | | | |

LEGEND :       `x` = full responsibility;  `p` = partial contribution; 

---
## Features

Highlight the key features of your project.

## Getting Started

Guide users on how to get started with your project. Include information on prerequisites and installation steps.

### Prerequisites

List any software, libraries, or tools that users need to have installed before they can use your project.

### Installation

Provide step-by-step instructions on how to install your project.

```bash
# Example installation commands
npm install
