

#include "huaweicloud/rds/v3/model/ScaleProxyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ScaleProxyRequestBody::ScaleProxyRequestBody()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
}

ScaleProxyRequestBody::~ScaleProxyRequestBody() = default;

void ScaleProxyRequestBody::validate()
{
}

web::json::value ScaleProxyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool ScaleProxyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


std::string ScaleProxyRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void ScaleProxyRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ScaleProxyRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ScaleProxyRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

bool ScaleProxyRequestBody::isDelay() const
{
    return delay_;
}

void ScaleProxyRequestBody::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool ScaleProxyRequestBody::delayIsSet() const
{
    return delayIsSet_;
}

void ScaleProxyRequestBody::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


