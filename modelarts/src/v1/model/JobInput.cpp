

#include "huaweicloud/modelarts/v1/model/JobInput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobInput::JobInput()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dataIsSet_ = false;
    valueIsSet_ = false;
}

JobInput::~JobInput() = default;

void JobInput::validate()
{
}

web::json::value JobInput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool JobInput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::string JobInput::getName() const
{
    return name_;
}

void JobInput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobInput::nameIsSet() const
{
    return nameIsSet_;
}

void JobInput::unsetname()
{
    nameIsSet_ = false;
}

std::string JobInput::getType() const
{
    return type_;
}

void JobInput::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool JobInput::typeIsSet() const
{
    return typeIsSet_;
}

void JobInput::unsettype()
{
    typeIsSet_ = false;
}

Object JobInput::getData() const
{
    return data_;
}

void JobInput::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool JobInput::dataIsSet() const
{
    return dataIsSet_;
}

void JobInput::unsetdata()
{
    dataIsSet_ = false;
}

Object JobInput::getValue() const
{
    return value_;
}

void JobInput::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool JobInput::valueIsSet() const
{
    return valueIsSet_;
}

void JobInput::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


