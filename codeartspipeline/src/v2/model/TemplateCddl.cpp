

#include "huaweicloud/codeartspipeline/v2/model/TemplateCddl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




TemplateCddl::TemplateCddl()
{
    flowIsSet_ = false;
    statesIsSet_ = false;
    workflowIsSet_ = false;
}

TemplateCddl::~TemplateCddl() = default;

void TemplateCddl::validate()
{
}

web::json::value TemplateCddl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIsSet_) {
        val[utility::conversions::to_string_t("flow")] = ModelBase::toJson(flow_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(workflowIsSet_) {
        val[utility::conversions::to_string_t("workflow")] = ModelBase::toJson(workflow_);
    }

    return val;
}
bool TemplateCddl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, TemplateState> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow"));
        if(!fieldValue.is_null())
        {
            Workflow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflow(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::map<std::string, std::string>>& TemplateCddl::getFlow()
{
    return flow_;
}

void TemplateCddl::setFlow(const std::map<std::string, std::map<std::string, std::string>>& value)
{
    flow_ = value;
    flowIsSet_ = true;
}

bool TemplateCddl::flowIsSet() const
{
    return flowIsSet_;
}

void TemplateCddl::unsetflow()
{
    flowIsSet_ = false;
}

std::map<std::string, TemplateState>& TemplateCddl::getStates()
{
    return states_;
}

void TemplateCddl::setStates(const std::map<std::string, TemplateState>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool TemplateCddl::statesIsSet() const
{
    return statesIsSet_;
}

void TemplateCddl::unsetstates()
{
    statesIsSet_ = false;
}

Workflow TemplateCddl::getWorkflow() const
{
    return workflow_;
}

void TemplateCddl::setWorkflow(const Workflow& value)
{
    workflow_ = value;
    workflowIsSet_ = true;
}

bool TemplateCddl::workflowIsSet() const
{
    return workflowIsSet_;
}

void TemplateCddl::unsetworkflow()
{
    workflowIsSet_ = false;
}

}
}
}
}
}


