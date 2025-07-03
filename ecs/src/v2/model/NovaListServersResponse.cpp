

#include "huaweicloud/ecs/v2/model/NovaListServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListServersResponse::NovaListServersResponse()
{
    serversIsSet_ = false;
    serversLinksIsSet_ = false;
}

NovaListServersResponse::~NovaListServersResponse() = default;

void NovaListServersResponse::validate()
{
}

web::json::value NovaListServersResponse::toJson() const
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
bool NovaListServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaSimpleServer> refVal;
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


std::vector<NovaSimpleServer>& NovaListServersResponse::getServers()
{
    return servers_;
}

void NovaListServersResponse::setServers(const std::vector<NovaSimpleServer>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool NovaListServersResponse::serversIsSet() const
{
    return serversIsSet_;
}

void NovaListServersResponse::unsetservers()
{
    serversIsSet_ = false;
}

std::vector<PageLink>& NovaListServersResponse::getServersLinks()
{
    return serversLinks_;
}

void NovaListServersResponse::setServersLinks(const std::vector<PageLink>& value)
{
    serversLinks_ = value;
    serversLinksIsSet_ = true;
}

bool NovaListServersResponse::serversLinksIsSet() const
{
    return serversLinksIsSet_;
}

void NovaListServersResponse::unsetserversLinks()
{
    serversLinksIsSet_ = false;
}

}
}
}
}
}


