

#include "huaweicloud/modelarts/v1/model/WorkflowConditionExecution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowConditionExecution::WorkflowConditionExecution()
{
    result_ = "";
    resultIsSet_ = false;
    metricListIsSet_ = false;
}

WorkflowConditionExecution::~WorkflowConditionExecution() = default;

void WorkflowConditionExecution::validate()
{
}

web::json::value WorkflowConditionExecution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(metricListIsSet_) {
        val[utility::conversions::to_string_t("metric_list")] = ModelBase::toJson(metricList_);
    }

    return val;
}
bool WorkflowConditionExecution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowMetricPair> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricList(refVal);
        }
    }
    return ok;
}


std::string WorkflowConditionExecution::getResult() const
{
    return result_;
}

void WorkflowConditionExecution::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool WorkflowConditionExecution::resultIsSet() const
{
    return resultIsSet_;
}

void WorkflowConditionExecution::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<WorkflowMetricPair>& WorkflowConditionExecution::getMetricList()
{
    return metricList_;
}

void WorkflowConditionExecution::setMetricList(const std::vector<WorkflowMetricPair>& value)
{
    metricList_ = value;
    metricListIsSet_ = true;
}

bool WorkflowConditionExecution::metricListIsSet() const
{
    return metricListIsSet_;
}

void WorkflowConditionExecution::unsetmetricList()
{
    metricListIsSet_ = false;
}

}
}
}
}
}


