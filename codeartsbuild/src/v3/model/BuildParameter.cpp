

#include "huaweicloud/codeartsbuild/v3/model/BuildParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BuildParameter::BuildParameter()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BuildParameter::~BuildParameter() = default;

void BuildParameter::validate()
{
}

web::json::value BuildParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool BuildParameter::fromJson(const web::json::value& val)
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


std::string BuildParameter::getName() const
{
    return name_;
}

void BuildParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BuildParameter::nameIsSet() const
{
    return nameIsSet_;
}

void BuildParameter::unsetname()
{
    nameIsSet_ = false;
}

std::string BuildParameter::getValue() const
{
    return value_;
}

void BuildParameter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BuildParameter::valueIsSet() const
{
    return valueIsSet_;
}

void BuildParameter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


