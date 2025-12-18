

#include "huaweicloud/meeting/v1/model/AdminResetPwdReqDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AdminResetPwdReqDTO::AdminResetPwdReqDTO()
{
    account_ = "";
    accountIsSet_ = false;
}

AdminResetPwdReqDTO::~AdminResetPwdReqDTO() = default;

void AdminResetPwdReqDTO::validate()
{
}

web::json::value AdminResetPwdReqDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }

    return val;
}
bool AdminResetPwdReqDTO::fromJson(const web::json::value& val)
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


std::string AdminResetPwdReqDTO::getAccount() const
{
    return account_;
}

void AdminResetPwdReqDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool AdminResetPwdReqDTO::accountIsSet() const
{
    return accountIsSet_;
}

void AdminResetPwdReqDTO::unsetaccount()
{
    accountIsSet_ = false;
}

}
}
}
}
}


