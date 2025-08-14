

#include "huaweicloud/iotda/v5/model/ListDeviceTunnelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceTunnelsResponse::ListDeviceTunnelsResponse()
{
    tunnelsIsSet_ = false;
}

ListDeviceTunnelsResponse::~ListDeviceTunnelsResponse() = default;

void ListDeviceTunnelsResponse::validate()
{
}

web::json::value ListDeviceTunnelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tunnelsIsSet_) {
        val[utility::conversions::to_string_t("tunnels")] = ModelBase::toJson(tunnels_);
    }

    return val;
}
bool ListDeviceTunnelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tunnels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnels"));
        if(!fieldValue.is_null())
        {
            std::vector<TunnelInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnels(refVal);
        }
    }
    return ok;
}


std::vector<TunnelInfo>& ListDeviceTunnelsResponse::getTunnels()
{
    return tunnels_;
}

void ListDeviceTunnelsResponse::setTunnels(const std::vector<TunnelInfo>& value)
{
    tunnels_ = value;
    tunnelsIsSet_ = true;
}

bool ListDeviceTunnelsResponse::tunnelsIsSet() const
{
    return tunnelsIsSet_;
}

void ListDeviceTunnelsResponse::unsettunnels()
{
    tunnelsIsSet_ = false;
}

}
}
}
}
}


