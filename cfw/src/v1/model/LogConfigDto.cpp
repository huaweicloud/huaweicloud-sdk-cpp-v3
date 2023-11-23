

#include "huaweicloud/cfw/v1/model/LogConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




LogConfigDto::LogConfigDto()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    ltsEnable_ = 0;
    ltsEnableIsSet_ = false;
    ltsLogGroupId_ = "";
    ltsLogGroupIdIsSet_ = false;
    ltsAttackLogStreamId_ = "";
    ltsAttackLogStreamIdIsSet_ = false;
    ltsAttackLogStreamEnable_ = 0;
    ltsAttackLogStreamEnableIsSet_ = false;
    ltsAccessLogStreamId_ = "";
    ltsAccessLogStreamIdIsSet_ = false;
    ltsAccessLogStreamEnable_ = 0;
    ltsAccessLogStreamEnableIsSet_ = false;
    ltsFlowLogStreamId_ = "";
    ltsFlowLogStreamIdIsSet_ = false;
    ltsFlowLogStreamEnable_ = 0;
    ltsFlowLogStreamEnableIsSet_ = false;
}

LogConfigDto::~LogConfigDto() = default;

void LogConfigDto::validate()
{
}

web::json::value LogConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(ltsEnableIsSet_) {
        val[utility::conversions::to_string_t("lts_enable")] = ModelBase::toJson(ltsEnable_);
    }
    if(ltsLogGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_log_group_id")] = ModelBase::toJson(ltsLogGroupId_);
    }
    if(ltsAttackLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_attack_log_stream_id")] = ModelBase::toJson(ltsAttackLogStreamId_);
    }
    if(ltsAttackLogStreamEnableIsSet_) {
        val[utility::conversions::to_string_t("lts_attack_log_stream_enable")] = ModelBase::toJson(ltsAttackLogStreamEnable_);
    }
    if(ltsAccessLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_access_log_stream_id")] = ModelBase::toJson(ltsAccessLogStreamId_);
    }
    if(ltsAccessLogStreamEnableIsSet_) {
        val[utility::conversions::to_string_t("lts_access_log_stream_enable")] = ModelBase::toJson(ltsAccessLogStreamEnable_);
    }
    if(ltsFlowLogStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_flow_log_stream_id")] = ModelBase::toJson(ltsFlowLogStreamId_);
    }
    if(ltsFlowLogStreamEnableIsSet_) {
        val[utility::conversions::to_string_t("lts_flow_log_stream_enable")] = ModelBase::toJson(ltsFlowLogStreamEnable_);
    }

    return val;
}
bool LogConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_attack_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_attack_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAttackLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_attack_log_stream_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_attack_log_stream_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAttackLogStreamEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_access_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_access_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAccessLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_access_log_stream_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_access_log_stream_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAccessLogStreamEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_flow_log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_flow_log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsFlowLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_flow_log_stream_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_flow_log_stream_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsFlowLogStreamEnable(refVal);
        }
    }
    return ok;
}


std::string LogConfigDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void LogConfigDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool LogConfigDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void LogConfigDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t LogConfigDto::getLtsEnable() const
{
    return ltsEnable_;
}

void LogConfigDto::setLtsEnable(int32_t value)
{
    ltsEnable_ = value;
    ltsEnableIsSet_ = true;
}

bool LogConfigDto::ltsEnableIsSet() const
{
    return ltsEnableIsSet_;
}

void LogConfigDto::unsetltsEnable()
{
    ltsEnableIsSet_ = false;
}

std::string LogConfigDto::getLtsLogGroupId() const
{
    return ltsLogGroupId_;
}

void LogConfigDto::setLtsLogGroupId(const std::string& value)
{
    ltsLogGroupId_ = value;
    ltsLogGroupIdIsSet_ = true;
}

bool LogConfigDto::ltsLogGroupIdIsSet() const
{
    return ltsLogGroupIdIsSet_;
}

void LogConfigDto::unsetltsLogGroupId()
{
    ltsLogGroupIdIsSet_ = false;
}

std::string LogConfigDto::getLtsAttackLogStreamId() const
{
    return ltsAttackLogStreamId_;
}

void LogConfigDto::setLtsAttackLogStreamId(const std::string& value)
{
    ltsAttackLogStreamId_ = value;
    ltsAttackLogStreamIdIsSet_ = true;
}

bool LogConfigDto::ltsAttackLogStreamIdIsSet() const
{
    return ltsAttackLogStreamIdIsSet_;
}

void LogConfigDto::unsetltsAttackLogStreamId()
{
    ltsAttackLogStreamIdIsSet_ = false;
}

int32_t LogConfigDto::getLtsAttackLogStreamEnable() const
{
    return ltsAttackLogStreamEnable_;
}

void LogConfigDto::setLtsAttackLogStreamEnable(int32_t value)
{
    ltsAttackLogStreamEnable_ = value;
    ltsAttackLogStreamEnableIsSet_ = true;
}

bool LogConfigDto::ltsAttackLogStreamEnableIsSet() const
{
    return ltsAttackLogStreamEnableIsSet_;
}

void LogConfigDto::unsetltsAttackLogStreamEnable()
{
    ltsAttackLogStreamEnableIsSet_ = false;
}

std::string LogConfigDto::getLtsAccessLogStreamId() const
{
    return ltsAccessLogStreamId_;
}

void LogConfigDto::setLtsAccessLogStreamId(const std::string& value)
{
    ltsAccessLogStreamId_ = value;
    ltsAccessLogStreamIdIsSet_ = true;
}

bool LogConfigDto::ltsAccessLogStreamIdIsSet() const
{
    return ltsAccessLogStreamIdIsSet_;
}

void LogConfigDto::unsetltsAccessLogStreamId()
{
    ltsAccessLogStreamIdIsSet_ = false;
}

int32_t LogConfigDto::getLtsAccessLogStreamEnable() const
{
    return ltsAccessLogStreamEnable_;
}

void LogConfigDto::setLtsAccessLogStreamEnable(int32_t value)
{
    ltsAccessLogStreamEnable_ = value;
    ltsAccessLogStreamEnableIsSet_ = true;
}

bool LogConfigDto::ltsAccessLogStreamEnableIsSet() const
{
    return ltsAccessLogStreamEnableIsSet_;
}

void LogConfigDto::unsetltsAccessLogStreamEnable()
{
    ltsAccessLogStreamEnableIsSet_ = false;
}

std::string LogConfigDto::getLtsFlowLogStreamId() const
{
    return ltsFlowLogStreamId_;
}

void LogConfigDto::setLtsFlowLogStreamId(const std::string& value)
{
    ltsFlowLogStreamId_ = value;
    ltsFlowLogStreamIdIsSet_ = true;
}

bool LogConfigDto::ltsFlowLogStreamIdIsSet() const
{
    return ltsFlowLogStreamIdIsSet_;
}

void LogConfigDto::unsetltsFlowLogStreamId()
{
    ltsFlowLogStreamIdIsSet_ = false;
}

int32_t LogConfigDto::getLtsFlowLogStreamEnable() const
{
    return ltsFlowLogStreamEnable_;
}

void LogConfigDto::setLtsFlowLogStreamEnable(int32_t value)
{
    ltsFlowLogStreamEnable_ = value;
    ltsFlowLogStreamEnableIsSet_ = true;
}

bool LogConfigDto::ltsFlowLogStreamEnableIsSet() const
{
    return ltsFlowLogStreamEnableIsSet_;
}

void LogConfigDto::unsetltsFlowLogStreamEnable()
{
    ltsFlowLogStreamEnableIsSet_ = false;
}

}
}
}
}
}


