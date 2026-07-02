

#include "huaweicloud/gaussdb/v3/model/SetDdlLogPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetDdlLogPolicyRequestBody::SetDdlLogPolicyRequestBody()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

SetDdlLogPolicyRequestBody::~SetDdlLogPolicyRequestBody() = default;

void SetDdlLogPolicyRequestBody::validate()
{
}

web::json::value SetDdlLogPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool SetDdlLogPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


std::string SetDdlLogPolicyRequestBody::getSwitchStatus() const
{
    return switchStatus_;
}

void SetDdlLogPolicyRequestBody::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool SetDdlLogPolicyRequestBody::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void SetDdlLogPolicyRequestBody::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

int32_t SetDdlLogPolicyRequestBody::getKeepDays() const
{
    return keepDays_;
}

void SetDdlLogPolicyRequestBody::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SetDdlLogPolicyRequestBody::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SetDdlLogPolicyRequestBody::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


