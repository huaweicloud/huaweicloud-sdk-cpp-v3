

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowSubscriptionRequest::UpdateWorkflowSubscriptionRequest()
{
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkflowSubscriptionRequest::~UpdateWorkflowSubscriptionRequest() = default;

void UpdateWorkflowSubscriptionRequest::validate()
{
}

web::json::value UpdateWorkflowSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWorkflowSubscriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
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


std::string UpdateWorkflowSubscriptionRequest::getSubscriptionId() const
{
    return subscriptionId_;
}

void UpdateWorkflowSubscriptionRequest::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool UpdateWorkflowSubscriptionRequest::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void UpdateWorkflowSubscriptionRequest::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string UpdateWorkflowSubscriptionRequest::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowSubscriptionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowSubscriptionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowSubscriptionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

Subscription UpdateWorkflowSubscriptionRequest::getBody() const
{
    return body_;
}

void UpdateWorkflowSubscriptionRequest::setBody(const Subscription& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkflowSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkflowSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


