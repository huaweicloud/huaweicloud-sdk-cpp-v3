

#include "huaweicloud/meeting/v1/model/RestAttendeeDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestAttendeeDTO::RestAttendeeDTO()
{
    userUUID_ = "";
    userUUIDIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    phone2_ = "";
    phone2IsSet_ = false;
    phone3_ = "";
    phone3IsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    sms_ = "";
    smsIsSet_ = false;
    isMute_ = 0;
    isMuteIsSet_ = false;
    isAutoInvite_ = 0;
    isAutoInviteIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    deptUUID_ = "";
    deptUUIDIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    uniqueType_ = 0;
    uniqueTypeIsSet_ = false;
}

RestAttendeeDTO::~RestAttendeeDTO() = default;

void RestAttendeeDTO::validate()
{
}

web::json::value RestAttendeeDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("accountId")] = ModelBase::toJson(accountId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
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
    if(isMuteIsSet_) {
        val[utility::conversions::to_string_t("isMute")] = ModelBase::toJson(isMute_);
    }
    if(isAutoInviteIsSet_) {
        val[utility::conversions::to_string_t("isAutoInvite")] = ModelBase::toJson(isAutoInvite_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(deptUUIDIsSet_) {
        val[utility::conversions::to_string_t("deptUUID")] = ModelBase::toJson(deptUUID_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("appId")] = ModelBase::toJson(appId_);
    }
    if(uniqueTypeIsSet_) {
        val[utility::conversions::to_string_t("uniqueType")] = ModelBase::toJson(uniqueType_);
    }

    return val;
}
bool RestAttendeeDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isMute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMute(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("appId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uniqueType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uniqueType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueType(refVal);
        }
    }
    return ok;
}


std::string RestAttendeeDTO::getUserUUID() const
{
    return userUUID_;
}

void RestAttendeeDTO::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool RestAttendeeDTO::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void RestAttendeeDTO::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string RestAttendeeDTO::getAccountId() const
{
    return accountId_;
}

void RestAttendeeDTO::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool RestAttendeeDTO::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void RestAttendeeDTO::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string RestAttendeeDTO::getName() const
{
    return name_;
}

void RestAttendeeDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RestAttendeeDTO::nameIsSet() const
{
    return nameIsSet_;
}

void RestAttendeeDTO::unsetname()
{
    nameIsSet_ = false;
}

int32_t RestAttendeeDTO::getRole() const
{
    return role_;
}

void RestAttendeeDTO::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool RestAttendeeDTO::roleIsSet() const
{
    return roleIsSet_;
}

void RestAttendeeDTO::unsetrole()
{
    roleIsSet_ = false;
}

std::string RestAttendeeDTO::getPhone() const
{
    return phone_;
}

void RestAttendeeDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool RestAttendeeDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void RestAttendeeDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string RestAttendeeDTO::getPhone2() const
{
    return phone2_;
}

void RestAttendeeDTO::setPhone2(const std::string& value)
{
    phone2_ = value;
    phone2IsSet_ = true;
}

bool RestAttendeeDTO::phone2IsSet() const
{
    return phone2IsSet_;
}

void RestAttendeeDTO::unsetphone2()
{
    phone2IsSet_ = false;
}

std::string RestAttendeeDTO::getPhone3() const
{
    return phone3_;
}

void RestAttendeeDTO::setPhone3(const std::string& value)
{
    phone3_ = value;
    phone3IsSet_ = true;
}

bool RestAttendeeDTO::phone3IsSet() const
{
    return phone3IsSet_;
}

void RestAttendeeDTO::unsetphone3()
{
    phone3IsSet_ = false;
}

std::string RestAttendeeDTO::getEmail() const
{
    return email_;
}

void RestAttendeeDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool RestAttendeeDTO::emailIsSet() const
{
    return emailIsSet_;
}

void RestAttendeeDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string RestAttendeeDTO::getSms() const
{
    return sms_;
}

void RestAttendeeDTO::setSms(const std::string& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool RestAttendeeDTO::smsIsSet() const
{
    return smsIsSet_;
}

void RestAttendeeDTO::unsetsms()
{
    smsIsSet_ = false;
}

int32_t RestAttendeeDTO::getIsMute() const
{
    return isMute_;
}

void RestAttendeeDTO::setIsMute(int32_t value)
{
    isMute_ = value;
    isMuteIsSet_ = true;
}

bool RestAttendeeDTO::isMuteIsSet() const
{
    return isMuteIsSet_;
}

void RestAttendeeDTO::unsetisMute()
{
    isMuteIsSet_ = false;
}

int32_t RestAttendeeDTO::getIsAutoInvite() const
{
    return isAutoInvite_;
}

void RestAttendeeDTO::setIsAutoInvite(int32_t value)
{
    isAutoInvite_ = value;
    isAutoInviteIsSet_ = true;
}

bool RestAttendeeDTO::isAutoInviteIsSet() const
{
    return isAutoInviteIsSet_;
}

void RestAttendeeDTO::unsetisAutoInvite()
{
    isAutoInviteIsSet_ = false;
}

std::string RestAttendeeDTO::getType() const
{
    return type_;
}

void RestAttendeeDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestAttendeeDTO::typeIsSet() const
{
    return typeIsSet_;
}

void RestAttendeeDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string RestAttendeeDTO::getAddress() const
{
    return address_;
}

void RestAttendeeDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool RestAttendeeDTO::addressIsSet() const
{
    return addressIsSet_;
}

void RestAttendeeDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string RestAttendeeDTO::getDeptUUID() const
{
    return deptUUID_;
}

void RestAttendeeDTO::setDeptUUID(const std::string& value)
{
    deptUUID_ = value;
    deptUUIDIsSet_ = true;
}

bool RestAttendeeDTO::deptUUIDIsSet() const
{
    return deptUUIDIsSet_;
}

void RestAttendeeDTO::unsetdeptUUID()
{
    deptUUIDIsSet_ = false;
}

std::string RestAttendeeDTO::getDeptName() const
{
    return deptName_;
}

void RestAttendeeDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool RestAttendeeDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void RestAttendeeDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string RestAttendeeDTO::getAppId() const
{
    return appId_;
}

void RestAttendeeDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool RestAttendeeDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void RestAttendeeDTO::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t RestAttendeeDTO::getUniqueType() const
{
    return uniqueType_;
}

void RestAttendeeDTO::setUniqueType(int32_t value)
{
    uniqueType_ = value;
    uniqueTypeIsSet_ = true;
}

bool RestAttendeeDTO::uniqueTypeIsSet() const
{
    return uniqueTypeIsSet_;
}

void RestAttendeeDTO::unsetuniqueType()
{
    uniqueTypeIsSet_ = false;
}

}
}
}
}
}


