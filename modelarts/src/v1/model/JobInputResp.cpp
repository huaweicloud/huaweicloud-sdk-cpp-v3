

#include "huaweicloud/modelarts/v1/model/JobInputResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobInputResp::JobInputResp()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dataIsSet_ = false;
    valueIsSet_ = false;
}

JobInputResp::~JobInputResp() = default;

void JobInputResp::validate()
{
}

web::json::value JobInputResp::toJson() const
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
bool JobInputResp::fromJson(const web::json::value& val)
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


std::string JobInputResp::getName() const
{
    return name_;
}

void JobInputResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobInputResp::nameIsSet() const
{
    return nameIsSet_;
}

void JobInputResp::unsetname()
{
    nameIsSet_ = false;
}

std::string JobInputResp::getType() const
{
    return type_;
}

void JobInputResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool JobInputResp::typeIsSet() const
{
    return typeIsSet_;
}

void JobInputResp::unsettype()
{
    typeIsSet_ = false;
}

Object JobInputResp::getData() const
{
    return data_;
}

void JobInputResp::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool JobInputResp::dataIsSet() const
{
    return dataIsSet_;
}

void JobInputResp::unsetdata()
{
    dataIsSet_ = false;
}

Object JobInputResp::getValue() const
{
    return value_;
}

void JobInputResp::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool JobInputResp::valueIsSet() const
{
    return valueIsSet_;
}

void JobInputResp::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


