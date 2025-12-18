

#include "huaweicloud/meeting/v1/model/OpenNotifySetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenNotifySetting::OpenNotifySetting()
{
    enableCalendar_ = "";
    enableCalendarIsSet_ = false;
    enableSms_ = "";
    enableSmsIsSet_ = false;
    enableEmail_ = "";
    enableEmailIsSet_ = false;
}

OpenNotifySetting::~OpenNotifySetting() = default;

void OpenNotifySetting::validate()
{
}

web::json::value OpenNotifySetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableCalendarIsSet_) {
        val[utility::conversions::to_string_t("enableCalendar")] = ModelBase::toJson(enableCalendar_);
    }
    if(enableSmsIsSet_) {
        val[utility::conversions::to_string_t("enableSms")] = ModelBase::toJson(enableSms_);
    }
    if(enableEmailIsSet_) {
        val[utility::conversions::to_string_t("enableEmail")] = ModelBase::toJson(enableEmail_);
    }

    return val;
}
bool OpenNotifySetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enableCalendar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableCalendar"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCalendar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSms"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSms(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableEmail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableEmail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEmail(refVal);
        }
    }
    return ok;
}


std::string OpenNotifySetting::getEnableCalendar() const
{
    return enableCalendar_;
}

void OpenNotifySetting::setEnableCalendar(const std::string& value)
{
    enableCalendar_ = value;
    enableCalendarIsSet_ = true;
}

bool OpenNotifySetting::enableCalendarIsSet() const
{
    return enableCalendarIsSet_;
}

void OpenNotifySetting::unsetenableCalendar()
{
    enableCalendarIsSet_ = false;
}

std::string OpenNotifySetting::getEnableSms() const
{
    return enableSms_;
}

void OpenNotifySetting::setEnableSms(const std::string& value)
{
    enableSms_ = value;
    enableSmsIsSet_ = true;
}

bool OpenNotifySetting::enableSmsIsSet() const
{
    return enableSmsIsSet_;
}

void OpenNotifySetting::unsetenableSms()
{
    enableSmsIsSet_ = false;
}

std::string OpenNotifySetting::getEnableEmail() const
{
    return enableEmail_;
}

void OpenNotifySetting::setEnableEmail(const std::string& value)
{
    enableEmail_ = value;
    enableEmailIsSet_ = true;
}

bool OpenNotifySetting::enableEmailIsSet() const
{
    return enableEmailIsSet_;
}

void OpenNotifySetting::unsetenableEmail()
{
    enableEmailIsSet_ = false;
}

}
}
}
}
}


