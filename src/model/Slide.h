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
 * Slide.h
 *
 * Presentation slide.
 */

#ifndef _Slide_H_
#define _Slide_H_

#include "ResourceBase.h"

#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>
#include "../model/ResourceUriElement.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Presentation slide.
/// </summary>
class  Slide : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT Slide();
	ASPOSE_DLL_EXPORT virtual ~Slide();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the width.
	/// </summary>
	ASPOSE_DLL_EXPORT double getWidth() const;
	ASPOSE_DLL_EXPORT void setWidth(double value);
	/// <summary>
	/// Gets or sets the height.
	/// </summary>
	ASPOSE_DLL_EXPORT double getHeight() const;
	ASPOSE_DLL_EXPORT void setHeight(double value);
	/// <summary>
	/// Specifies if shapes of the master slide should be shown on the slide. True by default.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getShowMasterShapes() const;
	ASPOSE_DLL_EXPORT void setShowMasterShapes(bool value);
	/// <summary>
	/// Gets or sets the  link to the layout slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getLayoutSlide() const;
	ASPOSE_DLL_EXPORT void setLayoutSlide(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Gets or sets the  link to list of top-level shapes.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getShapes() const;
	ASPOSE_DLL_EXPORT void setShapes(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Gets or sets the link to theme.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getTheme() const;
	ASPOSE_DLL_EXPORT void setTheme(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Gets or sets the  link to placeholders.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getPlaceholders() const;
	ASPOSE_DLL_EXPORT void setPlaceholders(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Gets or sets the link to images.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getImages() const;
	ASPOSE_DLL_EXPORT void setImages(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Gets or sets the link to comments.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getComments() const;
	ASPOSE_DLL_EXPORT void setComments(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Get or sets the link to slide&#39;s background
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getBackground() const;
	ASPOSE_DLL_EXPORT void setBackground(std::shared_ptr<ResourceUriElement> value);
	/// <summary>
	/// Get or sets the link to notes slide.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUriElement> getNotesSlide() const;
	ASPOSE_DLL_EXPORT void setNotesSlide(std::shared_ptr<ResourceUriElement> value);

protected:
	double m_Width;
	double m_Height;
	bool m_ShowMasterShapes;
	std::shared_ptr<ResourceUriElement> m_LayoutSlide;
	std::shared_ptr<ResourceUriElement> m_Shapes;
	std::shared_ptr<ResourceUriElement> m_Theme;
	std::shared_ptr<ResourceUriElement> m_Placeholders;
	std::shared_ptr<ResourceUriElement> m_Images;
	std::shared_ptr<ResourceUriElement> m_Comments;
	std::shared_ptr<ResourceUriElement> m_Background;
	std::shared_ptr<ResourceUriElement> m_NotesSlide;
};

}
}

#endif /* _Slide_H_ */
