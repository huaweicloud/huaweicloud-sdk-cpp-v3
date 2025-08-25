

#include "huaweicloud/cce/v3/model/ReinstallVolumeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallVolumeConfig::ReinstallVolumeConfig()
{
    lvmConfig_ = "";
    lvmConfigIsSet_ = false;
    storageIsSet_ = false;
}

ReinstallVolumeConfig::~ReinstallVolumeConfig() = default;

void ReinstallVolumeConfig::validate()
{
}

web::json::value ReinstallVolumeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lvmConfigIsSet_) {
        val[utility::conversions::to_string_t("lvmConfig")] = ModelBase::toJson(lvmConfig_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }

    return val;
}
bool ReinstallVolumeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lvmConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvmConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvmConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            Storage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    return ok;
}


std::string ReinstallVolumeConfig::getLvmConfig() const
{
    return lvmConfig_;
}

void ReinstallVolumeConfig::setLvmConfig(const std::string& value)
{
    lvmConfig_ = value;
    lvmConfigIsSet_ = true;
}

bool ReinstallVolumeConfig::lvmConfigIsSet() const
{
    return lvmConfigIsSet_;
}

void ReinstallVolumeConfig::unsetlvmConfig()
{
    lvmConfigIsSet_ = false;
}

Storage ReinstallVolumeConfig::getStorage() const
{
    return storage_;
}

void ReinstallVolumeConfig::setStorage(const Storage& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool ReinstallVolumeConfig::storageIsSet() const
{
    return storageIsSet_;
}

void ReinstallVolumeConfig::unsetstorage()
{
    storageIsSet_ = false;
}

}
}
}
}
}


