/*
 * This file is part of OGSNext Engine
 *
 * Copyright (C) 2018, 2020 BlackPhrase
 *
 * OGSNext Engine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OGSNext Engine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OGSNext Engine. If not, see <http://www.gnu.org/licenses/>.
*/

/// @file
/// @brief console variable registry interface

#pragma once

#include "CommonTypes.hpp"
#include "tier1/interface.h"

constexpr auto OGS_CVARREGISTRY_INTERFACE_VERSION{"OGSCvarRegistry001"};
//constexpr auto OGS_CVARREGISTRY_CLIENT_INTERFACE_VERSION{"OGSCvarRegistryClient001"};
//constexpr auto OGS_CVARREGISTRY_SERVER_INTERFACE_VERSION{"OGSCvarRegistryServer001"};

interface IFile;

interface ICvarRegistry
{
	///
	virtual void Add(const char *asName, const char *asDefValue, int anFlags, const char *asDesc = "") = 0;
	
	///
	virtual void WriteVariables(IFile *apFile) = 0; // TODO: WriteToFile; wrong place?
};