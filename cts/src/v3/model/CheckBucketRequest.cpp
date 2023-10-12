

#include "huaweicloud/cts/v3/model/CheckBucketRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CheckBucketRequest::CheckBucketRequest()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketLocation_ = "";
    bucketLocationIsSet_ = false;
    kmsId_ = "";
    kmsIdIsSet_ = false;
    isSupportTraceFilesEncryption_ = false;
    isSupportTraceFilesEncryptionIsSet_ = false;
}

CheckBucketRequest::~CheckBucketRequest() = default;

void CheckBucketRequest::validate()
{
}

web::json::value CheckBucketRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(bucketLocationIsSet_) {
        val[utility::conversions::to_string_t("bucket_location")] = ModelBase::toJson(bucketLocation_);
    }
    if(kmsIdIsSet_) {
        val[utility::conversions::to_string_t("kms_id")] = ModelBase::toJson(kmsId_);
    }
    if(isSupportTraceFilesEncryptionIsSet_) {
        val[utility::conversions::to_string_t("is_support_trace_files_encryption")] = ModelBase::toJson(isSupportTraceFilesEncryption_);
    }

    return val;
}
bool CheckBucketRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bucket_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_trace_files_encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_trace_files_encryption"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportTraceFilesEncryption(refVal);
        }
    }
    return ok;
}


std::string CheckBucketRequest::getBucketName() const
{
    return bucketName_;
}

void CheckBucketRequest::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool CheckBucketRequest::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void CheckBucketRequest::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string CheckBucketRequest::getBucketLocation() const
{
    return bucketLocation_;
}

void CheckBucketRequest::setBucketLocation(const std::string& value)
{
    bucketLocation_ = value;
    bucketLocationIsSet_ = true;
}

bool CheckBucketRequest::bucketLocationIsSet() const
{
    return bucketLocationIsSet_;
}

void CheckBucketRequest::unsetbucketLocation()
{
    bucketLocationIsSet_ = false;
}

std::string CheckBucketRequest::getKmsId() const
{
    return kmsId_;
}

void CheckBucketRequest::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool CheckBucketRequest::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void CheckBucketRequest::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool CheckBucketRequest::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void CheckBucketRequest::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool CheckBucketRequest::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void CheckBucketRequest::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

}
}
}
}
}


