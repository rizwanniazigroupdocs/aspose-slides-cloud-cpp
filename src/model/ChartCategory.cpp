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



#include "ChartCategory.h"

namespace asposeslidescloud {
namespace model {

ChartCategory::ChartCategory()
{
}

ChartCategory::~ChartCategory()
{
}

std::vector<std::shared_ptr<ChartCategory>> ChartCategory::getCategories() const
{
	return m_Categories;
}

void ChartCategory::setCategories(std::vector<std::shared_ptr<ChartCategory>> value)
{
	m_Categories = value;
	
}

utility::string_t ChartCategory::getValue() const
{
	return m_Value;
}

void ChartCategory::setValue(utility::string_t value)
{
	m_Value = value;
	
}

std::shared_ptr<FillFormat> ChartCategory::getFillFormat() const
{
	return m_FillFormat;
}

void ChartCategory::setFillFormat(std::shared_ptr<FillFormat> value)
{
	m_FillFormat = value;
	
}

std::shared_ptr<EffectFormat> ChartCategory::getEffectFormat() const
{
	return m_EffectFormat;
}

void ChartCategory::setEffectFormat(std::shared_ptr<EffectFormat> value)
{
	m_EffectFormat = value;
	
}

std::shared_ptr<LineFormat> ChartCategory::getLineFormat() const
{
	return m_LineFormat;
}

void ChartCategory::setLineFormat(std::shared_ptr<LineFormat> value)
{
	m_LineFormat = value;
	
}

web::json::value ChartCategory::toJson() const
{
	web::json::value val = web::json::value::object();
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Categories)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		if (jsonArray.size() > 0)
		{
			val[utility::conversions::to_string_t("Categories")] = web::json::value::array(jsonArray);
		}
	}
	if (!m_Value.empty())
	{
		val[utility::conversions::to_string_t("Value")] = ModelBase::toJson(m_Value);
	}
	if (m_FillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("FillFormat")] = ModelBase::toJson(m_FillFormat);
	}
	if (m_EffectFormat != nullptr)
	{
		val[utility::conversions::to_string_t("EffectFormat")] = ModelBase::toJson(m_EffectFormat);
	}
	if (m_LineFormat != nullptr)
	{
		val[utility::conversions::to_string_t("LineFormat")] = ModelBase::toJson(m_LineFormat);
	}
	return val;
}

void ChartCategory::fromJson(web::json::value& val)
{
	web::json::value* jsonForCategories = ModelBase::getField(val, "Categories");
	if(jsonForCategories != nullptr && !jsonForCategories->is_null())
	{
		{
			m_Categories.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForCategories->as_array())
			{
				if(item.is_null())
				{
					m_Categories.push_back(std::shared_ptr<ChartCategory>(nullptr));
				}
				else
				{
					std::shared_ptr<ChartCategory> newItem(new ChartCategory());
					newItem->fromJson(item);
					m_Categories.push_back( newItem );
				}
			}
        	}
	}
	web::json::value* jsonForValue = ModelBase::getField(val, "Value");
	if(jsonForValue != nullptr && !jsonForValue->is_null())
	{
		setValue(ModelBase::stringFromJson(*jsonForValue));
	}
	web::json::value* jsonForFillFormat = ModelBase::getField(val, "FillFormat");
	if(jsonForFillFormat != nullptr && !jsonForFillFormat->is_null())
	{
		std::shared_ptr<FillFormat> newItem(new FillFormat());
		newItem->fromJson(*jsonForFillFormat);
		setFillFormat(newItem);
	}
	web::json::value* jsonForEffectFormat = ModelBase::getField(val, "EffectFormat");
	if(jsonForEffectFormat != nullptr && !jsonForEffectFormat->is_null())
	{
		std::shared_ptr<EffectFormat> newItem(new EffectFormat());
		newItem->fromJson(*jsonForEffectFormat);
		setEffectFormat(newItem);
	}
	web::json::value* jsonForLineFormat = ModelBase::getField(val, "LineFormat");
	if(jsonForLineFormat != nullptr && !jsonForLineFormat->is_null())
	{
		std::shared_ptr<LineFormat> newItem(new LineFormat());
		newItem->fromJson(*jsonForLineFormat);
		setLineFormat(newItem);
	}
}

}
}

