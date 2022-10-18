.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO: DWORD

.STACK 4096

.CONST

.DATA
	Arr  sdword  3, -12, 68, 84, -77, 90, 1, -45, 9, 54
	min  DD  ?
	max  DD  ?

.CODE

main PROC
START:

	push lengthof Arr
	push offset Arr
	call getmin
	mov min, eax

	push lengthof Arr
	push offset Arr
	call getmax
	mov max, eax

push 0
call ExitProcess

main ENDP

getmin PROC uses ebx ecx esi, parr: dword, elem: dword
	mov ecx, elem
	mov esi, parr
	mov ebx, [esi]
CYCLE:
	lodsd
	cmp eax, ebx
	jge False
	xchg ebx, eax
False:
	loop CYCLE
	xchg eax, ebx
	ret
getmin ENDP

getmax PROC uses ebx ecx esi, parr: dword, elem: dword
	mov ecx, elem
	mov esi, parr
	mov ebx, [esi]
CYCLE:
	lodsd
	cmp eax, ebx
	jle False
	xchg ebx, eax
False:
	loop CYCLE
	xchg ebx, eax
	ret
getmax ENDP

END main