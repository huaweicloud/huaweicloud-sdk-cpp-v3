

#include "huaweicloud/iotda/v5/model/InitialDesired.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




InitialDesired::InitialDesired()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    desiredIsSet_ = false;
}

InitialDesired::~InitialDesired() = default;

void InitialDesired::validate()
{
}

web::json::value InitialDesired::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(desiredIsSet_) {
        val[utility::conversions::to_string_t("desired")] = ModelBase::toJson(desired_);
    }

    return val;
}
bool InitialDesired::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desired"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesired(refVal);
        }
    }
    return ok;
}


std::string InitialDesired::getServiceId() const
{
    return serviceId_;
}

void InitialDesired::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool InitialDesired::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void InitialDesired::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

Object InitialDesired::getDesired() const
{
    return desired_;
}

void InitialDesired::setDesired(const Object& value)
{
    desired_ = value;
    desiredIsSet_ = true;
}

bool InitialDesired::desiredIsSet() const
{
    return desiredIsSet_;
}

void InitialDesired::unsetdesired()
{
    desiredIsSet_ = false;
}

}
}
}
}
}


