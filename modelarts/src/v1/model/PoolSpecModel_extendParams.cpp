

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_extendParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_extendParams::PoolSpecModel_extendParams()
{
    dockerBaseSize_ = "";
    dockerBaseSizeIsSet_ = false;
    volumeGroup_ = "";
    volumeGroupIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
}

PoolSpecModel_extendParams::~PoolSpecModel_extendParams() = default;

void PoolSpecModel_extendParams::validate()
{
}

web::json::value PoolSpecModel_extendParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }
    if(volumeGroupIsSet_) {
        val[utility::conversions::to_string_t("volumeGroup")] = ModelBase::toJson(volumeGroup_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }

    return val;
}
bool PoolSpecModel_extendParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_extendParams::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void PoolSpecModel_extendParams::setDockerBaseSize(const std::string& value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool PoolSpecModel_extendParams::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void PoolSpecModel_extendParams::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

std::string PoolSpecModel_extendParams::getVolumeGroup() const
{
    return volumeGroup_;
}

void PoolSpecModel_extendParams::setVolumeGroup(const std::string& value)
{
    volumeGroup_ = value;
    volumeGroupIsSet_ = true;
}

bool PoolSpecModel_extendParams::volumeGroupIsSet() const
{
    return volumeGroupIsSet_;
}

void PoolSpecModel_extendParams::unsetvolumeGroup()
{
    volumeGroupIsSet_ = false;
}

std::string PoolSpecModel_extendParams::getRuntime() const
{
    return runtime_;
}

void PoolSpecModel_extendParams::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool PoolSpecModel_extendParams::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void PoolSpecModel_extendParams::unsetruntime()
{
    runtimeIsSet_ = false;
}

}
}
}
}
}


