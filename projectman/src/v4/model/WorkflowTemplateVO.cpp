

#include "huaweicloud/projectman/v4/model/WorkflowTemplateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkflowTemplateVO::WorkflowTemplateVO()
{
    processNodesIsSet_ = false;
    processFlowsIsSet_ = false;
}

WorkflowTemplateVO::~WorkflowTemplateVO() = default;

void WorkflowTemplateVO::validate()
{
}

web::json::value WorkflowTemplateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processNodesIsSet_) {
        val[utility::conversions::to_string_t("processNodes")] = ModelBase::toJson(processNodes_);
    }
    if(processFlowsIsSet_) {
        val[utility::conversions::to_string_t("processFlows")] = ModelBase::toJson(processFlows_);
    }

    return val;
}
bool WorkflowTemplateVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processNodes"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowTemplateNodesVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processFlows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processFlows"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowTemplateFlowsVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessFlows(refVal);
        }
    }
    return ok;
}


std::vector<WorkflowTemplateNodesVO>& WorkflowTemplateVO::getProcessNodes()
{
    return processNodes_;
}

void WorkflowTemplateVO::setProcessNodes(const std::vector<WorkflowTemplateNodesVO>& value)
{
    processNodes_ = value;
    processNodesIsSet_ = true;
}

bool WorkflowTemplateVO::processNodesIsSet() const
{
    return processNodesIsSet_;
}

void WorkflowTemplateVO::unsetprocessNodes()
{
    processNodesIsSet_ = false;
}

std::vector<WorkflowTemplateFlowsVO>& WorkflowTemplateVO::getProcessFlows()
{
    return processFlows_;
}

void WorkflowTemplateVO::setProcessFlows(const std::vector<WorkflowTemplateFlowsVO>& value)
{
    processFlows_ = value;
    processFlowsIsSet_ = true;
}

bool WorkflowTemplateVO::processFlowsIsSet() const
{
    return processFlowsIsSet_;
}

void WorkflowTemplateVO::unsetprocessFlows()
{
    processFlowsIsSet_ = false;
}

}
}
}
}
}


