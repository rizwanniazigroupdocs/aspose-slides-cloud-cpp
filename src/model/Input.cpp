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



#include "Input.h"

namespace asposeslidescloud {
namespace model {

Input::Input()
{
}

Input::~Input()
{
}

std::shared_ptr<InputFile> Input::getTemplate() const
{
	return m_Template;
}

void Input::setTemplate(std::shared_ptr<InputFile> value)
{
	m_Template = value;
	
}

std::shared_ptr<InputFile> Input::getHtmlData() const
{
	return m_HtmlData;
}

void Input::setHtmlData(std::shared_ptr<InputFile> value)
{
	m_HtmlData = value;
	
}

std::shared_ptr<InputFile> Input::getTemplateData() const
{
	return m_TemplateData;
}

void Input::setTemplateData(std::shared_ptr<InputFile> value)
{
	m_TemplateData = value;
	
}

web::json::value Input::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Template != nullptr)
	{
		val[utility::conversions::to_string_t("Template")] = ModelBase::toJson(m_Template);
	}
	if (m_HtmlData != nullptr)
	{
		val[utility::conversions::to_string_t("HtmlData")] = ModelBase::toJson(m_HtmlData);
	}
	if (m_TemplateData != nullptr)
	{
		val[utility::conversions::to_string_t("TemplateData")] = ModelBase::toJson(m_TemplateData);
	}
	return val;
}

void Input::fromJson(web::json::value& val)
{
	web::json::value* jsonForTemplate = ModelBase::getField(val, "Template");
	if(jsonForTemplate != nullptr && !jsonForTemplate->is_null())
	{
		std::shared_ptr<InputFile> newItem(new InputFile());
		newItem->fromJson(*jsonForTemplate);
		setTemplate(newItem);
	}
	web::json::value* jsonForHtmlData = ModelBase::getField(val, "HtmlData");
	if(jsonForHtmlData != nullptr && !jsonForHtmlData->is_null())
	{
		std::shared_ptr<InputFile> newItem(new InputFile());
		newItem->fromJson(*jsonForHtmlData);
		setHtmlData(newItem);
	}
	web::json::value* jsonForTemplateData = ModelBase::getField(val, "TemplateData");
	if(jsonForTemplateData != nullptr && !jsonForTemplateData->is_null())
	{
		std::shared_ptr<InputFile> newItem(new InputFile());
		newItem->fromJson(*jsonForTemplateData);
		setTemplateData(newItem);
	}
}

}
}

