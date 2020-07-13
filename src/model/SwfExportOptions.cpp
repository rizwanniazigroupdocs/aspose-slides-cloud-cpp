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



#include "SwfExportOptions.h"

namespace asposeslidescloud {
namespace model {

SwfExportOptions::SwfExportOptions()
{
}

SwfExportOptions::~SwfExportOptions()
{
}

bool SwfExportOptions::getShowHiddenSlides() const
{
	return m_ShowHiddenSlides;
}

void SwfExportOptions::setShowHiddenSlides(bool value)
{
	m_ShowHiddenSlides = value;
	
}

bool SwfExportOptions::getCompressed() const
{
	return m_Compressed;
}

void SwfExportOptions::setCompressed(bool value)
{
	m_Compressed = value;
	
}

bool SwfExportOptions::getViewerIncluded() const
{
	return m_ViewerIncluded;
}

void SwfExportOptions::setViewerIncluded(bool value)
{
	m_ViewerIncluded = value;
	
}

bool SwfExportOptions::getShowPageBorder() const
{
	return m_ShowPageBorder;
}

void SwfExportOptions::setShowPageBorder(bool value)
{
	m_ShowPageBorder = value;
	
}

bool SwfExportOptions::getShowFullScreen() const
{
	return m_ShowFullScreen;
}

void SwfExportOptions::setShowFullScreen(bool value)
{
	m_ShowFullScreen = value;
	
}

bool SwfExportOptions::getShowPageStepper() const
{
	return m_ShowPageStepper;
}

void SwfExportOptions::setShowPageStepper(bool value)
{
	m_ShowPageStepper = value;
	
}

bool SwfExportOptions::getShowSearch() const
{
	return m_ShowSearch;
}

void SwfExportOptions::setShowSearch(bool value)
{
	m_ShowSearch = value;
	
}

bool SwfExportOptions::getShowTopPane() const
{
	return m_ShowTopPane;
}

void SwfExportOptions::setShowTopPane(bool value)
{
	m_ShowTopPane = value;
	
}

bool SwfExportOptions::getShowBottomPane() const
{
	return m_ShowBottomPane;
}

void SwfExportOptions::setShowBottomPane(bool value)
{
	m_ShowBottomPane = value;
	
}

bool SwfExportOptions::getShowLeftPane() const
{
	return m_ShowLeftPane;
}

void SwfExportOptions::setShowLeftPane(bool value)
{
	m_ShowLeftPane = value;
	
}

bool SwfExportOptions::getStartOpenLeftPane() const
{
	return m_StartOpenLeftPane;
}

void SwfExportOptions::setStartOpenLeftPane(bool value)
{
	m_StartOpenLeftPane = value;
	
}

bool SwfExportOptions::getEnableContextMenu() const
{
	return m_EnableContextMenu;
}

void SwfExportOptions::setEnableContextMenu(bool value)
{
	m_EnableContextMenu = value;
	
}

utility::string_t SwfExportOptions::getLogoImage() const
{
	return m_LogoImage;
}

void SwfExportOptions::setLogoImage(utility::string_t value)
{
	m_LogoImage = value;
	
}

utility::string_t SwfExportOptions::getLogoLink() const
{
	return m_LogoLink;
}

void SwfExportOptions::setLogoLink(utility::string_t value)
{
	m_LogoLink = value;
	
}

int32_t SwfExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void SwfExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	
}

utility::string_t SwfExportOptions::getNotesPosition() const
{
	return m_NotesPosition;
}

void SwfExportOptions::setNotesPosition(utility::string_t value)
{
	m_NotesPosition = value;
	
}

utility::string_t SwfExportOptions::getCommentsPosition() const
{
	return m_CommentsPosition;
}

void SwfExportOptions::setCommentsPosition(utility::string_t value)
{
	m_CommentsPosition = value;
	
}

int32_t SwfExportOptions::getCommentsAreaWidth() const
{
	return m_CommentsAreaWidth;
}

void SwfExportOptions::setCommentsAreaWidth(int32_t value)
{
	m_CommentsAreaWidth = value;
	
}

utility::string_t SwfExportOptions::getCommentsAreaColor() const
{
	return m_CommentsAreaColor;
}

void SwfExportOptions::setCommentsAreaColor(utility::string_t value)
{
	m_CommentsAreaColor = value;
	
}

bool SwfExportOptions::getShowCommentsByNoAuthor() const
{
	return m_ShowCommentsByNoAuthor;
}

void SwfExportOptions::setShowCommentsByNoAuthor(bool value)
{
	m_ShowCommentsByNoAuthor = value;
	
}

web::json::value SwfExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	val[utility::conversions::to_string_t("ShowHiddenSlides")] = ModelBase::toJson(m_ShowHiddenSlides);
	val[utility::conversions::to_string_t("Compressed")] = ModelBase::toJson(m_Compressed);
	val[utility::conversions::to_string_t("ViewerIncluded")] = ModelBase::toJson(m_ViewerIncluded);
	val[utility::conversions::to_string_t("ShowPageBorder")] = ModelBase::toJson(m_ShowPageBorder);
	val[utility::conversions::to_string_t("ShowFullScreen")] = ModelBase::toJson(m_ShowFullScreen);
	val[utility::conversions::to_string_t("ShowPageStepper")] = ModelBase::toJson(m_ShowPageStepper);
	val[utility::conversions::to_string_t("ShowSearch")] = ModelBase::toJson(m_ShowSearch);
	val[utility::conversions::to_string_t("ShowTopPane")] = ModelBase::toJson(m_ShowTopPane);
	val[utility::conversions::to_string_t("ShowBottomPane")] = ModelBase::toJson(m_ShowBottomPane);
	val[utility::conversions::to_string_t("ShowLeftPane")] = ModelBase::toJson(m_ShowLeftPane);
	val[utility::conversions::to_string_t("StartOpenLeftPane")] = ModelBase::toJson(m_StartOpenLeftPane);
	val[utility::conversions::to_string_t("EnableContextMenu")] = ModelBase::toJson(m_EnableContextMenu);
	if (!m_LogoImage.empty())
	{
		val[utility::conversions::to_string_t("LogoImage")] = ModelBase::toJson(m_LogoImage);
	}
	if (!m_LogoLink.empty())
	{
		val[utility::conversions::to_string_t("LogoLink")] = ModelBase::toJson(m_LogoLink);
	}
	val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
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

void SwfExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForShowHiddenSlides = ModelBase::getField(val, "ShowHiddenSlides");
	if(jsonForShowHiddenSlides != nullptr && !jsonForShowHiddenSlides->is_null())
	{
		setShowHiddenSlides(ModelBase::boolFromJson(*jsonForShowHiddenSlides));
	}
	web::json::value* jsonForCompressed = ModelBase::getField(val, "Compressed");
	if(jsonForCompressed != nullptr && !jsonForCompressed->is_null())
	{
		setCompressed(ModelBase::boolFromJson(*jsonForCompressed));
	}
	web::json::value* jsonForViewerIncluded = ModelBase::getField(val, "ViewerIncluded");
	if(jsonForViewerIncluded != nullptr && !jsonForViewerIncluded->is_null())
	{
		setViewerIncluded(ModelBase::boolFromJson(*jsonForViewerIncluded));
	}
	web::json::value* jsonForShowPageBorder = ModelBase::getField(val, "ShowPageBorder");
	if(jsonForShowPageBorder != nullptr && !jsonForShowPageBorder->is_null())
	{
		setShowPageBorder(ModelBase::boolFromJson(*jsonForShowPageBorder));
	}
	web::json::value* jsonForShowFullScreen = ModelBase::getField(val, "ShowFullScreen");
	if(jsonForShowFullScreen != nullptr && !jsonForShowFullScreen->is_null())
	{
		setShowFullScreen(ModelBase::boolFromJson(*jsonForShowFullScreen));
	}
	web::json::value* jsonForShowPageStepper = ModelBase::getField(val, "ShowPageStepper");
	if(jsonForShowPageStepper != nullptr && !jsonForShowPageStepper->is_null())
	{
		setShowPageStepper(ModelBase::boolFromJson(*jsonForShowPageStepper));
	}
	web::json::value* jsonForShowSearch = ModelBase::getField(val, "ShowSearch");
	if(jsonForShowSearch != nullptr && !jsonForShowSearch->is_null())
	{
		setShowSearch(ModelBase::boolFromJson(*jsonForShowSearch));
	}
	web::json::value* jsonForShowTopPane = ModelBase::getField(val, "ShowTopPane");
	if(jsonForShowTopPane != nullptr && !jsonForShowTopPane->is_null())
	{
		setShowTopPane(ModelBase::boolFromJson(*jsonForShowTopPane));
	}
	web::json::value* jsonForShowBottomPane = ModelBase::getField(val, "ShowBottomPane");
	if(jsonForShowBottomPane != nullptr && !jsonForShowBottomPane->is_null())
	{
		setShowBottomPane(ModelBase::boolFromJson(*jsonForShowBottomPane));
	}
	web::json::value* jsonForShowLeftPane = ModelBase::getField(val, "ShowLeftPane");
	if(jsonForShowLeftPane != nullptr && !jsonForShowLeftPane->is_null())
	{
		setShowLeftPane(ModelBase::boolFromJson(*jsonForShowLeftPane));
	}
	web::json::value* jsonForStartOpenLeftPane = ModelBase::getField(val, "StartOpenLeftPane");
	if(jsonForStartOpenLeftPane != nullptr && !jsonForStartOpenLeftPane->is_null())
	{
		setStartOpenLeftPane(ModelBase::boolFromJson(*jsonForStartOpenLeftPane));
	}
	web::json::value* jsonForEnableContextMenu = ModelBase::getField(val, "EnableContextMenu");
	if(jsonForEnableContextMenu != nullptr && !jsonForEnableContextMenu->is_null())
	{
		setEnableContextMenu(ModelBase::boolFromJson(*jsonForEnableContextMenu));
	}
	web::json::value* jsonForLogoImage = ModelBase::getField(val, "LogoImage");
	if(jsonForLogoImage != nullptr && !jsonForLogoImage->is_null())
	{
		setLogoImage(ModelBase::stringFromJson(*jsonForLogoImage));
	}
	web::json::value* jsonForLogoLink = ModelBase::getField(val, "LogoLink");
	if(jsonForLogoLink != nullptr && !jsonForLogoLink->is_null())
	{
		setLogoLink(ModelBase::stringFromJson(*jsonForLogoLink));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
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

