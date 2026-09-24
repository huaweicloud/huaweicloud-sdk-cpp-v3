

#include "huaweicloud/cbr/v1/model/PolicyTriggerUpdateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyTriggerUpdateReq::PolicyTriggerUpdateReq()
{
    propertiesIsSet_ = false;
}

PolicyTriggerUpdateReq::~PolicyTriggerUpdateReq() = default;

void PolicyTriggerUpdateReq::validate()
{
}

web::json::value PolicyTriggerUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool PolicyTriggerUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            PolicyTriggerPropertiesUpdateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


PolicyTriggerPropertiesUpdateReq PolicyTriggerUpdateReq::getProperties() const
{
    return properties_;
}

void PolicyTriggerUpdateReq::setProperties(const PolicyTriggerPropertiesUpdateReq& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool PolicyTriggerUpdateReq::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void PolicyTriggerUpdateReq::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


