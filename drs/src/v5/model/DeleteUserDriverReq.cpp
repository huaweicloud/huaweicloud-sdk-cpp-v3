

#include "huaweicloud/drs/v5/model/DeleteUserDriverReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteUserDriverReq::DeleteUserDriverReq()
{
    driverType_ = "";
    driverTypeIsSet_ = false;
    driverNamesIsSet_ = false;
}

DeleteUserDriverReq::~DeleteUserDriverReq() = default;

void DeleteUserDriverReq::validate()
{
}

web::json::value DeleteUserDriverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverTypeIsSet_) {
        val[utility::conversions::to_string_t("driver_type")] = ModelBase::toJson(driverType_);
    }
    if(driverNamesIsSet_) {
        val[utility::conversions::to_string_t("driver_names")] = ModelBase::toJson(driverNames_);
    }

    return val;
}
bool DeleteUserDriverReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("driver_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driver_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverNames(refVal);
        }
    }
    return ok;
}


std::string DeleteUserDriverReq::getDriverType() const
{
    return driverType_;
}

void DeleteUserDriverReq::setDriverType(const std::string& value)
{
    driverType_ = value;
    driverTypeIsSet_ = true;
}

bool DeleteUserDriverReq::driverTypeIsSet() const
{
    return driverTypeIsSet_;
}

void DeleteUserDriverReq::unsetdriverType()
{
    driverTypeIsSet_ = false;
}

std::vector<std::string>& DeleteUserDriverReq::getDriverNames()
{
    return driverNames_;
}

void DeleteUserDriverReq::setDriverNames(const std::vector<std::string>& value)
{
    driverNames_ = value;
    driverNamesIsSet_ = true;
}

bool DeleteUserDriverReq::driverNamesIsSet() const
{
    return driverNamesIsSet_;
}

void DeleteUserDriverReq::unsetdriverNames()
{
    driverNamesIsSet_ = false;
}

}
}
}
}
}


