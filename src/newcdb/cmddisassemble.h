/***************************************************************************
 *   Copyright (C) 2005 by Ricky White   *
 *   rickyw@neatstuff.co.nz   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef CMDDISASSEMBLE_H
#define CMDDISASSEMBLE_H
#include "parsecmd.h"


class CmdX : public CmdShowSetInfoHelp
{
public:
	CmdX()
	{
		name="X";
		unit_size = 4;
		num_units = 1;
		format ='x';
	}
	bool direct( string cmd );
	
protected:
	bool parseFormat(string token);
	bool readMem( uint32_t flat_addr, unsigned int readByteLength, unsigned char* returnPointer );
	int unit_size;		///< size of the units to print out in bytes
	int num_units;		///< number of unit sized object to output
	char format;		///< Format specifier
};

class CmdChange : public CmdShowSetInfoHelp
{
public:
	CmdChange()
	{
		name="change";
	}
	bool direct( string cmd );
	
protected:
	bool writeMem( uint32_t flat_addr, unsigned int readByteLength, unsigned char* returnPointer );
};

class CmdDisassemble : public CmdShowSetInfoHelp
{
public:
	CmdDisassemble()	{ name="Disassemble"; }
	bool direct( string cmd );
};


#endif
