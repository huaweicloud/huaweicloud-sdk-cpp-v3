

#include "huaweicloud/modelarts/v1/model/ShowWorkflowSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowSubscriptionRequest::ShowWorkflowSubscriptionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
}

ShowWorkflowSubscriptionRequest::~ShowWorkflowSubscriptionRequest() = default;

void ShowWorkflowSubscriptionRequest::validate()
{
}

web::json::value ShowWorkflowSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }

    return val;
}
bool ShowWorkflowSubscriptionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkflowSubscriptionRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowSubscriptionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowSubscriptionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowSubscriptionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowSubscriptionRequest::getSubscriptionId() const
{
    return subscriptionId_;
}

void ShowWorkflowSubscriptionRequest::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool ShowWorkflowSubscriptionRequest::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void ShowWorkflowSubscriptionRequest::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

}
}
}
}
}


