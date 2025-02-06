

#include "huaweicloud/rds/v3/model/ShowAutoUpgradePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoUpgradePolicyResponse::ShowAutoUpgradePolicyResponse()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
}

ShowAutoUpgradePolicyResponse::~ShowAutoUpgradePolicyResponse() = default;

void ShowAutoUpgradePolicyResponse::validate()
{
}

web::json::value ShowAutoUpgradePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }

    return val;
}
bool ShowAutoUpgradePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOption(refVal);
        }
    }
    return ok;
}


bool ShowAutoUpgradePolicyResponse::isSwitchOption() const
{
    return switchOption_;
}

void ShowAutoUpgradePolicyResponse::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ShowAutoUpgradePolicyResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ShowAutoUpgradePolicyResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

}
}
}
}
}


