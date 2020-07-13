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



#include "ResourceUri.h"

namespace asposeslidescloud {
namespace model {

ResourceUri::ResourceUri()
{
}

ResourceUri::~ResourceUri()
{
}

utility::string_t ResourceUri::getHref() const
{
	return m_Href;
}

void ResourceUri::setHref(utility::string_t value)
{
	m_Href = value;
	
}

utility::string_t ResourceUri::getRelation() const
{
	return m_Relation;
}

void ResourceUri::setRelation(utility::string_t value)
{
	m_Relation = value;
	
}

utility::string_t ResourceUri::getLinkType() const
{
	return m_LinkType;
}

void ResourceUri::setLinkType(utility::string_t value)
{
	m_LinkType = value;
	
}

utility::string_t ResourceUri::getTitle() const
{
	return m_Title;
}

void ResourceUri::setTitle(utility::string_t value)
{
	m_Title = value;
	
}

web::json::value ResourceUri::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Href.empty())
	{
		val[utility::conversions::to_string_t("Href")] = ModelBase::toJson(m_Href);
	}
	if (!m_Relation.empty())
	{
		val[utility::conversions::to_string_t("Relation")] = ModelBase::toJson(m_Relation);
	}
	if (!m_LinkType.empty())
	{
		val[utility::conversions::to_string_t("LinkType")] = ModelBase::toJson(m_LinkType);
	}
	if (!m_Title.empty())
	{
		val[utility::conversions::to_string_t("Title")] = ModelBase::toJson(m_Title);
	}
	return val;
}

void ResourceUri::fromJson(web::json::value& val)
{
	web::json::value* jsonForHref = ModelBase::getField(val, "Href");
	if(jsonForHref != nullptr && !jsonForHref->is_null())
	{
		setHref(ModelBase::stringFromJson(*jsonForHref));
	}
	web::json::value* jsonForRelation = ModelBase::getField(val, "Relation");
	if(jsonForRelation != nullptr && !jsonForRelation->is_null())
	{
		setRelation(ModelBase::stringFromJson(*jsonForRelation));
	}
	web::json::value* jsonForLinkType = ModelBase::getField(val, "LinkType");
	if(jsonForLinkType != nullptr && !jsonForLinkType->is_null())
	{
		setLinkType(ModelBase::stringFromJson(*jsonForLinkType));
	}
	web::json::value* jsonForTitle = ModelBase::getField(val, "Title");
	if(jsonForTitle != nullptr && !jsonForTitle->is_null())
	{
		setTitle(ModelBase::stringFromJson(*jsonForTitle));
	}
}

}
}

