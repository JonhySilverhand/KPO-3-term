.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD
.STACK 4096

.CONST

.DATA

SHORT1	SWORD 2000
USHORT	DW 124
.CODE

main PROC

START: 
	push 0
	call ExitProcess
main ENDP
end main
