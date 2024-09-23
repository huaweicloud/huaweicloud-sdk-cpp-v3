

#include "huaweicloud/organizations/v1/model/UpdateAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateAccountRequest::UpdateAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAccountRequest::~UpdateAccountRequest() = default;

void UpdateAccountRequest::validate()
{
}

web::json::value UpdateAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAccountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAccountReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateAccountRequest::getAccountId() const
{
    return accountId_;
}

void UpdateAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool UpdateAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void UpdateAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

UpdateAccountReqBody UpdateAccountRequest::getBody() const
{
    return body_;
}

void UpdateAccountRequest::setBody(const UpdateAccountReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


