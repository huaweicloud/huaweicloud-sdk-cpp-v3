

#include "huaweicloud/cloudtest/v1/model/ShowTestCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCaseRequest::ShowTestCaseRequest()
{
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    refresh_ = false;
    refreshIsSet_ = false;
    isRecycle_ = false;
    isRecycleIsSet_ = false;
}

ShowTestCaseRequest::~ShowTestCaseRequest() = default;

void ShowTestCaseRequest::validate()
{
}

web::json::value ShowTestCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(refreshIsSet_) {
        val[utility::conversions::to_string_t("refresh")] = ModelBase::toJson(refresh_);
    }
    if(isRecycleIsSet_) {
        val[utility::conversions::to_string_t("is_recycle")] = ModelBase::toJson(isRecycle_);
    }

    return val;
}
bool ShowTestCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefresh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_recycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_recycle"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecycle(refVal);
        }
    }
    return ok;
}


std::string ShowTestCaseRequest::getTestcaseId() const
{
    return testcaseId_;
}

void ShowTestCaseRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowTestCaseRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowTestCaseRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string ShowTestCaseRequest::getVersionUri() const
{
    return versionUri_;
}

void ShowTestCaseRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ShowTestCaseRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ShowTestCaseRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string ShowTestCaseRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowTestCaseRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowTestCaseRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowTestCaseRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowTestCaseRequest::getTaskUri() const
{
    return taskUri_;
}

void ShowTestCaseRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool ShowTestCaseRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void ShowTestCaseRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

bool ShowTestCaseRequest::isRefresh() const
{
    return refresh_;
}

void ShowTestCaseRequest::setRefresh(bool value)
{
    refresh_ = value;
    refreshIsSet_ = true;
}

bool ShowTestCaseRequest::refreshIsSet() const
{
    return refreshIsSet_;
}

void ShowTestCaseRequest::unsetrefresh()
{
    refreshIsSet_ = false;
}

bool ShowTestCaseRequest::isIsRecycle() const
{
    return isRecycle_;
}

void ShowTestCaseRequest::setIsRecycle(bool value)
{
    isRecycle_ = value;
    isRecycleIsSet_ = true;
}

bool ShowTestCaseRequest::isRecycleIsSet() const
{
    return isRecycleIsSet_;
}

void ShowTestCaseRequest::unsetisRecycle()
{
    isRecycleIsSet_ = false;
}

}
}
}
}
}


