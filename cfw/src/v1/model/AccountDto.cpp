

#include "huaweicloud/cfw/v1/model/AccountDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccountDto::AccountDto()
{
    accountsIsSet_ = false;
}

AccountDto::~AccountDto() = default;

void AccountDto::validate()
{
}

web::json::value AccountDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountsIsSet_) {
        val[utility::conversions::to_string_t("accounts")] = ModelBase::toJson(accounts_);
    }

    return val;
}
bool AccountDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accounts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accounts"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccounts(refVal);
        }
    }
    return ok;
}


std::vector<AccountInfo>& AccountDto::getAccounts()
{
    return accounts_;
}

void AccountDto::setAccounts(const std::vector<AccountInfo>& value)
{
    accounts_ = value;
    accountsIsSet_ = true;
}

bool AccountDto::accountsIsSet() const
{
    return accountsIsSet_;
}

void AccountDto::unsetaccounts()
{
    accountsIsSet_ = false;
}

}
}
}
}
}


