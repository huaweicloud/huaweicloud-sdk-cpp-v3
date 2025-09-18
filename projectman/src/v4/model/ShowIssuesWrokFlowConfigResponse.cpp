

#include "huaweicloud/projectman/v4/model/ShowIssuesWrokFlowConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssuesWrokFlowConfigResponse::ShowIssuesWrokFlowConfigResponse()
{
    workflowsIsSet_ = false;
}

ShowIssuesWrokFlowConfigResponse::~ShowIssuesWrokFlowConfigResponse() = default;

void ShowIssuesWrokFlowConfigResponse::validate()
{
}

web::json::value ShowIssuesWrokFlowConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowsIsSet_) {
        val[utility::conversions::to_string_t("workflows")] = ModelBase::toJson(workflows_);
    }

    return val;
}
bool ShowIssuesWrokFlowConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflows"));
        if(!fieldValue.is_null())
        {
            std::vector<ScrumStatusFlowVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflows(refVal);
        }
    }
    return ok;
}


std::vector<ScrumStatusFlowVo>& ShowIssuesWrokFlowConfigResponse::getWorkflows()
{
    return workflows_;
}

void ShowIssuesWrokFlowConfigResponse::setWorkflows(const std::vector<ScrumStatusFlowVo>& value)
{
    workflows_ = value;
    workflowsIsSet_ = true;
}

bool ShowIssuesWrokFlowConfigResponse::workflowsIsSet() const
{
    return workflowsIsSet_;
}

void ShowIssuesWrokFlowConfigResponse::unsetworkflows()
{
    workflowsIsSet_ = false;
}

}
}
}
}
}


