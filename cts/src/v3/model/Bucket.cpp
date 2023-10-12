

#include "huaweicloud/cts/v3/model/Bucket.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Bucket::Bucket()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketLocation_ = "";
    bucketLocationIsSet_ = false;
    kmsId_ = "";
    kmsIdIsSet_ = false;
    isSupportTraceFilesEncryption_ = false;
    isSupportTraceFilesEncryptionIsSet_ = false;
    checkBucketResponseIsSet_ = false;
}

Bucket::~Bucket() = default;

void Bucket::validate()
{
}

web::json::value Bucket::toJson() const
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
    if(checkBucketResponseIsSet_) {
        val[utility::conversions::to_string_t("check_bucket_response")] = ModelBase::toJson(checkBucketResponse_);
    }

    return val;
}
bool Bucket::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("check_bucket_response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_bucket_response"));
        if(!fieldValue.is_null())
        {
            CheckBucketResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckBucketResponse(refVal);
        }
    }
    return ok;
}


std::string Bucket::getBucketName() const
{
    return bucketName_;
}

void Bucket::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool Bucket::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void Bucket::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string Bucket::getBucketLocation() const
{
    return bucketLocation_;
}

void Bucket::setBucketLocation(const std::string& value)
{
    bucketLocation_ = value;
    bucketLocationIsSet_ = true;
}

bool Bucket::bucketLocationIsSet() const
{
    return bucketLocationIsSet_;
}

void Bucket::unsetbucketLocation()
{
    bucketLocationIsSet_ = false;
}

std::string Bucket::getKmsId() const
{
    return kmsId_;
}

void Bucket::setKmsId(const std::string& value)
{
    kmsId_ = value;
    kmsIdIsSet_ = true;
}

bool Bucket::kmsIdIsSet() const
{
    return kmsIdIsSet_;
}

void Bucket::unsetkmsId()
{
    kmsIdIsSet_ = false;
}

bool Bucket::isIsSupportTraceFilesEncryption() const
{
    return isSupportTraceFilesEncryption_;
}

void Bucket::setIsSupportTraceFilesEncryption(bool value)
{
    isSupportTraceFilesEncryption_ = value;
    isSupportTraceFilesEncryptionIsSet_ = true;
}

bool Bucket::isSupportTraceFilesEncryptionIsSet() const
{
    return isSupportTraceFilesEncryptionIsSet_;
}

void Bucket::unsetisSupportTraceFilesEncryption()
{
    isSupportTraceFilesEncryptionIsSet_ = false;
}

CheckBucketResponse Bucket::getCheckBucketResponse() const
{
    return checkBucketResponse_;
}

void Bucket::setCheckBucketResponse(const CheckBucketResponse& value)
{
    checkBucketResponse_ = value;
    checkBucketResponseIsSet_ = true;
}

bool Bucket::checkBucketResponseIsSet() const
{
    return checkBucketResponseIsSet_;
}

void Bucket::unsetcheckBucketResponse()
{
    checkBucketResponseIsSet_ = false;
}

}
}
}
}
}


