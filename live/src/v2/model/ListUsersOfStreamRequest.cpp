

#include "huaweicloud/live/v2/model/ListUsersOfStreamRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListUsersOfStreamRequest::ListUsersOfStreamRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    ispIsSet_ = false;
    countryIsSet_ = false;
    regionIsSet_ = false;
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

ListUsersOfStreamRequest::~ListUsersOfStreamRequest() = default;

void ListUsersOfStreamRequest::validate()
{
}

web::json::value ListUsersOfStreamRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
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

bool ListUsersOfStreamRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
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


std::string ListUsersOfStreamRequest::getPlayDomain() const
{
    return playDomain_;
}

void ListUsersOfStreamRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListUsersOfStreamRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListUsersOfStreamRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getApp() const
{
    return app_;
}

void ListUsersOfStreamRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListUsersOfStreamRequest::appIsSet() const
{
    return appIsSet_;
}

void ListUsersOfStreamRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getStream() const
{
    return stream_;
}

void ListUsersOfStreamRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListUsersOfStreamRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListUsersOfStreamRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ListUsersOfStreamRequest::getIsp()
{
    return isp_;
}

void ListUsersOfStreamRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListUsersOfStreamRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListUsersOfStreamRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<std::string>& ListUsersOfStreamRequest::getCountry()
{
    return country_;
}

void ListUsersOfStreamRequest::setCountry(const std::vector<std::string>& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ListUsersOfStreamRequest::countryIsSet() const
{
    return countryIsSet_;
}

void ListUsersOfStreamRequest::unsetcountry()
{
    countryIsSet_ = false;
}

std::vector<std::string>& ListUsersOfStreamRequest::getRegion()
{
    return region_;
}

void ListUsersOfStreamRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListUsersOfStreamRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListUsersOfStreamRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getProtocol() const
{
    return protocol_;
}

void ListUsersOfStreamRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListUsersOfStreamRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListUsersOfStreamRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t ListUsersOfStreamRequest::getInterval() const
{
    return interval_;
}

void ListUsersOfStreamRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ListUsersOfStreamRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ListUsersOfStreamRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getStartTime() const
{
    return startTime_;
}

void ListUsersOfStreamRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListUsersOfStreamRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListUsersOfStreamRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getEndTime() const
{
    return endTime_;
}

void ListUsersOfStreamRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListUsersOfStreamRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListUsersOfStreamRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListUsersOfStreamRequest::getServiceType() const
{
    return serviceType_;
}

void ListUsersOfStreamRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListUsersOfStreamRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListUsersOfStreamRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


