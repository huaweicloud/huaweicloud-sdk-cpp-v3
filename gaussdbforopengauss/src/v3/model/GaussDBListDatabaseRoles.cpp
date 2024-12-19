

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBListDatabaseRoles.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBListDatabaseRoles::GaussDBListDatabaseRoles()
{
    name_ = "";
    nameIsSet_ = false;
    memberof_ = "";
    memberofIsSet_ = false;
    lockStatus_ = false;
    lockStatusIsSet_ = false;
    attributeIsSet_ = false;
}

GaussDBListDatabaseRoles::~GaussDBListDatabaseRoles() = default;

void GaussDBListDatabaseRoles::validate()
{
}

web::json::value GaussDBListDatabaseRoles::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(memberofIsSet_) {
        val[utility::conversions::to_string_t("memberof")] = ModelBase::toJson(memberof_);
    }
    if(lockStatusIsSet_) {
        val[utility::conversions::to_string_t("lock_status")] = ModelBase::toJson(lockStatus_);
    }
    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }

    return val;
}
bool GaussDBListDatabaseRoles::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memberof"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memberof"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberof(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
        }
    }
    return ok;
}


std::string GaussDBListDatabaseRoles::getName() const
{
    return name_;
}

void GaussDBListDatabaseRoles::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBListDatabaseRoles::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBListDatabaseRoles::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBListDatabaseRoles::getMemberof() const
{
    return memberof_;
}

void GaussDBListDatabaseRoles::setMemberof(const std::string& value)
{
    memberof_ = value;
    memberofIsSet_ = true;
}

bool GaussDBListDatabaseRoles::memberofIsSet() const
{
    return memberofIsSet_;
}

void GaussDBListDatabaseRoles::unsetmemberof()
{
    memberofIsSet_ = false;
}

bool GaussDBListDatabaseRoles::isLockStatus() const
{
    return lockStatus_;
}

void GaussDBListDatabaseRoles::setLockStatus(bool value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool GaussDBListDatabaseRoles::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void GaussDBListDatabaseRoles::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

Object GaussDBListDatabaseRoles::getAttribute() const
{
    return attribute_;
}

void GaussDBListDatabaseRoles::setAttribute(const Object& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool GaussDBListDatabaseRoles::attributeIsSet() const
{
    return attributeIsSet_;
}

void GaussDBListDatabaseRoles::unsetattribute()
{
    attributeIsSet_ = false;
}

}
}
}
}
}


