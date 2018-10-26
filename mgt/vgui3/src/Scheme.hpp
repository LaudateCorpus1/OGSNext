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

#include "vgui3/IScheme.hpp"

namespace vgui3
{

class CScheme : public IScheme
{
public:
	CScheme();
	~CScheme();
	
	const char *GetResourceString(const char *stringName) override;
	IBorder *GetBorder(const char *borderName) override;
	HFont GetFont(const char *fontName, bool proportional) override;
	Color GetColor(const char *colorName, Color defaultColor) override;
};

}; // namespace vgui3