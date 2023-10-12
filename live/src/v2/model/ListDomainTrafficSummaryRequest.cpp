

#include "huaweicloud/live/v2/model/ListDomainTrafficSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainTrafficSummaryRequest::ListDomainTrafficSummaryRequest()
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
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

ListDomainTrafficSummaryRequest::~ListDomainTrafficSummaryRequest() = default;

void ListDomainTrafficSummaryRequest::validate()
{
}

web::json::value ListDomainTrafficSummaryRequest::toJson() const
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
bool ListDomainTrafficSummaryRequest::fromJson(const web::json::value& val)
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


std::string ListDomainTrafficSummaryRequest::getProjectId() const
{
    return projectId_;
}

void ListDomainTrafficSummaryRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficSummaryRequest::getPlayDomains()
{
    return playDomains_;
}

void ListDomainTrafficSummaryRequest::setPlayDomains(const std::vector<std::string>& value)
{
    playDomains_ = value;
    playDomainsIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::playDomainsIsSet() const
{
    return playDomainsIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetplayDomains()
{
    playDomainsIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getApp() const
{
    return app_;
}

void ListDomainTrafficSummaryRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::appIsSet() const
{
    return appIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getStream() const
{
    return stream_;
}

void ListDomainTrafficSummaryRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficSummaryRequest::getRegion()
{
    return region_;
}

void ListDomainTrafficSummaryRequest::setRegion(const std::vector<std::string>& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<std::string>& ListDomainTrafficSummaryRequest::getIsp()
{
    return isp_;
}

void ListDomainTrafficSummaryRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getProtocol() const
{
    return protocol_;
}

void ListDomainTrafficSummaryRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getStartTime() const
{
    return startTime_;
}

void ListDomainTrafficSummaryRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getEndTime() const
{
    return endTime_;
}

void ListDomainTrafficSummaryRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDomainTrafficSummaryRequest::getServiceType() const
{
    return serviceType_;
}

void ListDomainTrafficSummaryRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListDomainTrafficSummaryRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListDomainTrafficSummaryRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


