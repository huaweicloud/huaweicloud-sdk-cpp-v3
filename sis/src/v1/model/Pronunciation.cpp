

#include "huaweicloud/sis/v1/model/Pronunciation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Pronunciation::Pronunciation()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    gop_ = 0.0f;
    gopIsSet_ = false;
}

Pronunciation::~Pronunciation() = default;

void Pronunciation::validate()
{
}

web::json::value Pronunciation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(gopIsSet_) {
        val[utility::conversions::to_string_t("gop")] = ModelBase::toJson(gop_);
    }

    return val;
}

bool Pronunciation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("gop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gop"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGop(refVal);
        }
    }
    return ok;
}


float Pronunciation::getScore() const
{
    return score_;
}

void Pronunciation::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool Pronunciation::scoreIsSet() const
{
    return scoreIsSet_;
}

void Pronunciation::unsetscore()
{
    scoreIsSet_ = false;
}

float Pronunciation::getGop() const
{
    return gop_;
}

void Pronunciation::setGop(float value)
{
    gop_ = value;
    gopIsSet_ = true;
}

bool Pronunciation::gopIsSet() const
{
    return gopIsSet_;
}

void Pronunciation::unsetgop()
{
    gopIsSet_ = false;
}

}
}
}
}
}


