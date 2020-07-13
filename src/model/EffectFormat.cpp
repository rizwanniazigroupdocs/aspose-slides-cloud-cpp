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



#include "EffectFormat.h"

namespace asposeslidescloud {
namespace model {

EffectFormat::EffectFormat()
{
}

EffectFormat::~EffectFormat()
{
}

std::shared_ptr<BlurEffect> EffectFormat::getBlur() const
{
	return m_Blur;
}

void EffectFormat::setBlur(std::shared_ptr<BlurEffect> value)
{
	m_Blur = value;
	
}

std::shared_ptr<GlowEffect> EffectFormat::getGlow() const
{
	return m_Glow;
}

void EffectFormat::setGlow(std::shared_ptr<GlowEffect> value)
{
	m_Glow = value;
	
}

std::shared_ptr<InnerShadowEffect> EffectFormat::getInnerShadow() const
{
	return m_InnerShadow;
}

void EffectFormat::setInnerShadow(std::shared_ptr<InnerShadowEffect> value)
{
	m_InnerShadow = value;
	
}

std::shared_ptr<OuterShadowEffect> EffectFormat::getOuterShadow() const
{
	return m_OuterShadow;
}

void EffectFormat::setOuterShadow(std::shared_ptr<OuterShadowEffect> value)
{
	m_OuterShadow = value;
	
}

std::shared_ptr<PresetShadowEffect> EffectFormat::getPresetShadow() const
{
	return m_PresetShadow;
}

void EffectFormat::setPresetShadow(std::shared_ptr<PresetShadowEffect> value)
{
	m_PresetShadow = value;
	
}

std::shared_ptr<SoftEdgeEffect> EffectFormat::getSoftEdge() const
{
	return m_SoftEdge;
}

void EffectFormat::setSoftEdge(std::shared_ptr<SoftEdgeEffect> value)
{
	m_SoftEdge = value;
	
}

std::shared_ptr<ReflectionEffect> EffectFormat::getReflection() const
{
	return m_Reflection;
}

void EffectFormat::setReflection(std::shared_ptr<ReflectionEffect> value)
{
	m_Reflection = value;
	
}

std::shared_ptr<FillOverlayEffect> EffectFormat::getFillOverlay() const
{
	return m_FillOverlay;
}

void EffectFormat::setFillOverlay(std::shared_ptr<FillOverlayEffect> value)
{
	m_FillOverlay = value;
	
}

web::json::value EffectFormat::toJson() const
{
	web::json::value val = web::json::value::object();
	if (m_Blur != nullptr)
	{
		val[utility::conversions::to_string_t("Blur")] = ModelBase::toJson(m_Blur);
	}
	if (m_Glow != nullptr)
	{
		val[utility::conversions::to_string_t("Glow")] = ModelBase::toJson(m_Glow);
	}
	if (m_InnerShadow != nullptr)
	{
		val[utility::conversions::to_string_t("InnerShadow")] = ModelBase::toJson(m_InnerShadow);
	}
	if (m_OuterShadow != nullptr)
	{
		val[utility::conversions::to_string_t("OuterShadow")] = ModelBase::toJson(m_OuterShadow);
	}
	if (m_PresetShadow != nullptr)
	{
		val[utility::conversions::to_string_t("PresetShadow")] = ModelBase::toJson(m_PresetShadow);
	}
	if (m_SoftEdge != nullptr)
	{
		val[utility::conversions::to_string_t("SoftEdge")] = ModelBase::toJson(m_SoftEdge);
	}
	if (m_Reflection != nullptr)
	{
		val[utility::conversions::to_string_t("Reflection")] = ModelBase::toJson(m_Reflection);
	}
	if (m_FillOverlay != nullptr)
	{
		val[utility::conversions::to_string_t("FillOverlay")] = ModelBase::toJson(m_FillOverlay);
	}
	return val;
}

void EffectFormat::fromJson(web::json::value& val)
{
	web::json::value* jsonForBlur = ModelBase::getField(val, "Blur");
	if(jsonForBlur != nullptr && !jsonForBlur->is_null())
	{
		std::shared_ptr<BlurEffect> newItem(new BlurEffect());
		newItem->fromJson(*jsonForBlur);
		setBlur(newItem);
	}
	web::json::value* jsonForGlow = ModelBase::getField(val, "Glow");
	if(jsonForGlow != nullptr && !jsonForGlow->is_null())
	{
		std::shared_ptr<GlowEffect> newItem(new GlowEffect());
		newItem->fromJson(*jsonForGlow);
		setGlow(newItem);
	}
	web::json::value* jsonForInnerShadow = ModelBase::getField(val, "InnerShadow");
	if(jsonForInnerShadow != nullptr && !jsonForInnerShadow->is_null())
	{
		std::shared_ptr<InnerShadowEffect> newItem(new InnerShadowEffect());
		newItem->fromJson(*jsonForInnerShadow);
		setInnerShadow(newItem);
	}
	web::json::value* jsonForOuterShadow = ModelBase::getField(val, "OuterShadow");
	if(jsonForOuterShadow != nullptr && !jsonForOuterShadow->is_null())
	{
		std::shared_ptr<OuterShadowEffect> newItem(new OuterShadowEffect());
		newItem->fromJson(*jsonForOuterShadow);
		setOuterShadow(newItem);
	}
	web::json::value* jsonForPresetShadow = ModelBase::getField(val, "PresetShadow");
	if(jsonForPresetShadow != nullptr && !jsonForPresetShadow->is_null())
	{
		std::shared_ptr<PresetShadowEffect> newItem(new PresetShadowEffect());
		newItem->fromJson(*jsonForPresetShadow);
		setPresetShadow(newItem);
	}
	web::json::value* jsonForSoftEdge = ModelBase::getField(val, "SoftEdge");
	if(jsonForSoftEdge != nullptr && !jsonForSoftEdge->is_null())
	{
		std::shared_ptr<SoftEdgeEffect> newItem(new SoftEdgeEffect());
		newItem->fromJson(*jsonForSoftEdge);
		setSoftEdge(newItem);
	}
	web::json::value* jsonForReflection = ModelBase::getField(val, "Reflection");
	if(jsonForReflection != nullptr && !jsonForReflection->is_null())
	{
		std::shared_ptr<ReflectionEffect> newItem(new ReflectionEffect());
		newItem->fromJson(*jsonForReflection);
		setReflection(newItem);
	}
	web::json::value* jsonForFillOverlay = ModelBase::getField(val, "FillOverlay");
	if(jsonForFillOverlay != nullptr && !jsonForFillOverlay->is_null())
	{
		std::shared_ptr<FillOverlayEffect> newItem(new FillOverlayEffect());
		newItem->fromJson(*jsonForFillOverlay);
		setFillOverlay(newItem);
	}
}

}
}

