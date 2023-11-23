

#include "huaweicloud/drs/v5/model/UpdateDriverReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateDriverReq::UpdateDriverReq()
{
    driverName_ = "";
    driverNameIsSet_ = false;
}

UpdateDriverReq::~UpdateDriverReq() = default;

void UpdateDriverReq::validate()
{
}

web::json::value UpdateDriverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNameIsSet_) {
        val[utility::conversions::to_string_t("driver_name")] = ModelBase::toJson(driverName_);
    }

    return val;
}
bool UpdateDriverReq::fromJson(const web::json::value& val)
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


std::string UpdateDriverReq::getDriverName() const
{
    return driverName_;
}

void UpdateDriverReq::setDriverName(const std::string& value)
{
    driverName_ = value;
    driverNameIsSet_ = true;
}

bool UpdateDriverReq::driverNameIsSet() const
{
    return driverNameIsSet_;
}

void UpdateDriverReq::unsetdriverName()
{
    driverNameIsSet_ = false;
}

}
}
}
}
}


