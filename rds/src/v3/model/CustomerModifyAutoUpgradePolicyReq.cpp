

#include "huaweicloud/rds/v3/model/CustomerModifyAutoUpgradePolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerModifyAutoUpgradePolicyReq::CustomerModifyAutoUpgradePolicyReq()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
}

CustomerModifyAutoUpgradePolicyReq::~CustomerModifyAutoUpgradePolicyReq() = default;

void CustomerModifyAutoUpgradePolicyReq::validate()
{
}

web::json::value CustomerModifyAutoUpgradePolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }

    return val;
}
bool CustomerModifyAutoUpgradePolicyReq::fromJson(const web::json::value& val)
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


bool CustomerModifyAutoUpgradePolicyReq::isSwitchOption() const
{
    return switchOption_;
}

void CustomerModifyAutoUpgradePolicyReq::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool CustomerModifyAutoUpgradePolicyReq::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void CustomerModifyAutoUpgradePolicyReq::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

}
}
}
}
}


