

#include "huaweicloud/ecs/model/NovaListServersDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServersDetailsResponse::NovaListServersDetailsResponse()
{
    serversIsSet_ = false;
    serversLinksIsSet_ = false;
}

NovaListServersDetailsResponse::~NovaListServersDetailsResponse() = default;

void NovaListServersDetailsResponse::validate()
{
}

web::json::value NovaListServersDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(serversLinksIsSet_) {
        val[utility::conversions::to_string_t("servers_links")] = ModelBase::toJson(serversLinks_);
    }

    return val;
}

bool NovaListServersDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServer> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers_links"));
        if(!fieldValue.is_null())
        {
            std::vector<PageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServersLinks(refVal);
        }
    }
    return ok;
}


std::vector<NovaServer>& NovaListServersDetailsResponse::getServers()
{
    return servers_;
}

void NovaListServersDetailsResponse::setServers(const std::vector<NovaServer>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool NovaListServersDetailsResponse::serversIsSet() const
{
    return serversIsSet_;
}

void NovaListServersDetailsResponse::unsetservers()
{
    serversIsSet_ = false;
}

std::vector<PageLink>& NovaListServersDetailsResponse::getServersLinks()
{
    return serversLinks_;
}

void NovaListServersDetailsResponse::setServersLinks(const std::vector<PageLink>& value)
{
    serversLinks_ = value;
    serversLinksIsSet_ = true;
}

bool NovaListServersDetailsResponse::serversLinksIsSet() const
{
    return serversLinksIsSet_;
}

void NovaListServersDetailsResponse::unsetserversLinks()
{
    serversLinksIsSet_ = false;
}

}
}
}
}
}


