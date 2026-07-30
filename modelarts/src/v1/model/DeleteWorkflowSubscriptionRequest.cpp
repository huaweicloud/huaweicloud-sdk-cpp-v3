

#include "huaweicloud/modelarts/v1/model/DeleteWorkflowSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteWorkflowSubscriptionRequest::DeleteWorkflowSubscriptionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
}

DeleteWorkflowSubscriptionRequest::~DeleteWorkflowSubscriptionRequest() = default;

void DeleteWorkflowSubscriptionRequest::validate()
{
}

web::json::value DeleteWorkflowSubscriptionRequest::toJson() const
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
bool DeleteWorkflowSubscriptionRequest::fromJson(const web::json::value& val)
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


std::string DeleteWorkflowSubscriptionRequest::getWorkflowId() const
{
    return workflowId_;
}

void DeleteWorkflowSubscriptionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DeleteWorkflowSubscriptionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DeleteWorkflowSubscriptionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string DeleteWorkflowSubscriptionRequest::getSubscriptionId() const
{
    return subscriptionId_;
}

void DeleteWorkflowSubscriptionRequest::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool DeleteWorkflowSubscriptionRequest::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void DeleteWorkflowSubscriptionRequest::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

}
}
}
}
}


