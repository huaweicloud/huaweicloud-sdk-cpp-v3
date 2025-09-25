

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_variables.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineDTO_variables::RunPipelineDTO_variables()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

RunPipelineDTO_variables::~RunPipelineDTO_variables() = default;

void RunPipelineDTO_variables::validate()
{
}

web::json::value RunPipelineDTO_variables::toJson() const
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
bool RunPipelineDTO_variables::fromJson(const web::json::value& val)
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


std::string RunPipelineDTO_variables::getName() const
{
    return name_;
}

void RunPipelineDTO_variables::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RunPipelineDTO_variables::nameIsSet() const
{
    return nameIsSet_;
}

void RunPipelineDTO_variables::unsetname()
{
    nameIsSet_ = false;
}

std::string RunPipelineDTO_variables::getValue() const
{
    return value_;
}

void RunPipelineDTO_variables::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool RunPipelineDTO_variables::valueIsSet() const
{
    return valueIsSet_;
}

void RunPipelineDTO_variables::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


