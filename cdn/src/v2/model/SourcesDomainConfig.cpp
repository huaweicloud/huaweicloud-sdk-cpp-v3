

#include "huaweicloud/cdn/v2/model/SourcesDomainConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SourcesDomainConfig::SourcesDomainConfig()
{
    originType_ = "";
    originTypeIsSet_ = false;
    originAddr_ = "";
    originAddrIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    obsWebHostingStatus_ = "";
    obsWebHostingStatusIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    obsBucketType_ = "";
    obsBucketTypeIsSet_ = false;
}

SourcesDomainConfig::~SourcesDomainConfig() = default;

void SourcesDomainConfig::validate()
{
}

web::json::value SourcesDomainConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originTypeIsSet_) {
        val[utility::conversions::to_string_t("origin_type")] = ModelBase::toJson(originType_);
    }
    if(originAddrIsSet_) {
        val[utility::conversions::to_string_t("origin_addr")] = ModelBase::toJson(originAddr_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(obsWebHostingStatusIsSet_) {
        val[utility::conversions::to_string_t("obs_web_hosting_status")] = ModelBase::toJson(obsWebHostingStatus_);
    }
    if(httpPortIsSet_) {
        val[utility::conversions::to_string_t("http_port")] = ModelBase::toJson(httpPort_);
    }
    if(httpsPortIsSet_) {
        val[utility::conversions::to_string_t("https_port")] = ModelBase::toJson(httpsPort_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(obsBucketTypeIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_type")] = ModelBase::toJson(obsBucketType_);
    }

    return val;
}
bool SourcesDomainConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_web_hosting_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_web_hosting_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsWebHostingStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketType(refVal);
        }
    }
    return ok;
}


std::string SourcesDomainConfig::getOriginType() const
{
    return originType_;
}

void SourcesDomainConfig::setOriginType(const std::string& value)
{
    originType_ = value;
    originTypeIsSet_ = true;
}

bool SourcesDomainConfig::originTypeIsSet() const
{
    return originTypeIsSet_;
}

void SourcesDomainConfig::unsetoriginType()
{
    originTypeIsSet_ = false;
}

std::string SourcesDomainConfig::getOriginAddr() const
{
    return originAddr_;
}

void SourcesDomainConfig::setOriginAddr(const std::string& value)
{
    originAddr_ = value;
    originAddrIsSet_ = true;
}

bool SourcesDomainConfig::originAddrIsSet() const
{
    return originAddrIsSet_;
}

void SourcesDomainConfig::unsetoriginAddr()
{
    originAddrIsSet_ = false;
}

int32_t SourcesDomainConfig::getPriority() const
{
    return priority_;
}

void SourcesDomainConfig::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool SourcesDomainConfig::priorityIsSet() const
{
    return priorityIsSet_;
}

void SourcesDomainConfig::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string SourcesDomainConfig::getObsWebHostingStatus() const
{
    return obsWebHostingStatus_;
}

void SourcesDomainConfig::setObsWebHostingStatus(const std::string& value)
{
    obsWebHostingStatus_ = value;
    obsWebHostingStatusIsSet_ = true;
}

bool SourcesDomainConfig::obsWebHostingStatusIsSet() const
{
    return obsWebHostingStatusIsSet_;
}

void SourcesDomainConfig::unsetobsWebHostingStatus()
{
    obsWebHostingStatusIsSet_ = false;
}

int32_t SourcesDomainConfig::getHttpPort() const
{
    return httpPort_;
}

void SourcesDomainConfig::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool SourcesDomainConfig::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void SourcesDomainConfig::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t SourcesDomainConfig::getHttpsPort() const
{
    return httpsPort_;
}

void SourcesDomainConfig::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool SourcesDomainConfig::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void SourcesDomainConfig::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

std::string SourcesDomainConfig::getHostName() const
{
    return hostName_;
}

void SourcesDomainConfig::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool SourcesDomainConfig::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void SourcesDomainConfig::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string SourcesDomainConfig::getObsBucketType() const
{
    return obsBucketType_;
}

void SourcesDomainConfig::setObsBucketType(const std::string& value)
{
    obsBucketType_ = value;
    obsBucketTypeIsSet_ = true;
}

bool SourcesDomainConfig::obsBucketTypeIsSet() const
{
    return obsBucketTypeIsSet_;
}

void SourcesDomainConfig::unsetobsBucketType()
{
    obsBucketTypeIsSet_ = false;
}

}
}
}
}
}


