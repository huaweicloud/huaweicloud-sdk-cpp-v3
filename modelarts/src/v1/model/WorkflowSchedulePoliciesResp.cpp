

#include "huaweicloud/modelarts/v1/model/WorkflowSchedulePoliciesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowSchedulePoliciesResp::WorkflowSchedulePoliciesResp()
{
    onFailure_ = "";
    onFailureIsSet_ = false;
    onRunning_ = "";
    onRunningIsSet_ = false;
}

WorkflowSchedulePoliciesResp::~WorkflowSchedulePoliciesResp() = default;

void WorkflowSchedulePoliciesResp::validate()
{
}

web::json::value WorkflowSchedulePoliciesResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onFailureIsSet_) {
        val[utility::conversions::to_string_t("on_failure")] = ModelBase::toJson(onFailure_);
    }
    if(onRunningIsSet_) {
        val[utility::conversions::to_string_t("on_running")] = ModelBase::toJson(onRunning_);
    }

    return val;
}
bool WorkflowSchedulePoliciesResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("on_failure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_failure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnFailure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("on_running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("on_running"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnRunning(refVal);
        }
    }
    return ok;
}


std::string WorkflowSchedulePoliciesResp::getOnFailure() const
{
    return onFailure_;
}

void WorkflowSchedulePoliciesResp::setOnFailure(const std::string& value)
{
    onFailure_ = value;
    onFailureIsSet_ = true;
}

bool WorkflowSchedulePoliciesResp::onFailureIsSet() const
{
    return onFailureIsSet_;
}

void WorkflowSchedulePoliciesResp::unsetonFailure()
{
    onFailureIsSet_ = false;
}

std::string WorkflowSchedulePoliciesResp::getOnRunning() const
{
    return onRunning_;
}

void WorkflowSchedulePoliciesResp::setOnRunning(const std::string& value)
{
    onRunning_ = value;
    onRunningIsSet_ = true;
}

bool WorkflowSchedulePoliciesResp::onRunningIsSet() const
{
    return onRunningIsSet_;
}

void WorkflowSchedulePoliciesResp::unsetonRunning()
{
    onRunningIsSet_ = false;
}

}
}
}
}
}


