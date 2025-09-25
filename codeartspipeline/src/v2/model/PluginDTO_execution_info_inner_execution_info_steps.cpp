

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO_execution_info_inner_execution_info_steps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO_execution_info_inner_execution_info_steps::PluginDTO_execution_info_inner_execution_info_steps()
{
    name_ = "";
    nameIsSet_ = false;
    task_ = "";
    taskIsSet_ = false;
    variablesIsSet_ = false;
}

PluginDTO_execution_info_inner_execution_info_steps::~PluginDTO_execution_info_inner_execution_info_steps() = default;

void PluginDTO_execution_info_inner_execution_info_steps::validate()
{
}

web::json::value PluginDTO_execution_info_inner_execution_info_steps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }

    return val;
}
bool PluginDTO_execution_info_inner_execution_info_steps::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    return ok;
}


std::string PluginDTO_execution_info_inner_execution_info_steps::getName() const
{
    return name_;
}

void PluginDTO_execution_info_inner_execution_info_steps::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginDTO_execution_info_inner_execution_info_steps::nameIsSet() const
{
    return nameIsSet_;
}

void PluginDTO_execution_info_inner_execution_info_steps::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginDTO_execution_info_inner_execution_info_steps::getTask() const
{
    return task_;
}

void PluginDTO_execution_info_inner_execution_info_steps::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool PluginDTO_execution_info_inner_execution_info_steps::taskIsSet() const
{
    return taskIsSet_;
}

void PluginDTO_execution_info_inner_execution_info_steps::unsettask()
{
    taskIsSet_ = false;
}

std::map<std::string, Object>& PluginDTO_execution_info_inner_execution_info_steps::getVariables()
{
    return variables_;
}

void PluginDTO_execution_info_inner_execution_info_steps::setVariables(const std::map<std::string, Object>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool PluginDTO_execution_info_inner_execution_info_steps::variablesIsSet() const
{
    return variablesIsSet_;
}

void PluginDTO_execution_info_inner_execution_info_steps::unsetvariables()
{
    variablesIsSet_ = false;
}

}
}
}
}
}


