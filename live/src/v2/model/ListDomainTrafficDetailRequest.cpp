

#include "huaweicloud/live/v2/model/ListDomainTrafficDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainTrafficDetailRequest::ListDomainTrafficDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    playDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    regionIsSet_ = false;
    ispIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

ListDomainTrafficDetailRequest::~ListDomainTrafficDetailRequest() = default;

void ListDomainTrafficDetailRequest::validate()
{
}

web::json::value ListDomainTrafficDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
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
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }

    return val;
}
bool ListDomainTrafficDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    return ok;
}


std::string ListDomainTrafficDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListDomainTrafficDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDomainTrafficDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficDetailRequest::getPlayDomains()
{
    return playDomains_;
}

void ListDomainTrafficDetailRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListDomainTrafficDetailRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getApp() const
{
    return app_;
}

void ListDomainTrafficDetailRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::appIsSet() const
{
    return appIsSet_;
}

void ListDomainTrafficDetailRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getStream() const
{
    return stream_;
}

void ListDomainTrafficDetailRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListDomainTrafficDetailRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficDetailRequest::getRegion()
{
    return region_;
}

void ListDomainTrafficDetailRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListDomainTrafficDetailRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficDetailRequest::getIsp()
{
    return isp_;
}

void ListDomainTrafficDetailRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListDomainTrafficDetailRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getProtocol() const
{
    return protocol_;
}

void ListDomainTrafficDetailRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListDomainTrafficDetailRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t ListDomainTrafficDetailRequest::getInterval() const
{
    return interval_;
}

void ListDomainTrafficDetailRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListDomainTrafficDetailRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListDomainTrafficDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDomainTrafficDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListDomainTrafficDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDomainTrafficDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDomainTrafficDetailRequest::getServiceType() const
{
    return serviceType_;
}

void ListDomainTrafficDetailRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListDomainTrafficDetailRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListDomainTrafficDetailRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


