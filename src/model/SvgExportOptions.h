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

/*
 * SvgExportOptions.h
 *
 * Provides options that control how a presentation is saved in SVG format.
 */

#ifndef _SvgExportOptions_H_
#define _SvgExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in SVG format.
/// </summary>
class  SvgExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT SvgExportOptions();
	ASPOSE_DLL_EXPORT virtual ~SvgExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Determines whether the text on a slide will be saved as graphics.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getVectorizeText() const;
	ASPOSE_DLL_EXPORT void setVectorizeText(bool value);
	/// <summary>
	/// Returns or sets the lower resolution limit for metafile rasterization.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getMetafileRasterizationDpi() const;
	ASPOSE_DLL_EXPORT void setMetafileRasterizationDpi(int32_t value);
	/// <summary>
	/// Determines whether the 3D text is disabled in SVG.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getDisable3DText() const;
	ASPOSE_DLL_EXPORT void setDisable3DText(bool value);
	/// <summary>
	/// Disables splitting FromCornerX and FromCenter gradients.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getDisableGradientSplit() const;
	ASPOSE_DLL_EXPORT void setDisableGradientSplit(bool value);
	/// <summary>
	/// SVG 1.1 lacks ability to define insets for markers. Aspose.Slides SVG writing engine has workaround for that problem: it crops end of line with arrow, so, line doesn&#39;t overlap markers. This option switches off such behavior.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getDisableLineEndCropping() const;
	ASPOSE_DLL_EXPORT void setDisableLineEndCropping(bool value);
	/// <summary>
	/// Determines JPEG encoding quality.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getJpegQuality() const;
	ASPOSE_DLL_EXPORT void setJpegQuality(int32_t value);
	/// <summary>
	/// Represents the pictures compression level
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPicturesCompression() const;
	ASPOSE_DLL_EXPORT void setPicturesCompression(utility::string_t value);
	/// <summary>
	/// A boolean flag indicates if the cropped parts remain as part of the document. If true the cropped  parts will removed, if false they will be serialized in the document (which can possible lead to a  larger file)
	/// </summary>
	ASPOSE_DLL_EXPORT bool getDeletePicturesCroppedAreas() const;
	ASPOSE_DLL_EXPORT void setDeletePicturesCroppedAreas(bool value);
	/// <summary>
	/// Determines a way of handling externally loaded fonts.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getExternalFontsHandling() const;
	ASPOSE_DLL_EXPORT void setExternalFontsHandling(utility::string_t value);

protected:
	bool m_VectorizeText;
	int32_t m_MetafileRasterizationDpi;
	bool m_Disable3DText;
	bool m_DisableGradientSplit;
	bool m_DisableLineEndCropping;
	int32_t m_JpegQuality;
	utility::string_t m_PicturesCompression;
	bool m_DeletePicturesCroppedAreas;
	utility::string_t m_ExternalFontsHandling;
};

}
}

#endif /* _SvgExportOptions_H_ */
