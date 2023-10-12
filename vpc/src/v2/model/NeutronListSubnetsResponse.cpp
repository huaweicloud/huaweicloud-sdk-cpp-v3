

#include "huaweicloud/vpc/v2/model/NeutronListSubnetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSubnetsResponse::NeutronListSubnetsResponse()
{
    subnetsIsSet_ = false;
    subnetsLinksIsSet_ = false;
}

NeutronListSubnetsResponse::~NeutronListSubnetsResponse() = default;

void NeutronListSubnetsResponse::validate()
{
}

web::json::value NeutronListSubnetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }
    if(subnetsLinksIsSet_) {
        val[utility::conversions::to_string_t("subnets_links")] = ModelBase::toJson(subnetsLinks_);
    }

    return val;
}
bool NeutronListSubnetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronSubnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnets_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetsLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronSubnet>& NeutronListSubnetsResponse::getSubnets()
{
    return subnets_;
}

void NeutronListSubnetsResponse::setSubnets(const std::vector<NeutronSubnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool NeutronListSubnetsResponse::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void NeutronListSubnetsResponse::unsetsubnets()
{
    subnetsIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListSubnetsResponse::getSubnetsLinks()
{
    return subnetsLinks_;
}

void NeutronListSubnetsResponse::setSubnetsLinks(const std::vector<NeutronPageLink>& value)
{
    subnetsLinks_ = value;
    subnetsLinksIsSet_ = true;
}

bool NeutronListSubnetsResponse::subnetsLinksIsSet() const
{
    return subnetsLinksIsSet_;
}

void NeutronListSubnetsResponse::unsetsubnetsLinks()
{
    subnetsLinksIsSet_ = false;
}

}
}
}
}
}


