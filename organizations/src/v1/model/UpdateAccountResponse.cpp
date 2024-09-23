

#include "huaweicloud/organizations/v1/model/UpdateAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateAccountResponse::UpdateAccountResponse()
{
    accountIsSet_ = false;
}

UpdateAccountResponse::~UpdateAccountResponse() = default;

void UpdateAccountResponse::validate()
{
}

web::json::value UpdateAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }

    return val;
}
bool UpdateAccountResponse::fromJson(const web::json::value& val)
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


AccountDto UpdateAccountResponse::getAccount() const
{
    return account_;
}

void UpdateAccountResponse::setAccount(const AccountDto& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool UpdateAccountResponse::accountIsSet() const
{
    return accountIsSet_;
}

void UpdateAccountResponse::unsetaccount()
{
    accountIsSet_ = false;
}

}
}
}
}
}


