

#include "huaweicloud/evs/v2/model/ShowRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowRecyclePolicyResponse::ShowRecyclePolicyResponse()
{
    switch_ = false;
    switchIsSet_ = false;
    thresholdTime_ = 0;
    thresholdTimeIsSet_ = false;
    keepTime_ = 0;
    keepTimeIsSet_ = false;
}

ShowRecyclePolicyResponse::~ShowRecyclePolicyResponse() = default;

void ShowRecyclePolicyResponse::validate()
{
}

web::json::value ShowRecyclePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchIsSet_) {
        val[utility::conversions::to_string_t("switch")] = ModelBase::toJson(switch_);
    }
    if(thresholdTimeIsSet_) {
        val[utility::conversions::to_string_t("threshold_time")] = ModelBase::toJson(thresholdTime_);
    }
    if(keepTimeIsSet_) {
        val[utility::conversions::to_string_t("keep_time")] = ModelBase::toJson(keepTime_);
    }

    return val;
}
bool ShowRecyclePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepTime(refVal);
        }
    }
    return ok;
}


bool ShowRecyclePolicyResponse::isSwitch() const
{
    return switch_;
}

void ShowRecyclePolicyResponse::setSwitch(bool value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool ShowRecyclePolicyResponse::switchIsSet() const
{
    return switchIsSet_;
}

void ShowRecyclePolicyResponse::unsetswitch()
{
    switchIsSet_ = false;
}

int32_t ShowRecyclePolicyResponse::getThresholdTime() const
{
    return thresholdTime_;
}

void ShowRecyclePolicyResponse::setThresholdTime(int32_t value)
{
    thresholdTime_ = value;
    thresholdTimeIsSet_ = true;
}

bool ShowRecyclePolicyResponse::thresholdTimeIsSet() const
{
    return thresholdTimeIsSet_;
}

void ShowRecyclePolicyResponse::unsetthresholdTime()
{
    thresholdTimeIsSet_ = false;
}

int32_t ShowRecyclePolicyResponse::getKeepTime() const
{
    return keepTime_;
}

void ShowRecyclePolicyResponse::setKeepTime(int32_t value)
{
    keepTime_ = value;
    keepTimeIsSet_ = true;
}

bool ShowRecyclePolicyResponse::keepTimeIsSet() const
{
    return keepTimeIsSet_;
}

void ShowRecyclePolicyResponse::unsetkeepTime()
{
    keepTimeIsSet_ = false;
}

}
}
}
}
}


