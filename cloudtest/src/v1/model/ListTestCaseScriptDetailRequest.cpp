

#include "huaweicloud/cloudtest/v1/model/ListTestCaseScriptDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestCaseScriptDetailRequest::ListTestCaseScriptDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    tmssCaseUri_ = "";
    tmssCaseUriIsSet_ = false;
}

ListTestCaseScriptDetailRequest::~ListTestCaseScriptDetailRequest() = default;

void ListTestCaseScriptDetailRequest::validate()
{
}

web::json::value ListTestCaseScriptDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(tmssCaseUriIsSet_) {
        val[utility::conversions::to_string_t("tmss_case_uri")] = ModelBase::toJson(tmssCaseUri_);
    }

    return val;
}
bool ListTestCaseScriptDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tmss_case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tmss_case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmssCaseUri(refVal);
        }
    }
    return ok;
}


std::string ListTestCaseScriptDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListTestCaseScriptDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTestCaseScriptDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTestCaseScriptDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTestCaseScriptDetailRequest::getTaskId() const
{
    return taskId_;
}

void ListTestCaseScriptDetailRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTestCaseScriptDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTestCaseScriptDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListTestCaseScriptDetailRequest::getTmssCaseUri() const
{
    return tmssCaseUri_;
}

void ListTestCaseScriptDetailRequest::setTmssCaseUri(const std::string& value)
{
    tmssCaseUri_ = value;
    tmssCaseUriIsSet_ = true;
}

bool ListTestCaseScriptDetailRequest::tmssCaseUriIsSet() const
{
    return tmssCaseUriIsSet_;
}

void ListTestCaseScriptDetailRequest::unsettmssCaseUri()
{
    tmssCaseUriIsSet_ = false;
}

}
}
}
}
}


