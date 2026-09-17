

#include "huaweicloud/cloudtest/v1/model/ShowTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTaskRequest::ShowTaskRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
}

ShowTaskRequest::~ShowTaskRequest() = default;

void ShowTaskRequest::validate()
{
}

web::json::value ShowTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }

    return val;
}
bool ShowTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    return ok;
}


std::string ShowTaskRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowTaskRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowTaskRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowTaskRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowTaskRequest::getTaskUri() const
{
    return taskUri_;
}

void ShowTaskRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool ShowTaskRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void ShowTaskRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string ShowTaskRequest::getVersionUri() const
{
    return versionUri_;
}

void ShowTaskRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ShowTaskRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ShowTaskRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

}
}
}
}
}


