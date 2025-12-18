

#include "huaweicloud/meeting/v1/model/Attendee.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




Attendee::Attendee()
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
    type_ = "";
    typeIsSet_ = false;
    deptUUID_ = "";
    deptUUIDIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
}

Attendee::~Attendee() = default;

void Attendee::validate()
{
}

web::json::value Attendee::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deptUUIDIsSet_) {
        val[utility::conversions::to_string_t("deptUUID")] = ModelBase::toJson(deptUUID_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }

    return val;
}
bool Attendee::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string Attendee::getUserUUID() const
{
    return userUUID_;
}

void Attendee::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool Attendee::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void Attendee::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string Attendee::getAccountId() const
{
    return accountId_;
}

void Attendee::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool Attendee::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void Attendee::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string Attendee::getName() const
{
    return name_;
}

void Attendee::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Attendee::nameIsSet() const
{
    return nameIsSet_;
}

void Attendee::unsetname()
{
    nameIsSet_ = false;
}

int32_t Attendee::getRole() const
{
    return role_;
}

void Attendee::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool Attendee::roleIsSet() const
{
    return roleIsSet_;
}

void Attendee::unsetrole()
{
    roleIsSet_ = false;
}

std::string Attendee::getPhone() const
{
    return phone_;
}

void Attendee::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool Attendee::phoneIsSet() const
{
    return phoneIsSet_;
}

void Attendee::unsetphone()
{
    phoneIsSet_ = false;
}

std::string Attendee::getPhone2() const
{
    return phone2_;
}

void Attendee::setPhone2(const std::string& value)
{
    phone2_ = value;
    phone2IsSet_ = true;
}

bool Attendee::phone2IsSet() const
{
    return phone2IsSet_;
}

void Attendee::unsetphone2()
{
    phone2IsSet_ = false;
}

std::string Attendee::getPhone3() const
{
    return phone3_;
}

void Attendee::setPhone3(const std::string& value)
{
    phone3_ = value;
    phone3IsSet_ = true;
}

bool Attendee::phone3IsSet() const
{
    return phone3IsSet_;
}

void Attendee::unsetphone3()
{
    phone3IsSet_ = false;
}

std::string Attendee::getEmail() const
{
    return email_;
}

void Attendee::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool Attendee::emailIsSet() const
{
    return emailIsSet_;
}

void Attendee::unsetemail()
{
    emailIsSet_ = false;
}

std::string Attendee::getSms() const
{
    return sms_;
}

void Attendee::setSms(const std::string& value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool Attendee::smsIsSet() const
{
    return smsIsSet_;
}

void Attendee::unsetsms()
{
    smsIsSet_ = false;
}

std::string Attendee::getType() const
{
    return type_;
}

void Attendee::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Attendee::typeIsSet() const
{
    return typeIsSet_;
}

void Attendee::unsettype()
{
    typeIsSet_ = false;
}

std::string Attendee::getDeptUUID() const
{
    return deptUUID_;
}

void Attendee::setDeptUUID(const std::string& value)
{
    deptUUID_ = value;
    deptUUIDIsSet_ = true;
}

bool Attendee::deptUUIDIsSet() const
{
    return deptUUIDIsSet_;
}

void Attendee::unsetdeptUUID()
{
    deptUUIDIsSet_ = false;
}

std::string Attendee::getDeptName() const
{
    return deptName_;
}

void Attendee::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool Attendee::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void Attendee::unsetdeptName()
{
    deptNameIsSet_ = false;
}

}
}
}
}
}


