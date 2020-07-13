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
 * Effect.h
 *
 * Represents comment of slide
 */

#ifndef _Effect_H_
#define _Effect_H_

#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents comment of slide
/// </summary>
class  Effect : public ModelBase
{
public:
	ASPOSE_DLL_EXPORT Effect();
	ASPOSE_DLL_EXPORT virtual ~Effect();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Effect type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getType() const;
	ASPOSE_DLL_EXPORT void setType(utility::string_t value);
	/// <summary>
	/// Effect subtype.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getSubtype() const;
	ASPOSE_DLL_EXPORT void setSubtype(utility::string_t value);
	/// <summary>
	/// Preset class type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getPresetClassType() const;
	ASPOSE_DLL_EXPORT void setPresetClassType(utility::string_t value);
	/// <summary>
	/// Shape index.
	/// </summary>
	ASPOSE_DLL_EXPORT int32_t getShapeIndex() const;
	ASPOSE_DLL_EXPORT void setShapeIndex(int32_t value);
	/// <summary>
	/// Effect trigger type.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getTriggerType() const;
	ASPOSE_DLL_EXPORT void setTriggerType(utility::string_t value);
	/// <summary>
	/// The percentage of duration accelerate behavior effect.
	/// </summary>
	ASPOSE_DLL_EXPORT double getAccelerate() const;
	ASPOSE_DLL_EXPORT void setAccelerate(double value);
	ASPOSE_DLL_EXPORT bool accelerateIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAccelerate();
	/// <summary>
	/// True to automatically play the animation in reverse after playing it in the forward direction.
	/// </summary>
	ASPOSE_DLL_EXPORT bool getAutoReverse() const;
	ASPOSE_DLL_EXPORT void setAutoReverse(bool value);
	ASPOSE_DLL_EXPORT bool autoReverseIsSet() const;
	ASPOSE_DLL_EXPORT void unsetAutoReverse();
	/// <summary>
	/// The percentage of duration decelerate behavior effect.
	/// </summary>
	ASPOSE_DLL_EXPORT double getDecelerate() const;
	ASPOSE_DLL_EXPORT void setDecelerate(double value);
	ASPOSE_DLL_EXPORT bool decelerateIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDecelerate();
	/// <summary>
	/// The duration of animation effect.
	/// </summary>
	ASPOSE_DLL_EXPORT double getDuration() const;
	ASPOSE_DLL_EXPORT void setDuration(double value);
	ASPOSE_DLL_EXPORT bool durationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetDuration();
	/// <summary>
	/// The number of times the effect should repeat.
	/// </summary>
	ASPOSE_DLL_EXPORT double getRepeatCount() const;
	ASPOSE_DLL_EXPORT void setRepeatCount(double value);
	ASPOSE_DLL_EXPORT bool repeatCountIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRepeatCount();
	/// <summary>
	/// The number of times the effect should repeat.
	/// </summary>
	ASPOSE_DLL_EXPORT double getRepeatDuration() const;
	ASPOSE_DLL_EXPORT void setRepeatDuration(double value);
	ASPOSE_DLL_EXPORT bool repeatDurationIsSet() const;
	ASPOSE_DLL_EXPORT void unsetRepeatDuration();
	/// <summary>
	/// The way for a effect to restart after complete.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getRestart() const;
	ASPOSE_DLL_EXPORT void setRestart(utility::string_t value);
	/// <summary>
	/// The percentage by which to speed up (or slow down) the timing.
	/// </summary>
	ASPOSE_DLL_EXPORT double getSpeed() const;
	ASPOSE_DLL_EXPORT void setSpeed(double value);
	ASPOSE_DLL_EXPORT bool speedIsSet() const;
	ASPOSE_DLL_EXPORT void unsetSpeed();
	/// <summary>
	/// Delay time after trigger.
	/// </summary>
	ASPOSE_DLL_EXPORT double getTriggerDelayTime() const;
	ASPOSE_DLL_EXPORT void setTriggerDelayTime(double value);
	ASPOSE_DLL_EXPORT bool triggerDelayTimeIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTriggerDelayTime();

protected:
	utility::string_t m_Type;
	utility::string_t m_Subtype;
	utility::string_t m_PresetClassType;
	int32_t m_ShapeIndex;
	utility::string_t m_TriggerType;
	double m_Accelerate;
	bool m_AccelerateIsSet;
	bool m_AutoReverse;
	bool m_AutoReverseIsSet;
	double m_Decelerate;
	bool m_DecelerateIsSet;
	double m_Duration;
	bool m_DurationIsSet;
	double m_RepeatCount;
	bool m_RepeatCountIsSet;
	double m_RepeatDuration;
	bool m_RepeatDurationIsSet;
	utility::string_t m_Restart;
	double m_Speed;
	bool m_SpeedIsSet;
	double m_TriggerDelayTime;
	bool m_TriggerDelayTimeIsSet;
};

}
}

#endif /* _Effect_H_ */
