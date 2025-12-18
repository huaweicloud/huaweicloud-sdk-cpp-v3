

#include "huaweicloud/meeting/v1/model/QosDataNoThrElement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosDataNoThrElement::QosDataNoThrElement()
{
    time_ = "";
    timeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

QosDataNoThrElement::~QosDataNoThrElement() = default;

void QosDataNoThrElement::validate()
{
}

web::json::value QosDataNoThrElement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool QosDataNoThrElement::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string QosDataNoThrElement::getTime() const
{
    return time_;
}

void QosDataNoThrElement::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool QosDataNoThrElement::timeIsSet() const
{
    return timeIsSet_;
}

void QosDataNoThrElement::unsettime()
{
    timeIsSet_ = false;
}

std::string QosDataNoThrElement::getValue() const
{
    return value_;
}

void QosDataNoThrElement::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QosDataNoThrElement::valueIsSet() const
{
    return valueIsSet_;
}

void QosDataNoThrElement::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


