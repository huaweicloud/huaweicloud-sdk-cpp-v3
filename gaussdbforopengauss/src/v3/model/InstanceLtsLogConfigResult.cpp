

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceLtsLogConfigResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceLtsLogConfigResult::InstanceLtsLogConfigResult()
{
    instanceIsSet_ = false;
    ltsConfigsIsSet_ = false;
}

InstanceLtsLogConfigResult::~InstanceLtsLogConfigResult() = default;

void InstanceLtsLogConfigResult::validate()
{
}

web::json::value InstanceLtsLogConfigResult::toJson() const
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
bool InstanceLtsLogConfigResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsLogConfigResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    return ok;
}


Object InstanceLtsLogConfigResult::getInstance() const
{
    return instance_;
}

void InstanceLtsLogConfigResult::setInstance(const Object& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool InstanceLtsLogConfigResult::instanceIsSet() const
{
    return instanceIsSet_;
}

void InstanceLtsLogConfigResult::unsetinstance()
{
    instanceIsSet_ = false;
}

std::vector<LtsLogConfigResult>& InstanceLtsLogConfigResult::getLtsConfigs()
{
    return ltsConfigs_;
}

void InstanceLtsLogConfigResult::setLtsConfigs(const std::vector<LtsLogConfigResult>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool InstanceLtsLogConfigResult::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void InstanceLtsLogConfigResult::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

}
}
}
}
}


