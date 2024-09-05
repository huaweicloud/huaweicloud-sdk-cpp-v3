

#include "huaweicloud/ecs/v2/model/ListCloudServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListCloudServersResponse::ListCloudServersResponse()
{
    serversIsSet_ = false;
    serversLinksIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListCloudServersResponse::~ListCloudServersResponse() = default;

void ListCloudServersResponse::validate()
{
}

web::json::value ListCloudServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(serversLinksIsSet_) {
        val[utility::conversions::to_string_t("servers_links")] = ModelBase::toJson(serversLinks_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListCloudServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<CloudServer> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<CloudServer>& ListCloudServersResponse::getServers()
{
    return servers_;
}

void ListCloudServersResponse::setServers(const std::vector<CloudServer>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ListCloudServersResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ListCloudServersResponse::unsetservers()
{
    serversIsSet_ = false;
}

std::vector<PageLink>& ListCloudServersResponse::getServersLinks()
{
    return serversLinks_;
}

void ListCloudServersResponse::setServersLinks(const std::vector<PageLink>& value)
{
    serversLinks_ = value;
    serversLinksIsSet_ = true;
}

bool ListCloudServersResponse::serversLinksIsSet() const
{
    return serversLinksIsSet_;
}

void ListCloudServersResponse::unsetserversLinks()
{
    serversLinksIsSet_ = false;
}

std::string ListCloudServersResponse::getRequestId() const
{
    return requestId_;
}

void ListCloudServersResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListCloudServersResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListCloudServersResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


