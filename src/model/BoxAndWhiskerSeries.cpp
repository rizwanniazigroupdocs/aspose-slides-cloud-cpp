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



#include "BoxAndWhiskerSeries.h"

namespace asposeslidescloud {
namespace model {

BoxAndWhiskerSeries::BoxAndWhiskerSeries()
{
	m_ShowInnerPointsIsSet = false;
	m_ShowMeanLineIsSet = false;
	m_ShowMeanMarkersIsSet = false;
	m_ShowOutlierPointsIsSet = false;
}

BoxAndWhiskerSeries::~BoxAndWhiskerSeries()
{
}

utility::string_t BoxAndWhiskerSeries::getQuartileMethod() const
{
	return m_QuartileMethod;
}

void BoxAndWhiskerSeries::setQuartileMethod(utility::string_t value)
{
	m_QuartileMethod = value;
	
}

bool BoxAndWhiskerSeries::getShowInnerPoints() const
{
	return m_ShowInnerPoints;
}

void BoxAndWhiskerSeries::setShowInnerPoints(bool value)
{
	m_ShowInnerPoints = value;
	m_ShowInnerPointsIsSet = true;
}

bool BoxAndWhiskerSeries::showInnerPointsIsSet() const
{
	return m_ShowInnerPointsIsSet;
}

void BoxAndWhiskerSeries::unsetShowInnerPoints()
{
	m_ShowInnerPointsIsSet = false;
}

bool BoxAndWhiskerSeries::getShowMeanLine() const
{
	return m_ShowMeanLine;
}

void BoxAndWhiskerSeries::setShowMeanLine(bool value)
{
	m_ShowMeanLine = value;
	m_ShowMeanLineIsSet = true;
}

bool BoxAndWhiskerSeries::showMeanLineIsSet() const
{
	return m_ShowMeanLineIsSet;
}

void BoxAndWhiskerSeries::unsetShowMeanLine()
{
	m_ShowMeanLineIsSet = false;
}

bool BoxAndWhiskerSeries::getShowMeanMarkers() const
{
	return m_ShowMeanMarkers;
}

void BoxAndWhiskerSeries::setShowMeanMarkers(bool value)
{
	m_ShowMeanMarkers = value;
	m_ShowMeanMarkersIsSet = true;
}

bool BoxAndWhiskerSeries::showMeanMarkersIsSet() const
{
	return m_ShowMeanMarkersIsSet;
}

void BoxAndWhiskerSeries::unsetShowMeanMarkers()
{
	m_ShowMeanMarkersIsSet = false;
}

bool BoxAndWhiskerSeries::getShowOutlierPoints() const
{
	return m_ShowOutlierPoints;
}

void BoxAndWhiskerSeries::setShowOutlierPoints(bool value)
{
	m_ShowOutlierPoints = value;
	m_ShowOutlierPointsIsSet = true;
}

bool BoxAndWhiskerSeries::showOutlierPointsIsSet() const
{
	return m_ShowOutlierPointsIsSet;
}

void BoxAndWhiskerSeries::unsetShowOutlierPoints()
{
	m_ShowOutlierPointsIsSet = false;
}

web::json::value BoxAndWhiskerSeries::toJson() const
{
	web::json::value val = this->OneValueSeries::toJson();
	if (!m_QuartileMethod.empty())
	{
		val[utility::conversions::to_string_t("QuartileMethod")] = ModelBase::toJson(m_QuartileMethod);
	}
	if(m_ShowInnerPointsIsSet)
	{
		val[utility::conversions::to_string_t("ShowInnerPoints")] = ModelBase::toJson(m_ShowInnerPoints);
	}
	if(m_ShowMeanLineIsSet)
	{
		val[utility::conversions::to_string_t("ShowMeanLine")] = ModelBase::toJson(m_ShowMeanLine);
	}
	if(m_ShowMeanMarkersIsSet)
	{
		val[utility::conversions::to_string_t("ShowMeanMarkers")] = ModelBase::toJson(m_ShowMeanMarkers);
	}
	if(m_ShowOutlierPointsIsSet)
	{
		val[utility::conversions::to_string_t("ShowOutlierPoints")] = ModelBase::toJson(m_ShowOutlierPoints);
	}
	return val;
}

void BoxAndWhiskerSeries::fromJson(web::json::value& val)
{
	this->OneValueSeries::fromJson(val);
	web::json::value* jsonForQuartileMethod = ModelBase::getField(val, "QuartileMethod");
	if(jsonForQuartileMethod != nullptr && !jsonForQuartileMethod->is_null())
	{
		setQuartileMethod(ModelBase::stringFromJson(*jsonForQuartileMethod));
	}
	web::json::value* jsonForShowInnerPoints = ModelBase::getField(val, "ShowInnerPoints");
	if(jsonForShowInnerPoints != nullptr && !jsonForShowInnerPoints->is_null())
	{
		setShowInnerPoints(ModelBase::boolFromJson(*jsonForShowInnerPoints));
	}
	web::json::value* jsonForShowMeanLine = ModelBase::getField(val, "ShowMeanLine");
	if(jsonForShowMeanLine != nullptr && !jsonForShowMeanLine->is_null())
	{
		setShowMeanLine(ModelBase::boolFromJson(*jsonForShowMeanLine));
	}
	web::json::value* jsonForShowMeanMarkers = ModelBase::getField(val, "ShowMeanMarkers");
	if(jsonForShowMeanMarkers != nullptr && !jsonForShowMeanMarkers->is_null())
	{
		setShowMeanMarkers(ModelBase::boolFromJson(*jsonForShowMeanMarkers));
	}
	web::json::value* jsonForShowOutlierPoints = ModelBase::getField(val, "ShowOutlierPoints");
	if(jsonForShowOutlierPoints != nullptr && !jsonForShowOutlierPoints->is_null())
	{
		setShowOutlierPoints(ModelBase::boolFromJson(*jsonForShowOutlierPoints));
	}
}

}
}

