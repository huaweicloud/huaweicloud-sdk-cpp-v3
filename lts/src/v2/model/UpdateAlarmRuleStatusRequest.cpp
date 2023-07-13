

#include "huaweicloud/lts/v2/model/UpdateAlarmRuleStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAlarmRuleStatusRequest::UpdateAlarmRuleStatusRequest()
{
    bodyIsSet_ = false;
}

UpdateAlarmRuleStatusRequest::~UpdateAlarmRuleStatusRequest() = default;

void UpdateAlarmRuleStatusRequest::validate()
{
}

web::json::value UpdateAlarmRuleStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateAlarmRuleStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeAlarmRuleStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ChangeAlarmRuleStatus UpdateAlarmRuleStatusRequest::getBody() const
{
    return body_;
}

void UpdateAlarmRuleStatusRequest::setBody(const ChangeAlarmRuleStatus& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAlarmRuleStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAlarmRuleStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


