

#include "huaweicloud/live/v2/model/ListTranscodeConcurrencyNumRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeConcurrencyNumRequest::ListTranscodeConcurrencyNumRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    publishDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListTranscodeConcurrencyNumRequest::~ListTranscodeConcurrencyNumRequest() = default;

void ListTranscodeConcurrencyNumRequest::validate()
{
}

web::json::value ListTranscodeConcurrencyNumRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(publishDomainsIsSet_) {
        val[utility::conversions::to_string_t("publish_domains")] = ModelBase::toJson(publishDomains_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListTranscodeConcurrencyNumRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
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


std::string ListTranscodeConcurrencyNumRequest::getProjectId() const
{
    return projectId_;
}

void ListTranscodeConcurrencyNumRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListTranscodeConcurrencyNumRequest::getPublishDomains()
{
    return publishDomains_;
}

void ListTranscodeConcurrencyNumRequest::setPublishDomains(const std::vector<std::string>& value)
{
    publishDomains_ = value;
    publishDomainsIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::publishDomainsIsSet() const
{
    return publishDomainsIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetpublishDomains()
{
    publishDomainsIsSet_ = false;
}

std::string ListTranscodeConcurrencyNumRequest::getApp() const
{
    return app_;
}

void ListTranscodeConcurrencyNumRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::appIsSet() const
{
    return appIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetapp()
{
    appIsSet_ = false;
}

int32_t ListTranscodeConcurrencyNumRequest::getInterval() const
{
    return interval_;
}

void ListTranscodeConcurrencyNumRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ListTranscodeConcurrencyNumRequest::getStartTime() const
{
    return startTime_;
}

void ListTranscodeConcurrencyNumRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTranscodeConcurrencyNumRequest::getEndTime() const
{
    return endTime_;
}

void ListTranscodeConcurrencyNumRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTranscodeConcurrencyNumRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTranscodeConcurrencyNumRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


