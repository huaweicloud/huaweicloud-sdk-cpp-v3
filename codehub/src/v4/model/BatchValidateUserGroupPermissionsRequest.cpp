

#include "huaweicloud/codehub/v4/model/BatchValidateUserGroupPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchValidateUserGroupPermissionsRequest::BatchValidateUserGroupPermissionsRequest()
{
    bodyIsSet_ = false;
}

BatchValidateUserGroupPermissionsRequest::~BatchValidateUserGroupPermissionsRequest() = default;

void BatchValidateUserGroupPermissionsRequest::validate()
{
}

web::json::value BatchValidateUserGroupPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchValidateUserGroupPermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupPermissionsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GroupPermissionsDto>& BatchValidateUserGroupPermissionsRequest::getBody()
{
    return body_;
}

void BatchValidateUserGroupPermissionsRequest::setBody(const std::vector<GroupPermissionsDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchValidateUserGroupPermissionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchValidateUserGroupPermissionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


