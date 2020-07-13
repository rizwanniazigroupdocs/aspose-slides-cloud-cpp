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
 * TiffExportOptions.h
 *
 * Provides options that control how a presentation is saved in TIFF format.
 */

#ifndef _TiffExportOptions_H_
#define _TiffExportOptions_H_

#include "ExportOptions.h"

#include "../model/ExportOptions.h"
#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Provides options that control how a presentation is saved in TIFF format.
/// </summary>
class  TiffExportOptions : public ExportOptions
{
public:
	ASPOSE_DLL_EXPORT TiffExportOptions();
	ASPOSE_DLL_EXPORT virtual ~TiffExportOptions();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Compression type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCompression() const;
	ASPOSE_DLL_EXPORT void setCompression(utility::string_t value);
	/// <summary>
	/// Width.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(int32_t value);
	ASPOSE_DLL_EXPORT bool widthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetWidth();
	/// <summary>
	/// Height.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(int32_t value);
	ASPOSE_DLL_EXPORT bool heightIsSet() const;
	ASPOSE_DLL_EXPORT void unsetHeight();
	/// <summary>
	/// Horizontal resolution, in dots per inch.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDpiX() const;
	ASPOSE_DLL_EXPORT void setDpiX(int32_t value);
	ASPOSE_DLL_EXPORT bool dpiXIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDpiX();
	/// <summary>
	/// Vertical resolution, in dots per inch.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getDpiY() const;
	ASPOSE_DLL_EXPORT void setDpiY(int32_t value);
	ASPOSE_DLL_EXPORT bool dpiYIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDpiY();
	/// <summary>
	/// Specifies whether the generated document should include hidden slides or not. Default is false. 
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowHiddenSlides() const;
	ASPOSE_DLL_EXPORT void setShowHiddenSlides(bool value);
	/// <summary>
	/// Specifies the pixel format for the generated images. Read/write ImagePixelFormat.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPixelFormat() const;
	ASPOSE_DLL_EXPORT void setPixelFormat(utility::string_t value);
	/// <summary>
	/// Gets or sets the position of the notes on the page.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getNotesPosition() const;
	ASPOSE_DLL_EXPORT void setNotesPosition(utility::string_t value);
	/// <summary>
	/// Gets or sets the position of the comments on the page.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCommentsPosition() const;
	ASPOSE_DLL_EXPORT void setCommentsPosition(utility::string_t value);
	/// <summary>
	/// Gets or sets the width of the comment output area in pixels (Applies only if comments are displayed on the right).
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getCommentsAreaWidth() const;
	ASPOSE_DLL_EXPORT void setCommentsAreaWidth(int32_t value);
	/// <summary>
	/// Gets or sets the color of comments area (Applies only if comments are displayed on the right).
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCommentsAreaColor() const;
	ASPOSE_DLL_EXPORT void setCommentsAreaColor(utility::string_t value);
	/// <summary>
	/// True if comments that have no author are displayed. (Applies only if comments are displayed).
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowCommentsByNoAuthor() const;
	ASPOSE_DLL_EXPORT void setShowCommentsByNoAuthor(bool value);

protected:
	utility::string_t m_Compression;
	int32_t m_Width;
	bool m_WidthIsSet;
	int32_t m_Height;
	bool m_HeightIsSet;
	int32_t m_DpiX;
	bool m_DpiXIsSet;
	int32_t m_DpiY;
	bool m_DpiYIsSet;
	bool m_ShowHiddenSlides;
	utility::string_t m_PixelFormat;
	utility::string_t m_NotesPosition;
	utility::string_t m_CommentsPosition;
	int32_t m_CommentsAreaWidth;
	utility::string_t m_CommentsAreaColor;
	bool m_ShowCommentsByNoAuthor;
};

}
}

#endif /* _TiffExportOptions_H_ */
