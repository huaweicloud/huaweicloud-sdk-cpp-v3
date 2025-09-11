

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceDeleteLtsConfigOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceDeleteLtsConfigOption::InstanceDeleteLtsConfigOption()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
}

InstanceDeleteLtsConfigOption::~InstanceDeleteLtsConfigOption() = default;

void InstanceDeleteLtsConfigOption::validate()
{
}

web::json::value InstanceDeleteLtsConfigOption::toJson() const
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
bool InstanceDeleteLtsConfigOption::fromJson(const web::json::value& val)
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


std::string InstanceDeleteLtsConfigOption::getInstanceId() const
{
    return instanceId_;
}

void InstanceDeleteLtsConfigOption::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceDeleteLtsConfigOption::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceDeleteLtsConfigOption::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceDeleteLtsConfigOption::getLogType() const
{
    return logType_;
}

void InstanceDeleteLtsConfigOption::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool InstanceDeleteLtsConfigOption::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void InstanceDeleteLtsConfigOption::unsetlogType()
{
    logTypeIsSet_ = false;
}

}
}
}
}
}


