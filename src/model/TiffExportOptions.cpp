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



#include "TiffExportOptions.h"

namespace asposeslidescloud {
namespace model {

TiffExportOptions::TiffExportOptions()
{
	m_WidthIsSet = false;
	m_HeightIsSet = false;
	m_DpiXIsSet = false;
	m_DpiYIsSet = false;
}

TiffExportOptions::~TiffExportOptions()
{
}

utility::string_t TiffExportOptions::getCompression() const
{
	return m_Compression;
}

void TiffExportOptions::setCompression(utility::string_t value)
{
	m_Compression = value;
	
}

int32_t TiffExportOptions::getWidth() const
{
	return m_Width;
}

void TiffExportOptions::setWidth(int32_t value)
{
	m_Width = value;
	m_WidthIsSet = true;
}

bool TiffExportOptions::widthIsSet() const
{
	return m_WidthIsSet;
}

void TiffExportOptions::unsetWidth()
{
	m_WidthIsSet = false;
}

int32_t TiffExportOptions::getHeight() const
{
	return m_Height;
}

void TiffExportOptions::setHeight(int32_t value)
{
	m_Height = value;
	m_HeightIsSet = true;
}

bool TiffExportOptions::heightIsSet() const
{
	return m_HeightIsSet;
}

void TiffExportOptions::unsetHeight()
{
	m_HeightIsSet = false;
}

int32_t TiffExportOptions::getDpiX() const
{
	return m_DpiX;
}

void TiffExportOptions::setDpiX(int32_t value)
{
	m_DpiX = value;
	m_DpiXIsSet = true;
}

bool TiffExportOptions::dpiXIsSet() const
{
	return m_DpiXIsSet;
}

void TiffExportOptions::unsetDpiX()
{
	m_DpiXIsSet = false;
}

int32_t TiffExportOptions::getDpiY() const
{
	return m_DpiY;
}

void TiffExportOptions::setDpiY(int32_t value)
{
	m_DpiY = value;
	m_DpiYIsSet = true;
}

bool TiffExportOptions::dpiYIsSet() const
{
	return m_DpiYIsSet;
}

void TiffExportOptions::unsetDpiY()
{
	m_DpiYIsSet = false;
}

bool TiffExportOptions::getShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void TiffExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	
}

utility::string_t TiffExportOptions::getPixelFormat() const
{
	return m_PixelFormat;
}

void TiffExportOptions::setPixelFormat(utility::string_t value)
{
	m_PixelFormat = value;
	
}

utility::string_t TiffExportOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void TiffExportOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t TiffExportOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void TiffExportOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t TiffExportOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void TiffExportOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	
}

utility::string_t TiffExportOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void TiffExportOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

bool TiffExportOptions::getShowCommentsByNoAuthor() const
{
	return m_ShowCommentsByNoAuthor;
}

void TiffExportOptions::setShowCommentsByNoAuthor(bool value)
{
	m_ShowCommentsByNoAuthor = value;
	
}

web::json::value TiffExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	if (!m_Compression.empty())
	{
		val[utility::conversions::to_string_t("Compression")] = ModelBase::toJson(m_Compression);
	}
	if(m_WidthIsSet)
	{
		val[utility::conversions::to_string_t("Width")] = ModelBase::toJson(m_Width);
	}
	if(m_HeightIsSet)
	{
		val[utility::conversions::to_string_t("Height")] = ModelBase::toJson(m_Height);
	}
	if(m_DpiXIsSet)
	{
		val[utility::conversions::to_string_t("DpiX")] = ModelBase::toJson(m_DpiX);
	}
	if(m_DpiYIsSet)
	{
		val[utility::conversions::to_string_t("DpiY")] = ModelBase::toJson(m_DpiY);
	}
	val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	if (!m_PixelFormat.empty())
	{
		val[utility::conversions::to_string_t("PixelFormat")] = ModelBase::toJson(m_PixelFormat);
	}
	if (!m_NotesPosition.empty())
	{
		val[utility::conversions::to_string_t("NotesPosition")] = ModelBase::toJson(m_NotesPosition);
	}
	if (!m_CommentsPosition.empty())
	{
		val[utility::conversions::to_string_t("CommentsPosition")] = ModelBase::toJson(m_CommentsPosition);
	}
	val[utility::conversions::to_string_t("CommentsAreaWidth")] = ModelBase::toJson(m_CommentsAreaWidth);
	if (!m_CommentsAreaColor.empty())
	{
		val[utility::conversions::to_string_t("CommentsAreaColor")] = ModelBase::toJson(m_CommentsAreaColor);
	}
	val[utility::conversions::to_string_t("ShowCommentsByNoAuthor")] = ModelBase::toJson(m_ShowCommentsByNoAuthor);
	return val;
}

void TiffExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForCompression = ModelBase::getField(val, "Compression");
	if(jsonForCompression != nullptr && !jsonForCompression->is_null())
	{
		setCompression(ModelBase::stringFromJson(*jsonForCompression));
	}
	web::json::value* jsonForWidth = ModelBase::getField(val, "Width");
	if(jsonForWidth != nullptr && !jsonForWidth->is_null())
	{
		setWidth(ModelBase::int32_tFromJson(*jsonForWidth));
	}
	web::json::value* jsonForHeight = ModelBase::getField(val, "Height");
	if(jsonForHeight != nullptr && !jsonForHeight->is_null())
	{
		setHeight(ModelBase::int32_tFromJson(*jsonForHeight));
	}
	web::json::value* jsonForDpiX = ModelBase::getField(val, "DpiX");
	if(jsonForDpiX != nullptr && !jsonForDpiX->is_null())
	{
		setDpiX(ModelBase::int32_tFromJson(*jsonForDpiX));
	}
	web::json::value* jsonForDpiY = ModelBase::getField(val, "DpiY");
	if(jsonForDpiY != nullptr && !jsonForDpiY->is_null())
	{
		setDpiY(ModelBase::int32_tFromJson(*jsonForDpiY));
	}
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForPixelFormat = ModelBase::getField(val, "PixelFormat");
	if(jsonForPixelFormat != nullptr && !jsonForPixelFormat->is_null())
	{
		setPixelFormat(ModelBase::stringFromJson(*jsonForPixelFormat));
	}
	web::json::value* jsonForNotesPosition = ModelBase::getField(val, "NotesPosition");
	if(jsonForNotesPosition != nullptr && !jsonForNotesPosition->is_null())
	{
		setNotesPosition(ModelBase::stringFromJson(*jsonForNotesPosition));
	}
	web::json::value* jsonForCommentsPosition = ModelBase::getField(val, "CommentsPosition");
	if(jsonForCommentsPosition != nullptr && !jsonForCommentsPosition->is_null())
	{
		setCommentsPosition(ModelBase::stringFromJson(*jsonForCommentsPosition));
	}
	web::json::value* jsonForCommentsAreaWidth = ModelBase::getField(val, "CommentsAreaWidth");
	if(jsonForCommentsAreaWidth != nullptr && !jsonForCommentsAreaWidth->is_null())
	{
		setCommentsAreaWidth(ModelBase::int32_tFromJson(*jsonForCommentsAreaWidth));
	}
	web::json::value* jsonForCommentsAreaColor = ModelBase::getField(val, "CommentsAreaColor");
	if(jsonForCommentsAreaColor != nullptr && !jsonForCommentsAreaColor->is_null())
	{
		setCommentsAreaColor(ModelBase::stringFromJson(*jsonForCommentsAreaColor));
	}
	web::json::value* jsonForShowCommentsByNoAuthor = ModelBase::getField(val, "ShowCommentsByNoAuthor");
	if(jsonForShowCommentsByNoAuthor != nullptr && !jsonForShowCommentsByNoAuthor->is_null())
	{
		setShowCommentsByNoAuthor(ModelBase::boolFromJson(*jsonForShowCommentsByNoAuthor));
	}
}

}
}

