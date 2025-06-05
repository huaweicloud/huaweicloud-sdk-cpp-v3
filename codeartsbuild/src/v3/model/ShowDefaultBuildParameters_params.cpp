

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParameters_params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultBuildParameters_params::ShowDefaultBuildParameters_params()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ShowDefaultBuildParameters_params::~ShowDefaultBuildParameters_params() = default;

void ShowDefaultBuildParameters_params::validate()
{
}

web::json::value ShowDefaultBuildParameters_params::toJson() const
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
bool ShowDefaultBuildParameters_params::fromJson(const web::json::value& val)
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


std::string ShowDefaultBuildParameters_params::getName() const
{
    return name_;
}

void ShowDefaultBuildParameters_params::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowDefaultBuildParameters_params::nameIsSet() const
{
    return nameIsSet_;
}

void ShowDefaultBuildParameters_params::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowDefaultBuildParameters_params::getValue() const
{
    return value_;
}

void ShowDefaultBuildParameters_params::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ShowDefaultBuildParameters_params::valueIsSet() const
{
    return valueIsSet_;
}

void ShowDefaultBuildParameters_params::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


