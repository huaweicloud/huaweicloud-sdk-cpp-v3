

#include "huaweicloud/lts/v2/model/LogMappingConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogMappingConfig::LogMappingConfig()
{
    sourceLogGroupId_ = "";
    sourceLogGroupIdIsSet_ = false;
    targetLogGroupId_ = "";
    targetLogGroupIdIsSet_ = false;
    targetLogGroupName_ = "";
    targetLogGroupNameIsSet_ = false;
    logStreamConfigIsSet_ = false;
}

LogMappingConfig::~LogMappingConfig() = default;

void LogMappingConfig::validate()
{
}

web::json::value LogMappingConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceLogGroupIdIsSet_) {
        val[utility::conversions::to_string_t("source_log_group_id")] = ModelBase::toJson(sourceLogGroupId_);
    }
    if(targetLogGroupIdIsSet_) {
        val[utility::conversions::to_string_t("target_log_group_id")] = ModelBase::toJson(targetLogGroupId_);
    }
    if(targetLogGroupNameIsSet_) {
        val[utility::conversions::to_string_t("target_log_group_name")] = ModelBase::toJson(targetLogGroupName_);
    }
    if(logStreamConfigIsSet_) {
        val[utility::conversions::to_string_t("log_stream_config")] = ModelBase::toJson(logStreamConfig_);
    }

    return val;
}
bool LogMappingConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_config"));
        if(!fieldValue.is_null())
        {
            std::vector<LogMappingStreamInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamConfig(refVal);
        }
    }
    return ok;
}


std::string LogMappingConfig::getSourceLogGroupId() const
{
    return sourceLogGroupId_;
}

void LogMappingConfig::setSourceLogGroupId(const std::string& value)
{
    sourceLogGroupId_ = value;
    sourceLogGroupIdIsSet_ = true;
}

bool LogMappingConfig::sourceLogGroupIdIsSet() const
{
    return sourceLogGroupIdIsSet_;
}

void LogMappingConfig::unsetsourceLogGroupId()
{
    sourceLogGroupIdIsSet_ = false;
}

std::string LogMappingConfig::getTargetLogGroupId() const
{
    return targetLogGroupId_;
}

void LogMappingConfig::setTargetLogGroupId(const std::string& value)
{
    targetLogGroupId_ = value;
    targetLogGroupIdIsSet_ = true;
}

bool LogMappingConfig::targetLogGroupIdIsSet() const
{
    return targetLogGroupIdIsSet_;
}

void LogMappingConfig::unsettargetLogGroupId()
{
    targetLogGroupIdIsSet_ = false;
}

std::string LogMappingConfig::getTargetLogGroupName() const
{
    return targetLogGroupName_;
}

void LogMappingConfig::setTargetLogGroupName(const std::string& value)
{
    targetLogGroupName_ = value;
    targetLogGroupNameIsSet_ = true;
}

bool LogMappingConfig::targetLogGroupNameIsSet() const
{
    return targetLogGroupNameIsSet_;
}

void LogMappingConfig::unsettargetLogGroupName()
{
    targetLogGroupNameIsSet_ = false;
}

std::vector<LogMappingStreamInfo>& LogMappingConfig::getLogStreamConfig()
{
    return logStreamConfig_;
}

void LogMappingConfig::setLogStreamConfig(const std::vector<LogMappingStreamInfo>& value)
{
    logStreamConfig_ = value;
    logStreamConfigIsSet_ = true;
}

bool LogMappingConfig::logStreamConfigIsSet() const
{
    return logStreamConfigIsSet_;
}

void LogMappingConfig::unsetlogStreamConfig()
{
    logStreamConfigIsSet_ = false;
}

}
}
}
}
}


