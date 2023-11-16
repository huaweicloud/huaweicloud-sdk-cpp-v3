

#include "huaweicloud/cdn/v1/model/BackSources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




BackSources::BackSources()
{
    sourcesType_ = "";
    sourcesTypeIsSet_ = false;
    ipOrDomain_ = "";
    ipOrDomainIsSet_ = false;
    obsBucketType_ = "";
    obsBucketTypeIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
}

BackSources::~BackSources() = default;

void BackSources::validate()
{
}

web::json::value BackSources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourcesTypeIsSet_) {
        val[utility::conversions::to_string_t("sources_type")] = ModelBase::toJson(sourcesType_);
    }
    if(ipOrDomainIsSet_) {
        val[utility::conversions::to_string_t("ip_or_domain")] = ModelBase::toJson(ipOrDomain_);
    }
    if(obsBucketTypeIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_type")] = ModelBase::toJson(obsBucketType_);
    }
    if(httpPortIsSet_) {
        val[utility::conversions::to_string_t("http_port")] = ModelBase::toJson(httpPort_);
    }
    if(httpsPortIsSet_) {
        val[utility::conversions::to_string_t("https_port")] = ModelBase::toJson(httpsPort_);
    }

    return val;
}
bool BackSources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sources_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcesType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_or_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_or_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpOrDomain(refVal);
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
    return ok;
}


std::string BackSources::getSourcesType() const
{
    return sourcesType_;
}

void BackSources::setSourcesType(const std::string& value)
{
    sourcesType_ = value;
    sourcesTypeIsSet_ = true;
}

bool BackSources::sourcesTypeIsSet() const
{
    return sourcesTypeIsSet_;
}

void BackSources::unsetsourcesType()
{
    sourcesTypeIsSet_ = false;
}

std::string BackSources::getIpOrDomain() const
{
    return ipOrDomain_;
}

void BackSources::setIpOrDomain(const std::string& value)
{
    ipOrDomain_ = value;
    ipOrDomainIsSet_ = true;
}

bool BackSources::ipOrDomainIsSet() const
{
    return ipOrDomainIsSet_;
}

void BackSources::unsetipOrDomain()
{
    ipOrDomainIsSet_ = false;
}

std::string BackSources::getObsBucketType() const
{
    return obsBucketType_;
}

void BackSources::setObsBucketType(const std::string& value)
{
    obsBucketType_ = value;
    obsBucketTypeIsSet_ = true;
}

bool BackSources::obsBucketTypeIsSet() const
{
    return obsBucketTypeIsSet_;
}

void BackSources::unsetobsBucketType()
{
    obsBucketTypeIsSet_ = false;
}

int32_t BackSources::getHttpPort() const
{
    return httpPort_;
}

void BackSources::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool BackSources::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void BackSources::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t BackSources::getHttpsPort() const
{
    return httpsPort_;
}

void BackSources::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool BackSources::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void BackSources::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

}
}
}
}
}


