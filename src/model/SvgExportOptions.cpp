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



#include "SvgExportOptions.h"

namespace asposeslidescloud {
namespace model {

SvgExportOptions::SvgExportOptions()
{
}

SvgExportOptions::~SvgExportOptions()
{
}

bool SvgExportOptions::getVectorizeText() const
{
	return m_VectorizeText;
}

void SvgExportOptions::setVectorizeText(bool value)
{
	m_VectorizeText = value;
	
}

int32_t SvgExportOptions::getMetafileRasterizationDpi() const
{
	return m_MetafileRasterizationDpi;
}

void SvgExportOptions::setMetafileRasterizationDpi(int32_t value)
{
	m_MetafileRasterizationDpi = value;
	
}

bool SvgExportOptions::getDisable3DText() const
{
	return m_Disable3DText;
}

void SvgExportOptions::setDisable3DText(bool value)
{
	m_Disable3DText = value;
	
}

bool SvgExportOptions::getDisableGradientSplit() const
{
	return m_DisableGradientSplit;
}

void SvgExportOptions::setDisableGradientSplit(bool value)
{
	m_DisableGradientSplit = value;
	
}

bool SvgExportOptions::getDisableLineEndCropping() const
{
	return m_DisableLineEndCropping;
}

void SvgExportOptions::setDisableLineEndCropping(bool value)
{
	m_DisableLineEndCropping = value;
	
}

int32_t SvgExportOptions::getJpegQuality() const
{
	return m_JpegQuality;
}

void SvgExportOptions::setJpegQuality(int32_t value)
{
	m_JpegQuality = value;
	
}

utility::string_t SvgExportOptions::getPicturesCompression() const
{
	return m_PicturesCompression;
}

void SvgExportOptions::setPicturesCompression(utility::string_t value)
{
	m_PicturesCompression = value;
	
}

bool SvgExportOptions::getDeletePicturesCroppedAreas() const
{
	return m_DeletePicturesCroppedAreas;
}

void SvgExportOptions::setDeletePicturesCroppedAreas(bool value)
{
	m_DeletePicturesCroppedAreas = value;
	
}

utility::string_t SvgExportOptions::getExternalFontsHandling() const
{
	return m_ExternalFontsHandling;
}

void SvgExportOptions::setExternalFontsHandling(utility::string_t value)
{
	m_ExternalFontsHandling = value;
	
}

web::json::value SvgExportOptions::toJson() const
{
	web::json::value val = this->ExportOptions::toJson();
	val[utility::conversions::to_string_t("VectorizeText")] = ModelBase::toJson(m_VectorizeText);
	val[utility::conversions::to_string_t("MetafileRasterizationDpi")] = ModelBase::toJson(m_MetafileRasterizationDpi);
	val[utility::conversions::to_string_t("Disable3DText")] = ModelBase::toJson(m_Disable3DText);
	val[utility::conversions::to_string_t("DisableGradientSplit")] = ModelBase::toJson(m_DisableGradientSplit);
	val[utility::conversions::to_string_t("DisableLineEndCropping")] = ModelBase::toJson(m_DisableLineEndCropping);
	val[utility::conversions::to_string_t("JpegQuality")] = ModelBase::toJson(m_JpegQuality);
	if (!m_PicturesCompression.empty())
	{
		val[utility::conversions::to_string_t("PicturesCompression")] = ModelBase::toJson(m_PicturesCompression);
	}
	val[utility::conversions::to_string_t("DeletePicturesCroppedAreas")] = ModelBase::toJson(m_DeletePicturesCroppedAreas);
	if (!m_ExternalFontsHandling.empty())
	{
		val[utility::conversions::to_string_t("ExternalFontsHandling")] = ModelBase::toJson(m_ExternalFontsHandling);
	}
	return val;
}

void SvgExportOptions::fromJson(web::json::value& val)
{
	this->ExportOptions::fromJson(val);
	web::json::value* jsonForVectorizeText = ModelBase::getField(val, "VectorizeText");
	if(jsonForVectorizeText != nullptr && !jsonForVectorizeText->is_null())
	{
		setVectorizeText(ModelBase::boolFromJson(*jsonForVectorizeText));
	}
	web::json::value* jsonForMetafileRasterizationDpi = ModelBase::getField(val, "MetafileRasterizationDpi");
	if(jsonForMetafileRasterizationDpi != nullptr && !jsonForMetafileRasterizationDpi->is_null() && jsonForMetafileRasterizationDpi->is_number())
	{
		setMetafileRasterizationDpi(ModelBase::int32_tFromJson(*jsonForMetafileRasterizationDpi));
	}
	web::json::value* jsonForDisable3DText = ModelBase::getField(val, "Disable3DText");
	if(jsonForDisable3DText != nullptr && !jsonForDisable3DText->is_null())
	{
		setDisable3DText(ModelBase::boolFromJson(*jsonForDisable3DText));
	}
	web::json::value* jsonForDisableGradientSplit = ModelBase::getField(val, "DisableGradientSplit");
	if(jsonForDisableGradientSplit != nullptr && !jsonForDisableGradientSplit->is_null())
	{
		setDisableGradientSplit(ModelBase::boolFromJson(*jsonForDisableGradientSplit));
	}
	web::json::value* jsonForDisableLineEndCropping = ModelBase::getField(val, "DisableLineEndCropping");
	if(jsonForDisableLineEndCropping != nullptr && !jsonForDisableLineEndCropping->is_null())
	{
		setDisableLineEndCropping(ModelBase::boolFromJson(*jsonForDisableLineEndCropping));
	}
	web::json::value* jsonForJpegQuality = ModelBase::getField(val, "JpegQuality");
	if(jsonForJpegQuality != nullptr && !jsonForJpegQuality->is_null() && jsonForJpegQuality->is_number())
	{
		setJpegQuality(ModelBase::int32_tFromJson(*jsonForJpegQuality));
	}
	web::json::value* jsonForPicturesCompression = ModelBase::getField(val, "PicturesCompression");
	if(jsonForPicturesCompression != nullptr && !jsonForPicturesCompression->is_null())
	{
		setPicturesCompression(ModelBase::stringFromJson(*jsonForPicturesCompression));
	}
	web::json::value* jsonForDeletePicturesCroppedAreas = ModelBase::getField(val, "DeletePicturesCroppedAreas");
	if(jsonForDeletePicturesCroppedAreas != nullptr && !jsonForDeletePicturesCroppedAreas->is_null())
	{
		setDeletePicturesCroppedAreas(ModelBase::boolFromJson(*jsonForDeletePicturesCroppedAreas));
	}
	web::json::value* jsonForExternalFontsHandling = ModelBase::getField(val, "ExternalFontsHandling");
	if(jsonForExternalFontsHandling != nullptr && !jsonForExternalFontsHandling->is_null())
	{
		setExternalFontsHandling(ModelBase::stringFromJson(*jsonForExternalFontsHandling));
	}
}

}
}

