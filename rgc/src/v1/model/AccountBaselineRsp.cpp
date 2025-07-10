

#include "huaweicloud/rgc/v1/model/AccountBaselineRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




AccountBaselineRsp::AccountBaselineRsp()
{
    accountName_ = "";
    accountNameIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    accountType_ = "";
    accountTypeIsSet_ = false;
}

AccountBaselineRsp::~AccountBaselineRsp() = default;

void AccountBaselineRsp::validate()
{
}

web::json::value AccountBaselineRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("account_type")] = ModelBase::toJson(accountType_);
    }

    return val;
}
bool AccountBaselineRsp::fromJson(const web::json::value& val)
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


std::string AccountBaselineRsp::getAccountName() const
{
    return accountName_;
}

void AccountBaselineRsp::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool AccountBaselineRsp::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void AccountBaselineRsp::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::string AccountBaselineRsp::getAccountId() const
{
    return accountId_;
}

void AccountBaselineRsp::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool AccountBaselineRsp::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void AccountBaselineRsp::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string AccountBaselineRsp::getAccountType() const
{
    return accountType_;
}

void AccountBaselineRsp::setAccountType(const std::string& value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool AccountBaselineRsp::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void AccountBaselineRsp::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

}
}
}
}
}


