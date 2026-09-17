

#include "huaweicloud/cloudtest/v1/model/ShowTestVersionCaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestVersionCaseRequest::ShowTestVersionCaseRequest()
{
    caseUri_ = "";
    caseUriIsSet_ = false;
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

ShowTestVersionCaseRequest::~ShowTestVersionCaseRequest() = default;

void ShowTestVersionCaseRequest::validate()
{
}

web::json::value ShowTestVersionCaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("taskUri")] = ModelBase::toJson(taskUri_);
    }
    if(refreshIsSet_) {
        val[utility::conversions::to_string_t("refresh")] = ModelBase::toJson(refresh_);
    }
    if(isRecycleIsSet_) {
        val[utility::conversions::to_string_t("is_recycle")] = ModelBase::toJson(isRecycle_);
    }

    return val;
}
bool ShowTestVersionCaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("taskUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskUri"));
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


std::string ShowTestVersionCaseRequest::getCaseUri() const
{
    return caseUri_;
}

void ShowTestVersionCaseRequest::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool ShowTestVersionCaseRequest::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void ShowTestVersionCaseRequest::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

std::string ShowTestVersionCaseRequest::getVersionUri() const
{
    return versionUri_;
}

void ShowTestVersionCaseRequest::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool ShowTestVersionCaseRequest::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void ShowTestVersionCaseRequest::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string ShowTestVersionCaseRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowTestVersionCaseRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowTestVersionCaseRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowTestVersionCaseRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowTestVersionCaseRequest::getTaskUri() const
{
    return taskUri_;
}

void ShowTestVersionCaseRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool ShowTestVersionCaseRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void ShowTestVersionCaseRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

bool ShowTestVersionCaseRequest::isRefresh() const
{
    return refresh_;
}

void ShowTestVersionCaseRequest::setRefresh(bool value)
{
    refresh_ = value;
    refreshIsSet_ = true;
}

bool ShowTestVersionCaseRequest::refreshIsSet() const
{
    return refreshIsSet_;
}

void ShowTestVersionCaseRequest::unsetrefresh()
{
    refreshIsSet_ = false;
}

bool ShowTestVersionCaseRequest::isIsRecycle() const
{
    return isRecycle_;
}

void ShowTestVersionCaseRequest::setIsRecycle(bool value)
{
    isRecycle_ = value;
    isRecycleIsSet_ = true;
}

bool ShowTestVersionCaseRequest::isRecycleIsSet() const
{
    return isRecycleIsSet_;
}

void ShowTestVersionCaseRequest::unsetisRecycle()
{
    isRecycleIsSet_ = false;
}

}
}
}
}
}


