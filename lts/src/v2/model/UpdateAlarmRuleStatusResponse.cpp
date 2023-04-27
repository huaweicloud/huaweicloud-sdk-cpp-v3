

#include "huaweicloud/lts/v2/model/UpdateAlarmRuleStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAlarmRuleStatusResponse::UpdateAlarmRuleStatusResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateAlarmRuleStatusResponse::~UpdateAlarmRuleStatusResponse() = default;

void UpdateAlarmRuleStatusResponse::validate()
{
}

web::json::value UpdateAlarmRuleStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateAlarmRuleStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAlarmRuleStatusResponse::getBody() const
{
    return body_;
}

void UpdateAlarmRuleStatusResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAlarmRuleStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAlarmRuleStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


