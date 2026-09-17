

#include "huaweicloud/projectman/v4/model/BatchTransferIpdWorkItemFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchTransferIpdWorkItemFlowRequest::BatchTransferIpdWorkItemFlowRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    isRecover_ = false;
    isRecoverIsSet_ = false;
    bodyIsSet_ = false;
}

BatchTransferIpdWorkItemFlowRequest::~BatchTransferIpdWorkItemFlowRequest() = default;

void BatchTransferIpdWorkItemFlowRequest::validate()
{
}

web::json::value BatchTransferIpdWorkItemFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isRecoverIsSet_) {
        val[utility::conversions::to_string_t("is_recover")] = ModelBase::toJson(isRecover_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchTransferIpdWorkItemFlowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_recover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_recover"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchTransferIpdWorkItemFlowRequest::getProjectId() const
{
    return projectId_;
}

void BatchTransferIpdWorkItemFlowRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchTransferIpdWorkItemFlowRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool BatchTransferIpdWorkItemFlowRequest::isIsRecover() const
{
    return isRecover_;
}

void BatchTransferIpdWorkItemFlowRequest::setIsRecover(bool value)
{
    isRecover_ = value;
    isRecoverIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowRequest::isRecoverIsSet() const
{
    return isRecoverIsSet_;
}

void BatchTransferIpdWorkItemFlowRequest::unsetisRecover()
{
    isRecoverIsSet_ = false;
}

WorkItemFlowVO BatchTransferIpdWorkItemFlowRequest::getBody() const
{
    return body_;
}

void BatchTransferIpdWorkItemFlowRequest::setBody(const WorkItemFlowVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchTransferIpdWorkItemFlowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


