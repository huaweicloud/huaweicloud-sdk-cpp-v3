

#include "huaweicloud/modelarts/v1/model/Capacity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Capacity::Capacity()
{
    valueIsSet_ = false;
    maxValueIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    window_ = "";
    windowIsSet_ = false;
}

Capacity::~Capacity() = default;

void Capacity::validate()
{
}

web::json::value Capacity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(maxValueIsSet_) {
        val[utility::conversions::to_string_t("maxValue")] = ModelBase::toJson(maxValue_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(windowIsSet_) {
        val[utility::conversions::to_string_t("window")] = ModelBase::toJson(window_);
    }

    return val;
}
bool Capacity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Value refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxValue"));
        if(!fieldValue.is_null())
        {
            Value refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindow(refVal);
        }
    }
    return ok;
}


Value Capacity::getValue() const
{
    return value_;
}

void Capacity::setValue(const Value& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Capacity::valueIsSet() const
{
    return valueIsSet_;
}

void Capacity::unsetvalue()
{
    valueIsSet_ = false;
}

Value Capacity::getMaxValue() const
{
    return maxValue_;
}

void Capacity::setMaxValue(const Value& value)
{
    maxValue_ = value;
    maxValueIsSet_ = true;
}

bool Capacity::maxValueIsSet() const
{
    return maxValueIsSet_;
}

void Capacity::unsetmaxValue()
{
    maxValueIsSet_ = false;
}

std::string Capacity::getTimestamp() const
{
    return timestamp_;
}

void Capacity::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool Capacity::timestampIsSet() const
{
    return timestampIsSet_;
}

void Capacity::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string Capacity::getWindow() const
{
    return window_;
}

void Capacity::setWindow(const std::string& value)
{
    window_ = value;
    windowIsSet_ = true;
}

bool Capacity::windowIsSet() const
{
    return windowIsSet_;
}

void Capacity::unsetwindow()
{
    windowIsSet_ = false;
}

}
}
}
}
}


