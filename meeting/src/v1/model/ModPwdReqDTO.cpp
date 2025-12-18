

#include "huaweicloud/meeting/v1/model/ModPwdReqDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModPwdReqDTO::ModPwdReqDTO()
{
    account_ = "";
    accountIsSet_ = false;
    oldPwd_ = "";
    oldPwdIsSet_ = false;
    newPwd_ = "";
    newPwdIsSet_ = false;
}

ModPwdReqDTO::~ModPwdReqDTO() = default;

void ModPwdReqDTO::validate()
{
}

web::json::value ModPwdReqDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(oldPwdIsSet_) {
        val[utility::conversions::to_string_t("oldPwd")] = ModelBase::toJson(oldPwd_);
    }
    if(newPwdIsSet_) {
        val[utility::conversions::to_string_t("newPwd")] = ModelBase::toJson(newPwd_);
    }

    return val;
}
bool ModPwdReqDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("oldPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oldPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newPwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newPwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPwd(refVal);
        }
    }
    return ok;
}


std::string ModPwdReqDTO::getAccount() const
{
    return account_;
}

void ModPwdReqDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ModPwdReqDTO::accountIsSet() const
{
    return accountIsSet_;
}

void ModPwdReqDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string ModPwdReqDTO::getOldPwd() const
{
    return oldPwd_;
}

void ModPwdReqDTO::setOldPwd(const std::string& value)
{
    oldPwd_ = value;
    oldPwdIsSet_ = true;
}

bool ModPwdReqDTO::oldPwdIsSet() const
{
    return oldPwdIsSet_;
}

void ModPwdReqDTO::unsetoldPwd()
{
    oldPwdIsSet_ = false;
}

std::string ModPwdReqDTO::getNewPwd() const
{
    return newPwd_;
}

void ModPwdReqDTO::setNewPwd(const std::string& value)
{
    newPwd_ = value;
    newPwdIsSet_ = true;
}

bool ModPwdReqDTO::newPwdIsSet() const
{
    return newPwdIsSet_;
}

void ModPwdReqDTO::unsetnewPwd()
{
    newPwdIsSet_ = false;
}

}
}
}
}
}


