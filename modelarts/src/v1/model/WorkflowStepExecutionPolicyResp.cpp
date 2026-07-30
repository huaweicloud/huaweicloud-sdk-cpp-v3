

#include "huaweicloud/modelarts/v1/model/WorkflowStepExecutionPolicyResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStepExecutionPolicyResp::WorkflowStepExecutionPolicyResp()
{
    executionPolicy_ = "";
    executionPolicyIsSet_ = false;
    useCache_ = false;
    useCacheIsSet_ = false;
}

WorkflowStepExecutionPolicyResp::~WorkflowStepExecutionPolicyResp() = default;

void WorkflowStepExecutionPolicyResp::validate()
{
}

web::json::value WorkflowStepExecutionPolicyResp::toJson() const
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
bool WorkflowStepExecutionPolicyResp::fromJson(const web::json::value& val)
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


std::string WorkflowStepExecutionPolicyResp::getExecutionPolicy() const
{
    return executionPolicy_;
}

void WorkflowStepExecutionPolicyResp::setExecutionPolicy(const std::string& value)
{
    executionPolicy_ = value;
    executionPolicyIsSet_ = true;
}

bool WorkflowStepExecutionPolicyResp::executionPolicyIsSet() const
{
    return executionPolicyIsSet_;
}

void WorkflowStepExecutionPolicyResp::unsetexecutionPolicy()
{
    executionPolicyIsSet_ = false;
}

bool WorkflowStepExecutionPolicyResp::isUseCache() const
{
    return useCache_;
}

void WorkflowStepExecutionPolicyResp::setUseCache(bool value)
{
    useCache_ = value;
    useCacheIsSet_ = true;
}

bool WorkflowStepExecutionPolicyResp::useCacheIsSet() const
{
    return useCacheIsSet_;
}

void WorkflowStepExecutionPolicyResp::unsetuseCache()
{
    useCacheIsSet_ = false;
}

}
}
}
}
}


