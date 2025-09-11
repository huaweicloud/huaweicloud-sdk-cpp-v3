

#include "huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionForPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkflowExecutionForPageResponse::ShowWorkflowExecutionForPageResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    executionsIsSet_ = false;
}

ShowWorkflowExecutionForPageResponse::~ShowWorkflowExecutionForPageResponse() = default;

void ShowWorkflowExecutionForPageResponse::validate()
{
}

web::json::value ShowWorkflowExecutionForPageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(executionsIsSet_) {
        val[utility::conversions::to_string_t("executions")] = ModelBase::toJson(executions_);
    }

    return val;
}
bool ShowWorkflowExecutionForPageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executions"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowExecutionBriefV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutions(refVal);
        }
    }
    return ok;
}


int64_t ShowWorkflowExecutionForPageResponse::getTotal() const
{
    return total_;
}

void ShowWorkflowExecutionForPageResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowWorkflowExecutionForPageResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowWorkflowExecutionForPageResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ShowWorkflowExecutionForPageResponse::getSize() const
{
    return size_;
}

void ShowWorkflowExecutionForPageResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowWorkflowExecutionForPageResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowWorkflowExecutionForPageResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<FlowExecutionBriefV2>& ShowWorkflowExecutionForPageResponse::getExecutions()
{
    return executions_;
}

void ShowWorkflowExecutionForPageResponse::setExecutions(const std::vector<FlowExecutionBriefV2>& value)
{
    executions_ = value;
    executionsIsSet_ = true;
}

bool ShowWorkflowExecutionForPageResponse::executionsIsSet() const
{
    return executionsIsSet_;
}

void ShowWorkflowExecutionForPageResponse::unsetexecutions()
{
    executionsIsSet_ = false;
}

}
}
}
}
}


