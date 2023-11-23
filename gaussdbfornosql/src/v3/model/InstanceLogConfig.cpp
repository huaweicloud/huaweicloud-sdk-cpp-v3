

#include "huaweicloud/gaussdbfornosql/v3/model/InstanceLogConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InstanceLogConfig::InstanceLogConfig()
{
    instanceIsSet_ = false;
    ltsConfigsIsSet_ = false;
}

InstanceLogConfig::~InstanceLogConfig() = default;

void InstanceLogConfig::validate()
{
}

web::json::value InstanceLogConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }

    return val;
}
bool InstanceLogConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            LogInstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceLogConfigDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    return ok;
}


LogInstanceInfo InstanceLogConfig::getInstance() const
{
    return instance_;
}

void InstanceLogConfig::setInstance(const LogInstanceInfo& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool InstanceLogConfig::instanceIsSet() const
{
    return instanceIsSet_;
}

void InstanceLogConfig::unsetinstance()
{
    instanceIsSet_ = false;
}

std::vector<InstanceLogConfigDetail>& InstanceLogConfig::getLtsConfigs()
{
    return ltsConfigs_;
}

void InstanceLogConfig::setLtsConfigs(const std::vector<InstanceLogConfigDetail>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool InstanceLogConfig::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void InstanceLogConfig::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

}
}
}
}
}


