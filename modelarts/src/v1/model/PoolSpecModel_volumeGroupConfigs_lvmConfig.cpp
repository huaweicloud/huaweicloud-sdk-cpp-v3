

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_volumeGroupConfigs_lvmConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_volumeGroupConfigs_lvmConfig::PoolSpecModel_volumeGroupConfigs_lvmConfig()
{
    lvType_ = "";
    lvTypeIsSet_ = false;
}

PoolSpecModel_volumeGroupConfigs_lvmConfig::~PoolSpecModel_volumeGroupConfigs_lvmConfig() = default;

void PoolSpecModel_volumeGroupConfigs_lvmConfig::validate()
{
}

web::json::value PoolSpecModel_volumeGroupConfigs_lvmConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lvTypeIsSet_) {
        val[utility::conversions::to_string_t("lvType")] = ModelBase::toJson(lvType_);
    }

    return val;
}
bool PoolSpecModel_volumeGroupConfigs_lvmConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lvType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvType(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_volumeGroupConfigs_lvmConfig::getLvType() const
{
    return lvType_;
}

void PoolSpecModel_volumeGroupConfigs_lvmConfig::setLvType(const std::string& value)
{
    lvType_ = value;
    lvTypeIsSet_ = true;
}

bool PoolSpecModel_volumeGroupConfigs_lvmConfig::lvTypeIsSet() const
{
    return lvTypeIsSet_;
}

void PoolSpecModel_volumeGroupConfigs_lvmConfig::unsetlvType()
{
    lvTypeIsSet_ = false;
}

}
}
}
}
}


