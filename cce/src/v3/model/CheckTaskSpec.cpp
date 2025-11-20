

#include "huaweicloud/cce/v3/model/CheckTaskSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CheckTaskSpec::CheckTaskSpec()
{
    addonTargetVersion_ = "";
    addonTargetVersionIsSet_ = false;
}

CheckTaskSpec::~CheckTaskSpec() = default;

void CheckTaskSpec::validate()
{
}

web::json::value CheckTaskSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTargetVersionIsSet_) {
        val[utility::conversions::to_string_t("addonTargetVersion")] = ModelBase::toJson(addonTargetVersion_);
    }

    return val;
}
bool CheckTaskSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addonTargetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTargetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTargetVersion(refVal);
        }
    }
    return ok;
}


std::string CheckTaskSpec::getAddonTargetVersion() const
{
    return addonTargetVersion_;
}

void CheckTaskSpec::setAddonTargetVersion(const std::string& value)
{
    addonTargetVersion_ = value;
    addonTargetVersionIsSet_ = true;
}

bool CheckTaskSpec::addonTargetVersionIsSet() const
{
    return addonTargetVersionIsSet_;
}

void CheckTaskSpec::unsetaddonTargetVersion()
{
    addonTargetVersionIsSet_ = false;
}

}
}
}
}
}


