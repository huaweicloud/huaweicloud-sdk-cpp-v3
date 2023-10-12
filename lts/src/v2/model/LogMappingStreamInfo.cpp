

#include "huaweicloud/lts/v2/model/LogMappingStreamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogMappingStreamInfo::LogMappingStreamInfo()
{
    sourceLogStreamId_ = "";
    sourceLogStreamIdIsSet_ = false;
    targetLogStreamId_ = "";
    targetLogStreamIdIsSet_ = false;
    targetLogStreamName_ = "";
    targetLogStreamNameIsSet_ = false;
    targetLogStreamEpsId_ = "";
    targetLogStreamEpsIdIsSet_ = false;
    targetLogStreamTtl_ = 0;
    targetLogStreamTtlIsSet_ = false;
}

LogMappingStreamInfo::~LogMappingStreamInfo() = default;

void LogMappingStreamInfo::validate()
{
}

web::json::value LogMappingStreamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("source_log_stream_id")] = ModelBase::toJson(sourceLogStreamId_);
    }
    if(targetLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_id")] = ModelBase::toJson(targetLogStreamId_);
    }
    if(targetLogStreamNameIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_name")] = ModelBase::toJson(targetLogStreamName_);
    }
    if(targetLogStreamEpsIdIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_eps_id")] = ModelBase::toJson(targetLogStreamEpsId_);
    }
    if(targetLogStreamTtlIsSet_) {
        val[utility::conversions::to_string_t("target_log_stream_ttl")] = ModelBase::toJson(targetLogStreamTtl_);
    }

    return val;
}
bool LogMappingStreamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_log_stream_ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_log_stream_ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLogStreamTtl(refVal);
        }
    }
    return ok;
}


std::string LogMappingStreamInfo::getSourceLogStreamId() const
{
    return sourceLogStreamId_;
}

void LogMappingStreamInfo::setSourceLogStreamId(const std::string& value)
{
    sourceLogStreamId_ = value;
    sourceLogStreamIdIsSet_ = true;
}

bool LogMappingStreamInfo::sourceLogStreamIdIsSet() const
{
    return sourceLogStreamIdIsSet_;
}

void LogMappingStreamInfo::unsetsourceLogStreamId()
{
    sourceLogStreamIdIsSet_ = false;
}

std::string LogMappingStreamInfo::getTargetLogStreamId() const
{
    return targetLogStreamId_;
}

void LogMappingStreamInfo::setTargetLogStreamId(const std::string& value)
{
    targetLogStreamId_ = value;
    targetLogStreamIdIsSet_ = true;
}

bool LogMappingStreamInfo::targetLogStreamIdIsSet() const
{
    return targetLogStreamIdIsSet_;
}

void LogMappingStreamInfo::unsettargetLogStreamId()
{
    targetLogStreamIdIsSet_ = false;
}

std::string LogMappingStreamInfo::getTargetLogStreamName() const
{
    return targetLogStreamName_;
}

void LogMappingStreamInfo::setTargetLogStreamName(const std::string& value)
{
    targetLogStreamName_ = value;
    targetLogStreamNameIsSet_ = true;
}

bool LogMappingStreamInfo::targetLogStreamNameIsSet() const
{
    return targetLogStreamNameIsSet_;
}

void LogMappingStreamInfo::unsettargetLogStreamName()
{
    targetLogStreamNameIsSet_ = false;
}

std::string LogMappingStreamInfo::getTargetLogStreamEpsId() const
{
    return targetLogStreamEpsId_;
}

void LogMappingStreamInfo::setTargetLogStreamEpsId(const std::string& value)
{
    targetLogStreamEpsId_ = value;
    targetLogStreamEpsIdIsSet_ = true;
}

bool LogMappingStreamInfo::targetLogStreamEpsIdIsSet() const
{
    return targetLogStreamEpsIdIsSet_;
}

void LogMappingStreamInfo::unsettargetLogStreamEpsId()
{
    targetLogStreamEpsIdIsSet_ = false;
}

int32_t LogMappingStreamInfo::getTargetLogStreamTtl() const
{
    return targetLogStreamTtl_;
}

void LogMappingStreamInfo::setTargetLogStreamTtl(int32_t value)
{
    targetLogStreamTtl_ = value;
    targetLogStreamTtlIsSet_ = true;
}

bool LogMappingStreamInfo::targetLogStreamTtlIsSet() const
{
    return targetLogStreamTtlIsSet_;
}

void LogMappingStreamInfo::unsettargetLogStreamTtl()
{
    targetLogStreamTtlIsSet_ = false;
}

}
}
}
}
}


