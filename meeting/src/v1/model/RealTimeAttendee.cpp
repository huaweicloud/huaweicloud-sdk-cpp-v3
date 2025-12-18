

#include "huaweicloud/meeting/v1/model/RealTimeAttendee.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RealTimeAttendee::RealTimeAttendee()
{
    accountID_ = "";
    accountIDIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    phoneLeft_ = "";
    phoneLeftIsSet_ = false;
    phoneRight_ = "";
    phoneRightIsSet_ = false;
}

RealTimeAttendee::~RealTimeAttendee() = default;

void RealTimeAttendee::validate()
{
}

web::json::value RealTimeAttendee::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIDIsSet_) {
        val[utility::conversions::to_string_t("accountID")] = ModelBase::toJson(accountID_);
    }
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(phoneLeftIsSet_) {
        val[utility::conversions::to_string_t("phoneLeft")] = ModelBase::toJson(phoneLeft_);
    }
    if(phoneRightIsSet_) {
        val[utility::conversions::to_string_t("phoneRight")] = ModelBase::toJson(phoneRight_);
    }

    return val;
}
bool RealTimeAttendee::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accountID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phoneLeft"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phoneLeft"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneLeft(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phoneRight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phoneRight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneRight(refVal);
        }
    }
    return ok;
}


std::string RealTimeAttendee::getAccountID() const
{
    return accountID_;
}

void RealTimeAttendee::setAccountID(const std::string& value)
{
    accountID_ = value;
    accountIDIsSet_ = true;
}

bool RealTimeAttendee::accountIDIsSet() const
{
    return accountIDIsSet_;
}

void RealTimeAttendee::unsetaccountID()
{
    accountIDIsSet_ = false;
}

std::string RealTimeAttendee::getUserUUID() const
{
    return userUUID_;
}

void RealTimeAttendee::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool RealTimeAttendee::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void RealTimeAttendee::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string RealTimeAttendee::getName() const
{
    return name_;
}

void RealTimeAttendee::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RealTimeAttendee::nameIsSet() const
{
    return nameIsSet_;
}

void RealTimeAttendee::unsetname()
{
    nameIsSet_ = false;
}

std::string RealTimeAttendee::getPhone() const
{
    return phone_;
}

void RealTimeAttendee::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool RealTimeAttendee::phoneIsSet() const
{
    return phoneIsSet_;
}

void RealTimeAttendee::unsetphone()
{
    phoneIsSet_ = false;
}

std::string RealTimeAttendee::getPhoneLeft() const
{
    return phoneLeft_;
}

void RealTimeAttendee::setPhoneLeft(const std::string& value)
{
    phoneLeft_ = value;
    phoneLeftIsSet_ = true;
}

bool RealTimeAttendee::phoneLeftIsSet() const
{
    return phoneLeftIsSet_;
}

void RealTimeAttendee::unsetphoneLeft()
{
    phoneLeftIsSet_ = false;
}

std::string RealTimeAttendee::getPhoneRight() const
{
    return phoneRight_;
}

void RealTimeAttendee::setPhoneRight(const std::string& value)
{
    phoneRight_ = value;
    phoneRightIsSet_ = true;
}

bool RealTimeAttendee::phoneRightIsSet() const
{
    return phoneRightIsSet_;
}

void RealTimeAttendee::unsetphoneRight()
{
    phoneRightIsSet_ = false;
}

}
}
}
}
}


