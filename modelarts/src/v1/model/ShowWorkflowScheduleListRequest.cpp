

#include "huaweicloud/modelarts/v1/model/ShowWorkflowScheduleListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowScheduleListRequest::ShowWorkflowScheduleListRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

ShowWorkflowScheduleListRequest::~ShowWorkflowScheduleListRequest() = default;

void ShowWorkflowScheduleListRequest::validate()
{
}

web::json::value ShowWorkflowScheduleListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool ShowWorkflowScheduleListRequest::fromJson(const web::json::value& val)
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


std::string ShowWorkflowScheduleListRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowScheduleListRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowScheduleListRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowScheduleListRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


