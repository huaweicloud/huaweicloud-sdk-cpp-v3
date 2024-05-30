

#include "huaweicloud/organizations/v1/model/ShowAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowAccountResponse::ShowAccountResponse()
{
    accountIsSet_ = false;
}

ShowAccountResponse::~ShowAccountResponse() = default;

void ShowAccountResponse::validate()
{
}

web::json::value ShowAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }

    return val;
}
bool ShowAccountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            AccountDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    return ok;
}


AccountDto ShowAccountResponse::getAccount() const
{
    return account_;
}

void ShowAccountResponse::setAccount(const AccountDto& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ShowAccountResponse::accountIsSet() const
{
    return accountIsSet_;
}

void ShowAccountResponse::unsetaccount()
{
    accountIsSet_ = false;
}

}
}
}
}
}


