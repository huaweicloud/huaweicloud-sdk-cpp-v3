

#include "huaweicloud/modelarts/v1/model/CreateWorkflowPurchasePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowPurchasePoolRequest::CreateWorkflowPurchasePoolRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowPurchasePoolRequest::~CreateWorkflowPurchasePoolRequest() = default;

void CreateWorkflowPurchasePoolRequest::validate()
{
}

web::json::value CreateWorkflowPurchasePoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkflowPurchasePoolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkflowServicePackage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowPurchasePoolRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowPurchasePoolRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowPurchasePoolRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowPurchasePoolRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

WorkflowServicePackage CreateWorkflowPurchasePoolRequest::getBody() const
{
    return body_;
}

void CreateWorkflowPurchasePoolRequest::setBody(const WorkflowServicePackage& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowPurchasePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowPurchasePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


