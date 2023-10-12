

#include "huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerUpgradeDatabaseVersionReq::CustomerUpgradeDatabaseVersionReq()
{
    delay_ = false;
    delayIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReq::~CustomerUpgradeDatabaseVersionReq() = default;

void CustomerUpgradeDatabaseVersionReq::validate()
{
}

web::json::value CustomerUpgradeDatabaseVersionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool CustomerUpgradeDatabaseVersionReq::fromJson(const web::json::value& val)
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


bool CustomerUpgradeDatabaseVersionReq::isDelay() const
{
    return delay_;
}

void CustomerUpgradeDatabaseVersionReq::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReq::delayIsSet() const
{
    return delayIsSet_;
}

void CustomerUpgradeDatabaseVersionReq::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


