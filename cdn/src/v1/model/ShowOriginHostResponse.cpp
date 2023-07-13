

#include "huaweicloud/cdn/v1/model/ShowOriginHostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowOriginHostResponse::ShowOriginHostResponse()
{
    originHostIsSet_ = false;
}

ShowOriginHostResponse::~ShowOriginHostResponse() = default;

void ShowOriginHostResponse::validate()
{
}

web::json::value ShowOriginHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originHostIsSet_) {
        val[utility::conversions::to_string_t("origin_host")] = ModelBase::toJson(originHost_);
    }

    return val;
}

bool ShowOriginHostResponse::fromJson(const web::json::value& val)
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

DomainOriginHost ShowOriginHostResponse::getOriginHost() const
{
    return originHost_;
}

void ShowOriginHostResponse::setOriginHost(const DomainOriginHost& value)
{
    originHost_ = value;
    originHostIsSet_ = true;
}

bool ShowOriginHostResponse::originHostIsSet() const
{
    return originHostIsSet_;
}

void ShowOriginHostResponse::unsetoriginHost()
{
    originHostIsSet_ = false;
}

}
}
}
}
}


