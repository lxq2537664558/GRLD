// This file contains lua code encoded from ../../shared/grldc/utilities.lua
// Use script embed.lua.bat to re-generate this file if you changed the source code

const char* GRLDC_getutilitiesCode()
{
	static unsigned char code[] =
	{
		0x2d, 0x2d, 0x20, 0x73, 0x65, 0x65, 0x20, 0x63, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 
		0x20, 0x6e, 0x6f, 0x74, 0x69, 0x63, 0x65, 0x20, 0x69, 0x6e, 0x20, 0x67, 0x72, 0x6c, 0x64, 0x63, 
		0x2e, 0x68, 0x0d, 0x0a, 0x0d, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 0x74, 0x72, 0x69, 
		0x6e, 0x67, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x0d, 0x0a, 0x6c, 0x6f, 0x63, 
		0x61, 0x6c, 0x20, 0x61, 0x73, 0x73, 0x65, 0x72, 0x74, 0x20, 0x3d, 0x20, 0x61, 0x73, 0x73, 0x65, 
		0x72, 0x74, 0x0d, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x20, 
		0x3d, 0x20, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x0d, 0x0a, 0x0d, 0x0a, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 
		0x65, 0x28, 0x20, 0x22, 0x67, 0x72, 0x6c, 0x64, 0x63, 0x2e, 0x75, 0x74, 0x69, 0x6c, 0x69, 0x74, 
		0x69, 0x65, 0x73, 0x22, 0x20, 0x29, 0x0d, 0x0a, 0x0d, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 
		0x6f, 0x6e, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x50, 0x61, 0x74, 0x68, 
		0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x62, 0x61, 0x73, 0x65, 0x20, 0x29, 0x0d, 0x0a, 
		0x09, 0x2d, 0x2d, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x28, 0x20, 0x22, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 
		0x6c, 0x69, 0x7a, 0x69, 0x6e, 0x67, 0x20, 0x22, 0x2e, 0x2e, 0x70, 0x61, 0x74, 0x68, 0x20, 0x29, 
		0x0d, 0x0a, 0x09, 0x61, 0x73, 0x73, 0x65, 0x72, 0x74, 0x28, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 
		0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 
		0x31, 0x20, 0x29, 0x20, 0x7e, 0x3d, 0x20, 0x22, 0x40, 0x22, 0x20, 0x29, 0x0d, 0x0a, 0x09, 0x6c, 
		0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6e, 0x0d, 0x0a, 0x09, 0x0d, 0x0a, 0x09, 0x70, 0x61, 0x74, 0x68, 
		0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73, 0x75, 0x62, 0x28, 0x70, 
		0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 0x5c, 0x5c, 0x22, 0x2c, 0x20, 0x22, 0x2f, 0x22, 0x29, 0x0d, 
		0x0a, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 
		0x6c, 0x6f, 0x77, 0x65, 0x72, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x20, 0x29, 0x0d, 0x0a, 0x09, 
		0x0d, 0x0a, 0x09, 0x2d, 0x2d, 0x6d, 0x61, 0x6b, 0x65, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x74, 
		0x68, 0x65, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20, 0x6c, 0x65, 0x74, 0x74, 0x65, 0x72, 0x2c, 
		0x20, 0x69, 0x66, 0x20, 0x61, 0x6e, 0x79, 0x2c, 0x20, 0x69, 0x73, 0x20, 0x75, 0x70, 0x70, 0x65, 
		0x72, 0x20, 0x63, 0x61, 0x73, 0x65, 0x0d, 0x0a, 0x09, 0x69, 0x66, 0x20, 0x73, 0x74, 0x72, 0x69, 
		0x6e, 0x67, 0x2e, 0x66, 0x69, 0x6e, 0x64, 0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 0x5e, 
		0x2e, 0x3a, 0x2f, 0x22, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0d, 
		0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 
		0x2e, 0x75, 0x70, 0x70, 0x65, 0x72, 0x28, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 
		0x62, 0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x31, 0x29, 0x29, 0x2e, 0x2e, 
		0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 
		0x20, 0x32, 0x29, 0x0d, 0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x69, 0x66, 0x20, 0x73, 0x74, 0x72, 
		0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 
		0x2c, 0x20, 0x31, 0x20, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x22, 0x2f, 0x22, 0x20, 0x74, 0x68, 0x65, 
		0x6e, 0x0d, 0x0a, 0x09, 0x09, 0x2d, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x6f, 0x6c, 0x75, 0x74, 0x65, 
		0x20, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x2d, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x20, 0x70, 0x61, 0x74, 
		0x68, 0x2c, 0x20, 0x6e, 0x6f, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x64, 0x6f, 
		0x0d, 0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x69, 0x66, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 
		0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x32, 
		0x20, 0x29, 0x20, 0x3d, 0x3d, 0x20, 0x22, 0x2e, 0x2f, 0x22, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0d, 
		0x0a, 0x09, 0x09, 0x2d, 0x2d, 0x20, 0x65, 0x78, 0x70, 0x6c, 0x69, 0x63, 0x69, 0x74, 0x20, 0x72, 
		0x65, 0x6c, 0x61, 0x74, 0x69, 0x76, 0x65, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x6e, 0x6f, 
		0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x64, 0x6f, 0x0d, 0x0a, 0x09, 0x65, 0x6c, 
		0x73, 0x65, 0x0d, 0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x22, 0x2e, 0x2f, 
		0x22, 0x2e, 0x2e, 0x70, 0x61, 0x74, 0x68, 0x0d, 0x0a, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 
		0x0d, 0x0a, 0x09, 0x69, 0x66, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 
		0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x32, 0x20, 0x29, 0x20, 0x3d, 
		0x3d, 0x20, 0x22, 0x2e, 0x2f, 0x22, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x62, 0x61, 0x73, 0x65, 0x20, 
		0x7e, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0d, 0x0a, 0x09, 0x09, 0x2d, 
		0x2d, 0x20, 0x69, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x66, 0x73, 0x20, 0x6d, 0x6f, 0x64, 
		0x75, 0x6c, 0x65, 0x20, 0x69, 0x73, 0x20, 0x61, 0x76, 0x61, 0x69, 0x6c, 0x61, 0x62, 0x6c, 0x65, 
		0x2c, 0x20, 0x77, 0x65, 0x20, 0x63, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x20, 0x72, 0x65, 0x6c, 
		0x61, 0x74, 0x69, 0x76, 0x65, 0x20, 0x70, 0x61, 0x74, 0x68, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x62, 
		0x73, 0x6f, 0x6c, 0x75, 0x74, 0x65, 0x0d, 0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 
		0x20, 0x62, 0x61, 0x73, 0x65, 0x2e, 0x2e, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 
		0x62, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x32, 0x20, 0x29, 0x0d, 0x0a, 0x09, 0x09, 
		0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73, 
		0x75, 0x62, 0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 0x5c, 0x5c, 0x22, 0x2c, 0x20, 0x22, 
		0x2f, 0x22, 0x29, 0x0d, 0x0a, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x0d, 0x0a, 0x09, 0x2d, 
		0x2d, 0x61, 0x64, 0x64, 0x20, 0x65, 0x6e, 0x64, 0x20, 0x22, 0x2f, 0x22, 0x20, 0x69, 0x66, 0x20, 
		0x6e, 0x65, 0x65, 0x64, 0x65, 0x64, 0x20, 0x28, 0x73, 0x69, 0x6d, 0x70, 0x6c, 0x69, 0x66, 0x69, 
		0x65, 0x73, 0x20, 0x70, 0x61, 0x74, 0x74, 0x65, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x74, 0x63, 0x68, 
		0x69, 0x6e, 0x67, 0x73, 0x20, 0x62, 0x65, 0x6c, 0x6f, 0x77, 0x29, 0x0d, 0x0a, 0x09, 0x69, 0x66, 
		0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x70, 0x61, 0x74, 0x68, 
		0x2c, 0x20, 0x2d, 0x31, 0x29, 0x20, 0x7e, 0x3d, 0x20, 0x22, 0x2f, 0x22, 0x20, 0x74, 0x68, 0x65, 
		0x6e, 0x0d, 0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x70, 0x61, 0x74, 0x68, 
		0x2e, 0x2e, 0x22, 0x2f, 0x22, 0x0d, 0x0a, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x0d, 0x0a, 
		0x09, 0x2d, 0x2d, 0x72, 0x65, 0x70, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x22, 0x2f, 0x2f, 0x22, 0x20, 
		0x62, 0x79, 0x20, 0x22, 0x2f, 0x22, 0x0d, 0x0a, 0x09, 0x6e, 0x20, 0x3d, 0x20, 0x31, 0x0d, 0x0a, 
		0x09, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x6e, 0x20, 0x3e, 0x20, 0x30, 0x20, 0x64, 0x6f, 0x0d, 
		0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x6e, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 
		0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73, 0x75, 0x62, 0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 
		0x2f, 0x2f, 0x22, 0x2c, 0x20, 0x22, 0x2f, 0x22, 0x2c, 0x20, 0x31, 0x29, 0x0d, 0x0a, 0x09, 0x65, 
		0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x0d, 0x0a, 0x09, 0x2d, 0x2d, 0x72, 0x65, 0x70, 0x6c, 0x61, 0x63, 
		0x65, 0x20, 0x22, 0x2f, 0x2e, 0x2f, 0x22, 0x20, 0x62, 0x79, 0x20, 0x22, 0x2f, 0x22, 0x0d, 0x0a, 
		0x09, 0x6e, 0x20, 0x3d, 0x20, 0x31, 0x0d, 0x0a, 0x09, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x6e, 
		0x20, 0x3e, 0x20, 0x30, 0x20, 0x64, 0x6f, 0x0d, 0x0a, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x2c, 
		0x20, 0x6e, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73, 0x75, 0x62, 
		0x28, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 0x2f, 0x25, 0x2e, 0x2f, 0x22, 0x2c, 0x20, 0x22, 
		0x2f, 0x22, 0x2c, 0x20, 0x31, 0x29, 0x0d, 0x0a, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x0d, 
		0x0a, 0x09, 0x2d, 0x2d, 0x72, 0x65, 0x70, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x22, 0x2f, 0x73, 0x6f, 
		0x6d, 0x65, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x2f, 0x2e, 0x2e, 0x2f, 0x22, 0x20, 0x62, 0x79, 0x20, 
		0x22, 0x2f, 0x22, 0x0d, 0x0a, 0x09, 0x6e, 0x20, 0x3d, 0x20, 0x31, 0x0d, 0x0a, 0x09, 0x77, 0x68, 
		0x69, 0x6c, 0x65, 0x20, 0x6e, 0x20, 0x3e, 0x20, 0x30, 0x20, 0x64, 0x6f, 0x0d, 0x0a, 0x09, 0x09, 
		0x6e, 0x20, 0x3d, 0x20, 0x30, 0x0d, 0x0a, 0x09, 0x09, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 
		0x20, 0x3d, 0x20, 0x30, 0x2c, 0x20, 0x65, 0x0d, 0x0a, 0x09, 0x09, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 
		0x20, 0x73, 0x6f, 0x6d, 0x65, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x3d, 0x20, 0x22, 0x2e, 0x2e, 
		0x22, 0x0d, 0x0a, 0x09, 0x09, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x73, 0x6f, 0x6d, 0x65, 0x74, 
		0x68, 0x69, 0x6e, 0x67, 0x20, 0x3d, 0x3d, 0x20, 0x22, 0x2e, 0x2e, 0x22, 0x20, 0x64, 0x6f, 0x0d, 
		0x0a, 0x09, 0x09, 0x09, 0x73, 0x2c, 0x20, 0x65, 0x2c, 0x20, 0x73, 0x6f, 0x6d, 0x65, 0x74, 0x68, 
		0x69, 0x6e, 0x67, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x66, 0x69, 0x6e, 
		0x64, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x2c, 0x20, 0x22, 0x2f, 0x28, 0x5b, 0x5e, 0x2f, 0x5d, 
		0x2a, 0x29, 0x2f, 0x25, 0x2e, 0x25, 0x2e, 0x2f, 0x22, 0x2c, 0x20, 0x73, 0x2b, 0x31, 0x20, 0x29, 
		0x0d, 0x0a, 0x09, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 0x73, 0x20, 
		0x7e, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0d, 0x0a, 0x09, 0x09, 0x09, 
		0x6e, 0x20, 0x3d, 0x20, 0x31, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x70, 0x61, 0x74, 0x68, 0x20, 0x3d, 
		0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 0x61, 0x74, 
		0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x73, 0x2d, 0x31, 0x20, 0x29, 0x2e, 0x2e, 0x22, 0x2f, 0x22, 
		0x2e, 0x2e, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 0x61, 
		0x74, 0x68, 0x2c, 0x20, 0x65, 0x2b, 0x31, 0x20, 0x29, 0x0d, 0x0a, 0x09, 0x09, 0x65, 0x6e, 0x64, 
		0x0d, 0x0a, 0x09, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x09, 0x0d, 0x0a, 0x09, 0x70, 0x61, 0x74, 0x68, 
		0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x75, 0x62, 0x28, 0x20, 0x70, 
		0x61, 0x74, 0x68, 0x2c, 0x20, 0x31, 0x2c, 0x20, 0x2d, 0x32, 0x20, 0x29, 0x20, 0x2d, 0x2d, 0x20, 
		0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x65, 0x6e, 0x64, 0x20, 0x22, 0x2f, 0x22, 0x0d, 0x0a, 
		0x09, 0x2d, 0x2d, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x28, 0x20, 0x70, 0x61, 0x74, 0x68, 0x20, 0x29, 
		0x0d, 0x0a, 0x09, 0x0d, 0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x70, 0x61, 0x74, 
		0x68, 0x0d, 0x0a, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 
	};
	return (const char*)code;
}
int GRLDC_getutilitiesCodeSize()
{
	return 1704;
}