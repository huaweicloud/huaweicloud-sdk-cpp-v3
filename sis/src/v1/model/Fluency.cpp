

#include "huaweicloud/sis/v1/model/Fluency.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Fluency::Fluency()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    rhythm_ = 0.0f;
    rhythmIsSet_ = false;
    cohesion_ = 0.0f;
    cohesionIsSet_ = false;
}

Fluency::~Fluency() = default;

void Fluency::validate()
{
}

web::json::value Fluency::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(rhythmIsSet_) {
        val[utility::conversions::to_string_t("rhythm")] = ModelBase::toJson(rhythm_);
    }
    if(cohesionIsSet_) {
        val[utility::conversions::to_string_t("cohesion")] = ModelBase::toJson(cohesion_);
    }

    return val;
}

bool Fluency::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cohesion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cohesion"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCohesion(refVal);
        }
    }
    return ok;
}

float Fluency::getScore() const
{
    return score_;
}

void Fluency::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool Fluency::scoreIsSet() const
{
    return scoreIsSet_;
}

void Fluency::unsetscore()
{
    scoreIsSet_ = false;
}

float Fluency::getRhythm() const
{
    return rhythm_;
}

void Fluency::setRhythm(float value)
{
    rhythm_ = value;
    rhythmIsSet_ = true;
}

bool Fluency::rhythmIsSet() const
{
    return rhythmIsSet_;
}

void Fluency::unsetrhythm()
{
    rhythmIsSet_ = false;
}

float Fluency::getCohesion() const
{
    return cohesion_;
}

void Fluency::setCohesion(float value)
{
    cohesion_ = value;
    cohesionIsSet_ = true;
}

bool Fluency::cohesionIsSet() const
{
    return cohesionIsSet_;
}

void Fluency::unsetcohesion()
{
    cohesionIsSet_ = false;
}

}
}
}
}
}


