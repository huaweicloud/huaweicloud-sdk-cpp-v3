

#include "huaweicloud/rds/v3/model/DeleteLogConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteLogConfigs::DeleteLogConfigs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
}

DeleteLogConfigs::~DeleteLogConfigs() = default;

void DeleteLogConfigs::validate()
{
}

web::json::value DeleteLogConfigs::toJson() const
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
bool DeleteLogConfigs::fromJson(const web::json::value& val)
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


std::string DeleteLogConfigs::getInstanceId() const
{
    return instanceId_;
}

void DeleteLogConfigs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteLogConfigs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteLogConfigs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteLogConfigs::getLogType() const
{
    return logType_;
}

void DeleteLogConfigs::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool DeleteLogConfigs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void DeleteLogConfigs::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


