

#include "huaweicloud/meeting/v1/model/ParticipantInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ParticipantInfo::ParticipantInfo()
{
    participantID_ = "";
    participantIDIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    subscriberID_ = "";
    subscriberIDIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    attendeeType_ = "";
    attendeeTypeIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    phone2_ = "";
    phone2IsSet_ = false;
    phone3_ = "";
    phone3IsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    sms_ = "";
    smsIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    isAutoInvite_ = 0;
    isAutoInviteIsSet_ = false;
    isNotOverlayPidName_ = false;
    isNotOverlayPidNameIsSet_ = false;
}

ParticipantInfo::~ParticipantInfo() = default;

void ParticipantInfo::validate()
{
}

web::json::value ParticipantInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(subscriberIDIsSet_) {
        val[utility::conversions::to_string_t("subscriberID")] = ModelBase::toJson(subscriberID_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(attendeeTypeIsSet_) {
        val[utility::conversions::to_string_t("attendeeType")] = ModelBase::toJson(attendeeType_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("accountId")] = ModelBase::toJson(accountId_);
    }
    if(phone2IsSet_) {
        val[utility::conversions::to_string_t("phone2")] = ModelBase::toJson(phone2_);
    }
    if(phone3IsSet_) {
        val[utility::conversions::to_string_t("phone3")] = ModelBase::toJson(phone3_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("appId")] = ModelBase::toJson(appId_);
    }
    if(isAutoInviteIsSet_) {
        val[utility::conversions::to_string_t("isAutoInvite")] = ModelBase::toJson(isAutoInvite_);
    }
    if(isNotOverlayPidNameIsSet_) {
        val[utility::conversions::to_string_t("isNotOverlayPidName")] = ModelBase::toJson(isNotOverlayPidName_);
    }

    return val;
}
bool ParticipantInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subscriberID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attendeeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendeeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendeeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accountId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone3(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sms"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoInvite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoInvite"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoInvite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isNotOverlayPidName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isNotOverlayPidName"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNotOverlayPidName(refVal);
        }
    }
    return ok;
}


std::string ParticipantInfo::getParticipantID() const
{
    return participantID_;
}

void ParticipantInfo::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool ParticipantInfo::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void ParticipantInfo::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string ParticipantInfo::getName() const
{
    return name_;
}

void ParticipantInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParticipantInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ParticipantInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ParticipantInfo::getSubscriberID() const
{
    return subscriberID_;
}

void ParticipantInfo::setSubscriberID(const std::string& value)
{
    subscriberID_ = value;
    subscriberIDIsSet_ = true;
}

bool ParticipantInfo::subscriberIDIsSet() const
{
    return subscriberIDIsSet_;
}

void ParticipantInfo::unsetsubscriberID()
{
    subscriberIDIsSet_ = false;
}

int32_t ParticipantInfo::getRole() const
{
    return role_;
}

void ParticipantInfo::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ParticipantInfo::roleIsSet() const
{
    return roleIsSet_;
}

void ParticipantInfo::unsetrole()
{
    roleIsSet_ = false;
}

std::string ParticipantInfo::getState() const
{
    return state_;
}

void ParticipantInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ParticipantInfo::stateIsSet() const
{
    return stateIsSet_;
}

void ParticipantInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string ParticipantInfo::getAddress() const
{
    return address_;
}

void ParticipantInfo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ParticipantInfo::addressIsSet() const
{
    return addressIsSet_;
}

void ParticipantInfo::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ParticipantInfo::getAttendeeType() const
{
    return attendeeType_;
}

void ParticipantInfo::setAttendeeType(const std::string& value)
{
    attendeeType_ = value;
    attendeeTypeIsSet_ = true;
}

bool ParticipantInfo::attendeeTypeIsSet() const
{
    return attendeeTypeIsSet_;
}

void ParticipantInfo::unsetattendeeType()
{
    attendeeTypeIsSet_ = false;
}

std::string ParticipantInfo::getAccountId() const
{
    return accountId_;
}

void ParticipantInfo::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ParticipantInfo::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ParticipantInfo::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ParticipantInfo::getPhone2() const
{
    return phone2_;
}

void ParticipantInfo::setPhone2(const std::string& value)
{
    phone2_ = value;
    phone2IsSet_ = true;
}

bool ParticipantInfo::phone2IsSet() const
{
    return phone2IsSet_;
}

void ParticipantInfo::unsetphone2()
{
    phone2IsSet_ = false;
}

std::string ParticipantInfo::getPhone3() const
{
    return phone3_;
}

void ParticipantInfo::setPhone3(const std::string& value)
{
    phone3_ = value;
    phone3IsSet_ = true;
}

bool ParticipantInfo::phone3IsSet() const
{
    return phone3IsSet_;
}

void ParticipantInfo::unsetphone3()
{
    phone3IsSet_ = false;
}

std::string ParticipantInfo::getEmail() const
{
    return email_;
}

void ParticipantInfo::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ParticipantInfo::emailIsSet() const
{
    return emailIsSet_;
}

void ParticipantInfo::unsetemail()
{
    emailIsSet_ = false;
}

std::string ParticipantInfo::getSms() const
{
    return sms_;
}

void ParticipantInfo::setSms(const std::string& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool ParticipantInfo::smsIsSet() const
{
    return smsIsSet_;
}

void ParticipantInfo::unsetsms()
{
    smsIsSet_ = false;
}

std::string ParticipantInfo::getDeptName() const
{
    return deptName_;
}

void ParticipantInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ParticipantInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ParticipantInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ParticipantInfo::getUserUUID() const
{
    return userUUID_;
}

void ParticipantInfo::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool ParticipantInfo::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void ParticipantInfo::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string ParticipantInfo::getAppId() const
{
    return appId_;
}

void ParticipantInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ParticipantInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void ParticipantInfo::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ParticipantInfo::getIsAutoInvite() const
{
    return isAutoInvite_;
}

void ParticipantInfo::setIsAutoInvite(int32_t value)
{
    isAutoInvite_ = value;
    isAutoInviteIsSet_ = true;
}

bool ParticipantInfo::isAutoInviteIsSet() const
{
    return isAutoInviteIsSet_;
}

void ParticipantInfo::unsetisAutoInvite()
{
    isAutoInviteIsSet_ = false;
}

bool ParticipantInfo::isIsNotOverlayPidName() const
{
    return isNotOverlayPidName_;
}

void ParticipantInfo::setIsNotOverlayPidName(bool value)
{
    isNotOverlayPidName_ = value;
    isNotOverlayPidNameIsSet_ = true;
}

bool ParticipantInfo::isNotOverlayPidNameIsSet() const
{
    return isNotOverlayPidNameIsSet_;
}

void ParticipantInfo::unsetisNotOverlayPidName()
{
    isNotOverlayPidNameIsSet_ = false;
}

}
}
}
}
}


