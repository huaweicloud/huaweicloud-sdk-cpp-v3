

#include "huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditSecurityGroupNewRequest::UpdateAuditSecurityGroupNewRequest()
{
    bodyIsSet_ = false;
}

UpdateAuditSecurityGroupNewRequest::~UpdateAuditSecurityGroupNewRequest() = default;

void UpdateAuditSecurityGroupNewRequest::validate()
{
}

web::json::value UpdateAuditSecurityGroupNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditSecurityGroupNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SecurityGroupRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SecurityGroupRequest UpdateAuditSecurityGroupNewRequest::getBody() const
{
    return body_;
}

void UpdateAuditSecurityGroupNewRequest::setBody(const SecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditSecurityGroupNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditSecurityGroupNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


