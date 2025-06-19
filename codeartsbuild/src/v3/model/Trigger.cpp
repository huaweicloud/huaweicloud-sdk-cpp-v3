

#include "huaweicloud/codeartsbuild/v3/model/Trigger.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Trigger::Trigger()
{
    parametersIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

Trigger::~Trigger() = default;

void Trigger::validate()
{
}

web::json::value Trigger::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool Trigger::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::vector<ParameterItem>& Trigger::getParameters()
{
    return parameters_;
}

void Trigger::setParameters(const std::vector<ParameterItem>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool Trigger::parametersIsSet() const
{
    return parametersIsSet_;
}

void Trigger::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string Trigger::getName() const
{
    return name_;
}

void Trigger::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Trigger::nameIsSet() const
{
    return nameIsSet_;
}

void Trigger::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


