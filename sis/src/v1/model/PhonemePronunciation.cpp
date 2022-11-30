

#include "huaweicloud/sis/v1/model/PhonemePronunciation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PhonemePronunciation::PhonemePronunciation()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    gop_ = 0.0f;
    gopIsSet_ = false;
}

PhonemePronunciation::~PhonemePronunciation() = default;

void PhonemePronunciation::validate()
{
}

web::json::value PhonemePronunciation::toJson() const
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

bool PhonemePronunciation::fromJson(const web::json::value& val)
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


float PhonemePronunciation::getScore() const
{
    return score_;
}

void PhonemePronunciation::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool PhonemePronunciation::scoreIsSet() const
{
    return scoreIsSet_;
}

void PhonemePronunciation::unsetscore()
{
    scoreIsSet_ = false;
}

float PhonemePronunciation::getGop() const
{
    return gop_;
}

void PhonemePronunciation::setGop(float value)
{
    gop_ = value;
    gopIsSet_ = true;
}

bool PhonemePronunciation::gopIsSet() const
{
    return gopIsSet_;
}

void PhonemePronunciation::unsetgop()
{
    gopIsSet_ = false;
}

}
}
}
}
}


