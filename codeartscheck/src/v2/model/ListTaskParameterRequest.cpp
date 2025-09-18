

#include "huaweicloud/codeartscheck/v2/model/ListTaskParameterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListTaskParameterRequest::ListTaskParameterRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTaskParameterRequest::~ListTaskParameterRequest() = default;

void ListTaskParameterRequest::validate()
{
}

web::json::value ListTaskParameterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTaskParameterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ConfigTaskParameterBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTaskParameterRequest::getProjectId() const
{
    return projectId_;
}

void ListTaskParameterRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskParameterRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskParameterRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTaskParameterRequest::getTaskId() const
{
    return taskId_;
}

void ListTaskParameterRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTaskParameterRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTaskParameterRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

ConfigTaskParameterBody ListTaskParameterRequest::getBody() const
{
    return body_;
}

void ListTaskParameterRequest::setBody(const ConfigTaskParameterBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTaskParameterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTaskParameterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


