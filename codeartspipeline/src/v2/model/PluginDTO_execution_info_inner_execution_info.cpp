

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO_execution_info_inner_execution_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO_execution_info_inner_execution_info::PluginDTO_execution_info_inner_execution_info()
{
    executionType_ = "";
    executionTypeIsSet_ = false;
    stepsIsSet_ = false;
}

PluginDTO_execution_info_inner_execution_info::~PluginDTO_execution_info_inner_execution_info() = default;

void PluginDTO_execution_info_inner_execution_info::validate()
{
}

web::json::value PluginDTO_execution_info_inner_execution_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionTypeIsSet_) {
        val[utility::conversions::to_string_t("execution_type")] = ModelBase::toJson(executionType_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool PluginDTO_execution_info_inner_execution_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginDTO_execution_info_inner_execution_info_steps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::string PluginDTO_execution_info_inner_execution_info::getExecutionType() const
{
    return executionType_;
}

void PluginDTO_execution_info_inner_execution_info::setExecutionType(const std::string& value)
{
    executionType_ = value;
    executionTypeIsSet_ = true;
}

bool PluginDTO_execution_info_inner_execution_info::executionTypeIsSet() const
{
    return executionTypeIsSet_;
}

void PluginDTO_execution_info_inner_execution_info::unsetexecutionType()
{
    executionTypeIsSet_ = false;
}

std::vector<PluginDTO_execution_info_inner_execution_info_steps>& PluginDTO_execution_info_inner_execution_info::getSteps()
{
    return steps_;
}

void PluginDTO_execution_info_inner_execution_info::setSteps(const std::vector<PluginDTO_execution_info_inner_execution_info_steps>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool PluginDTO_execution_info_inner_execution_info::stepsIsSet() const
{
    return stepsIsSet_;
}

void PluginDTO_execution_info_inner_execution_info::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


