

#include "huaweicloud/cce/v3/model/UpgradeFeatureGates.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeFeatureGates::UpgradeFeatureGates()
{
    supportUpgradePageV4_ = false;
    supportUpgradePageV4IsSet_ = false;
}

UpgradeFeatureGates::~UpgradeFeatureGates() = default;

void UpgradeFeatureGates::validate()
{
}

web::json::value UpgradeFeatureGates::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportUpgradePageV4IsSet_) {
        val[utility::conversions::to_string_t("supportUpgradePageV4")] = ModelBase::toJson(supportUpgradePageV4_);
    }

    return val;
}
bool UpgradeFeatureGates::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("supportUpgradePageV4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportUpgradePageV4"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportUpgradePageV4(refVal);
        }
    }
    return ok;
}


bool UpgradeFeatureGates::isSupportUpgradePageV4() const
{
    return supportUpgradePageV4_;
}

void UpgradeFeatureGates::setSupportUpgradePageV4(bool value)
{
    supportUpgradePageV4_ = value;
    supportUpgradePageV4IsSet_ = true;
}

bool UpgradeFeatureGates::supportUpgradePageV4IsSet() const
{
    return supportUpgradePageV4IsSet_;
}

void UpgradeFeatureGates::unsetsupportUpgradePageV4()
{
    supportUpgradePageV4IsSet_ = false;
}

}
}
}
}
}


