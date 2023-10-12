

#include "huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReqNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerUpgradeDatabaseVersionReqNew::CustomerUpgradeDatabaseVersionReqNew()
{
    isDelayed_ = false;
    isDelayedIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReqNew::~CustomerUpgradeDatabaseVersionReqNew() = default;

void CustomerUpgradeDatabaseVersionReqNew::validate()
{
}

web::json::value CustomerUpgradeDatabaseVersionReqNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDelayedIsSet_) {
        val[utility::conversions::to_string_t("is_delayed")] = ModelBase::toJson(isDelayed_);
    }

    return val;
}
bool CustomerUpgradeDatabaseVersionReqNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_delayed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delayed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelayed(refVal);
        }
    }
    return ok;
}


bool CustomerUpgradeDatabaseVersionReqNew::isIsDelayed() const
{
    return isDelayed_;
}

void CustomerUpgradeDatabaseVersionReqNew::setIsDelayed(bool value)
{
    isDelayed_ = value;
    isDelayedIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReqNew::isDelayedIsSet() const
{
    return isDelayedIsSet_;
}

void CustomerUpgradeDatabaseVersionReqNew::unsetisDelayed()
{
    isDelayedIsSet_ = false;
}

}
}
}
}
}


