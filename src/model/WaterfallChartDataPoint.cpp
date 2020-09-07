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



#include "WaterfallChartDataPoint.h"

namespace asposeslidescloud {
namespace model {

WaterfallChartDataPoint::WaterfallChartDataPoint()
{
	m_SetAsTotalIsSet = false;
}

WaterfallChartDataPoint::~WaterfallChartDataPoint()
{
}

bool WaterfallChartDataPoint::getSetAsTotal() const
{
	return m_SetAsTotal;
}

void WaterfallChartDataPoint::setSetAsTotal(bool value)
{
	m_SetAsTotal = value;
	m_SetAsTotalIsSet = true;
}

bool WaterfallChartDataPoint::setAsTotalIsSet() const
{
	return m_SetAsTotalIsSet;
}

void WaterfallChartDataPoint::unsetSetAsTotal()
{
	m_SetAsTotalIsSet = false;
}

web::json::value WaterfallChartDataPoint::toJson() const
{
	web::json::value val = this->OneValueChartDataPoint::toJson();
	if(m_SetAsTotalIsSet)
	{
		val[utility::conversions::to_string_t("SetAsTotal")] = ModelBase::toJson(m_SetAsTotal);
	}
	return val;
}

void WaterfallChartDataPoint::fromJson(web::json::value& val)
{
	this->OneValueChartDataPoint::fromJson(val);
	web::json::value* jsonForSetAsTotal = ModelBase::getField(val, "SetAsTotal");
	if(jsonForSetAsTotal != nullptr && !jsonForSetAsTotal->is_null())
	{
		setSetAsTotal(ModelBase::boolFromJson(*jsonForSetAsTotal));
	}
}

}
}

