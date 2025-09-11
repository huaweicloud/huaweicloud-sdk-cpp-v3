

#include "huaweicloud/functiongraph/v2/model/WorkflowDeleteBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




WorkflowDeleteBody::WorkflowDeleteBody()
{
    workflowUrnsIsSet_ = false;
}

WorkflowDeleteBody::~WorkflowDeleteBody() = default;

void WorkflowDeleteBody::validate()
{
}

web::json::value WorkflowDeleteBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowUrnsIsSet_) {
        val[utility::conversions::to_string_t("workflow_urns")] = ModelBase::toJson(workflowUrns_);
    }

    return val;
}
bool WorkflowDeleteBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrns(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& WorkflowDeleteBody::getWorkflowUrns()
{
    return workflowUrns_;
}

void WorkflowDeleteBody::setWorkflowUrns(const std::vector<std::string>& value)
{
    workflowUrns_ = value;
    workflowUrnsIsSet_ = true;
}

bool WorkflowDeleteBody::workflowUrnsIsSet() const
{
    return workflowUrnsIsSet_;
}

void WorkflowDeleteBody::unsetworkflowUrns()
{
    workflowUrnsIsSet_ = false;
}

}
}
}
}
}


