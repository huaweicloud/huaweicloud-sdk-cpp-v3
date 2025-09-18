

#include "huaweicloud/projectman/v4/model/TransferWorkItemFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




TransferWorkItemFlowRequest::TransferWorkItemFlowRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

TransferWorkItemFlowRequest::~TransferWorkItemFlowRequest() = default;

void TransferWorkItemFlowRequest::validate()
{
}

web::json::value TransferWorkItemFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TransferWorkItemFlowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string TransferWorkItemFlowRequest::getProjectId() const
{
    return projectId_;
}

void TransferWorkItemFlowRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TransferWorkItemFlowRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TransferWorkItemFlowRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

WorkItemFlowRequestBody TransferWorkItemFlowRequest::getBody() const
{
    return body_;
}

void TransferWorkItemFlowRequest::setBody(const WorkItemFlowRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransferWorkItemFlowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransferWorkItemFlowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


