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



#include "TextItem.h"

namespace asposeslidescloud {
namespace model {

TextItem::TextItem()
{
}

TextItem::~TextItem()
{
}

std::shared_ptr<ResourceUri> TextItem::getUri() const
{
	return m_Uri;
}

void TextItem::setUri(std::shared_ptr<ResourceUri> value)
{
	m_Uri = value;
	
}

utility::string_t TextItem::getText() const
{
	return m_Text;
}

void TextItem::setText(utility::string_t value)
{
	m_Text = value;
	
}

web::json::value TextItem::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Uri != nullptr)
	{
		val[utility::conversions::to_string_t("Uri")] = ModelBase::toJson(m_Uri);
	}
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	return val;
}

void TextItem::fromJson(web::json::value& val)
{
	web::json::value* jsonForUri = ModelBase::getField(val, "Uri");
	if(jsonForUri != nullptr && !jsonForUri->is_null())
	{
		std::shared_ptr<ResourceUri> newItem(new ResourceUri());
		newItem->fromJson(*jsonForUri);
		setUri(newItem);
	}
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
}

}
}

