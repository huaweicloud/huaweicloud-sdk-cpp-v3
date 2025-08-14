

#include "huaweicloud/iotda/v5/model/ActionDeviceAlarm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ActionDeviceAlarm::ActionDeviceAlarm()
{
    name_ = "";
    nameIsSet_ = false;
    alarmStatus_ = "";
    alarmStatusIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    dimension_ = "";
    dimensionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ActionDeviceAlarm::~ActionDeviceAlarm() = default;

void ActionDeviceAlarm::validate()
{
}

web::json::value ActionDeviceAlarm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(alarmStatusIsSet_) {
        val[utility::conversions::to_string_t("alarm_status")] = ModelBase::toJson(alarmStatus_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(dimensionIsSet_) {
        val[utility::conversions::to_string_t("dimension")] = ModelBase::toJson(dimension_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ActionDeviceAlarm::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alarm_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dimension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dimension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDimension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ActionDeviceAlarm::getName() const
{
    return name_;
}

void ActionDeviceAlarm::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ActionDeviceAlarm::nameIsSet() const
{
    return nameIsSet_;
}

void ActionDeviceAlarm::unsetname()
{
    nameIsSet_ = false;
}

std::string ActionDeviceAlarm::getAlarmStatus() const
{
    return alarmStatus_;
}

void ActionDeviceAlarm::setAlarmStatus(const std::string& value)
{
    alarmStatus_ = value;
    alarmStatusIsSet_ = true;
}

bool ActionDeviceAlarm::alarmStatusIsSet() const
{
    return alarmStatusIsSet_;
}

void ActionDeviceAlarm::unsetalarmStatus()
{
    alarmStatusIsSet_ = false;
}

std::string ActionDeviceAlarm::getSeverity() const
{
    return severity_;
}

void ActionDeviceAlarm::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ActionDeviceAlarm::severityIsSet() const
{
    return severityIsSet_;
}

void ActionDeviceAlarm::unsetseverity()
{
    severityIsSet_ = false;
}

std::string ActionDeviceAlarm::getDimension() const
{
    return dimension_;
}

void ActionDeviceAlarm::setDimension(const std::string& value)
{
    dimension_ = value;
    dimensionIsSet_ = true;
}

bool ActionDeviceAlarm::dimensionIsSet() const
{
    return dimensionIsSet_;
}

void ActionDeviceAlarm::unsetdimension()
{
    dimensionIsSet_ = false;
}

std::string ActionDeviceAlarm::getDescription() const
{
    return description_;
}

void ActionDeviceAlarm::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ActionDeviceAlarm::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ActionDeviceAlarm::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


