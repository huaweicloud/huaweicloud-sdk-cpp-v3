

#include "huaweicloud/iotda/v5/model/TimestampResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TimestampResource::TimestampResource()
{
    type_ = "";
    typeIsSet_ = false;
    pattern_ = "";
    patternIsSet_ = false;
    valueIsSet_ = false;
}

TimestampResource::~TimestampResource() = default;

void TimestampResource::validate()
{
}

web::json::value TimestampResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool TimestampResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TimestampResource::getType() const
{
    return type_;
}

void TimestampResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TimestampResource::typeIsSet() const
{
    return typeIsSet_;
}

void TimestampResource::unsettype()
{
    typeIsSet_ = false;
}

std::string TimestampResource::getPattern() const
{
    return pattern_;
}

void TimestampResource::setPattern(const std::string& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool TimestampResource::patternIsSet() const
{
    return patternIsSet_;
}

void TimestampResource::unsetpattern()
{
    patternIsSet_ = false;
}

Object TimestampResource::getValue() const
{
    return value_;
}

void TimestampResource::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TimestampResource::valueIsSet() const
{
    return valueIsSet_;
}

void TimestampResource::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


