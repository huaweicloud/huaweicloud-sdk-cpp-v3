

#include "huaweicloud/live/v2/model/ShowUpBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ShowUpBandwidthRequest::ShowUpBandwidthRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    publishDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    regionIsSet_ = false;
    ispIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowUpBandwidthRequest::~ShowUpBandwidthRequest() = default;

void ShowUpBandwidthRequest::validate()
{
}

web::json::value ShowUpBandwidthRequest::toJson() const
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
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowUpBandwidthRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ShowUpBandwidthRequest::getProjectId() const
{
    return projectId_;
}

void ShowUpBandwidthRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowUpBandwidthRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowUpBandwidthRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ShowUpBandwidthRequest::getPublishDomains()
{
    return publishDomains_;
}

void ShowUpBandwidthRequest::setPublishDomains(const std::vector<std::string>& value)
{
    publishDomains_ = value;
    publishDomainsIsSet_ = true;
}

bool ShowUpBandwidthRequest::publishDomainsIsSet() const
{
    return publishDomainsIsSet_;
}

void ShowUpBandwidthRequest::unsetpublishDomains()
{
    publishDomainsIsSet_ = false;
}

std::string ShowUpBandwidthRequest::getApp() const
{
    return app_;
}

void ShowUpBandwidthRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ShowUpBandwidthRequest::appIsSet() const
{
    return appIsSet_;
}

void ShowUpBandwidthRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ShowUpBandwidthRequest::getStream() const
{
    return stream_;
}

void ShowUpBandwidthRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ShowUpBandwidthRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ShowUpBandwidthRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ShowUpBandwidthRequest::getRegion()
{
    return region_;
}

void ShowUpBandwidthRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowUpBandwidthRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ShowUpBandwidthRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ShowUpBandwidthRequest::getIsp()
{
    return isp_;
}

void ShowUpBandwidthRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ShowUpBandwidthRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ShowUpBandwidthRequest::unsetisp()
{
    ispIsSet_ = false;
}

int32_t ShowUpBandwidthRequest::getInterval() const
{
    return interval_;
}

void ShowUpBandwidthRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowUpBandwidthRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowUpBandwidthRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ShowUpBandwidthRequest::getType() const
{
    return type_;
}

void ShowUpBandwidthRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowUpBandwidthRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowUpBandwidthRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowUpBandwidthRequest::getStartTime() const
{
    return startTime_;
}

void ShowUpBandwidthRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowUpBandwidthRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowUpBandwidthRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowUpBandwidthRequest::getEndTime() const
{
    return endTime_;
}

void ShowUpBandwidthRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowUpBandwidthRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowUpBandwidthRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


