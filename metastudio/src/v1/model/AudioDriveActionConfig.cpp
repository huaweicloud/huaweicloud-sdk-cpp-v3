

#include "huaweicloud/metastudio/v1/model/AudioDriveActionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AudioDriveActionConfig::AudioDriveActionConfig()
{
    actionTag_ = "";
    actionTagIsSet_ = false;
    actionName_ = "";
    actionNameIsSet_ = false;
    actionStartTime_ = 0.0f;
    actionStartTimeIsSet_ = false;
}

AudioDriveActionConfig::~AudioDriveActionConfig() = default;

void AudioDriveActionConfig::validate()
{
}

web::json::value AudioDriveActionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTagIsSet_) {
        val[utility::conversions::to_string_t("action_tag")] = ModelBase::toJson(actionTag_);
    }
    if(actionNameIsSet_) {
        val[utility::conversions::to_string_t("action_name")] = ModelBase::toJson(actionName_);
    }
    if(actionStartTimeIsSet_) {
        val[utility::conversions::to_string_t("action_start_time")] = ModelBase::toJson(actionStartTime_);
    }

    return val;
}
bool AudioDriveActionConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_start_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionStartTime(refVal);
        }
    }
    return ok;
}


std::string AudioDriveActionConfig::getActionTag() const
{
    return actionTag_;
}

void AudioDriveActionConfig::setActionTag(const std::string& value)
{
    actionTag_ = value;
    actionTagIsSet_ = true;
}

bool AudioDriveActionConfig::actionTagIsSet() const
{
    return actionTagIsSet_;
}

void AudioDriveActionConfig::unsetactionTag()
{
    actionTagIsSet_ = false;
}

std::string AudioDriveActionConfig::getActionName() const
{
    return actionName_;
}

void AudioDriveActionConfig::setActionName(const std::string& value)
{
    actionName_ = value;
    actionNameIsSet_ = true;
}

bool AudioDriveActionConfig::actionNameIsSet() const
{
    return actionNameIsSet_;
}

void AudioDriveActionConfig::unsetactionName()
{
    actionNameIsSet_ = false;
}

float AudioDriveActionConfig::getActionStartTime() const
{
    return actionStartTime_;
}

void AudioDriveActionConfig::setActionStartTime(float value)
{
    actionStartTime_ = value;
    actionStartTimeIsSet_ = true;
}

bool AudioDriveActionConfig::actionStartTimeIsSet() const
{
    return actionStartTimeIsSet_;
}

void AudioDriveActionConfig::unsetactionStartTime()
{
    actionStartTimeIsSet_ = false;
}

}
}
}
}
}


