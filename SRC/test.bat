echo -----------------------------------------------------------------------

del /Q out.hex

..\TOOLS\nl2hex 0x1800 0x50 0.nlt 1.nlt 2.nlt 3.nlt 4.nlt

pause

..\TOOLS\conv18.exe out.hex ..\HEX\app.hex
del /Q out.hex


