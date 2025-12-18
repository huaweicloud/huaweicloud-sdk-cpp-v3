

#include "huaweicloud/meeting/v1/model/PartAttendee.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PartAttendee::PartAttendee()
{
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    phone2_ = "";
    phone2IsSet_ = false;
    phone3_ = "";
    phone3IsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    isMute_ = 0;
    isMuteIsSet_ = false;
}

PartAttendee::~PartAttendee() = default;

void PartAttendee::validate()
{
}

web::json::value PartAttendee::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(isMuteIsSet_) {
        val[utility::conversions::to_string_t("isMute")] = ModelBase::toJson(isMute_);
    }

    return val;
}
bool PartAttendee::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isMute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isMute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMute(refVal);
        }
    }
    return ok;
}


std::string PartAttendee::getName() const
{
    return name_;
}

void PartAttendee::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PartAttendee::nameIsSet() const
{
    return nameIsSet_;
}

void PartAttendee::unsetname()
{
    nameIsSet_ = false;
}

std::string PartAttendee::getPhone() const
{
    return phone_;
}

void PartAttendee::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool PartAttendee::phoneIsSet() const
{
    return phoneIsSet_;
}

void PartAttendee::unsetphone()
{
    phoneIsSet_ = false;
}

std::string PartAttendee::getPhone2() const
{
    return phone2_;
}

void PartAttendee::setPhone2(const std::string& value)
{
    phone2_ = value;
    phone2IsSet_ = true;
}

bool PartAttendee::phone2IsSet() const
{
    return phone2IsSet_;
}

void PartAttendee::unsetphone2()
{
    phone2IsSet_ = false;
}

std::string PartAttendee::getPhone3() const
{
    return phone3_;
}

void PartAttendee::setPhone3(const std::string& value)
{
    phone3_ = value;
    phone3IsSet_ = true;
}

bool PartAttendee::phone3IsSet() const
{
    return phone3IsSet_;
}

void PartAttendee::unsetphone3()
{
    phone3IsSet_ = false;
}

std::string PartAttendee::getType() const
{
    return type_;
}

void PartAttendee::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PartAttendee::typeIsSet() const
{
    return typeIsSet_;
}

void PartAttendee::unsettype()
{
    typeIsSet_ = false;
}

int32_t PartAttendee::getRole() const
{
    return role_;
}

void PartAttendee::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool PartAttendee::roleIsSet() const
{
    return roleIsSet_;
}

void PartAttendee::unsetrole()
{
    roleIsSet_ = false;
}

int32_t PartAttendee::getIsMute() const
{
    return isMute_;
}

void PartAttendee::setIsMute(int32_t value)
{
    isMute_ = value;
    isMuteIsSet_ = true;
}

bool PartAttendee::isMuteIsSet() const
{
    return isMuteIsSet_;
}

void PartAttendee::unsetisMute()
{
    isMuteIsSet_ = false;
}

}
}
}
}
}


