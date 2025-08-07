

#include "huaweicloud/organizations/v1/model/CreateAccountStatusDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateAccountStatusDto::CreateAccountStatusDto()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    completedAt_ = utility::datetime();
    completedAtIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    failureDetailMsgIsSet_ = false;
}

CreateAccountStatusDto::~CreateAccountStatusDto() = default;

void CreateAccountStatusDto::validate()
{
}

web::json::value CreateAccountStatusDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(completedAtIsSet_) {
        val[utility::conversions::to_string_t("completed_at")] = ModelBase::toJson(completedAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(failureDetailMsgIsSet_) {
        val[utility::conversions::to_string_t("failure_detail_msg")] = ModelBase::toJson(failureDetailMsg_);
    }

    return val;
}
bool CreateAccountStatusDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("failure_detail_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_detail_msg"));
        if(!fieldValue.is_null())
        {
            CreateAccountStatusDto_failure_detail_msg refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureDetailMsg(refVal);
        }
    }
    return ok;
}


std::string CreateAccountStatusDto::getAccountId() const
{
    return accountId_;
}

void CreateAccountStatusDto::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool CreateAccountStatusDto::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void CreateAccountStatusDto::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string CreateAccountStatusDto::getAccountName() const
{
    return accountName_;
}

void CreateAccountStatusDto::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool CreateAccountStatusDto::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void CreateAccountStatusDto::unsetaccountName()
{
    accountNameIsSet_ = false;
}

utility::datetime CreateAccountStatusDto::getCompletedAt() const
{
    return completedAt_;
}

void CreateAccountStatusDto::setCompletedAt(const utility::datetime& value)
{
    completedAt_ = value;
    completedAtIsSet_ = true;
}

bool CreateAccountStatusDto::completedAtIsSet() const
{
    return completedAtIsSet_;
}

void CreateAccountStatusDto::unsetcompletedAt()
{
    completedAtIsSet_ = false;
}

utility::datetime CreateAccountStatusDto::getCreatedAt() const
{
    return createdAt_;
}

void CreateAccountStatusDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateAccountStatusDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateAccountStatusDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateAccountStatusDto::getId() const
{
    return id_;
}

void CreateAccountStatusDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateAccountStatusDto::idIsSet() const
{
    return idIsSet_;
}

void CreateAccountStatusDto::unsetid()
{
    idIsSet_ = false;
}

std::string CreateAccountStatusDto::getState() const
{
    return state_;
}

void CreateAccountStatusDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateAccountStatusDto::stateIsSet() const
{
    return stateIsSet_;
}

void CreateAccountStatusDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateAccountStatusDto::getFailureReason() const
{
    return failureReason_;
}

void CreateAccountStatusDto::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool CreateAccountStatusDto::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void CreateAccountStatusDto::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

CreateAccountStatusDto_failure_detail_msg CreateAccountStatusDto::getFailureDetailMsg() const
{
    return failureDetailMsg_;
}

void CreateAccountStatusDto::setFailureDetailMsg(const CreateAccountStatusDto_failure_detail_msg& value)
{
    failureDetailMsg_ = value;
    failureDetailMsgIsSet_ = true;
}

bool CreateAccountStatusDto::failureDetailMsgIsSet() const
{
    return failureDetailMsgIsSet_;
}

void CreateAccountStatusDto::unsetfailureDetailMsg()
{
    failureDetailMsgIsSet_ = false;
}

}
}
}
}
}


