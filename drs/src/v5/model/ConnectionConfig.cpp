

#include "huaweicloud/drs/v5/model/ConnectionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ConnectionConfig::ConnectionConfig()
{
    driverName_ = "";
    driverNameIsSet_ = false;
}

ConnectionConfig::~ConnectionConfig() = default;

void ConnectionConfig::validate()
{
}

web::json::value ConnectionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNameIsSet_) {
        val[utility::conversions::to_string_t("driver_name")] = ModelBase::toJson(driverName_);
    }

    return val;
}
bool ConnectionConfig::fromJson(const web::json::value& val)
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


std::string ConnectionConfig::getDriverName() const
{
    return driverName_;
}

void ConnectionConfig::setDriverName(const std::string& value)
{
    driverName_ = value;
    driverNameIsSet_ = true;
}

bool ConnectionConfig::driverNameIsSet() const
{
    return driverNameIsSet_;
}

void ConnectionConfig::unsetdriverName()
{
    driverNameIsSet_ = false;
}

}
}
}
}
}


