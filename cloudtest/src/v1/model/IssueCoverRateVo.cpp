

#include "huaweicloud/cloudtest/v1/model/IssueCoverRateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssueCoverRateVo::IssueCoverRateVo()
{
    epicIsSet_ = false;
    featureIsSet_ = false;
    storyIsSet_ = false;
    summaryIsSet_ = false;
}

IssueCoverRateVo::~IssueCoverRateVo() = default;

void IssueCoverRateVo::validate()
{
}

web::json::value IssueCoverRateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epicIsSet_) {
        val[utility::conversions::to_string_t("epic")] = ModelBase::toJson(epic_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(storyIsSet_) {
        val[utility::conversions::to_string_t("story")] = ModelBase::toJson(story_);
    }
    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }

    return val;
}
bool IssueCoverRateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("epic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("epic"));
        if(!fieldValue.is_null())
        {
            CoverRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            CoverRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("story"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story"));
        if(!fieldValue.is_null())
        {
            CoverRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            CoverRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


CoverRateVo IssueCoverRateVo::getEpic() const
{
    return epic_;
}

void IssueCoverRateVo::setEpic(const CoverRateVo& value)
{
    epic_ = value;
    epicIsSet_ = true;
}

bool IssueCoverRateVo::epicIsSet() const
{
    return epicIsSet_;
}

void IssueCoverRateVo::unsetepic()
{
    epicIsSet_ = false;
}

CoverRateVo IssueCoverRateVo::getFeature() const
{
    return feature_;
}

void IssueCoverRateVo::setFeature(const CoverRateVo& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool IssueCoverRateVo::featureIsSet() const
{
    return featureIsSet_;
}

void IssueCoverRateVo::unsetfeature()
{
    featureIsSet_ = false;
}

CoverRateVo IssueCoverRateVo::getStory() const
{
    return story_;
}

void IssueCoverRateVo::setStory(const CoverRateVo& value)
{
    story_ = value;
    storyIsSet_ = true;
}

bool IssueCoverRateVo::storyIsSet() const
{
    return storyIsSet_;
}

void IssueCoverRateVo::unsetstory()
{
    storyIsSet_ = false;
}

CoverRateVo IssueCoverRateVo::getSummary() const
{
    return summary_;
}

void IssueCoverRateVo::setSummary(const CoverRateVo& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool IssueCoverRateVo::summaryIsSet() const
{
    return summaryIsSet_;
}

void IssueCoverRateVo::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


