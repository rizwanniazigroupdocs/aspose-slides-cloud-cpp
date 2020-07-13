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



#include "XpsExportOptions.h"

namespace asposeslidescloud {
namespace model {

XpsExportOptions::XpsExportOptions()
{
}

XpsExportOptions::~XpsExportOptions()
{
}

bool XpsExportOptions::getShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void XpsExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	
}

bool XpsExportOptions::getSaveMetafilesAsPng() const
{
	return m_SaveMetafilesAsPng;
}

void XpsExportOptions::setSaveMetafilesAsPng(bool value)
{
	m_SaveMetafilesAsPng = value;
	
}

bool XpsExportOptions::getDrawSlidesFrame() const
{
	return m_DrawSlidesFrame;
}

void XpsExportOptions::setDrawSlidesFrame(bool value)
{
	m_DrawSlidesFrame = value;
	
}

web::json::value XpsExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	val[utility::conversions::to_string_t("SaveMetafilesAsPng")] = ModelBase::toJson(m_SaveMetafilesAsPng);
	val[utility::conversions::to_string_t("DrawSlidesFrame")] = ModelBase::toJson(m_DrawSlidesFrame);
	return val;
}

void XpsExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForSaveMetafilesAsPng = ModelBase::getField(val, "SaveMetafilesAsPng");
	if(jsonForSaveMetafilesAsPng != nullptr && !jsonForSaveMetafilesAsPng->is_null())
	{
		setSaveMetafilesAsPng(ModelBase::boolFromJson(*jsonForSaveMetafilesAsPng));
	}
	web::json::value* jsonForDrawSlidesFrame = ModelBase::getField(val, "DrawSlidesFrame");
	if(jsonForDrawSlidesFrame != nullptr && !jsonForDrawSlidesFrame->is_null())
	{
		setDrawSlidesFrame(ModelBase::boolFromJson(*jsonForDrawSlidesFrame));
	}
}

}
}

