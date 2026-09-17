

#include "huaweicloud/cce/v3/model/VolumeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




VolumeConfig::VolumeConfig()
{
    volumeResetPolicy_ = "";
    volumeResetPolicyIsSet_ = false;
}

VolumeConfig::~VolumeConfig() = default;

void VolumeConfig::validate()
{
}

web::json::value VolumeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeResetPolicyIsSet_) {
        val[utility::conversions::to_string_t("volumeResetPolicy")] = ModelBase::toJson(volumeResetPolicy_);
    }

    return val;
}
bool VolumeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeResetPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeResetPolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeResetPolicy(refVal);
        }
    }
    return ok;
}


std::string VolumeConfig::getVolumeResetPolicy() const
{
    return volumeResetPolicy_;
}

void VolumeConfig::setVolumeResetPolicy(const std::string& value)
{
    volumeResetPolicy_ = value;
    volumeResetPolicyIsSet_ = true;
}

bool VolumeConfig::volumeResetPolicyIsSet() const
{
    return volumeResetPolicyIsSet_;
}

void VolumeConfig::unsetvolumeResetPolicy()
{
    volumeResetPolicyIsSet_ = false;
}

}
}
}
}
}


