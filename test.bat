@echo off
setlocal

REM Add MSYS2 UCRT64 gcc to PATH (temporary)
set PATH=C:\msys64\ucrt64\bin;%PATH%

REM Change to the directory where this .bat file is located
cd /d "%~dp0"

REM Compile main.c
gcc auca.c -o auca.exe

IF %ERRORLEVEL% EQU 0 (
    echo.
    echo Running program...
    echo -----------------
    auca.exe
) ELSE (
    echo.
    echo Compilation failed.
)

endlocal
pause
