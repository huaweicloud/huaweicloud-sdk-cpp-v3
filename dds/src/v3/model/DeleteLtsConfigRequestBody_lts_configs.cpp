

#include "huaweicloud/dds/v3/model/DeleteLtsConfigRequestBody_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteLtsConfigRequestBody_lts_configs::DeleteLtsConfigRequestBody_lts_configs()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logTypeIsSet_ = false;
}

DeleteLtsConfigRequestBody_lts_configs::~DeleteLtsConfigRequestBody_lts_configs() = default;

void DeleteLtsConfigRequestBody_lts_configs::validate()
{
}

web::json::value DeleteLtsConfigRequestBody_lts_configs::toJson() const
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
bool DeleteLtsConfigRequestBody_lts_configs::fromJson(const web::json::value& val)
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
            LtsLogType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    return ok;
}


std::string DeleteLtsConfigRequestBody_lts_configs::getInstanceId() const
{
    return instanceId_;
}

void DeleteLtsConfigRequestBody_lts_configs::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteLtsConfigRequestBody_lts_configs::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteLtsConfigRequestBody_lts_configs::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

LtsLogType DeleteLtsConfigRequestBody_lts_configs::getLogType() const
{
    return logType_;
}

void DeleteLtsConfigRequestBody_lts_configs::setLogType(const LtsLogType& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool DeleteLtsConfigRequestBody_lts_configs::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void DeleteLtsConfigRequestBody_lts_configs::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


