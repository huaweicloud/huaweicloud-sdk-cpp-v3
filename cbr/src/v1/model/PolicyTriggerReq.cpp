

#include "huaweicloud/cbr/v1/model/PolicyTriggerReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyTriggerReq::PolicyTriggerReq()
{
    propertiesIsSet_ = false;
}

PolicyTriggerReq::~PolicyTriggerReq() = default;

void PolicyTriggerReq::validate()
{
}

web::json::value PolicyTriggerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool PolicyTriggerReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            PolicyTriggerPropertiesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


PolicyTriggerPropertiesReq PolicyTriggerReq::getProperties() const
{
    return properties_;
}

void PolicyTriggerReq::setProperties(const PolicyTriggerPropertiesReq& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool PolicyTriggerReq::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void PolicyTriggerReq::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


