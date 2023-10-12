

#include "huaweicloud/rds/v3/model/SetSecondLevelMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetSecondLevelMonitorResponse::SetSecondLevelMonitorResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SetSecondLevelMonitorResponse::~SetSecondLevelMonitorResponse() = default;

void SetSecondLevelMonitorResponse::validate()
{
}

web::json::value SetSecondLevelMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetSecondLevelMonitorResponse::fromJson(const web::json::value& val)
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


std::string SetSecondLevelMonitorResponse::getBody() const
{
    return body_;
}

void SetSecondLevelMonitorResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSecondLevelMonitorResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSecondLevelMonitorResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


