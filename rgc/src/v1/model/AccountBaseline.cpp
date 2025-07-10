

#include "huaweicloud/rgc/v1/model/AccountBaseline.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




AccountBaseline::AccountBaseline()
{
    accountName_ = "";
    accountNameIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    accountEmail_ = "";
    accountEmailIsSet_ = false;
    accountType_ = "";
    accountTypeIsSet_ = false;
}

AccountBaseline::~AccountBaseline() = default;

void AccountBaseline::validate()
{
}

web::json::value AccountBaseline::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(accountEmailIsSet_) {
        val[utility::conversions::to_string_t("account_email")] = ModelBase::toJson(accountEmail_);
    }
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("account_type")] = ModelBase::toJson(accountType_);
    }

    return val;
}
bool AccountBaseline::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountType(refVal);
        }
    }
    return ok;
}


std::string AccountBaseline::getAccountName() const
{
    return accountName_;
}

void AccountBaseline::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool AccountBaseline::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void AccountBaseline::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string AccountBaseline::getAccountId() const
{
    return accountId_;
}

void AccountBaseline::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool AccountBaseline::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void AccountBaseline::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string AccountBaseline::getPhone() const
{
    return phone_;
}

void AccountBaseline::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AccountBaseline::phoneIsSet() const
{
    return phoneIsSet_;
}

void AccountBaseline::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AccountBaseline::getAccountEmail() const
{
    return accountEmail_;
}

void AccountBaseline::setAccountEmail(const std::string& value)
{
    accountEmail_ = value;
    accountEmailIsSet_ = true;
}

bool AccountBaseline::accountEmailIsSet() const
{
    return accountEmailIsSet_;
}

void AccountBaseline::unsetaccountEmail()
{
    accountEmailIsSet_ = false;
}

std::string AccountBaseline::getAccountType() const
{
    return accountType_;
}

void AccountBaseline::setAccountType(const std::string& value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool AccountBaseline::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void AccountBaseline::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

}
}
}
}
}


