

#include "huaweicloud/codeartsrepo/v4/model/RepositoryStatisticsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryStatisticsDto::RepositoryStatisticsDto()
{
    commitCount_ = 0;
    commitCountIsSet_ = false;
    storageSize_ = 0.0;
    storageSizeIsSet_ = false;
    repositorySize_ = 0.0;
    repositorySizeIsSet_ = false;
    lfsObjectsSize_ = 0.0;
    lfsObjectsSizeIsSet_ = false;
    tenantRepoSizeLimit_ = 0L;
    tenantRepoSizeLimitIsSet_ = false;
}

RepositoryStatisticsDto::~RepositoryStatisticsDto() = default;

void RepositoryStatisticsDto::validate()
{
}

web::json::value RepositoryStatisticsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commit_count")] = ModelBase::toJson(commitCount_);
    }
    if(storageSizeIsSet_) {
        val[utility::conversions::to_string_t("storage_size")] = ModelBase::toJson(storageSize_);
    }
    if(repositorySizeIsSet_) {
        val[utility::conversions::to_string_t("repository_size")] = ModelBase::toJson(repositorySize_);
    }
    if(lfsObjectsSizeIsSet_) {
        val[utility::conversions::to_string_t("lfs_objects_size")] = ModelBase::toJson(lfsObjectsSize_);
    }
    if(tenantRepoSizeLimitIsSet_) {
        val[utility::conversions::to_string_t("tenant_repo_size_limit")] = ModelBase::toJson(tenantRepoSizeLimit_);
    }

    return val;
}
bool RepositoryStatisticsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lfs_objects_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lfs_objects_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLfsObjectsSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_repo_size_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_repo_size_limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantRepoSizeLimit(refVal);
        }
    }
    return ok;
}


int32_t RepositoryStatisticsDto::getCommitCount() const
{
    return commitCount_;
}

void RepositoryStatisticsDto::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool RepositoryStatisticsDto::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void RepositoryStatisticsDto::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

double RepositoryStatisticsDto::getStorageSize() const
{
    return storageSize_;
}

void RepositoryStatisticsDto::setStorageSize(double value)
{
    storageSize_ = value;
    storageSizeIsSet_ = true;
}

bool RepositoryStatisticsDto::storageSizeIsSet() const
{
    return storageSizeIsSet_;
}

void RepositoryStatisticsDto::unsetstorageSize()
{
    storageSizeIsSet_ = false;
}

double RepositoryStatisticsDto::getRepositorySize() const
{
    return repositorySize_;
}

void RepositoryStatisticsDto::setRepositorySize(double value)
{
    repositorySize_ = value;
    repositorySizeIsSet_ = true;
}

bool RepositoryStatisticsDto::repositorySizeIsSet() const
{
    return repositorySizeIsSet_;
}

void RepositoryStatisticsDto::unsetrepositorySize()
{
    repositorySizeIsSet_ = false;
}

double RepositoryStatisticsDto::getLfsObjectsSize() const
{
    return lfsObjectsSize_;
}

void RepositoryStatisticsDto::setLfsObjectsSize(double value)
{
    lfsObjectsSize_ = value;
    lfsObjectsSizeIsSet_ = true;
}

bool RepositoryStatisticsDto::lfsObjectsSizeIsSet() const
{
    return lfsObjectsSizeIsSet_;
}

void RepositoryStatisticsDto::unsetlfsObjectsSize()
{
    lfsObjectsSizeIsSet_ = false;
}

int64_t RepositoryStatisticsDto::getTenantRepoSizeLimit() const
{
    return tenantRepoSizeLimit_;
}

void RepositoryStatisticsDto::setTenantRepoSizeLimit(int64_t value)
{
    tenantRepoSizeLimit_ = value;
    tenantRepoSizeLimitIsSet_ = true;
}

bool RepositoryStatisticsDto::tenantRepoSizeLimitIsSet() const
{
    return tenantRepoSizeLimitIsSet_;
}

void RepositoryStatisticsDto::unsettenantRepoSizeLimit()
{
    tenantRepoSizeLimitIsSet_ = false;
}

}
}
}
}
}


