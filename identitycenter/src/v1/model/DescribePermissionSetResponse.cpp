

#include "huaweicloud/identitycenter/v1/model/DescribePermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribePermissionSetResponse::DescribePermissionSetResponse()
{
    permissionSetIsSet_ = false;
}

DescribePermissionSetResponse::~DescribePermissionSetResponse() = default;

void DescribePermissionSetResponse::validate()
{
}

web::json::value DescribePermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetIsSet_) {
        val[utility::conversions::to_string_t("permission_set")] = ModelBase::toJson(permissionSet_);
    }

    return val;
}
bool DescribePermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set"));
        if(!fieldValue.is_null())
        {
            PermissionSetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSet(refVal);
        }
    }
    return ok;
}


PermissionSetDto DescribePermissionSetResponse::getPermissionSet() const
{
    return permissionSet_;
}

void DescribePermissionSetResponse::setPermissionSet(const PermissionSetDto& value)
{
    permissionSet_ = value;
    permissionSetIsSet_ = true;
}

bool DescribePermissionSetResponse::permissionSetIsSet() const
{
    return permissionSetIsSet_;
}

void DescribePermissionSetResponse::unsetpermissionSet()
{
    permissionSetIsSet_ = false;
}

}
}
}
}
}


