

#include "huaweicloud/cce/v3/model/MigrateServerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateServerConfig::MigrateServerConfig()
{
    rootVolumeIsSet_ = false;
}

MigrateServerConfig::~MigrateServerConfig() = default;

void MigrateServerConfig::validate()
{
}

web::json::value MigrateServerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }

    return val;
}
bool MigrateServerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            MigrateVolumeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    return ok;
}


MigrateVolumeSpec MigrateServerConfig::getRootVolume() const
{
    return rootVolume_;
}

void MigrateServerConfig::setRootVolume(const MigrateVolumeSpec& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool MigrateServerConfig::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void MigrateServerConfig::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

}
}
}
}
}


