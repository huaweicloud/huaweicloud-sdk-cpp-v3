

#include "huaweicloud/codeartsbuild/v3/model/BatchUpdateJobRolePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BatchUpdateJobRolePermissionRequest::BatchUpdateJobRolePermissionRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateJobRolePermissionRequest::~BatchUpdateJobRolePermissionRequest() = default;

void BatchUpdateJobRolePermissionRequest::validate()
{
}

web::json::value BatchUpdateJobRolePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateJobRolePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RolePermissionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


RolePermissionsRequestBody BatchUpdateJobRolePermissionRequest::getBody() const
{
    return body_;
}

void BatchUpdateJobRolePermissionRequest::setBody(const RolePermissionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateJobRolePermissionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateJobRolePermissionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


