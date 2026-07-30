

#include "huaweicloud/modelarts/v1/model/GetTopologiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetTopologiesResponse::GetTopologiesResponse()
{
    serversIsSet_ = false;
}

GetTopologiesResponse::~GetTopologiesResponse() = default;

void GetTopologiesResponse::validate()
{
}

web::json::value GetTopologiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool GetTopologiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerPhyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}


std::vector<ServerPhyInfo>& GetTopologiesResponse::getServers()
{
    return servers_;
}

void GetTopologiesResponse::setServers(const std::vector<ServerPhyInfo>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool GetTopologiesResponse::serversIsSet() const
{
    return serversIsSet_;
}

void GetTopologiesResponse::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


