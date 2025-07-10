

#include "huaweicloud/cdn/v2/model/FlexibleOriginsEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




FlexibleOriginsEngine::FlexibleOriginsEngine()
{
    sourcesType_ = "";
    sourcesTypeIsSet_ = false;
    ipOrDomain_ = "";
    ipOrDomainIsSet_ = false;
    obsBucketType_ = "";
    obsBucketTypeIsSet_ = false;
    bucketAccessKey_ = "";
    bucketAccessKeyIsSet_ = false;
    bucketSecretKey_ = "";
    bucketSecretKeyIsSet_ = false;
    bucketRegion_ = "";
    bucketRegionIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    originProtocol_ = "";
    originProtocolIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

FlexibleOriginsEngine::~FlexibleOriginsEngine() = default;

void FlexibleOriginsEngine::validate()
{
}

web::json::value FlexibleOriginsEngine::toJson() const
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
    if(bucketAccessKeyIsSet_) {
        val[utility::conversions::to_string_t("bucket_access_key")] = ModelBase::toJson(bucketAccessKey_);
    }
    if(bucketSecretKeyIsSet_) {
        val[utility::conversions::to_string_t("bucket_secret_key")] = ModelBase::toJson(bucketSecretKey_);
    }
    if(bucketRegionIsSet_) {
        val[utility::conversions::to_string_t("bucket_region")] = ModelBase::toJson(bucketRegion_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(originProtocolIsSet_) {
        val[utility::conversions::to_string_t("origin_protocol")] = ModelBase::toJson(originProtocol_);
    }
    if(httpPortIsSet_) {
        val[utility::conversions::to_string_t("http_port")] = ModelBase::toJson(httpPort_);
    }
    if(httpsPortIsSet_) {
        val[utility::conversions::to_string_t("https_port")] = ModelBase::toJson(httpsPort_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool FlexibleOriginsEngine::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bucket_access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_secret_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_secret_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketSecretKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("origin_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


std::string FlexibleOriginsEngine::getSourcesType() const
{
    return sourcesType_;
}

void FlexibleOriginsEngine::setSourcesType(const std::string& value)
{
    sourcesType_ = value;
    sourcesTypeIsSet_ = true;
}

bool FlexibleOriginsEngine::sourcesTypeIsSet() const
{
    return sourcesTypeIsSet_;
}

void FlexibleOriginsEngine::unsetsourcesType()
{
    sourcesTypeIsSet_ = false;
}

std::string FlexibleOriginsEngine::getIpOrDomain() const
{
    return ipOrDomain_;
}

void FlexibleOriginsEngine::setIpOrDomain(const std::string& value)
{
    ipOrDomain_ = value;
    ipOrDomainIsSet_ = true;
}

bool FlexibleOriginsEngine::ipOrDomainIsSet() const
{
    return ipOrDomainIsSet_;
}

void FlexibleOriginsEngine::unsetipOrDomain()
{
    ipOrDomainIsSet_ = false;
}

std::string FlexibleOriginsEngine::getObsBucketType() const
{
    return obsBucketType_;
}

void FlexibleOriginsEngine::setObsBucketType(const std::string& value)
{
    obsBucketType_ = value;
    obsBucketTypeIsSet_ = true;
}

bool FlexibleOriginsEngine::obsBucketTypeIsSet() const
{
    return obsBucketTypeIsSet_;
}

void FlexibleOriginsEngine::unsetobsBucketType()
{
    obsBucketTypeIsSet_ = false;
}

std::string FlexibleOriginsEngine::getBucketAccessKey() const
{
    return bucketAccessKey_;
}

void FlexibleOriginsEngine::setBucketAccessKey(const std::string& value)
{
    bucketAccessKey_ = value;
    bucketAccessKeyIsSet_ = true;
}

bool FlexibleOriginsEngine::bucketAccessKeyIsSet() const
{
    return bucketAccessKeyIsSet_;
}

void FlexibleOriginsEngine::unsetbucketAccessKey()
{
    bucketAccessKeyIsSet_ = false;
}

std::string FlexibleOriginsEngine::getBucketSecretKey() const
{
    return bucketSecretKey_;
}

void FlexibleOriginsEngine::setBucketSecretKey(const std::string& value)
{
    bucketSecretKey_ = value;
    bucketSecretKeyIsSet_ = true;
}

bool FlexibleOriginsEngine::bucketSecretKeyIsSet() const
{
    return bucketSecretKeyIsSet_;
}

void FlexibleOriginsEngine::unsetbucketSecretKey()
{
    bucketSecretKeyIsSet_ = false;
}

std::string FlexibleOriginsEngine::getBucketRegion() const
{
    return bucketRegion_;
}

void FlexibleOriginsEngine::setBucketRegion(const std::string& value)
{
    bucketRegion_ = value;
    bucketRegionIsSet_ = true;
}

bool FlexibleOriginsEngine::bucketRegionIsSet() const
{
    return bucketRegionIsSet_;
}

void FlexibleOriginsEngine::unsetbucketRegion()
{
    bucketRegionIsSet_ = false;
}

std::string FlexibleOriginsEngine::getBucketName() const
{
    return bucketName_;
}

void FlexibleOriginsEngine::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool FlexibleOriginsEngine::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void FlexibleOriginsEngine::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string FlexibleOriginsEngine::getHostName() const
{
    return hostName_;
}

void FlexibleOriginsEngine::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool FlexibleOriginsEngine::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void FlexibleOriginsEngine::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string FlexibleOriginsEngine::getOriginProtocol() const
{
    return originProtocol_;
}

void FlexibleOriginsEngine::setOriginProtocol(const std::string& value)
{
    originProtocol_ = value;
    originProtocolIsSet_ = true;
}

bool FlexibleOriginsEngine::originProtocolIsSet() const
{
    return originProtocolIsSet_;
}

void FlexibleOriginsEngine::unsetoriginProtocol()
{
    originProtocolIsSet_ = false;
}

int32_t FlexibleOriginsEngine::getHttpPort() const
{
    return httpPort_;
}

void FlexibleOriginsEngine::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool FlexibleOriginsEngine::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void FlexibleOriginsEngine::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t FlexibleOriginsEngine::getHttpsPort() const
{
    return httpsPort_;
}

void FlexibleOriginsEngine::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool FlexibleOriginsEngine::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void FlexibleOriginsEngine::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

int32_t FlexibleOriginsEngine::getPriority() const
{
    return priority_;
}

void FlexibleOriginsEngine::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool FlexibleOriginsEngine::priorityIsSet() const
{
    return priorityIsSet_;
}

void FlexibleOriginsEngine::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t FlexibleOriginsEngine::getWeight() const
{
    return weight_;
}

void FlexibleOriginsEngine::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool FlexibleOriginsEngine::weightIsSet() const
{
    return weightIsSet_;
}

void FlexibleOriginsEngine::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


