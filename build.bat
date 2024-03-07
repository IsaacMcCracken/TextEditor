@echo off

if not exist out mkdir out



pushd out
cl /Zi /EHsc /Fegame.exe /I ../C-Core-Library /I ../include ../src/main.c -MD /link /LIBPATH:"..\lib" raylib.lib kernel32.lib opengl32.lib shell32.lib winmm.lib user32.lib gdi32.lib
popd