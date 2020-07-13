// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#include "ModelBase.h"
#include <cctype>

namespace asposeslidescloud {
namespace model {

ModelBase::ModelBase()
{
}

ModelBase::~ModelBase()
{
}

web::json::value ModelBase::toJson(const utility::string_t& value)
{
	return web::json::value::string(value);
}

web::json::value ModelBase::toJson(const utility::datetime& value)
{
	return web::json::value::string(value.to_string(utility::datetime::ISO_8601));
}

web::json::value ModelBase::toJson(int32_t value)
{
	return web::json::value::number(value);
}

web::json::value ModelBase::toJson(int64_t value)
{
	return web::json::value::number(value);
}

web::json::value ModelBase::toJson(double value)
{
	return web::json::value::number(value);
}

web::json::value ModelBase::toJson(bool value) {
	return web::json::value::boolean(value);
}

bool ModelBase::boolFromJson(web::json::value& val)
{
    return val.as_bool();
}

int32_t ModelBase::int32_tFromJson(web::json::value& val)
{
    return val.as_integer();
}

int64_t ModelBase::int64_tFromJson(web::json::value& val)
{
    return val.as_number().to_int64();
}

double ModelBase::doubleFromJson(web::json::value& val)
{
    return val.as_double();
}

utility::string_t ModelBase::stringFromJson(web::json::value& val)
{
    return val.is_string() ? val.as_string() : utility::conversions::to_string_t("");
}

utility::datetime ModelBase::dateFromJson(web::json::value& val)
{
    return utility::datetime::from_string(val.as_string(), utility::datetime::ISO_8601);
}

web::json::value* ModelBase::getField(web::json::value& val, std::string name)
{
	if (val.has_field(utility::conversions::to_string_t(name)))
	{
		web::json::value& fieldValue = val[utility::conversions::to_string_t(name)];
		if (!fieldValue.is_null())
		{ 
			return &fieldValue;
		}
	}
	name[0] = std::tolower(name[0]);
	if (val.has_field(utility::conversions::to_string_t(name)))
	{
		web::json::value& fieldValue = val[utility::conversions::to_string_t(name)];
		if (!fieldValue.is_null())
		{
			return &fieldValue;
		}
	}
	return nullptr;
}

}
}
