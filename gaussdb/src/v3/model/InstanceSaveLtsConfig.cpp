

#include "huaweicloud/gaussdb/v3/model/InstanceSaveLtsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceSaveLtsConfig::InstanceSaveLtsConfig()
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

InstanceSaveLtsConfig::~InstanceSaveLtsConfig() = default;

void InstanceSaveLtsConfig::validate()
{
}

web::json::value InstanceSaveLtsConfig::toJson() const
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
bool InstanceSaveLtsConfig::fromJson(const web::json::value& val)
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


std::string InstanceSaveLtsConfig::getInstanceId() const
{
    return instanceId_;
}

void InstanceSaveLtsConfig::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceSaveLtsConfig::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceSaveLtsConfig::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceSaveLtsConfig::getLogType() const
{
    return logType_;
}

void InstanceSaveLtsConfig::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceSaveLtsConfig::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceSaveLtsConfig::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string InstanceSaveLtsConfig::getLtsGroupId() const
{
    return ltsGroupId_;
}

void InstanceSaveLtsConfig::setLtsGroupId(const std::string& value)
{
    ltsGroupId_ = value;
    ltsGroupIdIsSet_ = true;
}

bool InstanceSaveLtsConfig::ltsGroupIdIsSet() const
{
    return ltsGroupIdIsSet_;
}

void InstanceSaveLtsConfig::unsetltsGroupId()
{
    ltsGroupIdIsSet_ = false;
}

std::string InstanceSaveLtsConfig::getLtsStreamId() const
{
    return ltsStreamId_;
}

void InstanceSaveLtsConfig::setLtsStreamId(const std::string& value)
{
    ltsStreamId_ = value;
    ltsStreamIdIsSet_ = true;
}

bool InstanceSaveLtsConfig::ltsStreamIdIsSet() const
{
    return ltsStreamIdIsSet_;
}

void InstanceSaveLtsConfig::unsetltsStreamId()
{
    ltsStreamIdIsSet_ = false;
}

}
}
}
}
}


