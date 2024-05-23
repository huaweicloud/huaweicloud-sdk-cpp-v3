

#include "huaweicloud/ram/v1/model/ShowPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ShowPermissionRequest::ShowPermissionRequest()
{
    permissionId_ = "";
    permissionIdIsSet_ = false;
    permissionVersion_ = 0;
    permissionVersionIsSet_ = false;
}

ShowPermissionRequest::~ShowPermissionRequest() = default;

void ShowPermissionRequest::validate()
{
}

web::json::value ShowPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }
    if(permissionVersionIsSet_) {
        val[utility::conversions::to_string_t("permission_version")] = ModelBase::toJson(permissionVersion_);
    }

    return val;
}
bool ShowPermissionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionVersion(refVal);
        }
    }
    return ok;
}


std::string ShowPermissionRequest::getPermissionId() const
{
    return permissionId_;
}

void ShowPermissionRequest::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool ShowPermissionRequest::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void ShowPermissionRequest::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

int32_t ShowPermissionRequest::getPermissionVersion() const
{
    return permissionVersion_;
}

void ShowPermissionRequest::setPermissionVersion(int32_t value)
{
    permissionVersion_ = value;
    permissionVersionIsSet_ = true;
}

bool ShowPermissionRequest::permissionVersionIsSet() const
{
    return permissionVersionIsSet_;
}

void ShowPermissionRequest::unsetpermissionVersion()
{
    permissionVersionIsSet_ = false;
}

}
}
}
}
}


