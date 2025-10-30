

#include "huaweicloud/lts/v2/model/CustomTimeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CustomTimeInfo::CustomTimeInfo()
{
    enable_ = false;
    enableIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    timeFormat_ = "";
    timeFormatIsSet_ = false;
}

CustomTimeInfo::~CustomTimeInfo() = default;

void CustomTimeInfo::validate()
{
}

web::json::value CustomTimeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(timeFormatIsSet_) {
        val[utility::conversions::to_string_t("time_format")] = ModelBase::toJson(timeFormat_);
    }

    return val;
}
bool CustomTimeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeFormat(refVal);
        }
    }
    return ok;
}


bool CustomTimeInfo::isEnable() const
{
    return enable_;
}

void CustomTimeInfo::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CustomTimeInfo::enableIsSet() const
{
    return enableIsSet_;
}

void CustomTimeInfo::unsetenable()
{
    enableIsSet_ = false;
}

std::string CustomTimeInfo::getKey() const
{
    return key_;
}

void CustomTimeInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomTimeInfo::keyIsSet() const
{
    return keyIsSet_;
}

void CustomTimeInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::string CustomTimeInfo::getValue() const
{
    return value_;
}

void CustomTimeInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomTimeInfo::valueIsSet() const
{
    return valueIsSet_;
}

void CustomTimeInfo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string CustomTimeInfo::getTimeFormat() const
{
    return timeFormat_;
}

void CustomTimeInfo::setTimeFormat(const std::string& value)
{
    timeFormat_ = value;
    timeFormatIsSet_ = true;
}

bool CustomTimeInfo::timeFormatIsSet() const
{
    return timeFormatIsSet_;
}

void CustomTimeInfo::unsettimeFormat()
{
    timeFormatIsSet_ = false;
}

}
}
}
}
}


