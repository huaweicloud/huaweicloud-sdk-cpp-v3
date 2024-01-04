

#include "huaweicloud/smn/v2/model/MessageAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




MessageAttribute::MessageAttribute()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    valueIsSet_ = false;
}

MessageAttribute::~MessageAttribute() = default;

void MessageAttribute::validate()
{
}

web::json::value MessageAttribute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool MessageAttribute::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string MessageAttribute::getName() const
{
    return name_;
}

void MessageAttribute::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MessageAttribute::nameIsSet() const
{
    return nameIsSet_;
}

void MessageAttribute::unsetname()
{
    nameIsSet_ = false;
}

std::string MessageAttribute::getType() const
{
    return type_;
}

void MessageAttribute::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MessageAttribute::typeIsSet() const
{
    return typeIsSet_;
}

void MessageAttribute::unsettype()
{
    typeIsSet_ = false;
}

Object MessageAttribute::getValue() const
{
    return value_;
}

void MessageAttribute::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MessageAttribute::valueIsSet() const
{
    return valueIsSet_;
}

void MessageAttribute::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


