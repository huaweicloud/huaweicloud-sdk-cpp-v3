

#include "huaweicloud/live/v2/model/ListAreaDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListAreaDetailRequest::ListAreaDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    playDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    ispIsSet_ = false;
    areaIsSet_ = false;
    metric_ = "";
    metricIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

ListAreaDetailRequest::~ListAreaDetailRequest() = default;

void ListAreaDetailRequest::validate()
{
}

web::json::value ListAreaDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(playDomainsIsSet_) {
        val[utility::conversions::to_string_t("play_domains")] = ModelBase::toJson(playDomains_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool ListAreaDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("play_domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domains"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomains(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


std::string ListAreaDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListAreaDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAreaDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAreaDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListAreaDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListAreaDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAreaDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAreaDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAreaDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListAreaDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAreaDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAreaDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& ListAreaDetailRequest::getPlayDomains()
{
    return playDomains_;
}

void ListAreaDetailRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListAreaDetailRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListAreaDetailRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListAreaDetailRequest::getApp() const
{
    return app_;
}

void ListAreaDetailRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListAreaDetailRequest::appIsSet() const
{
    return appIsSet_;
}

void ListAreaDetailRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListAreaDetailRequest::getStream() const
{
    return stream_;
}

void ListAreaDetailRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListAreaDetailRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListAreaDetailRequest::unsetstream()
{
    streamIsSet_ = false;
}

int32_t ListAreaDetailRequest::getInterval() const
{
    return interval_;
}

void ListAreaDetailRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListAreaDetailRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListAreaDetailRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::vector<std::string>& ListAreaDetailRequest::getIsp()
{
    return isp_;
}

void ListAreaDetailRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListAreaDetailRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListAreaDetailRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<std::string>& ListAreaDetailRequest::getArea()
{
    return area_;
}

void ListAreaDetailRequest::setArea(const std::vector<std::string>& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool ListAreaDetailRequest::areaIsSet() const
{
    return areaIsSet_;
}

void ListAreaDetailRequest::unsetarea()
{
    areaIsSet_ = false;
}

std::string ListAreaDetailRequest::getMetric() const
{
    return metric_;
}

void ListAreaDetailRequest::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool ListAreaDetailRequest::metricIsSet() const
{
    return metricIsSet_;
}

void ListAreaDetailRequest::unsetmetric()
{
    metricIsSet_ = false;
}

std::string ListAreaDetailRequest::getProtocol() const
{
    return protocol_;
}

void ListAreaDetailRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListAreaDetailRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListAreaDetailRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


