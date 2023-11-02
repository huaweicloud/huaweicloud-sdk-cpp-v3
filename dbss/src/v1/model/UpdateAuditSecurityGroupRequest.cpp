

#include "huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditSecurityGroupRequest::UpdateAuditSecurityGroupRequest()
{
    bodyIsSet_ = false;
}

UpdateAuditSecurityGroupRequest::~UpdateAuditSecurityGroupRequest() = default;

void UpdateAuditSecurityGroupRequest::validate()
{
}

web::json::value UpdateAuditSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditSecurityGroupRequest::fromJson(const web::json::value& val)
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


SecurityGroupRequest UpdateAuditSecurityGroupRequest::getBody() const
{
    return body_;
}

void UpdateAuditSecurityGroupRequest::setBody(const SecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


