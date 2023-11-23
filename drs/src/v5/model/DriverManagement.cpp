

#include "huaweicloud/drs/v5/model/DriverManagement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DriverManagement::DriverManagement()
{
    driverName_ = "";
    driverNameIsSet_ = false;
}

DriverManagement::~DriverManagement() = default;

void DriverManagement::validate()
{
}

web::json::value DriverManagement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNameIsSet_) {
        val[utility::conversions::to_string_t("driver_name")] = ModelBase::toJson(driverName_);
    }

    return val;
}
bool DriverManagement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("driver_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverName(refVal);
        }
    }
    return ok;
}


std::string DriverManagement::getDriverName() const
{
    return driverName_;
}

void DriverManagement::setDriverName(const std::string& value)
{
    driverName_ = value;
    driverNameIsSet_ = true;
}

bool DriverManagement::driverNameIsSet() const
{
    return driverNameIsSet_;
}

void DriverManagement::unsetdriverName()
{
    driverNameIsSet_ = false;
}

}
}
}
}
}


