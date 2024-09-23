

#include "huaweicloud/organizations/v1/model/ShowCreateAccountStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowCreateAccountStatusRequest::ShowCreateAccountStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    createAccountStatusId_ = "";
    createAccountStatusIdIsSet_ = false;
}

ShowCreateAccountStatusRequest::~ShowCreateAccountStatusRequest() = default;

void ShowCreateAccountStatusRequest::validate()
{
}

web::json::value ShowCreateAccountStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(createAccountStatusIdIsSet_) {
        val[utility::conversions::to_string_t("create_account_status_id")] = ModelBase::toJson(createAccountStatusId_);
    }

    return val;
}
bool ShowCreateAccountStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_account_status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_account_status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAccountStatusId(refVal);
        }
    }
    return ok;
}


std::string ShowCreateAccountStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowCreateAccountStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowCreateAccountStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowCreateAccountStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ShowCreateAccountStatusRequest::getCreateAccountStatusId() const
{
    return createAccountStatusId_;
}

void ShowCreateAccountStatusRequest::setCreateAccountStatusId(const std::string& value)
{
    createAccountStatusId_ = value;
    createAccountStatusIdIsSet_ = true;
}

bool ShowCreateAccountStatusRequest::createAccountStatusIdIsSet() const
{
    return createAccountStatusIdIsSet_;
}

void ShowCreateAccountStatusRequest::unsetcreateAccountStatusId()
{
    createAccountStatusIdIsSet_ = false;
}

}
}
}
}
}


