

#include "huaweicloud/drs/v5/model/DeleteDriverReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteDriverReq::DeleteDriverReq()
{
    driverNamesIsSet_ = false;
}

DeleteDriverReq::~DeleteDriverReq() = default;

void DeleteDriverReq::validate()
{
}

web::json::value DeleteDriverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNamesIsSet_) {
        val[utility::conversions::to_string_t("driver_names")] = ModelBase::toJson(driverNames_);
    }

    return val;
}
bool DeleteDriverReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& DeleteDriverReq::getDriverNames()
{
    return driverNames_;
}

void DeleteDriverReq::setDriverNames(const std::vector<std::string>& value)
{
    driverNames_ = value;
    driverNamesIsSet_ = true;
}

bool DeleteDriverReq::driverNamesIsSet() const
{
    return driverNamesIsSet_;
}

void DeleteDriverReq::unsetdriverNames()
{
    driverNamesIsSet_ = false;
}

}
}
}
}
}


