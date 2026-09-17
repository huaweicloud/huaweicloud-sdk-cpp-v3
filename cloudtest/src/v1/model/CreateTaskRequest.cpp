

#include "huaweicloud/cloudtest/v1/model/CreateTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTaskRequest::CreateTaskRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTaskRequest::~CreateTaskRequest() = default;

void CreateTaskRequest::validate()
{
}

web::json::value CreateTaskRequest::toJson() const
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
bool CreateTaskRequest::fromJson(const web::json::value& val)
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
            TaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTaskRequest::getProjectUuid() const
{
    return projectUuid_;
}

void CreateTaskRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool CreateTaskRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void CreateTaskRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

TaskInfo CreateTaskRequest::getBody() const
{
    return body_;
}

void CreateTaskRequest::setBody(const TaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


