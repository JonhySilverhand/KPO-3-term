#pragma once

#define asm_head \
<< ".586P" << endl \
<< ".MODEL FLAT, STDCALL" << endl \
<< "includelib kernel32.lib" << endl << endl\
<< "ExitProcess PROTO : DWORD" << endl\
<< ".STACK 4096" << endl << endl\
<< ".CONST" << endl << endl \
<< ".DATA" << endl << endl \

#define asm_footer \
<< ".CODE" << endl << endl \
<< "main PROC" << endl << endl \
<< "START: " << endl\
<< "\tpush 0" << endl \
<< "\tcall ExitProcess" << endl \
<< "main ENDP" << endl\
<< "end main" << endl