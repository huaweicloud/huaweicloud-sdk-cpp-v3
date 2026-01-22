

#include "huaweicloud/live/v2/model/ListBandwidthDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListBandwidthDetailRequest::ListBandwidthDetailRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    playDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    countryIsSet_ = false;
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
    ipType_ = "";
    ipTypeIsSet_ = false;
}

ListBandwidthDetailRequest::~ListBandwidthDetailRequest() = default;

void ListBandwidthDetailRequest::validate()
{
}

web::json::value ListBandwidthDetailRequest::toJson() const
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
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
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
    if(ipTypeIsSet_) {
        val[utility::conversions::to_string_t("ip_type")] = ModelBase::toJson(ipType_);
    }

    return val;
}
bool ListBandwidthDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpType(refVal);
        }
    }
    return ok;
}


std::string ListBandwidthDetailRequest::getProjectId() const
{
    return projectId_;
}

void ListBandwidthDetailRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBandwidthDetailRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBandwidthDetailRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListBandwidthDetailRequest::getPlayDomains()
{
    return playDomains_;
}

void ListBandwidthDetailRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListBandwidthDetailRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListBandwidthDetailRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getApp() const
{
    return app_;
}

void ListBandwidthDetailRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListBandwidthDetailRequest::appIsSet() const
{
    return appIsSet_;
}

void ListBandwidthDetailRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getStream() const
{
    return stream_;
}

void ListBandwidthDetailRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListBandwidthDetailRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListBandwidthDetailRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ListBandwidthDetailRequest::getCountry()
{
    return country_;
}

void ListBandwidthDetailRequest::setCountry(const std::vector<std::string>& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ListBandwidthDetailRequest::countryIsSet() const
{
    return countryIsSet_;
}

void ListBandwidthDetailRequest::unsetcountry()
{
    countryIsSet_ = false;
}

std::vector<std::string>& ListBandwidthDetailRequest::getRegion()
{
    return region_;
}

void ListBandwidthDetailRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListBandwidthDetailRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListBandwidthDetailRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ListBandwidthDetailRequest::getIsp()
{
    return isp_;
}

void ListBandwidthDetailRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListBandwidthDetailRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListBandwidthDetailRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getProtocol() const
{
    return protocol_;
}

void ListBandwidthDetailRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListBandwidthDetailRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListBandwidthDetailRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t ListBandwidthDetailRequest::getInterval() const
{
    return interval_;
}

void ListBandwidthDetailRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListBandwidthDetailRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListBandwidthDetailRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getStartTime() const
{
    return startTime_;
}

void ListBandwidthDetailRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBandwidthDetailRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBandwidthDetailRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getEndTime() const
{
    return endTime_;
}

void ListBandwidthDetailRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBandwidthDetailRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBandwidthDetailRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getServiceType() const
{
    return serviceType_;
}

void ListBandwidthDetailRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListBandwidthDetailRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListBandwidthDetailRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListBandwidthDetailRequest::getIpType() const
{
    return ipType_;
}

void ListBandwidthDetailRequest::setIpType(const std::string& value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool ListBandwidthDetailRequest::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void ListBandwidthDetailRequest::unsetipType()
{
    ipTypeIsSet_ = false;
}

}
}
}
}
}


