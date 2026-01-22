

#include "huaweicloud/cfw/v1/model/AccountInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccountInfo::AccountInfo()
{
    accountId_ = "";
    accountIdIsSet_ = false;
}

AccountInfo::~AccountInfo() = default;

void AccountInfo::validate()
{
}

web::json::value AccountInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool AccountInfo::fromJson(const web::json::value& val)
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


std::string AccountInfo::getAccountId() const
{
    return accountId_;
}

void AccountInfo::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool AccountInfo::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void AccountInfo::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


