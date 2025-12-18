

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowConfigurationResponse::ShowConfigurationResponse()
{
    rateLimit_ = 0;
    rateLimitIsSet_ = false;
    prefetchBlock_ = 0;
    prefetchBlockIsSet_ = false;
    fileSplitSize_ = 0;
    fileSplitSizeIsSet_ = false;
    enableStandbyBackup_ = false;
    enableStandbyBackupIsSet_ = false;
    closeCompression_ = false;
    closeCompressionIsSet_ = false;
    defaultBackupMediaType_ = "";
    defaultBackupMediaTypeIsSet_ = false;
    defaultBackupMethod_ = "";
    defaultBackupMethodIsSet_ = false;
    backupParallelDegree_ = 0;
    backupParallelDegreeIsSet_ = false;
    backupNodeInfoIsSet_ = false;
}

ShowConfigurationResponse::~ShowConfigurationResponse() = default;

void ShowConfigurationResponse::validate()
{
}

web::json::value ShowConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rateLimitIsSet_) {
        val[utility::conversions::to_string_t("rate_limit")] = ModelBase::toJson(rateLimit_);
    }
    if(prefetchBlockIsSet_) {
        val[utility::conversions::to_string_t("prefetch_block")] = ModelBase::toJson(prefetchBlock_);
    }
    if(fileSplitSizeIsSet_) {
        val[utility::conversions::to_string_t("file_split_size")] = ModelBase::toJson(fileSplitSize_);
    }
    if(enableStandbyBackupIsSet_) {
        val[utility::conversions::to_string_t("enable_standby_backup")] = ModelBase::toJson(enableStandbyBackup_);
    }
    if(closeCompressionIsSet_) {
        val[utility::conversions::to_string_t("close_compression")] = ModelBase::toJson(closeCompression_);
    }
    if(defaultBackupMediaTypeIsSet_) {
        val[utility::conversions::to_string_t("default_backup_media_type")] = ModelBase::toJson(defaultBackupMediaType_);
    }
    if(defaultBackupMethodIsSet_) {
        val[utility::conversions::to_string_t("default_backup_method")] = ModelBase::toJson(defaultBackupMethod_);
    }
    if(backupParallelDegreeIsSet_) {
        val[utility::conversions::to_string_t("backup_parallel_degree")] = ModelBase::toJson(backupParallelDegree_);
    }
    if(backupNodeInfoIsSet_) {
        val[utility::conversions::to_string_t("backup_node_info")] = ModelBase::toJson(backupNodeInfo_);
    }

    return val;
}
bool ShowConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rate_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rate_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRateLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefetch_block"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefetch_block"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefetchBlock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_split_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_split_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSplitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_standby_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_standby_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableStandbyBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close_compression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close_compression"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloseCompression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_backup_media_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_backup_media_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBackupMediaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBackupMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_parallel_degree"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_parallel_degree"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupParallelDegree(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_node_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_node_info"));
        if(!fieldValue.is_null())
        {
            BackupNodeInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupNodeInfo(refVal);
        }
    }
    return ok;
}


int32_t ShowConfigurationResponse::getRateLimit() const
{
    return rateLimit_;
}

void ShowConfigurationResponse::setRateLimit(int32_t value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool ShowConfigurationResponse::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void ShowConfigurationResponse::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t ShowConfigurationResponse::getPrefetchBlock() const
{
    return prefetchBlock_;
}

void ShowConfigurationResponse::setPrefetchBlock(int32_t value)
{
    prefetchBlock_ = value;
    prefetchBlockIsSet_ = true;
}

bool ShowConfigurationResponse::prefetchBlockIsSet() const
{
    return prefetchBlockIsSet_;
}

void ShowConfigurationResponse::unsetprefetchBlock()
{
    prefetchBlockIsSet_ = false;
}

int32_t ShowConfigurationResponse::getFileSplitSize() const
{
    return fileSplitSize_;
}

void ShowConfigurationResponse::setFileSplitSize(int32_t value)
{
    fileSplitSize_ = value;
    fileSplitSizeIsSet_ = true;
}

bool ShowConfigurationResponse::fileSplitSizeIsSet() const
{
    return fileSplitSizeIsSet_;
}

void ShowConfigurationResponse::unsetfileSplitSize()
{
    fileSplitSizeIsSet_ = false;
}

bool ShowConfigurationResponse::isEnableStandbyBackup() const
{
    return enableStandbyBackup_;
}

void ShowConfigurationResponse::setEnableStandbyBackup(bool value)
{
    enableStandbyBackup_ = value;
    enableStandbyBackupIsSet_ = true;
}

bool ShowConfigurationResponse::enableStandbyBackupIsSet() const
{
    return enableStandbyBackupIsSet_;
}

void ShowConfigurationResponse::unsetenableStandbyBackup()
{
    enableStandbyBackupIsSet_ = false;
}

bool ShowConfigurationResponse::isCloseCompression() const
{
    return closeCompression_;
}

void ShowConfigurationResponse::setCloseCompression(bool value)
{
    closeCompression_ = value;
    closeCompressionIsSet_ = true;
}

bool ShowConfigurationResponse::closeCompressionIsSet() const
{
    return closeCompressionIsSet_;
}

void ShowConfigurationResponse::unsetcloseCompression()
{
    closeCompressionIsSet_ = false;
}

std::string ShowConfigurationResponse::getDefaultBackupMediaType() const
{
    return defaultBackupMediaType_;
}

void ShowConfigurationResponse::setDefaultBackupMediaType(const std::string& value)
{
    defaultBackupMediaType_ = value;
    defaultBackupMediaTypeIsSet_ = true;
}

bool ShowConfigurationResponse::defaultBackupMediaTypeIsSet() const
{
    return defaultBackupMediaTypeIsSet_;
}

void ShowConfigurationResponse::unsetdefaultBackupMediaType()
{
    defaultBackupMediaTypeIsSet_ = false;
}

std::string ShowConfigurationResponse::getDefaultBackupMethod() const
{
    return defaultBackupMethod_;
}

void ShowConfigurationResponse::setDefaultBackupMethod(const std::string& value)
{
    defaultBackupMethod_ = value;
    defaultBackupMethodIsSet_ = true;
}

bool ShowConfigurationResponse::defaultBackupMethodIsSet() const
{
    return defaultBackupMethodIsSet_;
}

void ShowConfigurationResponse::unsetdefaultBackupMethod()
{
    defaultBackupMethodIsSet_ = false;
}

int32_t ShowConfigurationResponse::getBackupParallelDegree() const
{
    return backupParallelDegree_;
}

void ShowConfigurationResponse::setBackupParallelDegree(int32_t value)
{
    backupParallelDegree_ = value;
    backupParallelDegreeIsSet_ = true;
}

bool ShowConfigurationResponse::backupParallelDegreeIsSet() const
{
    return backupParallelDegreeIsSet_;
}

void ShowConfigurationResponse::unsetbackupParallelDegree()
{
    backupParallelDegreeIsSet_ = false;
}

BackupNodeInfoResult ShowConfigurationResponse::getBackupNodeInfo() const
{
    return backupNodeInfo_;
}

void ShowConfigurationResponse::setBackupNodeInfo(const BackupNodeInfoResult& value)
{
    backupNodeInfo_ = value;
    backupNodeInfoIsSet_ = true;
}

bool ShowConfigurationResponse::backupNodeInfoIsSet() const
{
    return backupNodeInfoIsSet_;
}

void ShowConfigurationResponse::unsetbackupNodeInfo()
{
    backupNodeInfoIsSet_ = false;
}

}
}
}
}
}


