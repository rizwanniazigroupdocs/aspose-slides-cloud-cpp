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



#include "FillOverlayEffect.h"

namespace asposeslidescloud {
namespace model {

FillOverlayEffect::FillOverlayEffect()
{
}

FillOverlayEffect::~FillOverlayEffect()
{
}

utility::string_t FillOverlayEffect::getBlend() const
{
	return m_Blend;
}

void FillOverlayEffect::setBlend(utility::string_t value)
{
	m_Blend = value;
	
}

web::json::value FillOverlayEffect::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Blend.empty())
	{
		val[utility::conversions::to_string_t("Blend")] = ModelBase::toJson(m_Blend);
	}
	return val;
}

void FillOverlayEffect::fromJson(web::json::value& val)
{
	web::json::value* jsonForBlend = ModelBase::getField(val, "Blend");
	if(jsonForBlend != nullptr && !jsonForBlend->is_null())
	{
		setBlend(ModelBase::stringFromJson(*jsonForBlend));
	}
}

}
}

