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



#include "SlideComment.h"

namespace asposeslidescloud {
namespace model {

SlideComment::SlideComment()
{
}

SlideComment::~SlideComment()
{
}

utility::string_t SlideComment::getAuthor() const
{
	return m_Author;
}

void SlideComment::setAuthor(utility::string_t value)
{
	m_Author = value;
	
}

utility::string_t SlideComment::getText() const
{
	return m_Text;
}

void SlideComment::setText(utility::string_t value)
{
	m_Text = value;
	
}

utility::string_t SlideComment::getCreatedTime() const
{
	return m_CreatedTime;
}

void SlideComment::setCreatedTime(utility::string_t value)
{
	m_CreatedTime = value;
	
}

std::vector<std::shared_ptr<SlideComment>> SlideComment::getChildComments() const
{
	return m_ChildComments;
}

void SlideComment::setChildComments(std::vector<std::shared_ptr<SlideComment>> value)
{
	m_ChildComments = value;
	
}

web::json::value SlideComment::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Author.empty())
	{
		val[utility::conversions::to_string_t("Author")] = ModelBase::toJson(m_Author);
	}
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (!m_CreatedTime.empty())
	{
		val[utility::conversions::to_string_t("CreatedTime")] = ModelBase::toJson(m_CreatedTime);
	}
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_ChildComments)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("ChildComments")] = web::json::value::array(jsonArray);
		}
	}
	return val;
}

void SlideComment::fromJson(web::json::value& val)
{
	web::json::value* jsonForAuthor = ModelBase::getField(val, "Author");
	if(jsonForAuthor != nullptr && !jsonForAuthor->is_null())
	{
		setAuthor(ModelBase::stringFromJson(*jsonForAuthor));
	}
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForCreatedTime = ModelBase::getField(val, "CreatedTime");
	if(jsonForCreatedTime != nullptr && !jsonForCreatedTime->is_null())
	{
		setCreatedTime(ModelBase::stringFromJson(*jsonForCreatedTime));
	}
	web::json::value* jsonForChildComments = ModelBase::getField(val, "ChildComments");
	if(jsonForChildComments != nullptr && !jsonForChildComments->is_null())
	{
		{
			m_ChildComments.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForChildComments->as_array())
			{
				if(item.is_null())
				{
					m_ChildComments.push_back(std::shared_ptr<SlideComment>(nullptr));
				}
				else
				{
					std::shared_ptr<SlideComment> newItem(new SlideComment());
					newItem->fromJson(item);
					m_ChildComments.push_back( newItem );
				}
			}
        	}
	}
}

}
}

