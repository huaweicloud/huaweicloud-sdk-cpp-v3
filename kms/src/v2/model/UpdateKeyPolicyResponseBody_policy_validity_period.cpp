

#include "huaweicloud/kms/v2/model/UpdateKeyPolicyResponseBody_policy_validity_period.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyPolicyResponseBody_policy_validity_period::UpdateKeyPolicyResponseBody_policy_validity_period()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

UpdateKeyPolicyResponseBody_policy_validity_period::~UpdateKeyPolicyResponseBody_policy_validity_period() = default;

void UpdateKeyPolicyResponseBody_policy_validity_period::validate()
{
}

web::json::value UpdateKeyPolicyResponseBody_policy_validity_period::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool UpdateKeyPolicyResponseBody_policy_validity_period::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyPolicyResponseBody_policy_validity_period::getStartTime() const
{
    return startTime_;
}

void UpdateKeyPolicyResponseBody_policy_validity_period::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy_validity_period::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpdateKeyPolicyResponseBody_policy_validity_period::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string UpdateKeyPolicyResponseBody_policy_validity_period::getEndTime() const
{
    return endTime_;
}

void UpdateKeyPolicyResponseBody_policy_validity_period::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy_validity_period::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateKeyPolicyResponseBody_policy_validity_period::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


