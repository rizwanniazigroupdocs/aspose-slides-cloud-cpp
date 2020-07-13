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
 * ResourceBase.h
 *
 * Base class for all Slide&#39;s DTO objects 
 */

#ifndef _ResourceBase_H_
#define _ResourceBase_H_

#include "../ModelBase.h"

#include "../model/ResourceUri.h"
#include <vector>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Base class for all Slide&#39;s DTO objects 
/// </summary>
class  ResourceBase : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT ResourceBase();
	ASPOSE_DLL_EXPORT virtual ~ResourceBase();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Gets or sets the link to this resource.
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<ResourceUri> getSelfUri() const;
	ASPOSE_DLL_EXPORT void setSelfUri(std::shared_ptr<ResourceUri> value);
	/// <summary>
	/// List of alternate links.
	/// </summary>
	ASPOSE_DLL_EXPORT std::vector<std::shared_ptr<ResourceUri>> getAlternateLinks() const;
	ASPOSE_DLL_EXPORT void setAlternateLinks(std::vector<std::shared_ptr<ResourceUri>> value);

protected:
	std::shared_ptr<ResourceUri> m_SelfUri;
	std::vector<std::shared_ptr<ResourceUri>> m_AlternateLinks;
};

}
}

#endif /* _ResourceBase_H_ */
