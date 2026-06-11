# 2D Graphics Editor

hi....
A simple text-based graphics editor developed in C. The program allows users to draw basic geometric shapes on an 80 × 24 character canvas using coordinates entered through the terminal.
---

## 📐 Technical Specifications
**Canvas Size:** 80 × 24
**Coordinate Origin:**(0,0) at the top-left corner
**Empty Pixel Character:** _
**Drawing Pixel Character:** *

---
## Features
**Draw Line**

Draws a line between two user-specified points using Bresenham's Line Drawing Algorithm.

**Draw Rectangle**

Draws a rectangle using four connected lines.

**Draw Triangle**

Draws a triangle by connecting three given vertices.

**Draw Circle**

Draws a circle using distance-based calculations from a center point and radius.

**Display Picture**

Displays the current canvas with all drawn shapes.

**Exit Program**

Terminates the application.

## ⚡ Core Rendering Features

**Algorithms Used**
Bresenham's Line Drawing Algorithm

Used in the drawLine() function to efficiently draw lines between two points.

Distance-Based Circle Drawing

Used in the drawCircle() function by checking whether a point lies on the circle boundary.
---

##  Quick Input Guide

Input Format. Here is what the program expects:

| Option | What it does | How to type the inputs | Example |
| :--- | :--- | :--- | :--- |
| **1** | Draw Line | `x1 y1 x2 y2` | `5 5 20 15` |
| **2** | Draw Rectangle | `top-left-x top-left-y bottom-right-x bottom-right-y` | `10 2 30 12` |
| **3** | Draw Circle | `center-x center-y radius` | `40 12 6` |
| **4** | Draw Triangle | `x1 y1 x2 y2 x3 y3` | `10 20 20 5 30 20` |
| **5** | Display Canvas | *Just press Enter* | Displays your art |
| **0** | Exit | *Just press Enter* | Closes the program safely |
---

## ⚙️ Terminal Compilation Steps

Build and run the binaries inside your console path directory with these scripts:

```bash
# Compile process
gcc prog.c -o prog

# Execution step
.\prog