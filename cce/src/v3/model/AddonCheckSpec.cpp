

#include "huaweicloud/cce/v3/model/AddonCheckSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonCheckSpec::AddonCheckSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    addonListIsSet_ = false;
}

AddonCheckSpec::~AddonCheckSpec() = default;

void AddonCheckSpec::validate()
{
}

web::json::value AddonCheckSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(addonListIsSet_) {
        val[utility::conversions::to_string_t("addonList")] = ModelBase::toJson(addonList_);
    }

    return val;
}
bool AddonCheckSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonList"));
        if(!fieldValue.is_null())
        {
            std::vector<AddonInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonList(refVal);
        }
    }
    return ok;
}


std::string AddonCheckSpec::getClusterID() const
{
    return clusterID_;
}

void AddonCheckSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool AddonCheckSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void AddonCheckSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::vector<AddonInfo>& AddonCheckSpec::getAddonList()
{
    return addonList_;
}

void AddonCheckSpec::setAddonList(const std::vector<AddonInfo>& value)
{
    addonList_ = value;
    addonListIsSet_ = true;
}

bool AddonCheckSpec::addonListIsSet() const
{
    return addonListIsSet_;
}

void AddonCheckSpec::unsetaddonList()
{
    addonListIsSet_ = false;
}

}
}
}
}
}


