

#include "huaweicloud/meeting/v1/model/QosDataElement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosDataElement::QosDataElement()
{
    time_ = "";
    timeIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
    alarm_ = false;
    alarmIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
}

QosDataElement::~QosDataElement() = default;

void QosDataElement::validate()
{
}

web::json::value QosDataElement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(alarmIsSet_) {
        val[utility::conversions::to_string_t("alarm")] = ModelBase::toJson(alarm_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }

    return val;
}
bool QosDataElement::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    return ok;
}


std::string QosDataElement::getTime() const
{
    return time_;
}

void QosDataElement::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool QosDataElement::timeIsSet() const
{
    return timeIsSet_;
}

void QosDataElement::unsettime()
{
    timeIsSet_ = false;
}

int32_t QosDataElement::getValue() const
{
    return value_;
}

void QosDataElement::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QosDataElement::valueIsSet() const
{
    return valueIsSet_;
}

void QosDataElement::unsetvalue()
{
    valueIsSet_ = false;
}

bool QosDataElement::isAlarm() const
{
    return alarm_;
}

void QosDataElement::setAlarm(bool value)
{
    alarm_ = value;
    alarmIsSet_ = true;
}

bool QosDataElement::alarmIsSet() const
{
    return alarmIsSet_;
}

void QosDataElement::unsetalarm()
{
    alarmIsSet_ = false;
}

int32_t QosDataElement::getThreshold() const
{
    return threshold_;
}

void QosDataElement::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool QosDataElement::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void QosDataElement::unsetthreshold()
{
    thresholdIsSet_ = false;
}

}
}
}
}
}


