

#include "huaweicloud/gaussdb/v3/model/DeleteChLtsConfigRequestBody_log_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteChLtsConfigRequestBody_log_configs::DeleteChLtsConfigRequestBody_log_configs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
}

DeleteChLtsConfigRequestBody_log_configs::~DeleteChLtsConfigRequestBody_log_configs() = default;

void DeleteChLtsConfigRequestBody_log_configs::validate()
{
}

web::json::value DeleteChLtsConfigRequestBody_log_configs::toJson() const
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
bool DeleteChLtsConfigRequestBody_log_configs::fromJson(const web::json::value& val)
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


std::string DeleteChLtsConfigRequestBody_log_configs::getInstanceId() const
{
    return instanceId_;
}

void DeleteChLtsConfigRequestBody_log_configs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteChLtsConfigRequestBody_log_configs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteChLtsConfigRequestBody_log_configs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteChLtsConfigRequestBody_log_configs::getLogType() const
{
    return logType_;
}

void DeleteChLtsConfigRequestBody_log_configs::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool DeleteChLtsConfigRequestBody_log_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void DeleteChLtsConfigRequestBody_log_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


