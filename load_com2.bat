@echo off

copy TOOLS\opencom2.m3p TOOLS\opencom.m3p
TOOLS\t2.exe TOOLS\load.m3p

del /q history.ini