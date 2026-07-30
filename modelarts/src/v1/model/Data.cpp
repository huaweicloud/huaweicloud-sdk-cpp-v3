

#include "huaweicloud/modelarts/v1/model/Data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Data::Data()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    valueIsSet_ = false;
    usedStepsIsSet_ = false;
}

Data::~Data() = default;

void Data::validate()
{
}

web::json::value Data::toJson() const
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
    if(usedStepsIsSet_) {
        val[utility::conversions::to_string_t("used_steps")] = ModelBase::toJson(usedSteps_);
    }

    return val;
}
bool Data::fromJson(const web::json::value& val)
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
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSteps(refVal);
        }
    }
    return ok;
}


std::string Data::getName() const
{
    return name_;
}

void Data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Data::nameIsSet() const
{
    return nameIsSet_;
}

void Data::unsetname()
{
    nameIsSet_ = false;
}

std::string Data::getType() const
{
    return type_;
}

void Data::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Data::typeIsSet() const
{
    return typeIsSet_;
}

void Data::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& Data::getValue()
{
    return value_;
}

void Data::setValue(const std::map<std::string, Object>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Data::valueIsSet() const
{
    return valueIsSet_;
}

void Data::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& Data::getUsedSteps()
{
    return usedSteps_;
}

void Data::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool Data::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void Data::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

}
}
}
}
}


