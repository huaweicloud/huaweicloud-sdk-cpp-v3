

#include "huaweicloud/codeartsrepo/v4/model/UserRefPermissionBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UserRefPermissionBasicDto::UserRefPermissionBasicDto()
{
    hasPermission_ = false;
    hasPermissionIsSet_ = false;
    isProtect_ = false;
    isProtectIsSet_ = false;
}

UserRefPermissionBasicDto::~UserRefPermissionBasicDto() = default;

void UserRefPermissionBasicDto::validate()
{
}

web::json::value UserRefPermissionBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasPermissionIsSet_) {
        val[utility::conversions::to_string_t("has_permission")] = ModelBase::toJson(hasPermission_);
    }
    if(isProtectIsSet_) {
        val[utility::conversions::to_string_t("is_protect")] = ModelBase::toJson(isProtect_);
    }

    return val;
}
bool UserRefPermissionBasicDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("has_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_protect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_protect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProtect(refVal);
        }
    }
    return ok;
}


bool UserRefPermissionBasicDto::isHasPermission() const
{
    return hasPermission_;
}

void UserRefPermissionBasicDto::setHasPermission(bool value)
{
    hasPermission_ = value;
    hasPermissionIsSet_ = true;
}

bool UserRefPermissionBasicDto::hasPermissionIsSet() const
{
    return hasPermissionIsSet_;
}

void UserRefPermissionBasicDto::unsethasPermission()
{
    hasPermissionIsSet_ = false;
}

bool UserRefPermissionBasicDto::isIsProtect() const
{
    return isProtect_;
}

void UserRefPermissionBasicDto::setIsProtect(bool value)
{
    isProtect_ = value;
    isProtectIsSet_ = true;
}

bool UserRefPermissionBasicDto::isProtectIsSet() const
{
    return isProtectIsSet_;
}

void UserRefPermissionBasicDto::unsetisProtect()
{
    isProtectIsSet_ = false;
}

}
}
}
}
}


