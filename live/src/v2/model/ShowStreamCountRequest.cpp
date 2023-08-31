

#include "huaweicloud/live/v2/model/ShowStreamCountRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ShowStreamCountRequest::ShowStreamCountRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    publishDomainsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowStreamCountRequest::~ShowStreamCountRequest() = default;

void ShowStreamCountRequest::validate()
{
}

web::json::value ShowStreamCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(publishDomainsIsSet_) {
        val[utility::conversions::to_string_t("publish_domains")] = ModelBase::toJson(publishDomains_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ShowStreamCountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publish_domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomains(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string ShowStreamCountRequest::getProjectId() const
{
    return projectId_;
}

void ShowStreamCountRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowStreamCountRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowStreamCountRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ShowStreamCountRequest::getPublishDomains()
{
    return publishDomains_;
}

void ShowStreamCountRequest::setPublishDomains(const std::vector<std::string>& value)
{
    publishDomains_ = value;
    publishDomainsIsSet_ = true;
}

bool ShowStreamCountRequest::publishDomainsIsSet() const
{
    return publishDomainsIsSet_;
}

void ShowStreamCountRequest::unsetpublishDomains()
{
    publishDomainsIsSet_ = false;
}

std::string ShowStreamCountRequest::getStartTime() const
{
    return startTime_;
}

void ShowStreamCountRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowStreamCountRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowStreamCountRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowStreamCountRequest::getEndTime() const
{
    return endTime_;
}

void ShowStreamCountRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowStreamCountRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowStreamCountRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


