

#include "huaweicloud/cce/v3/model/ReinstallRuntimeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallRuntimeConfig::ReinstallRuntimeConfig()
{
    dockerBaseSize_ = 0;
    dockerBaseSizeIsSet_ = false;
    runtimeIsSet_ = false;
}

ReinstallRuntimeConfig::~ReinstallRuntimeConfig() = default;

void ReinstallRuntimeConfig::validate()
{
}

web::json::value ReinstallRuntimeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }

    return val;
}
bool ReinstallRuntimeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            Runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    return ok;
}


int32_t ReinstallRuntimeConfig::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void ReinstallRuntimeConfig::setDockerBaseSize(int32_t value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool ReinstallRuntimeConfig::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void ReinstallRuntimeConfig::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

Runtime ReinstallRuntimeConfig::getRuntime() const
{
    return runtime_;
}

void ReinstallRuntimeConfig::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ReinstallRuntimeConfig::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ReinstallRuntimeConfig::unsetruntime()
{
    runtimeIsSet_ = false;
}

}
}
}
}
}


