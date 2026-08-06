

#include "huaweicloud/kms/v2/model/ListKeyPolicyResponseBody_policy_validityPeriod.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyPolicyResponseBody_policy_validityPeriod::ListKeyPolicyResponseBody_policy_validityPeriod()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListKeyPolicyResponseBody_policy_validityPeriod::~ListKeyPolicyResponseBody_policy_validityPeriod() = default;

void ListKeyPolicyResponseBody_policy_validityPeriod::validate()
{
}

web::json::value ListKeyPolicyResponseBody_policy_validityPeriod::toJson() const
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
bool ListKeyPolicyResponseBody_policy_validityPeriod::fromJson(const web::json::value& val)
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


std::string ListKeyPolicyResponseBody_policy_validityPeriod::getStartTime() const
{
    return startTime_;
}

void ListKeyPolicyResponseBody_policy_validityPeriod::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy_validityPeriod::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListKeyPolicyResponseBody_policy_validityPeriod::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_policy_validityPeriod::getEndTime() const
{
    return endTime_;
}

void ListKeyPolicyResponseBody_policy_validityPeriod::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy_validityPeriod::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListKeyPolicyResponseBody_policy_validityPeriod::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


