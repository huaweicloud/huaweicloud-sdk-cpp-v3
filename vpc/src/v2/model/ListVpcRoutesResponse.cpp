

#include "huaweicloud/vpc/v2/model/ListVpcRoutesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcRoutesResponse::ListVpcRoutesResponse()
{
    routesIsSet_ = false;
    routesLinksIsSet_ = false;
}

ListVpcRoutesResponse::~ListVpcRoutesResponse() = default;

void ListVpcRoutesResponse::validate()
{
}

web::json::value ListVpcRoutesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routesIsSet_) {
        val[utility::conversions::to_string_t("routes")] = ModelBase::toJson(routes_);
    }
    if(routesLinksIsSet_) {
        val[utility::conversions::to_string_t("routes_links")] = ModelBase::toJson(routesLinks_);
    }

    return val;
}
bool ListVpcRoutesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcRoute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routes_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routes_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutesLinks(refVal);
        }
    }
    return ok;
}


std::vector<VpcRoute>& ListVpcRoutesResponse::getRoutes()
{
    return routes_;
}

void ListVpcRoutesResponse::setRoutes(const std::vector<VpcRoute>& value)
{
    routes_ = value;
    routesIsSet_ = true;
}

bool ListVpcRoutesResponse::routesIsSet() const
{
    return routesIsSet_;
}

void ListVpcRoutesResponse::unsetroutes()
{
    routesIsSet_ = false;
}

std::vector<NeutronPageLink>& ListVpcRoutesResponse::getRoutesLinks()
{
    return routesLinks_;
}

void ListVpcRoutesResponse::setRoutesLinks(const std::vector<NeutronPageLink>& value)
{
    routesLinks_ = value;
    routesLinksIsSet_ = true;
}

bool ListVpcRoutesResponse::routesLinksIsSet() const
{
    return routesLinksIsSet_;
}

void ListVpcRoutesResponse::unsetroutesLinks()
{
    routesLinksIsSet_ = false;
}

}
}
}
}
}


