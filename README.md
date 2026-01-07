# C Programming Setup Guide

## Prerequisites

### Installing GCC Compiler on Windows

1. **Download MSYS2**
   - Visit [https://www.msys2.org/](https://www.msys2.org/)
   - Download the installer for your system

2. **Install MSYS2**
   - Run the downloaded installer
   - Follow the installation wizard (default settings recommended)
   - Installation path will typically be `C:\msys64`

3. **Install GCC Compiler**
   - Open the MSYS2 terminal (from Start Menu)
   - Run the following command to install GCC:
   ```bash
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```
   - Confirm the installation when prompted

4. **Add GCC to System PATH** (Optional but Recommended)
   - Press `Win + X` and select "System"
   - Click "Advanced system settings"
   - Click "Environment Variables"
   - Under "System variables", select "Path" and click "Edit"
   - Click "New" and add: `C:\msys64\ucrt64\bin`
   - Click OK on all dialogs
   - Restart your terminal/IDE

## Running Your C Programs

### Using the Batch Script

In this folder, use the provided batch script to compile and run your C programs:

```bash
.\run.bat main.c
```

Replace `main.c` with your desired C file name.

### Manual Compilation

If you prefer to compile manually:

```bash
gcc main.c -o main.exe
.\main.exe
```

## Troubleshooting

- **"gcc is not recognized"**: Make sure you've added `C:\msys64\ucrt64\bin` to your System PATH or run the batch script
- **Permission errors**: Try running your terminal as Administrator
- **Compilation errors**: Check your C code for syntax errors

## Example Program

Create a file named `hello.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

Run it:
```bash
.\run.bat hello.c
```

---

Happy coding! 🚀