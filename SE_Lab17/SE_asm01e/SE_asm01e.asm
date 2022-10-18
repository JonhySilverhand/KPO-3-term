.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib
includelib libucrt.lib
includelib SE_asm01d.lib


ExitProcess			PROTO: DWORD
SetConsoleTitleA	PROTO: DWORD
GetStdHandle		PROTO: DWORD
WriteConsoleA		PROTO: DWORD, :DWORD, :DWORD, :DWORD, :DWORD
EXTRN getmin: proc
EXTRN getmax: proc

.STACK 4096

.CONST
consoletitle DB 'SE_asm01e', 0
Arr			 DD  3, -12, 68, 84, -77, 90, 1, -45, 9, 54

.DATA	
	result			sdword 0
	result1			BYTE "getmax + getmin = ", 0
	result2			BYTE 40 dup(0)
	consolehandle	DD 0h

.CODE

main PROC
START:
	call SetConsoleTitleA
	push offset consoletitle
	

	push -11
	call GetStdHandle
	mov consolehandle, eax

	push lengthof Arr
	push offset Arr
	call getmin

	mov result, eax

	push lengthof Arr
	push offset Arr
	call getmax

	add result, eax
	xor eax, eax

	push result
	push offset result2
	call tochar

	invoke WriteConsoleA, consolehandle, offset result1, sizeof result1, 0, 0
	invoke WriteConsoleA, consolehandle, offset result2, sizeof result2, 0, 0

	push 0
	call ExitProcess

main ENDP

tochar PROC uses eax ebx ecx edi esi, pstr: dword, intfield: sdword
	mov edi, pstr
	mov esi, 0
	mov eax, intfield
	cdq
	mov ebx, 10
	idiv ebx
Cycle: 
	push dx
	inc esi
	test eax, eax
	jz fin
	cdq
	idiv ebx
	jmp Cycle

fin:
	mov ecx, esi
write:
	pop bx
	add bl, '0'
	mov [edi], bl
	inc edi
	loop write

	ret
tochar ENDP

END main