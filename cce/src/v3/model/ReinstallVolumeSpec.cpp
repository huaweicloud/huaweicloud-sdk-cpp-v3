

#include "huaweicloud/cce/v3/model/ReinstallVolumeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallVolumeSpec::ReinstallVolumeSpec()
{
    imageID_ = "";
    imageIDIsSet_ = false;
    cmkID_ = "";
    cmkIDIsSet_ = false;
}

ReinstallVolumeSpec::~ReinstallVolumeSpec() = default;

void ReinstallVolumeSpec::validate()
{
}

web::json::value ReinstallVolumeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIDIsSet_) {
        val[utility::conversions::to_string_t("imageID")] = ModelBase::toJson(imageID_);
    }
    if(cmkIDIsSet_) {
        val[utility::conversions::to_string_t("cmkID")] = ModelBase::toJson(cmkID_);
    }

    return val;
}
bool ReinstallVolumeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("imageID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmkID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmkID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkID(refVal);
        }
    }
    return ok;
}


std::string ReinstallVolumeSpec::getImageID() const
{
    return imageID_;
}

void ReinstallVolumeSpec::setImageID(const std::string& value)
{
    imageID_ = value;
    imageIDIsSet_ = true;
}

bool ReinstallVolumeSpec::imageIDIsSet() const
{
    return imageIDIsSet_;
}

void ReinstallVolumeSpec::unsetimageID()
{
    imageIDIsSet_ = false;
}

std::string ReinstallVolumeSpec::getCmkID() const
{
    return cmkID_;
}

void ReinstallVolumeSpec::setCmkID(const std::string& value)
{
    cmkID_ = value;
    cmkIDIsSet_ = true;
}

bool ReinstallVolumeSpec::cmkIDIsSet() const
{
    return cmkIDIsSet_;
}

void ReinstallVolumeSpec::unsetcmkID()
{
    cmkIDIsSet_ = false;
}

}
}
}
}
}


