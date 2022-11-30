

#include "huaweicloud/sis/v1/model/WordFluency.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




WordFluency::WordFluency()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    rhythm_ = 0.0f;
    rhythmIsSet_ = false;
}

WordFluency::~WordFluency() = default;

void WordFluency::validate()
{
}

web::json::value WordFluency::toJson() const
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

bool WordFluency::fromJson(const web::json::value& val)
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


float WordFluency::getScore() const
{
    return score_;
}

void WordFluency::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool WordFluency::scoreIsSet() const
{
    return scoreIsSet_;
}

void WordFluency::unsetscore()
{
    scoreIsSet_ = false;
}

float WordFluency::getRhythm() const
{
    return rhythm_;
}

void WordFluency::setRhythm(float value)
{
    rhythm_ = value;
    rhythmIsSet_ = true;
}

bool WordFluency::rhythmIsSet() const
{
    return rhythmIsSet_;
}

void WordFluency::unsetrhythm()
{
    rhythmIsSet_ = false;
}

}
}
}
}
}


