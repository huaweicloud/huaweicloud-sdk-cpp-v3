

#include "huaweicloud/rds/v3/model/AddLogConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddLogConfigs::AddLogConfigs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    ltsGroupId_ = "";
    ltsGroupIdIsSet_ = false;
    ltsStreamId_ = "";
    ltsStreamIdIsSet_ = false;
}

AddLogConfigs::~AddLogConfigs() = default;

void AddLogConfigs::validate()
{
}

web::json::value AddLogConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(ltsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("lts_group_id")] = ModelBase::toJson(ltsGroupId_);
    }
    if(ltsStreamIdIsSet_) {
        val[utility::conversions::to_string_t("lts_stream_id")] = ModelBase::toJson(ltsStreamId_);
    }

    return val;
}
bool AddLogConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStreamId(refVal);
        }
    }
    return ok;
}


std::string AddLogConfigs::getInstanceId() const
{
    return instanceId_;
}

void AddLogConfigs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddLogConfigs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddLogConfigs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AddLogConfigs::getLogType() const
{
    return logType_;
}

void AddLogConfigs::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool AddLogConfigs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void AddLogConfigs::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string AddLogConfigs::getLtsGroupId() const
{
    return ltsGroupId_;
}

void AddLogConfigs::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool AddLogConfigs::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void AddLogConfigs::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string AddLogConfigs::getLtsStreamId() const
{
    return ltsStreamId_;
}

void AddLogConfigs::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool AddLogConfigs::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void AddLogConfigs::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


