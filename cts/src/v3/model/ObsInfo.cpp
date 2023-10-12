

#include "huaweicloud/cts/v3/model/ObsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ObsInfo::ObsInfo()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    filePrefixName_ = "";
    filePrefixNameIsSet_ = false;
    isObsCreated_ = false;
    isObsCreatedIsSet_ = false;
    isAuthorizedBucket_ = false;
    isAuthorizedBucketIsSet_ = false;
    bucketLifecycle_ = 0L;
    bucketLifecycleIsSet_ = false;
    compressType_ = "";
    compressTypeIsSet_ = false;
    isSortByService_ = false;
    isSortByServiceIsSet_ = false;
}

ObsInfo::~ObsInfo() = default;

void ObsInfo::validate()
{
}

web::json::value ObsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(filePrefixNameIsSet_) {
        val[utility::conversions::to_string_t("file_prefix_name")] = ModelBase::toJson(filePrefixName_);
    }
    if(isObsCreatedIsSet_) {
        val[utility::conversions::to_string_t("is_obs_created")] = ModelBase::toJson(isObsCreated_);
    }
    if(isAuthorizedBucketIsSet_) {
        val[utility::conversions::to_string_t("is_authorized_bucket")] = ModelBase::toJson(isAuthorizedBucket_);
    }
    if(bucketLifecycleIsSet_) {
        val[utility::conversions::to_string_t("bucket_lifecycle")] = ModelBase::toJson(bucketLifecycle_);
    }
    if(compressTypeIsSet_) {
        val[utility::conversions::to_string_t("compress_type")] = ModelBase::toJson(compressType_);
    }
    if(isSortByServiceIsSet_) {
        val[utility::conversions::to_string_t("is_sort_by_service")] = ModelBase::toJson(isSortByService_);
    }

    return val;
}
bool ObsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePrefixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_obs_created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_obs_created"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsObsCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_authorized_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_authorized_bucket"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAuthorizedBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_lifecycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_lifecycle"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketLifecycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sort_by_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sort_by_service"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSortByService(refVal);
        }
    }
    return ok;
}


std::string ObsInfo::getBucketName() const
{
    return bucketName_;
}

void ObsInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ObsInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ObsInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ObsInfo::getFilePrefixName() const
{
    return filePrefixName_;
}

void ObsInfo::setFilePrefixName(const std::string& value)
{
    filePrefixName_ = value;
    filePrefixNameIsSet_ = true;
}

bool ObsInfo::filePrefixNameIsSet() const
{
    return filePrefixNameIsSet_;
}

void ObsInfo::unsetfilePrefixName()
{
    filePrefixNameIsSet_ = false;
}

bool ObsInfo::isIsObsCreated() const
{
    return isObsCreated_;
}

void ObsInfo::setIsObsCreated(bool value)
{
    isObsCreated_ = value;
    isObsCreatedIsSet_ = true;
}

bool ObsInfo::isObsCreatedIsSet() const
{
    return isObsCreatedIsSet_;
}

void ObsInfo::unsetisObsCreated()
{
    isObsCreatedIsSet_ = false;
}

bool ObsInfo::isIsAuthorizedBucket() const
{
    return isAuthorizedBucket_;
}

void ObsInfo::setIsAuthorizedBucket(bool value)
{
    isAuthorizedBucket_ = value;
    isAuthorizedBucketIsSet_ = true;
}

bool ObsInfo::isAuthorizedBucketIsSet() const
{
    return isAuthorizedBucketIsSet_;
}

void ObsInfo::unsetisAuthorizedBucket()
{
    isAuthorizedBucketIsSet_ = false;
}

int64_t ObsInfo::getBucketLifecycle() const
{
    return bucketLifecycle_;
}

void ObsInfo::setBucketLifecycle(int64_t value)
{
    bucketLifecycle_ = value;
    bucketLifecycleIsSet_ = true;
}

bool ObsInfo::bucketLifecycleIsSet() const
{
    return bucketLifecycleIsSet_;
}

void ObsInfo::unsetbucketLifecycle()
{
    bucketLifecycleIsSet_ = false;
}

std::string ObsInfo::getCompressType() const
{
    return compressType_;
}

void ObsInfo::setCompressType(const std::string& value)
{
    compressType_ = value;
    compressTypeIsSet_ = true;
}

bool ObsInfo::compressTypeIsSet() const
{
    return compressTypeIsSet_;
}

void ObsInfo::unsetcompressType()
{
    compressTypeIsSet_ = false;
}

bool ObsInfo::isIsSortByService() const
{
    return isSortByService_;
}

void ObsInfo::setIsSortByService(bool value)
{
    isSortByService_ = value;
    isSortByServiceIsSet_ = true;
}

bool ObsInfo::isSortByServiceIsSet() const
{
    return isSortByServiceIsSet_;
}

void ObsInfo::unsetisSortByService()
{
    isSortByServiceIsSet_ = false;
}

}
}
}
}
}


