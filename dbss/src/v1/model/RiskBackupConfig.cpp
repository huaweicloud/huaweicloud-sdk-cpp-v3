

#include "huaweicloud/dbss/v1/model/RiskBackupConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RiskBackupConfig::RiskBackupConfig()
{
    backupDomainId_ = "";
    backupDomainIdIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketRootPath_ = "";
    bucketRootPathIsSet_ = false;
}

RiskBackupConfig::~RiskBackupConfig() = default;

void RiskBackupConfig::validate()
{
}

web::json::value RiskBackupConfig::toJson() const
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
bool RiskBackupConfig::fromJson(const web::json::value& val)
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


std::string RiskBackupConfig::getBackupDomainId() const
{
    return backupDomainId_;
}

void RiskBackupConfig::setBackupDomainId(const std::string& value)
{
    backupDomainId_ = value;
    backupDomainIdIsSet_ = true;
}

bool RiskBackupConfig::backupDomainIdIsSet() const
{
    return backupDomainIdIsSet_;
}

void RiskBackupConfig::unsetbackupDomainId()
{
    backupDomainIdIsSet_ = false;
}

std::string RiskBackupConfig::getBucketName() const
{
    return bucketName_;
}

void RiskBackupConfig::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool RiskBackupConfig::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void RiskBackupConfig::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string RiskBackupConfig::getBucketRootPath() const
{
    return bucketRootPath_;
}

void RiskBackupConfig::setBucketRootPath(const std::string& value)
{
    bucketRootPath_ = value;
    bucketRootPathIsSet_ = true;
}

bool RiskBackupConfig::bucketRootPathIsSet() const
{
    return bucketRootPathIsSet_;
}

void RiskBackupConfig::unsetbucketRootPath()
{
    bucketRootPathIsSet_ = false;
}

}
}
}
}
}


