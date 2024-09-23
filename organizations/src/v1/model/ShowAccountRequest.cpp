

#include "huaweicloud/organizations/v1/model/ShowAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowAccountRequest::ShowAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    withRegisterContactInfo_ = false;
    withRegisterContactInfoIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
}

ShowAccountRequest::~ShowAccountRequest() = default;

void ShowAccountRequest::validate()
{
}

web::json::value ShowAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(withRegisterContactInfoIsSet_) {
        val[utility::conversions::to_string_t("with_register_contact_info")] = ModelBase::toJson(withRegisterContactInfo_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool ShowAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_register_contact_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_register_contact_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithRegisterContactInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    return ok;
}


std::string ShowAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

bool ShowAccountRequest::isWithRegisterContactInfo() const
{
    return withRegisterContactInfo_;
}

void ShowAccountRequest::setWithRegisterContactInfo(bool value)
{
    withRegisterContactInfo_ = value;
    withRegisterContactInfoIsSet_ = true;
}

bool ShowAccountRequest::withRegisterContactInfoIsSet() const
{
    return withRegisterContactInfoIsSet_;
}

void ShowAccountRequest::unsetwithRegisterContactInfo()
{
    withRegisterContactInfoIsSet_ = false;
}

std::string ShowAccountRequest::getAccountId() const
{
    return accountId_;
}

void ShowAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ShowAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ShowAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


