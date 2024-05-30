

#include "huaweicloud/organizations/v1/model/RemoveAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




RemoveAccountRequest::RemoveAccountRequest()
{
    accountId_ = "";
    accountIdIsSet_ = false;
}

RemoveAccountRequest::~RemoveAccountRequest() = default;

void RemoveAccountRequest::validate()
{
}

web::json::value RemoveAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool RemoveAccountRequest::fromJson(const web::json::value& val)
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


std::string RemoveAccountRequest::getAccountId() const
{
    return accountId_;
}

void RemoveAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool RemoveAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void RemoveAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


