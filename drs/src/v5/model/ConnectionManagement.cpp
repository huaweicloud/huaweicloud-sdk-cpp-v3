

#include "huaweicloud/drs/v5/model/ConnectionManagement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ConnectionManagement::ConnectionManagement()
{
    driverManagementIsSet_ = false;
}

ConnectionManagement::~ConnectionManagement() = default;

void ConnectionManagement::validate()
{
}

web::json::value ConnectionManagement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverManagementIsSet_) {
        val[utility::conversions::to_string_t("driver_management")] = ModelBase::toJson(driverManagement_);
    }

    return val;
}
bool ConnectionManagement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("driver_management"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_management"));
        if(!fieldValue.is_null())
        {
            DriverManagement refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverManagement(refVal);
        }
    }
    return ok;
}


DriverManagement ConnectionManagement::getDriverManagement() const
{
    return driverManagement_;
}

void ConnectionManagement::setDriverManagement(const DriverManagement& value)
{
    driverManagement_ = value;
    driverManagementIsSet_ = true;
}

bool ConnectionManagement::driverManagementIsSet() const
{
    return driverManagementIsSet_;
}

void ConnectionManagement::unsetdriverManagement()
{
    driverManagementIsSet_ = false;
}

}
}
}
}
}


