/*
 * This file is part of Magenta Engine
 *
 * Copyright (C) 2016-2018 BlackPhrase
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

#pragma once

#include "vgui3/IScheme.h"

namespace vgui3
{

class CSchemeManager : public ISchemeManager
{
public:
	HScheme LoadSchemeFromFile(const char *fileName, const char *tag);

	void ReloadSchemes();

	HScheme GetDefaultScheme();
	HScheme GetScheme(const char *tag);

	IImage *GetImage(const char *imageName, bool hardwareFiltered);
	HTexture GetImageID(const char *imageName, bool hardwareFiltered);

	IScheme *GetIScheme(HScheme scheme);

	void Shutdown(bool full = true);

	int GetProportionalScaledValue(int normalizedValue);
	int GetProportionalNormalizedValue(int scaledValue);
};

}; // namespace vgui3