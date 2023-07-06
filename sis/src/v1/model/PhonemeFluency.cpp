

#include "huaweicloud/sis/v1/model/PhonemeFluency.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PhonemeFluency::PhonemeFluency()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    rhythm_ = 0.0f;
    rhythmIsSet_ = false;
}

PhonemeFluency::~PhonemeFluency() = default;

void PhonemeFluency::validate()
{
}

web::json::value PhonemeFluency::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(rhythmIsSet_) {
        val[utility::conversions::to_string_t("rhythm")] = ModelBase::toJson(rhythm_);
    }

    return val;
}

bool PhonemeFluency::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rhythm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rhythm"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRhythm(refVal);
        }
    }
    return ok;
}

float PhonemeFluency::getScore() const
{
    return score_;
}

void PhonemeFluency::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool PhonemeFluency::scoreIsSet() const
{
    return scoreIsSet_;
}

void PhonemeFluency::unsetscore()
{
    scoreIsSet_ = false;
}

float PhonemeFluency::getRhythm() const
{
    return rhythm_;
}

void PhonemeFluency::setRhythm(float value)
{
    rhythm_ = value;
    rhythmIsSet_ = true;
}

bool PhonemeFluency::rhythmIsSet() const
{
    return rhythmIsSet_;
}

void PhonemeFluency::unsetrhythm()
{
    rhythmIsSet_ = false;
}

}
}
}
}
}


