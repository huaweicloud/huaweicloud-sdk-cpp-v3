

#include "huaweicloud/cdn/v1/model/UpdateOriginHostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateOriginHostResponse::UpdateOriginHostResponse()
{
    originHostIsSet_ = false;
}

UpdateOriginHostResponse::~UpdateOriginHostResponse() = default;

void UpdateOriginHostResponse::validate()
{
}

web::json::value UpdateOriginHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originHostIsSet_) {
        val[utility::conversions::to_string_t("origin_host")] = ModelBase::toJson(originHost_);
    }

    return val;
}

bool UpdateOriginHostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_host"));
        if(!fieldValue.is_null())
        {
            DomainOriginHost refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginHost(refVal);
        }
    }
    return ok;
}

DomainOriginHost UpdateOriginHostResponse::getOriginHost() const
{
    return originHost_;
}

void UpdateOriginHostResponse::setOriginHost(const DomainOriginHost& value)
{
    originHost_ = value;
    originHostIsSet_ = true;
}

bool UpdateOriginHostResponse::originHostIsSet() const
{
    return originHostIsSet_;
}

void UpdateOriginHostResponse::unsetoriginHost()
{
    originHostIsSet_ = false;
}

}
}
}
}
}


