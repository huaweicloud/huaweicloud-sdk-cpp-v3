

#include "huaweicloud/vpc/v2/model/NeutronListNetworksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListNetworksResponse::NeutronListNetworksResponse()
{
    networksIsSet_ = false;
    networksLinksIsSet_ = false;
}

NeutronListNetworksResponse::~NeutronListNetworksResponse() = default;

void NeutronListNetworksResponse::validate()
{
}

web::json::value NeutronListNetworksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networksIsSet_) {
        val[utility::conversions::to_string_t("networks")] = ModelBase::toJson(networks_);
    }
    if(networksLinksIsSet_) {
        val[utility::conversions::to_string_t("networks_links")] = ModelBase::toJson(networksLinks_);
    }

    return val;
}
bool NeutronListNetworksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("networks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networks"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronNetwork> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("networks_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networks_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworksLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronNetwork>& NeutronListNetworksResponse::getNetworks()
{
    return networks_;
}

void NeutronListNetworksResponse::setNetworks(const std::vector<NeutronNetwork>& value)
{
    networks_ = value;
    networksIsSet_ = true;
}

bool NeutronListNetworksResponse::networksIsSet() const
{
    return networksIsSet_;
}

void NeutronListNetworksResponse::unsetnetworks()
{
    networksIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListNetworksResponse::getNetworksLinks()
{
    return networksLinks_;
}

void NeutronListNetworksResponse::setNetworksLinks(const std::vector<NeutronPageLink>& value)
{
    networksLinks_ = value;
    networksLinksIsSet_ = true;
}

bool NeutronListNetworksResponse::networksLinksIsSet() const
{
    return networksLinksIsSet_;
}

void NeutronListNetworksResponse::unsetnetworksLinks()
{
    networksLinksIsSet_ = false;
}

}
}
}
}
}


