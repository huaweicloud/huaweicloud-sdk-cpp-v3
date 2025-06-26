

#include "huaweicloud/rgc/v1/model/CreateManagedAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateManagedAccountRequest::CreateManagedAccountRequest()
{
    accountName_ = "";
    accountNameIsSet_ = false;
    accountEmail_ = "";
    accountEmailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    identityStoreUserName_ = "";
    identityStoreUserNameIsSet_ = false;
    identityStoreEmail_ = "";
    identityStoreEmailIsSet_ = false;
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    parentOrganizationalUnitName_ = "";
    parentOrganizationalUnitNameIsSet_ = false;
    blueprintIsSet_ = false;
}

CreateManagedAccountRequest::~CreateManagedAccountRequest() = default;

void CreateManagedAccountRequest::validate()
{
}

web::json::value CreateManagedAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(accountEmailIsSet_) {
        val[utility::conversions::to_string_t("account_email")] = ModelBase::toJson(accountEmail_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(identityStoreUserNameIsSet_) {
        val[utility::conversions::to_string_t("identity_store_user_name")] = ModelBase::toJson(identityStoreUserName_);
    }
    if(identityStoreEmailIsSet_) {
        val[utility::conversions::to_string_t("identity_store_email")] = ModelBase::toJson(identityStoreEmail_);
    }
    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(parentOrganizationalUnitNameIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_name")] = ModelBase::toJson(parentOrganizationalUnitName_);
    }
    if(blueprintIsSet_) {
        val[utility::conversions::to_string_t("blueprint")] = ModelBase::toJson(blueprint_);
    }

    return val;
}
bool CreateManagedAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blueprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blueprint"));
        if(!fieldValue.is_null())
        {
            Blueprint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlueprint(refVal);
        }
    }
    return ok;
}


std::string CreateManagedAccountRequest::getAccountName() const
{
    return accountName_;
}

void CreateManagedAccountRequest::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool CreateManagedAccountRequest::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void CreateManagedAccountRequest::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string CreateManagedAccountRequest::getAccountEmail() const
{
    return accountEmail_;
}

void CreateManagedAccountRequest::setAccountEmail(const std::string& value)
{
    accountEmail_ = value;
    accountEmailIsSet_ = true;
}

bool CreateManagedAccountRequest::accountEmailIsSet() const
{
    return accountEmailIsSet_;
}

void CreateManagedAccountRequest::unsetaccountEmail()
{
    accountEmailIsSet_ = false;
}

std::string CreateManagedAccountRequest::getPhone() const
{
    return phone_;
}

void CreateManagedAccountRequest::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CreateManagedAccountRequest::phoneIsSet() const
{
    return phoneIsSet_;
}

void CreateManagedAccountRequest::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CreateManagedAccountRequest::getIdentityStoreUserName() const
{
    return identityStoreUserName_;
}

void CreateManagedAccountRequest::setIdentityStoreUserName(const std::string& value)
{
    identityStoreUserName_ = value;
    identityStoreUserNameIsSet_ = true;
}

bool CreateManagedAccountRequest::identityStoreUserNameIsSet() const
{
    return identityStoreUserNameIsSet_;
}

void CreateManagedAccountRequest::unsetidentityStoreUserName()
{
    identityStoreUserNameIsSet_ = false;
}

std::string CreateManagedAccountRequest::getIdentityStoreEmail() const
{
    return identityStoreEmail_;
}

void CreateManagedAccountRequest::setIdentityStoreEmail(const std::string& value)
{
    identityStoreEmail_ = value;
    identityStoreEmailIsSet_ = true;
}

bool CreateManagedAccountRequest::identityStoreEmailIsSet() const
{
    return identityStoreEmailIsSet_;
}

void CreateManagedAccountRequest::unsetidentityStoreEmail()
{
    identityStoreEmailIsSet_ = false;
}

std::string CreateManagedAccountRequest::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void CreateManagedAccountRequest::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool CreateManagedAccountRequest::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void CreateManagedAccountRequest::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string CreateManagedAccountRequest::getParentOrganizationalUnitName() const
{
    return parentOrganizationalUnitName_;
}

void CreateManagedAccountRequest::setParentOrganizationalUnitName(const std::string& value)
{
    parentOrganizationalUnitName_ = value;
    parentOrganizationalUnitNameIsSet_ = true;
}

bool CreateManagedAccountRequest::parentOrganizationalUnitNameIsSet() const
{
    return parentOrganizationalUnitNameIsSet_;
}

void CreateManagedAccountRequest::unsetparentOrganizationalUnitName()
{
    parentOrganizationalUnitNameIsSet_ = false;
}

Blueprint CreateManagedAccountRequest::getBlueprint() const
{
    return blueprint_;
}

void CreateManagedAccountRequest::setBlueprint(const Blueprint& value)
{
    blueprint_ = value;
    blueprintIsSet_ = true;
}

bool CreateManagedAccountRequest::blueprintIsSet() const
{
    return blueprintIsSet_;
}

void CreateManagedAccountRequest::unsetblueprint()
{
    blueprintIsSet_ = false;
}

}
}
}
}
}


