del *.nlt
..\..\csc-compiler\bison.exe <input >result
..\..\csc-compiler\split.exe
del result
build.bat
pause