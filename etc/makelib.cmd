set DLL_FILE=%1
set DEF_FILE=%~dpn1.def
set LIB_FILE=%~dpn1.lib
set MACHINE=x64

dumpbin /exports %DLL_FILE% > %DEF_FILE%
lib /def:%DEF_FILE% /out:%LIB_FILE% /machine:%MACHINE%