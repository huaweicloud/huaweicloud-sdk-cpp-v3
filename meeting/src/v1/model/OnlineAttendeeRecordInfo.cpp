

#include "huaweicloud/meeting/v1/model/OnlineAttendeeRecordInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OnlineAttendeeRecordInfo::OnlineAttendeeRecordInfo()
{
    participantId_ = "";
    participantIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    callNumber_ = "";
    callNumberIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    thirdAccount_ = "";
    thirdAccountIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

OnlineAttendeeRecordInfo::~OnlineAttendeeRecordInfo() = default;

void OnlineAttendeeRecordInfo::validate()
{
}

web::json::value OnlineAttendeeRecordInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIdIsSet_) {
        val[utility::conversions::to_string_t("participant_id")] = ModelBase::toJson(participantId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(callNumberIsSet_) {
        val[utility::conversions::to_string_t("call_number")] = ModelBase::toJson(callNumber_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(thirdAccountIsSet_) {
        val[utility::conversions::to_string_t("third_account")] = ModelBase::toJson(thirdAccount_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool OnlineAttendeeRecordInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("call_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("third_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("third_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string OnlineAttendeeRecordInfo::getParticipantId() const
{
    return participantId_;
}

void OnlineAttendeeRecordInfo::setParticipantId(const std::string& value)
{
    participantId_ = value;
    participantIdIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::participantIdIsSet() const
{
    return participantIdIsSet_;
}

void OnlineAttendeeRecordInfo::unsetparticipantId()
{
    participantIdIsSet_ = false;
}

std::string OnlineAttendeeRecordInfo::getName() const
{
    return name_;
}

void OnlineAttendeeRecordInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::nameIsSet() const
{
    return nameIsSet_;
}

void OnlineAttendeeRecordInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string OnlineAttendeeRecordInfo::getCallNumber() const
{
    return callNumber_;
}

void OnlineAttendeeRecordInfo::setCallNumber(const std::string& value)
{
    callNumber_ = value;
    callNumberIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::callNumberIsSet() const
{
    return callNumberIsSet_;
}

void OnlineAttendeeRecordInfo::unsetcallNumber()
{
    callNumberIsSet_ = false;
}

int32_t OnlineAttendeeRecordInfo::getRole() const
{
    return role_;
}

void OnlineAttendeeRecordInfo::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::roleIsSet() const
{
    return roleIsSet_;
}

void OnlineAttendeeRecordInfo::unsetrole()
{
    roleIsSet_ = false;
}

std::string OnlineAttendeeRecordInfo::getThirdAccount() const
{
    return thirdAccount_;
}

void OnlineAttendeeRecordInfo::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void OnlineAttendeeRecordInfo::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

std::string OnlineAttendeeRecordInfo::getAccount() const
{
    return account_;
}

void OnlineAttendeeRecordInfo::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::accountIsSet() const
{
    return accountIsSet_;
}

void OnlineAttendeeRecordInfo::unsetaccount()
{
    accountIsSet_ = false;
}

std::string OnlineAttendeeRecordInfo::getUserId() const
{
    return userId_;
}

void OnlineAttendeeRecordInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool OnlineAttendeeRecordInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void OnlineAttendeeRecordInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


