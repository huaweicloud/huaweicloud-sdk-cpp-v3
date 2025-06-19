

#include "huaweicloud/codeartsbuild/v3/model/DeleteKeystorePermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteKeystorePermissionRequest::DeleteKeystorePermissionRequest()
{
    permissionId_ = "";
    permissionIdIsSet_ = false;
}

DeleteKeystorePermissionRequest::~DeleteKeystorePermissionRequest() = default;

void DeleteKeystorePermissionRequest::validate()
{
}

web::json::value DeleteKeystorePermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }

    return val;
}
bool DeleteKeystorePermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    return ok;
}


std::string DeleteKeystorePermissionRequest::getPermissionId() const
{
    return permissionId_;
}

void DeleteKeystorePermissionRequest::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool DeleteKeystorePermissionRequest::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void DeleteKeystorePermissionRequest::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

}
}
}
}
}


