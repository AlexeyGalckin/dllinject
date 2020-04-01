# dllinject

1. Create .lib from a .dll to link againist with etc/dll2lib.cmd script
2. Create a fake class declaration with the same member names (Use DLL Export Viewer demangled mode)
3. Wrap class operations into a C-style exported function
4. Use PInvoke to call the function
