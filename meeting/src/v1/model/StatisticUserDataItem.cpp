

#include "huaweicloud/meeting/v1/model/StatisticUserDataItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StatisticUserDataItem::StatisticUserDataItem()
{
    time_ = "";
    timeIsSet_ = false;
    userLoginCount_ = "";
    userLoginCountIsSet_ = false;
    userPCLoginCount_ = "";
    userPCLoginCountIsSet_ = false;
    userMobileLoginCount_ = "";
    userMobileLoginCountIsSet_ = false;
    userActivatedCount_ = "";
    userActivatedCountIsSet_ = false;
    userLoginDevicesName_ = "";
    userLoginDevicesNameIsSet_ = false;
    userLoginDevicesCount_ = "";
    userLoginDevicesCountIsSet_ = false;
}

StatisticUserDataItem::~StatisticUserDataItem() = default;

void StatisticUserDataItem::validate()
{
}

web::json::value StatisticUserDataItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(userLoginCountIsSet_) {
        val[utility::conversions::to_string_t("userLoginCount")] = ModelBase::toJson(userLoginCount_);
    }
    if(userPCLoginCountIsSet_) {
        val[utility::conversions::to_string_t("userPCLoginCount")] = ModelBase::toJson(userPCLoginCount_);
    }
    if(userMobileLoginCountIsSet_) {
        val[utility::conversions::to_string_t("userMobileLoginCount")] = ModelBase::toJson(userMobileLoginCount_);
    }
    if(userActivatedCountIsSet_) {
        val[utility::conversions::to_string_t("userActivatedCount")] = ModelBase::toJson(userActivatedCount_);
    }
    if(userLoginDevicesNameIsSet_) {
        val[utility::conversions::to_string_t("userLoginDevicesName")] = ModelBase::toJson(userLoginDevicesName_);
    }
    if(userLoginDevicesCountIsSet_) {
        val[utility::conversions::to_string_t("userLoginDevicesCount")] = ModelBase::toJson(userLoginDevicesCount_);
    }

    return val;
}
bool StatisticUserDataItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userLoginCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userLoginCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserLoginCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userPCLoginCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userPCLoginCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPCLoginCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userMobileLoginCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userMobileLoginCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserMobileLoginCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userActivatedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userActivatedCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserActivatedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userLoginDevicesName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userLoginDevicesName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserLoginDevicesName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userLoginDevicesCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userLoginDevicesCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserLoginDevicesCount(refVal);
        }
    }
    return ok;
}


std::string StatisticUserDataItem::getTime() const
{
    return time_;
}

void StatisticUserDataItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StatisticUserDataItem::timeIsSet() const
{
    return timeIsSet_;
}

void StatisticUserDataItem::unsettime()
{
    timeIsSet_ = false;
}

std::string StatisticUserDataItem::getUserLoginCount() const
{
    return userLoginCount_;
}

void StatisticUserDataItem::setUserLoginCount(const std::string& value)
{
    userLoginCount_ = value;
    userLoginCountIsSet_ = true;
}

bool StatisticUserDataItem::userLoginCountIsSet() const
{
    return userLoginCountIsSet_;
}

void StatisticUserDataItem::unsetuserLoginCount()
{
    userLoginCountIsSet_ = false;
}

std::string StatisticUserDataItem::getUserPCLoginCount() const
{
    return userPCLoginCount_;
}

void StatisticUserDataItem::setUserPCLoginCount(const std::string& value)
{
    userPCLoginCount_ = value;
    userPCLoginCountIsSet_ = true;
}

bool StatisticUserDataItem::userPCLoginCountIsSet() const
{
    return userPCLoginCountIsSet_;
}

void StatisticUserDataItem::unsetuserPCLoginCount()
{
    userPCLoginCountIsSet_ = false;
}

std::string StatisticUserDataItem::getUserMobileLoginCount() const
{
    return userMobileLoginCount_;
}

void StatisticUserDataItem::setUserMobileLoginCount(const std::string& value)
{
    userMobileLoginCount_ = value;
    userMobileLoginCountIsSet_ = true;
}

bool StatisticUserDataItem::userMobileLoginCountIsSet() const
{
    return userMobileLoginCountIsSet_;
}

void StatisticUserDataItem::unsetuserMobileLoginCount()
{
    userMobileLoginCountIsSet_ = false;
}

std::string StatisticUserDataItem::getUserActivatedCount() const
{
    return userActivatedCount_;
}

void StatisticUserDataItem::setUserActivatedCount(const std::string& value)
{
    userActivatedCount_ = value;
    userActivatedCountIsSet_ = true;
}

bool StatisticUserDataItem::userActivatedCountIsSet() const
{
    return userActivatedCountIsSet_;
}

void StatisticUserDataItem::unsetuserActivatedCount()
{
    userActivatedCountIsSet_ = false;
}

std::string StatisticUserDataItem::getUserLoginDevicesName() const
{
    return userLoginDevicesName_;
}

void StatisticUserDataItem::setUserLoginDevicesName(const std::string& value)
{
    userLoginDevicesName_ = value;
    userLoginDevicesNameIsSet_ = true;
}

bool StatisticUserDataItem::userLoginDevicesNameIsSet() const
{
    return userLoginDevicesNameIsSet_;
}

void StatisticUserDataItem::unsetuserLoginDevicesName()
{
    userLoginDevicesNameIsSet_ = false;
}

std::string StatisticUserDataItem::getUserLoginDevicesCount() const
{
    return userLoginDevicesCount_;
}

void StatisticUserDataItem::setUserLoginDevicesCount(const std::string& value)
{
    userLoginDevicesCount_ = value;
    userLoginDevicesCountIsSet_ = true;
}

bool StatisticUserDataItem::userLoginDevicesCountIsSet() const
{
    return userLoginDevicesCountIsSet_;
}

void StatisticUserDataItem::unsetuserLoginDevicesCount()
{
    userLoginDevicesCountIsSet_ = false;
}

}
}
}
}
}


