

#include "huaweicloud/iotda/v5/model/UpdateDesireds.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDesireds::UpdateDesireds()
{
    shadowIsSet_ = false;
}

UpdateDesireds::~UpdateDesireds() = default;

void UpdateDesireds::validate()
{
}

web::json::value UpdateDesireds::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shadowIsSet_) {
        val[utility::conversions::to_string_t("shadow")] = ModelBase::toJson(shadow_);
    }

    return val;
}
bool UpdateDesireds::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shadow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shadow"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDesired> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShadow(refVal);
        }
    }
    return ok;
}


std::vector<UpdateDesired>& UpdateDesireds::getShadow()
{
    return shadow_;
}

void UpdateDesireds::setShadow(const std::vector<UpdateDesired>& value)
{
    shadow_ = value;
    shadowIsSet_ = true;
}

bool UpdateDesireds::shadowIsSet() const
{
    return shadowIsSet_;
}

void UpdateDesireds::unsetshadow()
{
    shadowIsSet_ = false;
}

}
}
}
}
}


