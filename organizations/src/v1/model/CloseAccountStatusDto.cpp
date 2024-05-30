

#include "huaweicloud/organizations/v1/model/CloseAccountStatusDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CloseAccountStatusDto::CloseAccountStatusDto()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    organizationId_ = "";
    organizationIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
}

CloseAccountStatusDto::~CloseAccountStatusDto() = default;

void CloseAccountStatusDto::validate()
{
}

web::json::value CloseAccountStatusDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(organizationIdIsSet_) {
        val[utility::conversions::to_string_t("organization_id")] = ModelBase::toJson(organizationId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }

    return val;
}
bool CloseAccountStatusDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    return ok;
}


std::string CloseAccountStatusDto::getAccountId() const
{
    return accountId_;
}

void CloseAccountStatusDto::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool CloseAccountStatusDto::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void CloseAccountStatusDto::unsetaccountId()
{
    accountIdIsSet_ = false;
}

utility::datetime CloseAccountStatusDto::getCreatedAt() const
{
    return createdAt_;
}

void CloseAccountStatusDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CloseAccountStatusDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CloseAccountStatusDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime CloseAccountStatusDto::getUpdatedAt() const
{
    return updatedAt_;
}

void CloseAccountStatusDto::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CloseAccountStatusDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CloseAccountStatusDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string CloseAccountStatusDto::getOrganizationId() const
{
    return organizationId_;
}

void CloseAccountStatusDto::setOrganizationId(const std::string& value)
{
    organizationId_ = value;
    organizationIdIsSet_ = true;
}

bool CloseAccountStatusDto::organizationIdIsSet() const
{
    return organizationIdIsSet_;
}

void CloseAccountStatusDto::unsetorganizationId()
{
    organizationIdIsSet_ = false;
}

std::string CloseAccountStatusDto::getState() const
{
    return state_;
}

void CloseAccountStatusDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CloseAccountStatusDto::stateIsSet() const
{
    return stateIsSet_;
}

void CloseAccountStatusDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string CloseAccountStatusDto::getFailureReason() const
{
    return failureReason_;
}

void CloseAccountStatusDto::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool CloseAccountStatusDto::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void CloseAccountStatusDto::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

}
}
}
}
}


