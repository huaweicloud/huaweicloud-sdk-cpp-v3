

#include "huaweicloud/dbss/v1/model/ShowBackupRiskBucketPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowBackupRiskBucketPathResponse::ShowBackupRiskBucketPathResponse()
{
    backupDomainId_ = "";
    backupDomainIdIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketRootPath_ = "";
    bucketRootPathIsSet_ = false;
}

ShowBackupRiskBucketPathResponse::~ShowBackupRiskBucketPathResponse() = default;

void ShowBackupRiskBucketPathResponse::validate()
{
}

web::json::value ShowBackupRiskBucketPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupDomainIdIsSet_) {
        val[utility::conversions::to_string_t("backup_domain_id")] = ModelBase::toJson(backupDomainId_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(bucketRootPathIsSet_) {
        val[utility::conversions::to_string_t("bucket_root_path")] = ModelBase::toJson(bucketRootPath_);
    }

    return val;
}
bool ShowBackupRiskBucketPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bucket_root_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_root_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketRootPath(refVal);
        }
    }
    return ok;
}


std::string ShowBackupRiskBucketPathResponse::getBackupDomainId() const
{
    return backupDomainId_;
}

void ShowBackupRiskBucketPathResponse::setBackupDomainId(const std::string& value)
{
    backupDomainId_ = value;
    backupDomainIdIsSet_ = true;
}

bool ShowBackupRiskBucketPathResponse::backupDomainIdIsSet() const
{
    return backupDomainIdIsSet_;
}

void ShowBackupRiskBucketPathResponse::unsetbackupDomainId()
{
    backupDomainIdIsSet_ = false;
}

std::string ShowBackupRiskBucketPathResponse::getBucketName() const
{
    return bucketName_;
}

void ShowBackupRiskBucketPathResponse::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ShowBackupRiskBucketPathResponse::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ShowBackupRiskBucketPathResponse::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ShowBackupRiskBucketPathResponse::getBucketRootPath() const
{
    return bucketRootPath_;
}

void ShowBackupRiskBucketPathResponse::setBucketRootPath(const std::string& value)
{
    bucketRootPath_ = value;
    bucketRootPathIsSet_ = true;
}

bool ShowBackupRiskBucketPathResponse::bucketRootPathIsSet() const
{
    return bucketRootPathIsSet_;
}

void ShowBackupRiskBucketPathResponse::unsetbucketRootPath()
{
    bucketRootPathIsSet_ = false;
}

}
}
}
}
}


