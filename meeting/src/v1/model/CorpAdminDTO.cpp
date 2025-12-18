

#include "huaweicloud/meeting/v1/model/CorpAdminDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CorpAdminDTO::CorpAdminDTO()
{
    account_ = "";
    accountIsSet_ = false;
}

CorpAdminDTO::~CorpAdminDTO() = default;

void CorpAdminDTO::validate()
{
}

web::json::value CorpAdminDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }

    return val;
}
bool CorpAdminDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    return ok;
}


std::string CorpAdminDTO::getAccount() const
{
    return account_;
}

void CorpAdminDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool CorpAdminDTO::accountIsSet() const
{
    return accountIsSet_;
}

void CorpAdminDTO::unsetaccount()
{
    accountIsSet_ = false;
}

}
}
}
}
}


