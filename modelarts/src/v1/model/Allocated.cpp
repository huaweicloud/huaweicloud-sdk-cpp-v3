

#include "huaweicloud/modelarts/v1/model/Allocated.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Allocated::Allocated()
{
    valueIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    window_ = "";
    windowIsSet_ = false;
}

Allocated::~Allocated() = default;

void Allocated::validate()
{
}

web::json::value Allocated::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(windowIsSet_) {
        val[utility::conversions::to_string_t("window")] = ModelBase::toJson(window_);
    }

    return val;
}
bool Allocated::fromJson(const web::json::value& val)
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


Value Allocated::getValue() const
{
    return value_;
}

void Allocated::setValue(const Value& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Allocated::valueIsSet() const
{
    return valueIsSet_;
}

void Allocated::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Allocated::getTimestamp() const
{
    return timestamp_;
}

void Allocated::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool Allocated::timestampIsSet() const
{
    return timestampIsSet_;
}

void Allocated::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string Allocated::getWindow() const
{
    return window_;
}

void Allocated::setWindow(const std::string& value)
{
    window_ = value;
    windowIsSet_ = true;
}

bool Allocated::windowIsSet() const
{
    return windowIsSet_;
}

void Allocated::unsetwindow()
{
    windowIsSet_ = false;
}

}
}
}
}
}


