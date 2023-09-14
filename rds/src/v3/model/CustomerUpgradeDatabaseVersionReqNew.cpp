

#include "huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReqNew.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerUpgradeDatabaseVersionReqNew::CustomerUpgradeDatabaseVersionReqNew()
{
    delay_ = false;
    delayIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReqNew::~CustomerUpgradeDatabaseVersionReqNew() = default;

void CustomerUpgradeDatabaseVersionReqNew::validate()
{
}

web::json::value CustomerUpgradeDatabaseVersionReqNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}

bool CustomerUpgradeDatabaseVersionReqNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}

bool CustomerUpgradeDatabaseVersionReqNew::isDelay() const
{
    return delay_;
}

void CustomerUpgradeDatabaseVersionReqNew::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReqNew::delayIsSet() const
{
    return delayIsSet_;
}

void CustomerUpgradeDatabaseVersionReqNew::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


