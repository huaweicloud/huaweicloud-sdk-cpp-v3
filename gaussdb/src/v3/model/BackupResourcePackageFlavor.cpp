

#include "huaweicloud/gaussdb/v3/model/BackupResourcePackageFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupResourcePackageFlavor::BackupResourcePackageFlavor()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    volume_ = "";
    volumeIsSet_ = false;
}

BackupResourcePackageFlavor::~BackupResourcePackageFlavor() = default;

void BackupResourcePackageFlavor::validate()
{
}

web::json::value BackupResourcePackageFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}
bool BackupResourcePackageFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


std::string BackupResourcePackageFlavor::getSpecCode() const
{
    return specCode_;
}

void BackupResourcePackageFlavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool BackupResourcePackageFlavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void BackupResourcePackageFlavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string BackupResourcePackageFlavor::getVolume() const
{
    return volume_;
}

void BackupResourcePackageFlavor::setVolume(const std::string& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool BackupResourcePackageFlavor::volumeIsSet() const
{
    return volumeIsSet_;
}

void BackupResourcePackageFlavor::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


