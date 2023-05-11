

#include "huaweicloud/cts/v3/model/TrackerObsInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




TrackerObsInfo::TrackerObsInfo()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    filePrefixName_ = "";
    filePrefixNameIsSet_ = false;
    isObsCreated_ = false;
    isObsCreatedIsSet_ = false;
    bucketLifecycle_ = 0;
    bucketLifecycleIsSet_ = false;
    compressType_ = "";
    compressTypeIsSet_ = false;
    isSortByService_ = false;
    isSortByServiceIsSet_ = false;
}

TrackerObsInfo::~TrackerObsInfo() = default;

void TrackerObsInfo::validate()
{
}

web::json::value TrackerObsInfo::toJson() const
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

bool TrackerObsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bucket_lifecycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_lifecycle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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


std::string TrackerObsInfo::getBucketName() const
{
    return bucketName_;
}

void TrackerObsInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool TrackerObsInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void TrackerObsInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string TrackerObsInfo::getFilePrefixName() const
{
    return filePrefixName_;
}

void TrackerObsInfo::setFilePrefixName(const std::string& value)
{
    filePrefixName_ = value;
    filePrefixNameIsSet_ = true;
}

bool TrackerObsInfo::filePrefixNameIsSet() const
{
    return filePrefixNameIsSet_;
}

void TrackerObsInfo::unsetfilePrefixName()
{
    filePrefixNameIsSet_ = false;
}

bool TrackerObsInfo::isIsObsCreated() const
{
    return isObsCreated_;
}

void TrackerObsInfo::setIsObsCreated(bool value)
{
    isObsCreated_ = value;
    isObsCreatedIsSet_ = true;
}

bool TrackerObsInfo::isObsCreatedIsSet() const
{
    return isObsCreatedIsSet_;
}

void TrackerObsInfo::unsetisObsCreated()
{
    isObsCreatedIsSet_ = false;
}

int32_t TrackerObsInfo::getBucketLifecycle() const
{
    return bucketLifecycle_;
}

void TrackerObsInfo::setBucketLifecycle(int32_t value)
{
    bucketLifecycle_ = value;
    bucketLifecycleIsSet_ = true;
}

bool TrackerObsInfo::bucketLifecycleIsSet() const
{
    return bucketLifecycleIsSet_;
}

void TrackerObsInfo::unsetbucketLifecycle()
{
    bucketLifecycleIsSet_ = false;
}

std::string TrackerObsInfo::getCompressType() const
{
    return compressType_;
}

void TrackerObsInfo::setCompressType(const std::string& value)
{
    compressType_ = value;
    compressTypeIsSet_ = true;
}

bool TrackerObsInfo::compressTypeIsSet() const
{
    return compressTypeIsSet_;
}

void TrackerObsInfo::unsetcompressType()
{
    compressTypeIsSet_ = false;
}

bool TrackerObsInfo::isIsSortByService() const
{
    return isSortByService_;
}

void TrackerObsInfo::setIsSortByService(bool value)
{
    isSortByService_ = value;
    isSortByServiceIsSet_ = true;
}

bool TrackerObsInfo::isSortByServiceIsSet() const
{
    return isSortByServiceIsSet_;
}

void TrackerObsInfo::unsetisSortByService()
{
    isSortByServiceIsSet_ = false;
}

}
}
}
}
}


