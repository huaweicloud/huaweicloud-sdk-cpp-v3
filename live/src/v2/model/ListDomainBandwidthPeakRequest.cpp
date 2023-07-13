

#include "huaweicloud/live/v2/model/ListDomainBandwidthPeakRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainBandwidthPeakRequest::ListDomainBandwidthPeakRequest()
{
    playDomainsIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    regionIsSet_ = false;
    ispIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

ListDomainBandwidthPeakRequest::~ListDomainBandwidthPeakRequest() = default;

void ListDomainBandwidthPeakRequest::validate()
{
}

web::json::value ListDomainBandwidthPeakRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool ListDomainBandwidthPeakRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::vector<std::string>& ListDomainBandwidthPeakRequest::getPlayDomains()
{
    return playDomains_;
}

void ListDomainBandwidthPeakRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getApp() const
{
    return app_;
}

void ListDomainBandwidthPeakRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::appIsSet() const
{
    return appIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getStream() const
{
    return stream_;
}

void ListDomainBandwidthPeakRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ListDomainBandwidthPeakRequest::getRegion()
{
    return region_;
}

void ListDomainBandwidthPeakRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ListDomainBandwidthPeakRequest::getIsp()
{
    return isp_;
}

void ListDomainBandwidthPeakRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getProtocol() const
{
    return protocol_;
}

void ListDomainBandwidthPeakRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getStartTime() const
{
    return startTime_;
}

void ListDomainBandwidthPeakRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getEndTime() const
{
    return endTime_;
}

void ListDomainBandwidthPeakRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDomainBandwidthPeakRequest::getServiceType() const
{
    return serviceType_;
}

void ListDomainBandwidthPeakRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListDomainBandwidthPeakRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListDomainBandwidthPeakRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


