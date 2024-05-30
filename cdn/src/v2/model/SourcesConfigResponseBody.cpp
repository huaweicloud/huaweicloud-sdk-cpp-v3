

#include "huaweicloud/cdn/v2/model/SourcesConfigResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SourcesConfigResponseBody::SourcesConfigResponseBody()
{
    originType_ = "";
    originTypeIsSet_ = false;
    originAddr_ = "";
    originAddrIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
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
    bucketAccessKey_ = "";
    bucketAccessKeyIsSet_ = false;
    bucketSecretKey_ = "";
    bucketSecretKeyIsSet_ = false;
    bucketRegion_ = "";
    bucketRegionIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
}

SourcesConfigResponseBody::~SourcesConfigResponseBody() = default;

void SourcesConfigResponseBody::validate()
{
}

web::json::value SourcesConfigResponseBody::toJson() const
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
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
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

    return val;
}
bool SourcesConfigResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
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
    return ok;
}


std::string SourcesConfigResponseBody::getOriginType() const
{
    return originType_;
}

void SourcesConfigResponseBody::setOriginType(const std::string& value)
{
    originType_ = value;
    originTypeIsSet_ = true;
}

bool SourcesConfigResponseBody::originTypeIsSet() const
{
    return originTypeIsSet_;
}

void SourcesConfigResponseBody::unsetoriginType()
{
    originTypeIsSet_ = false;
}

std::string SourcesConfigResponseBody::getOriginAddr() const
{
    return originAddr_;
}

void SourcesConfigResponseBody::setOriginAddr(const std::string& value)
{
    originAddr_ = value;
    originAddrIsSet_ = true;
}

bool SourcesConfigResponseBody::originAddrIsSet() const
{
    return originAddrIsSet_;
}

void SourcesConfigResponseBody::unsetoriginAddr()
{
    originAddrIsSet_ = false;
}

int32_t SourcesConfigResponseBody::getPriority() const
{
    return priority_;
}

void SourcesConfigResponseBody::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool SourcesConfigResponseBody::priorityIsSet() const
{
    return priorityIsSet_;
}

void SourcesConfigResponseBody::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t SourcesConfigResponseBody::getWeight() const
{
    return weight_;
}

void SourcesConfigResponseBody::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool SourcesConfigResponseBody::weightIsSet() const
{
    return weightIsSet_;
}

void SourcesConfigResponseBody::unsetweight()
{
    weightIsSet_ = false;
}

std::string SourcesConfigResponseBody::getObsWebHostingStatus() const
{
    return obsWebHostingStatus_;
}

void SourcesConfigResponseBody::setObsWebHostingStatus(const std::string& value)
{
    obsWebHostingStatus_ = value;
    obsWebHostingStatusIsSet_ = true;
}

bool SourcesConfigResponseBody::obsWebHostingStatusIsSet() const
{
    return obsWebHostingStatusIsSet_;
}

void SourcesConfigResponseBody::unsetobsWebHostingStatus()
{
    obsWebHostingStatusIsSet_ = false;
}

int32_t SourcesConfigResponseBody::getHttpPort() const
{
    return httpPort_;
}

void SourcesConfigResponseBody::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool SourcesConfigResponseBody::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void SourcesConfigResponseBody::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t SourcesConfigResponseBody::getHttpsPort() const
{
    return httpsPort_;
}

void SourcesConfigResponseBody::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool SourcesConfigResponseBody::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void SourcesConfigResponseBody::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

std::string SourcesConfigResponseBody::getHostName() const
{
    return hostName_;
}

void SourcesConfigResponseBody::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool SourcesConfigResponseBody::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void SourcesConfigResponseBody::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string SourcesConfigResponseBody::getObsBucketType() const
{
    return obsBucketType_;
}

void SourcesConfigResponseBody::setObsBucketType(const std::string& value)
{
    obsBucketType_ = value;
    obsBucketTypeIsSet_ = true;
}

bool SourcesConfigResponseBody::obsBucketTypeIsSet() const
{
    return obsBucketTypeIsSet_;
}

void SourcesConfigResponseBody::unsetobsBucketType()
{
    obsBucketTypeIsSet_ = false;
}

std::string SourcesConfigResponseBody::getBucketAccessKey() const
{
    return bucketAccessKey_;
}

void SourcesConfigResponseBody::setBucketAccessKey(const std::string& value)
{
    bucketAccessKey_ = value;
    bucketAccessKeyIsSet_ = true;
}

bool SourcesConfigResponseBody::bucketAccessKeyIsSet() const
{
    return bucketAccessKeyIsSet_;
}

void SourcesConfigResponseBody::unsetbucketAccessKey()
{
    bucketAccessKeyIsSet_ = false;
}

std::string SourcesConfigResponseBody::getBucketSecretKey() const
{
    return bucketSecretKey_;
}

void SourcesConfigResponseBody::setBucketSecretKey(const std::string& value)
{
    bucketSecretKey_ = value;
    bucketSecretKeyIsSet_ = true;
}

bool SourcesConfigResponseBody::bucketSecretKeyIsSet() const
{
    return bucketSecretKeyIsSet_;
}

void SourcesConfigResponseBody::unsetbucketSecretKey()
{
    bucketSecretKeyIsSet_ = false;
}

std::string SourcesConfigResponseBody::getBucketRegion() const
{
    return bucketRegion_;
}

void SourcesConfigResponseBody::setBucketRegion(const std::string& value)
{
    bucketRegion_ = value;
    bucketRegionIsSet_ = true;
}

bool SourcesConfigResponseBody::bucketRegionIsSet() const
{
    return bucketRegionIsSet_;
}

void SourcesConfigResponseBody::unsetbucketRegion()
{
    bucketRegionIsSet_ = false;
}

std::string SourcesConfigResponseBody::getBucketName() const
{
    return bucketName_;
}

void SourcesConfigResponseBody::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SourcesConfigResponseBody::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SourcesConfigResponseBody::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

}
}
}
}
}


