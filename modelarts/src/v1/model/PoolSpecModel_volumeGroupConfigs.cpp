

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_volumeGroupConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_volumeGroupConfigs::PoolSpecModel_volumeGroupConfigs()
{
    volumeGroup_ = "";
    volumeGroupIsSet_ = false;
    dockerThinPool_ = 0;
    dockerThinPoolIsSet_ = false;
    lvmConfigIsSet_ = false;
}

PoolSpecModel_volumeGroupConfigs::~PoolSpecModel_volumeGroupConfigs() = default;

void PoolSpecModel_volumeGroupConfigs::validate()
{
}

web::json::value PoolSpecModel_volumeGroupConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeGroupIsSet_) {
        val[utility::conversions::to_string_t("volumeGroup")] = ModelBase::toJson(volumeGroup_);
    }
    if(dockerThinPoolIsSet_) {
        val[utility::conversions::to_string_t("dockerThinPool")] = ModelBase::toJson(dockerThinPool_);
    }
    if(lvmConfigIsSet_) {
        val[utility::conversions::to_string_t("lvmConfig")] = ModelBase::toJson(lvmConfig_);
    }

    return val;
}
bool PoolSpecModel_volumeGroupConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dockerThinPool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerThinPool"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerThinPool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lvmConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvmConfig"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel_volumeGroupConfigs_lvmConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvmConfig(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_volumeGroupConfigs::getVolumeGroup() const
{
    return volumeGroup_;
}

void PoolSpecModel_volumeGroupConfigs::setVolumeGroup(const std::string& value)
{
    volumeGroup_ = value;
    volumeGroupIsSet_ = true;
}

bool PoolSpecModel_volumeGroupConfigs::volumeGroupIsSet() const
{
    return volumeGroupIsSet_;
}

void PoolSpecModel_volumeGroupConfigs::unsetvolumeGroup()
{
    volumeGroupIsSet_ = false;
}

int32_t PoolSpecModel_volumeGroupConfigs::getDockerThinPool() const
{
    return dockerThinPool_;
}

void PoolSpecModel_volumeGroupConfigs::setDockerThinPool(int32_t value)
{
    dockerThinPool_ = value;
    dockerThinPoolIsSet_ = true;
}

bool PoolSpecModel_volumeGroupConfigs::dockerThinPoolIsSet() const
{
    return dockerThinPoolIsSet_;
}

void PoolSpecModel_volumeGroupConfigs::unsetdockerThinPool()
{
    dockerThinPoolIsSet_ = false;
}

PoolSpecModel_volumeGroupConfigs_lvmConfig PoolSpecModel_volumeGroupConfigs::getLvmConfig() const
{
    return lvmConfig_;
}

void PoolSpecModel_volumeGroupConfigs::setLvmConfig(const PoolSpecModel_volumeGroupConfigs_lvmConfig& value)
{
    lvmConfig_ = value;
    lvmConfigIsSet_ = true;
}

bool PoolSpecModel_volumeGroupConfigs::lvmConfigIsSet() const
{
    return lvmConfigIsSet_;
}

void PoolSpecModel_volumeGroupConfigs::unsetlvmConfig()
{
    lvmConfigIsSet_ = false;
}

}
}
}
}
}


