

#include "huaweicloud/modelarts/v1/model/WorkflowConditionExecutionResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowConditionExecutionResp::WorkflowConditionExecutionResp()
{
    result_ = "";
    resultIsSet_ = false;
    metricListIsSet_ = false;
}

WorkflowConditionExecutionResp::~WorkflowConditionExecutionResp() = default;

void WorkflowConditionExecutionResp::validate()
{
}

web::json::value WorkflowConditionExecutionResp::toJson() const
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
bool WorkflowConditionExecutionResp::fromJson(const web::json::value& val)
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
            std::vector<WorkflowMetricPairResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricList(refVal);
        }
    }
    return ok;
}


std::string WorkflowConditionExecutionResp::getResult() const
{
    return result_;
}

void WorkflowConditionExecutionResp::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool WorkflowConditionExecutionResp::resultIsSet() const
{
    return resultIsSet_;
}

void WorkflowConditionExecutionResp::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<WorkflowMetricPairResp>& WorkflowConditionExecutionResp::getMetricList()
{
    return metricList_;
}

void WorkflowConditionExecutionResp::setMetricList(const std::vector<WorkflowMetricPairResp>& value)
{
    metricList_ = value;
    metricListIsSet_ = true;
}

bool WorkflowConditionExecutionResp::metricListIsSet() const
{
    return metricListIsSet_;
}

void WorkflowConditionExecutionResp::unsetmetricList()
{
    metricListIsSet_ = false;
}

}
}
}
}
}


