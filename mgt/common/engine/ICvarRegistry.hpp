/*
 * This file is part of Magenta Engine
 *
 * Copyright (C) 2018 BlackPhrase
 *
 * Magenta Engine is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Magenta Engine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Magenta Engine. If not, see <http://www.gnu.org/licenses/>.
*/

/// @file
/// @brief console variable registry interface

#pragma once

#include "CommonTypes.hpp"

constexpr auto MGT_CLIENTCVARREGISTRY_INTERFACE_VERSION{"MGTClientCvarRegistry001Alpha"};
constexpr auto MGT_SERVERCVARREGISTRY_INTERFACE_VERSION{"MGTServerCvarRegistry001Alpha"};

interface ICvarRegistry
{
	///
	virtual void Add(const char *asName, const char *asDefValue, int anFlags, const char *asDesc = "") = 0;
};