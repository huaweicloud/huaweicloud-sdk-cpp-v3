

#include "huaweicloud/organizations/v1/model/DelegatedAdministratorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DelegatedAdministratorDto::DelegatedAdministratorDto()
{
    delegationEnabledAt_ = utility::datetime();
    delegationEnabledAtIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    accountUrn_ = "";
    accountUrnIsSet_ = false;
    joinMethod_ = "";
    joinMethodIsSet_ = false;
    joinedAt_ = utility::datetime();
    joinedAtIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
}

DelegatedAdministratorDto::~DelegatedAdministratorDto() = default;

void DelegatedAdministratorDto::validate()
{
}

web::json::value DelegatedAdministratorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delegationEnabledAtIsSet_) {
        val[utility::conversions::to_string_t("delegation_enabled_at")] = ModelBase::toJson(delegationEnabledAt_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountUrnIsSet_) {
        val[utility::conversions::to_string_t("account_urn")] = ModelBase::toJson(accountUrn_);
    }
    if(joinMethodIsSet_) {
        val[utility::conversions::to_string_t("join_method")] = ModelBase::toJson(joinMethod_);
    }
    if(joinedAtIsSet_) {
        val[utility::conversions::to_string_t("joined_at")] = ModelBase::toJson(joinedAt_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }

    return val;
}
bool DelegatedAdministratorDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delegation_enabled_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegation_enabled_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegationEnabledAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("account_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("join_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("join_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("joined_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("joined_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    return ok;
}


utility::datetime DelegatedAdministratorDto::getDelegationEnabledAt() const
{
    return delegationEnabledAt_;
}

void DelegatedAdministratorDto::setDelegationEnabledAt(const utility::datetime& value)
{
    delegationEnabledAt_ = value;
    delegationEnabledAtIsSet_ = true;
}

bool DelegatedAdministratorDto::delegationEnabledAtIsSet() const
{
    return delegationEnabledAtIsSet_;
}

void DelegatedAdministratorDto::unsetdelegationEnabledAt()
{
    delegationEnabledAtIsSet_ = false;
}

std::string DelegatedAdministratorDto::getAccountId() const
{
    return accountId_;
}

void DelegatedAdministratorDto::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool DelegatedAdministratorDto::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void DelegatedAdministratorDto::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string DelegatedAdministratorDto::getAccountUrn() const
{
    return accountUrn_;
}

void DelegatedAdministratorDto::setAccountUrn(const std::string& value)
{
    accountUrn_ = value;
    accountUrnIsSet_ = true;
}

bool DelegatedAdministratorDto::accountUrnIsSet() const
{
    return accountUrnIsSet_;
}

void DelegatedAdministratorDto::unsetaccountUrn()
{
    accountUrnIsSet_ = false;
}

std::string DelegatedAdministratorDto::getJoinMethod() const
{
    return joinMethod_;
}

void DelegatedAdministratorDto::setJoinMethod(const std::string& value)
{
    joinMethod_ = value;
    joinMethodIsSet_ = true;
}

bool DelegatedAdministratorDto::joinMethodIsSet() const
{
    return joinMethodIsSet_;
}

void DelegatedAdministratorDto::unsetjoinMethod()
{
    joinMethodIsSet_ = false;
}

utility::datetime DelegatedAdministratorDto::getJoinedAt() const
{
    return joinedAt_;
}

void DelegatedAdministratorDto::setJoinedAt(const utility::datetime& value)
{
    joinedAt_ = value;
    joinedAtIsSet_ = true;
}

bool DelegatedAdministratorDto::joinedAtIsSet() const
{
    return joinedAtIsSet_;
}

void DelegatedAdministratorDto::unsetjoinedAt()
{
    joinedAtIsSet_ = false;
}

std::string DelegatedAdministratorDto::getAccountName() const
{
    return accountName_;
}

void DelegatedAdministratorDto::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool DelegatedAdministratorDto::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void DelegatedAdministratorDto::unsetaccountName()
{
    accountNameIsSet_ = false;
}

}
}
}
}
}


