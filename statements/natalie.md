# Personal Statement of Contributions
*Natalie Lin*

---

## Overview
- Repo Structure 
- PC
- Data Memory
- F1 Program
- Single cycle debugging
  - ALU
  - Control Unit
  - Data Memory
  - Testing results
- Reflection

---

## Summary of My Contribution

My central focus during the project was the implementation of the single-cycle RV32I, a basic goal of the group project. Acknowledging the critical importance of achieving optimal functionality for our single-cycle processor, I dedicated a substantial portion of my time to creating the assembly language program for the F1 starting light algorithm. Moreover, considerable effort was devoted to debugging the single-cycle processor, which initially posed compatibility challenges with the reference program.

--

# Repo Structure

**Relevant commit:**
- [Update README.md](https://github.com/zoezheng04/Team-8/commit/2c574e15d412650dbae81de8892b47307a979cdf)

Drawing from the lessons learned in Lab 4, disorganization emerged as a significant challenge. All team members pushed untested files to the same branch, resulting in an unwieldy list of files that made locating specific files for debugging both time-consuming and challenging. Additionally, communication gaps led to the creation of duplicate files – for example, we each created a multiplexer for the component we were responsible for when the same multiplexer could essentially be used for multiple purposes.

In response, my teammate Zoe and I established a set of guidelines before initiating the current project to proactively address these issues:

- Each branch should house the code for its corresponding component along with its testbench. This not only serves as a record of our work but also facilitates easy verification and testing by other team members.
- Components must undergo testing before being pushed to GitHub.
- Collaborate with teammates for any required merging.

These guidelines were documented in the readme file of the main repository, serving as a constant reminder for the team. The implementation of these rules yielded positive results, marked by a significant improvement compared to Lab 4. I found enhanced clarity during debugging sessions, knowing precisely where to locate the necessary files.
