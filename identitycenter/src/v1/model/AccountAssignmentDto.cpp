

#include "huaweicloud/identitycenter/v1/model/AccountAssignmentDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AccountAssignmentDto::AccountAssignmentDto()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
}

AccountAssignmentDto::~AccountAssignmentDto() = default;

void AccountAssignmentDto::validate()
{
}

web::json::value AccountAssignmentDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
    }

    return val;
}
bool AccountAssignmentDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
        }
    }
    return ok;
}


std::string AccountAssignmentDto::getAccountId() const
{
    return accountId_;
}

void AccountAssignmentDto::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool AccountAssignmentDto::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void AccountAssignmentDto::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string AccountAssignmentDto::getPermissionSetId() const
{
    return permissionSetId_;
}

void AccountAssignmentDto::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool AccountAssignmentDto::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void AccountAssignmentDto::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string AccountAssignmentDto::getPrincipalId() const
{
    return principalId_;
}

void AccountAssignmentDto::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool AccountAssignmentDto::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void AccountAssignmentDto::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string AccountAssignmentDto::getPrincipalType() const
{
    return principalType_;
}

void AccountAssignmentDto::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool AccountAssignmentDto::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void AccountAssignmentDto::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

}
}
}
}
}


