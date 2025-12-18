

#include "huaweicloud/cce/v3/model/AutopilotClusterLogConfig_log_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterLogConfig_log_configs::AutopilotClusterLogConfig_log_configs()
{
    name_ = "";
    nameIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

AutopilotClusterLogConfig_log_configs::~AutopilotClusterLogConfig_log_configs() = default;

void AutopilotClusterLogConfig_log_configs::validate()
{
}

web::json::value AutopilotClusterLogConfig_log_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool AutopilotClusterLogConfig_log_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterLogConfig_log_configs::getName() const
{
    return name_;
}

void AutopilotClusterLogConfig_log_configs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AutopilotClusterLogConfig_log_configs::nameIsSet() const
{
    return nameIsSet_;
}

void AutopilotClusterLogConfig_log_configs::unsetname()
{
    nameIsSet_ = false;
}

bool AutopilotClusterLogConfig_log_configs::isEnable() const
{
    return enable_;
}

void AutopilotClusterLogConfig_log_configs::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool AutopilotClusterLogConfig_log_configs::enableIsSet() const
{
    return enableIsSet_;
}

void AutopilotClusterLogConfig_log_configs::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


