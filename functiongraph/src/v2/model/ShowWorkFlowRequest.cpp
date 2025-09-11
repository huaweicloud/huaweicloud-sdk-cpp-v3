

#include "huaweicloud/functiongraph/v2/model/ShowWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkFlowRequest::ShowWorkFlowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

ShowWorkFlowRequest::~ShowWorkFlowRequest() = default;

void ShowWorkFlowRequest::validate()
{
}

web::json::value ShowWorkFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool ShowWorkFlowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkFlowRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkFlowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkFlowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkFlowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


