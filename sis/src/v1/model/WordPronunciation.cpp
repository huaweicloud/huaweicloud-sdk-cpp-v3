

#include "huaweicloud/sis/v1/model/WordPronunciation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




WordPronunciation::WordPronunciation()
{
    score_ = 0.0f;
    scoreIsSet_ = false;
    gop_ = 0.0f;
    gopIsSet_ = false;
}

WordPronunciation::~WordPronunciation() = default;

void WordPronunciation::validate()
{
}

web::json::value WordPronunciation::toJson() const
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

bool WordPronunciation::fromJson(const web::json::value& val)
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

float WordPronunciation::getScore() const
{
    return score_;
}

void WordPronunciation::setScore(float value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool WordPronunciation::scoreIsSet() const
{
    return scoreIsSet_;
}

void WordPronunciation::unsetscore()
{
    scoreIsSet_ = false;
}

float WordPronunciation::getGop() const
{
    return gop_;
}

void WordPronunciation::setGop(float value)
{
    gop_ = value;
    gopIsSet_ = true;
}

bool WordPronunciation::gopIsSet() const
{
    return gopIsSet_;
}

void WordPronunciation::unsetgop()
{
    gopIsSet_ = false;
}

}
}
}
}
}


