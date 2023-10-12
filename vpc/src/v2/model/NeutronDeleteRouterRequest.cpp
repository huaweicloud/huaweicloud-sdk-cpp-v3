

#include "huaweicloud/vpc/v2/model/NeutronDeleteRouterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteRouterRequest::NeutronDeleteRouterRequest()
{
    routerId_ = "";
    routerIdIsSet_ = false;
}

NeutronDeleteRouterRequest::~NeutronDeleteRouterRequest() = default;

void NeutronDeleteRouterRequest::validate()
{
}

web::json::value NeutronDeleteRouterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routerIdIsSet_) {
        val[utility::conversions::to_string_t("router_id")] = ModelBase::toJson(routerId_);
    }

    return val;
}
bool NeutronDeleteRouterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("router_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterId(refVal);
        }
    }
    return ok;
}


std::string NeutronDeleteRouterRequest::getRouterId() const
{
    return routerId_;
}

void NeutronDeleteRouterRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronDeleteRouterRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronDeleteRouterRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

}
}
}
}
}


