

#include "huaweicloud/ram/v1/model/AssociatePermissionReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




AssociatePermissionReqBody::AssociatePermissionReqBody()
{
    replace_ = false;
    replaceIsSet_ = false;
    permissionId_ = "";
    permissionIdIsSet_ = false;
}

AssociatePermissionReqBody::~AssociatePermissionReqBody() = default;

void AssociatePermissionReqBody::validate()
{
}

web::json::value AssociatePermissionReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replaceIsSet_) {
        val[utility::conversions::to_string_t("replace")] = ModelBase::toJson(replace_);
    }
    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }

    return val;
}
bool AssociatePermissionReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplace(refVal);
        }
    }
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


bool AssociatePermissionReqBody::isReplace() const
{
    return replace_;
}

void AssociatePermissionReqBody::setReplace(bool value)
{
    replace_ = value;
    replaceIsSet_ = true;
}

bool AssociatePermissionReqBody::replaceIsSet() const
{
    return replaceIsSet_;
}

void AssociatePermissionReqBody::unsetreplace()
{
    replaceIsSet_ = false;
}

std::string AssociatePermissionReqBody::getPermissionId() const
{
    return permissionId_;
}

void AssociatePermissionReqBody::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool AssociatePermissionReqBody::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void AssociatePermissionReqBody::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

}
}
}
}
}


