

#include "huaweicloud/cdn/v1/model/OriginHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




OriginHostRequest::OriginHostRequest()
{
    originHostIsSet_ = false;
}

OriginHostRequest::~OriginHostRequest() = default;

void OriginHostRequest::validate()
{
}

web::json::value OriginHostRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originHostIsSet_) {
        val[utility::conversions::to_string_t("origin_host")] = ModelBase::toJson(originHost_);
    }

    return val;
}
bool OriginHostRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_host"));
        if(!fieldValue.is_null())
        {
            OriginHostBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginHost(refVal);
        }
    }
    return ok;
}


OriginHostBody OriginHostRequest::getOriginHost() const
{
    return originHost_;
}

void OriginHostRequest::setOriginHost(const OriginHostBody& value)
{
    originHost_ = value;
    originHostIsSet_ = true;
}

bool OriginHostRequest::originHostIsSet() const
{
    return originHostIsSet_;
}

void OriginHostRequest::unsetoriginHost()
{
    originHostIsSet_ = false;
}

}
}
}
}
}


