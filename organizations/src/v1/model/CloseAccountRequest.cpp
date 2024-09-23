

#include "huaweicloud/organizations/v1/model/CloseAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CloseAccountRequest::CloseAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
}

CloseAccountRequest::~CloseAccountRequest() = default;

void CloseAccountRequest::validate()
{
}

web::json::value CloseAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool CloseAccountRequest::fromJson(const web::json::value& val)
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


std::string CloseAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CloseAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CloseAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CloseAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string CloseAccountRequest::getAccountId() const
{
    return accountId_;
}

void CloseAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool CloseAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void CloseAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


