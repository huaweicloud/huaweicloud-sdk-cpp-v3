

#include "huaweicloud/codehub/v4/model/BatchValidateUserGroupPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchValidateUserGroupPermissionsResponse::BatchValidateUserGroupPermissionsResponse()
{
    bodyIsSet_ = false;
}

BatchValidateUserGroupPermissionsResponse::~BatchValidateUserGroupPermissionsResponse() = default;

void BatchValidateUserGroupPermissionsResponse::validate()
{
}

web::json::value BatchValidateUserGroupPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchValidateUserGroupPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserGroupPermissionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserGroupPermissionDto>& BatchValidateUserGroupPermissionsResponse::getBody()
{
    return body_;
}

void BatchValidateUserGroupPermissionsResponse::setBody(const std::vector<UserGroupPermissionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateUserGroupPermissionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateUserGroupPermissionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


