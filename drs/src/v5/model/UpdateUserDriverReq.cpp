

#include "huaweicloud/drs/v5/model/UpdateUserDriverReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateUserDriverReq::UpdateUserDriverReq()
{
    driverName_ = "";
    driverNameIsSet_ = false;
    driverType_ = "";
    driverTypeIsSet_ = false;
}

UpdateUserDriverReq::~UpdateUserDriverReq() = default;

void UpdateUserDriverReq::validate()
{
}

web::json::value UpdateUserDriverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driverNameIsSet_) {
        val[utility::conversions::to_string_t("driver_name")] = ModelBase::toJson(driverName_);
    }
    if(driverTypeIsSet_) {
        val[utility::conversions::to_string_t("driver_type")] = ModelBase::toJson(driverType_);
    }

    return val;
}
bool UpdateUserDriverReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("driver_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverType(refVal);
        }
    }
    return ok;
}


std::string UpdateUserDriverReq::getDriverName() const
{
    return driverName_;
}

void UpdateUserDriverReq::setDriverName(const std::string& value)
{
    driverName_ = value;
    driverNameIsSet_ = true;
}

bool UpdateUserDriverReq::driverNameIsSet() const
{
    return driverNameIsSet_;
}

void UpdateUserDriverReq::unsetdriverName()
{
    driverNameIsSet_ = false;
}

std::string UpdateUserDriverReq::getDriverType() const
{
    return driverType_;
}

void UpdateUserDriverReq::setDriverType(const std::string& value)
{
    driverType_ = value;
    driverTypeIsSet_ = true;
}

bool UpdateUserDriverReq::driverTypeIsSet() const
{
    return driverTypeIsSet_;
}

void UpdateUserDriverReq::unsetdriverType()
{
    driverTypeIsSet_ = false;
}

}
}
}
}
}


