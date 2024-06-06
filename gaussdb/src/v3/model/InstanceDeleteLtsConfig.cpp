

#include "huaweicloud/gaussdb/v3/model/InstanceDeleteLtsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceDeleteLtsConfig::InstanceDeleteLtsConfig()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
}

InstanceDeleteLtsConfig::~InstanceDeleteLtsConfig() = default;

void InstanceDeleteLtsConfig::validate()
{
}

web::json::value InstanceDeleteLtsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }

    return val;
}
bool InstanceDeleteLtsConfig::fromJson(const web::json::value& val)
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
    return ok;
}


std::string InstanceDeleteLtsConfig::getInstanceId() const
{
    return instanceId_;
}

void InstanceDeleteLtsConfig::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceDeleteLtsConfig::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceDeleteLtsConfig::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceDeleteLtsConfig::getLogType() const
{
    return logType_;
}

void InstanceDeleteLtsConfig::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceDeleteLtsConfig::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceDeleteLtsConfig::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


