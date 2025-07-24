

#include "huaweicloud/cloudtest/v1/model/ListTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTasksRequest::ListTasksRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTasksRequest::~ListTasksRequest() = default;

void ListTasksRequest::validate()
{
}

web::json::value ListTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TasksQueryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTasksRequest::getProjectId() const
{
    return projectId_;
}

void ListTasksRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTasksRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTasksRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTasksRequest::getVersionId() const
{
    return versionId_;
}

void ListTasksRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ListTasksRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ListTasksRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

TasksQueryInfo ListTasksRequest::getBody() const
{
    return body_;
}

void ListTasksRequest::setBody(const TasksQueryInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTasksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTasksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


