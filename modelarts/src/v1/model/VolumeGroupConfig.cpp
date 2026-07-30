

#include "huaweicloud/modelarts/v1/model/VolumeGroupConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




VolumeGroupConfig::VolumeGroupConfig()
{
    volumeGroup_ = "";
    volumeGroupIsSet_ = false;
    dockerThinPool_ = 0;
    dockerThinPoolIsSet_ = false;
    lvmConfigIsSet_ = false;
    typesIsSet_ = false;
}

VolumeGroupConfig::~VolumeGroupConfig() = default;

void VolumeGroupConfig::validate()
{
}

web::json::value VolumeGroupConfig::toJson() const
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
    if(typesIsSet_) {
        val[utility::conversions::to_string_t("types")] = ModelBase::toJson(types_);
    }

    return val;
}
bool VolumeGroupConfig::fromJson(const web::json::value& val)
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
            LvmConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvmConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypes(refVal);
        }
    }
    return ok;
}


std::string VolumeGroupConfig::getVolumeGroup() const
{
    return volumeGroup_;
}

void VolumeGroupConfig::setVolumeGroup(const std::string& value)
{
    volumeGroup_ = value;
    volumeGroupIsSet_ = true;
}

bool VolumeGroupConfig::volumeGroupIsSet() const
{
    return volumeGroupIsSet_;
}

void VolumeGroupConfig::unsetvolumeGroup()
{
    volumeGroupIsSet_ = false;
}

int32_t VolumeGroupConfig::getDockerThinPool() const
{
    return dockerThinPool_;
}

void VolumeGroupConfig::setDockerThinPool(int32_t value)
{
    dockerThinPool_ = value;
    dockerThinPoolIsSet_ = true;
}

bool VolumeGroupConfig::dockerThinPoolIsSet() const
{
    return dockerThinPoolIsSet_;
}

void VolumeGroupConfig::unsetdockerThinPool()
{
    dockerThinPoolIsSet_ = false;
}

LvmConfig VolumeGroupConfig::getLvmConfig() const
{
    return lvmConfig_;
}

void VolumeGroupConfig::setLvmConfig(const LvmConfig& value)
{
    lvmConfig_ = value;
    lvmConfigIsSet_ = true;
}

bool VolumeGroupConfig::lvmConfigIsSet() const
{
    return lvmConfigIsSet_;
}

void VolumeGroupConfig::unsetlvmConfig()
{
    lvmConfigIsSet_ = false;
}

std::vector<std::string>& VolumeGroupConfig::getTypes()
{
    return types_;
}

void VolumeGroupConfig::setTypes(const std::vector<std::string>& value)
{
    types_ = value;
    typesIsSet_ = true;
}

bool VolumeGroupConfig::typesIsSet() const
{
    return typesIsSet_;
}

void VolumeGroupConfig::unsettypes()
{
    typesIsSet_ = false;
}

}
}
}
}
}


