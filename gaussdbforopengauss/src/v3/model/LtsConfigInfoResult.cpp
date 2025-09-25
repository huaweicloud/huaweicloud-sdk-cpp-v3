

#include "huaweicloud/gaussdbforopengauss/v3/model/LtsConfigInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LtsConfigInfoResult::LtsConfigInfoResult()
{
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    groupLogType_ = "";
    groupLogTypeIsSet_ = false;
    groupTtlInDays_ = 0;
    groupTtlInDaysIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    streamLogType_ = "";
    streamLogTypeIsSet_ = false;
    streamTtlInDays_ = 0;
    streamTtlInDaysIsSet_ = false;
    streamStructureConfigId_ = "";
    streamStructureConfigIdIsSet_ = false;
    streamIndexConfigId_ = "";
    streamIndexConfigIdIsSet_ = false;
}

LtsConfigInfoResult::~LtsConfigInfoResult() = default;

void LtsConfigInfoResult::validate()
{
}

web::json::value LtsConfigInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(groupLogTypeIsSet_) {
        val[utility::conversions::to_string_t("group_log_type")] = ModelBase::toJson(groupLogType_);
    }
    if(groupTtlInDaysIsSet_) {
        val[utility::conversions::to_string_t("group_ttl_in_days")] = ModelBase::toJson(groupTtlInDays_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(streamLogTypeIsSet_) {
        val[utility::conversions::to_string_t("stream_log_type")] = ModelBase::toJson(streamLogType_);
    }
    if(streamTtlInDaysIsSet_) {
        val[utility::conversions::to_string_t("stream_ttl_in_days")] = ModelBase::toJson(streamTtlInDays_);
    }
    if(streamStructureConfigIdIsSet_) {
        val[utility::conversions::to_string_t("stream_structure_config_id")] = ModelBase::toJson(streamStructureConfigId_);
    }
    if(streamIndexConfigIdIsSet_) {
        val[utility::conversions::to_string_t("stream_index_config_id")] = ModelBase::toJson(streamIndexConfigId_);
    }

    return val;
}
bool LtsConfigInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_structure_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_structure_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamStructureConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_index_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_index_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamIndexConfigId(refVal);
        }
    }
    return ok;
}


std::string LtsConfigInfoResult::getLogGroupName() const
{
    return logGroupName_;
}

void LtsConfigInfoResult::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool LtsConfigInfoResult::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void LtsConfigInfoResult::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string LtsConfigInfoResult::getLogGroupId() const
{
    return logGroupId_;
}

void LtsConfigInfoResult::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsConfigInfoResult::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsConfigInfoResult::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsConfigInfoResult::getGroupLogType() const
{
    return groupLogType_;
}

void LtsConfigInfoResult::setGroupLogType(const std::string& value)
{
    groupLogType_ = value;
    groupLogTypeIsSet_ = true;
}

bool LtsConfigInfoResult::groupLogTypeIsSet() const
{
    return groupLogTypeIsSet_;
}

void LtsConfigInfoResult::unsetgroupLogType()
{
    groupLogTypeIsSet_ = false;
}

int32_t LtsConfigInfoResult::getGroupTtlInDays() const
{
    return groupTtlInDays_;
}

void LtsConfigInfoResult::setGroupTtlInDays(int32_t value)
{
    groupTtlInDays_ = value;
    groupTtlInDaysIsSet_ = true;
}

bool LtsConfigInfoResult::groupTtlInDaysIsSet() const
{
    return groupTtlInDaysIsSet_;
}

void LtsConfigInfoResult::unsetgroupTtlInDays()
{
    groupTtlInDaysIsSet_ = false;
}

std::string LtsConfigInfoResult::getLogStreamName() const
{
    return logStreamName_;
}

void LtsConfigInfoResult::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LtsConfigInfoResult::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LtsConfigInfoResult::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string LtsConfigInfoResult::getLogStreamId() const
{
    return logStreamId_;
}

void LtsConfigInfoResult::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsConfigInfoResult::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsConfigInfoResult::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LtsConfigInfoResult::getStreamLogType() const
{
    return streamLogType_;
}

void LtsConfigInfoResult::setStreamLogType(const std::string& value)
{
    streamLogType_ = value;
    streamLogTypeIsSet_ = true;
}

bool LtsConfigInfoResult::streamLogTypeIsSet() const
{
    return streamLogTypeIsSet_;
}

void LtsConfigInfoResult::unsetstreamLogType()
{
    streamLogTypeIsSet_ = false;
}

int32_t LtsConfigInfoResult::getStreamTtlInDays() const
{
    return streamTtlInDays_;
}

void LtsConfigInfoResult::setStreamTtlInDays(int32_t value)
{
    streamTtlInDays_ = value;
    streamTtlInDaysIsSet_ = true;
}

bool LtsConfigInfoResult::streamTtlInDaysIsSet() const
{
    return streamTtlInDaysIsSet_;
}

void LtsConfigInfoResult::unsetstreamTtlInDays()
{
    streamTtlInDaysIsSet_ = false;
}

std::string LtsConfigInfoResult::getStreamStructureConfigId() const
{
    return streamStructureConfigId_;
}

void LtsConfigInfoResult::setStreamStructureConfigId(const std::string& value)
{
    streamStructureConfigId_ = value;
    streamStructureConfigIdIsSet_ = true;
}

bool LtsConfigInfoResult::streamStructureConfigIdIsSet() const
{
    return streamStructureConfigIdIsSet_;
}

void LtsConfigInfoResult::unsetstreamStructureConfigId()
{
    streamStructureConfigIdIsSet_ = false;
}

std::string LtsConfigInfoResult::getStreamIndexConfigId() const
{
    return streamIndexConfigId_;
}

void LtsConfigInfoResult::setStreamIndexConfigId(const std::string& value)
{
    streamIndexConfigId_ = value;
    streamIndexConfigIdIsSet_ = true;
}

bool LtsConfigInfoResult::streamIndexConfigIdIsSet() const
{
    return streamIndexConfigIdIsSet_;
}

void LtsConfigInfoResult::unsetstreamIndexConfigId()
{
    streamIndexConfigIdIsSet_ = false;
}

}
}
}
}
}


