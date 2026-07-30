

#include "huaweicloud/modelarts/v1/model/CreateWorkflowSubscriptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowSubscriptionsRequest::CreateWorkflowSubscriptionsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateWorkflowSubscriptionsRequest::~CreateWorkflowSubscriptionsRequest() = default;

void CreateWorkflowSubscriptionsRequest::validate()
{
}

web::json::value CreateWorkflowSubscriptionsRequest::toJson() const
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
bool CreateWorkflowSubscriptionsRequest::fromJson(const web::json::value& val)
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
            Subscription refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowSubscriptionsRequest::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowSubscriptionsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowSubscriptionsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowSubscriptionsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

Subscription CreateWorkflowSubscriptionsRequest::getBody() const
{
    return body_;
}

void CreateWorkflowSubscriptionsRequest::setBody(const Subscription& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkflowSubscriptionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkflowSubscriptionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


