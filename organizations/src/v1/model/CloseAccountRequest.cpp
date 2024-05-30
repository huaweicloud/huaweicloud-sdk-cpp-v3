

#include "huaweicloud/organizations/v1/model/CloseAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CloseAccountRequest::CloseAccountRequest()
{
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

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool CloseAccountRequest::fromJson(const web::json::value& val)
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
    return ok;
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


