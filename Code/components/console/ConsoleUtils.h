// Copyright (C) 2022 TiltedPhoques SRL.
// For licensing information see LICENSE at the root of this distribution.
#pragma once

#include <cctype>
#include <string>

namespace console
{
// taken from
// https://stackoverflow.com/questions/29169153/how-do-i-verify-a-string-is-valid-double-even-if-it-has-a-point-in-it
inline bool IsNumber(const std::string_view s)
{
    return !s.empty() &&
           std::find_if(s.begin(), s.end(), [](char c) { return !(std::isdigit(c) || c == '.'); }) == s.end();
}

bool CheckIsValidUTF8(const std::string& string);
} // namespace console
