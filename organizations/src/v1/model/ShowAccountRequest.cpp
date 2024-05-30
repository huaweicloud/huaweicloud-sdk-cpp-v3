

#include "huaweicloud/organizations/v1/model/ShowAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowAccountRequest::ShowAccountRequest()
{
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

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool ShowAccountRequest::fromJson(const web::json::value& val)
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


