

#include "huaweicloud/projectman/v4/model/ShowWorkItemWrokflowConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowWorkItemWrokflowConfigResponse::ShowWorkItemWrokflowConfigResponse()
{
    workflowsIsSet_ = false;
}

ShowWorkItemWrokflowConfigResponse::~ShowWorkItemWrokflowConfigResponse() = default;

void ShowWorkItemWrokflowConfigResponse::validate()
{
}

web::json::value ShowWorkItemWrokflowConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowsIsSet_) {
        val[utility::conversions::to_string_t("workflows")] = ModelBase::toJson(workflows_);
    }

    return val;
}
bool ShowWorkItemWrokflowConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflows"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemStatusFlowVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflows(refVal);
        }
    }
    return ok;
}


std::vector<WorkItemStatusFlowVo>& ShowWorkItemWrokflowConfigResponse::getWorkflows()
{
    return workflows_;
}

void ShowWorkItemWrokflowConfigResponse::setWorkflows(const std::vector<WorkItemStatusFlowVo>& value)
{
    workflows_ = value;
    workflowsIsSet_ = true;
}

bool ShowWorkItemWrokflowConfigResponse::workflowsIsSet() const
{
    return workflowsIsSet_;
}

void ShowWorkItemWrokflowConfigResponse::unsetworkflows()
{
    workflowsIsSet_ = false;
}

}
}
}
}
}


