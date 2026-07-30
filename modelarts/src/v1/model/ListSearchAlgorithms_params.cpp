

#include "huaweicloud/modelarts/v1/model/ListSearchAlgorithms_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListSearchAlgorithms_params::ListSearchAlgorithms_params()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListSearchAlgorithms_params::~ListSearchAlgorithms_params() = default;

void ListSearchAlgorithms_params::validate()
{
}

web::json::value ListSearchAlgorithms_params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListSearchAlgorithms_params::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListSearchAlgorithms_params::getKey() const
{
    return key_;
}

void ListSearchAlgorithms_params::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListSearchAlgorithms_params::keyIsSet() const
{
    return keyIsSet_;
}

void ListSearchAlgorithms_params::unsetkey()
{
    keyIsSet_ = false;
}

std::string ListSearchAlgorithms_params::getValue() const
{
    return value_;
}

void ListSearchAlgorithms_params::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListSearchAlgorithms_params::valueIsSet() const
{
    return valueIsSet_;
}

void ListSearchAlgorithms_params::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ListSearchAlgorithms_params::getType() const
{
    return type_;
}

void ListSearchAlgorithms_params::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSearchAlgorithms_params::typeIsSet() const
{
    return typeIsSet_;
}

void ListSearchAlgorithms_params::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


