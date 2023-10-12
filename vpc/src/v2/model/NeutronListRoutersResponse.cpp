

#include "huaweicloud/vpc/v2/model/NeutronListRoutersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListRoutersResponse::NeutronListRoutersResponse()
{
    routersIsSet_ = false;
    routersLinksIsSet_ = false;
}

NeutronListRoutersResponse::~NeutronListRoutersResponse() = default;

void NeutronListRoutersResponse::validate()
{
}

web::json::value NeutronListRoutersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routersIsSet_) {
        val[utility::conversions::to_string_t("routers")] = ModelBase::toJson(routers_);
    }
    if(routersLinksIsSet_) {
        val[utility::conversions::to_string_t("routers_links")] = ModelBase::toJson(routersLinks_);
    }

    return val;
}
bool NeutronListRoutersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routers"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronRouter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("routers_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routers_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutersLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronRouter>& NeutronListRoutersResponse::getRouters()
{
    return routers_;
}

void NeutronListRoutersResponse::setRouters(const std::vector<NeutronRouter>& value)
{
    routers_ = value;
    routersIsSet_ = true;
}

bool NeutronListRoutersResponse::routersIsSet() const
{
    return routersIsSet_;
}

void NeutronListRoutersResponse::unsetrouters()
{
    routersIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListRoutersResponse::getRoutersLinks()
{
    return routersLinks_;
}

void NeutronListRoutersResponse::setRoutersLinks(const std::vector<NeutronPageLink>& value)
{
    routersLinks_ = value;
    routersLinksIsSet_ = true;
}

bool NeutronListRoutersResponse::routersLinksIsSet() const
{
    return routersLinksIsSet_;
}

void NeutronListRoutersResponse::unsetroutersLinks()
{
    routersLinksIsSet_ = false;
}

}
}
}
}
}


