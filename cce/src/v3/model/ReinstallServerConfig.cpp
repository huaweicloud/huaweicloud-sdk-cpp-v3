

#include "huaweicloud/cce/v3/model/ReinstallServerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallServerConfig::ReinstallServerConfig()
{
    userTagsIsSet_ = false;
    rootVolumeIsSet_ = false;
}

ReinstallServerConfig::~ReinstallServerConfig() = default;

void ReinstallServerConfig::validate()
{
}

web::json::value ReinstallServerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userTagsIsSet_) {
        val[utility::conversions::to_string_t("userTags")] = ModelBase::toJson(userTags_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }

    return val;
}
bool ReinstallServerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userTags"));
        if(!fieldValue.is_null())
        {
            std::vector<UserTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            ReinstallVolumeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    return ok;
}


std::vector<UserTag>& ReinstallServerConfig::getUserTags()
{
    return userTags_;
}

void ReinstallServerConfig::setUserTags(const std::vector<UserTag>& value)
{
    userTags_ = value;
    userTagsIsSet_ = true;
}

bool ReinstallServerConfig::userTagsIsSet() const
{
    return userTagsIsSet_;
}

void ReinstallServerConfig::unsetuserTags()
{
    userTagsIsSet_ = false;
}

ReinstallVolumeSpec ReinstallServerConfig::getRootVolume() const
{
    return rootVolume_;
}

void ReinstallServerConfig::setRootVolume(const ReinstallVolumeSpec& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool ReinstallServerConfig::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void ReinstallServerConfig::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

}
}
}
}
}


