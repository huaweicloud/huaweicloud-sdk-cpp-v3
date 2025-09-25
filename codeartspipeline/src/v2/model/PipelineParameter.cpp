

#include "huaweicloud/codeartspipeline/v2/model/PipelineParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineParameter::PipelineParameter()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PipelineParameter::~PipelineParameter() = default;

void PipelineParameter::validate()
{
}

web::json::value PipelineParameter::toJson() const
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
bool PipelineParameter::fromJson(const web::json::value& val)
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


std::string PipelineParameter::getName() const
{
    return name_;
}

void PipelineParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineParameter::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineParameter::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineParameter::getValue() const
{
    return value_;
}

void PipelineParameter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PipelineParameter::valueIsSet() const
{
    return valueIsSet_;
}

void PipelineParameter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


