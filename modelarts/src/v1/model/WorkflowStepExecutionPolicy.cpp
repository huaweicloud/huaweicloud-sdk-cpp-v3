

#include "huaweicloud/modelarts/v1/model/WorkflowStepExecutionPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStepExecutionPolicy::WorkflowStepExecutionPolicy()
{
    executionPolicy_ = "";
    executionPolicyIsSet_ = false;
    useCache_ = false;
    useCacheIsSet_ = false;
}

WorkflowStepExecutionPolicy::~WorkflowStepExecutionPolicy() = default;

void WorkflowStepExecutionPolicy::validate()
{
}

web::json::value WorkflowStepExecutionPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionPolicyIsSet_) {
        val[utility::conversions::to_string_t("execution_policy")] = ModelBase::toJson(executionPolicy_);
    }
    if(useCacheIsSet_) {
        val[utility::conversions::to_string_t("use_cache")] = ModelBase::toJson(useCache_);
    }

    return val;
}
bool WorkflowStepExecutionPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_cache"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCache(refVal);
        }
    }
    return ok;
}


std::string WorkflowStepExecutionPolicy::getExecutionPolicy() const
{
    return executionPolicy_;
}

void WorkflowStepExecutionPolicy::setExecutionPolicy(const std::string& value)
{
    executionPolicy_ = value;
    executionPolicyIsSet_ = true;
}

bool WorkflowStepExecutionPolicy::executionPolicyIsSet() const
{
    return executionPolicyIsSet_;
}

void WorkflowStepExecutionPolicy::unsetexecutionPolicy()
{
    executionPolicyIsSet_ = false;
}

bool WorkflowStepExecutionPolicy::isUseCache() const
{
    return useCache_;
}

void WorkflowStepExecutionPolicy::setUseCache(bool value)
{
    useCache_ = value;
    useCacheIsSet_ = true;
}

bool WorkflowStepExecutionPolicy::useCacheIsSet() const
{
    return useCacheIsSet_;
}

void WorkflowStepExecutionPolicy::unsetuseCache()
{
    useCacheIsSet_ = false;
}

}
}
}
}
}


