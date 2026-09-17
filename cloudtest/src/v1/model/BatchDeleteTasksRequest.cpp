

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTasksRequest::BatchDeleteTasksRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTasksRequest::~BatchDeleteTasksRequest() = default;

void BatchDeleteTasksRequest::validate()
{
}

web::json::value BatchDeleteTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTasksRequest::getProjectUuid() const
{
    return projectUuid_;
}

void BatchDeleteTasksRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool BatchDeleteTasksRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void BatchDeleteTasksRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

DeleteTaskInfo BatchDeleteTasksRequest::getBody() const
{
    return body_;
}

void BatchDeleteTasksRequest::setBody(const DeleteTaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTasksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTasksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


