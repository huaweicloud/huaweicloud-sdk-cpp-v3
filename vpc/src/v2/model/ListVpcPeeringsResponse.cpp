

#include "huaweicloud/vpc/v2/model/ListVpcPeeringsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcPeeringsResponse::ListVpcPeeringsResponse()
{
    peeringsIsSet_ = false;
    peeringsLinksIsSet_ = false;
}

ListVpcPeeringsResponse::~ListVpcPeeringsResponse() = default;

void ListVpcPeeringsResponse::validate()
{
}

web::json::value ListVpcPeeringsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringsIsSet_) {
        val[utility::conversions::to_string_t("peerings")] = ModelBase::toJson(peerings_);
    }
    if(peeringsLinksIsSet_) {
        val[utility::conversions::to_string_t("peerings_links")] = ModelBase::toJson(peeringsLinks_);
    }

    return val;
}

bool ListVpcPeeringsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peerings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerings"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcPeering> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeerings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peerings_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peerings_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringsLinks(refVal);
        }
    }
    return ok;
}

std::vector<VpcPeering>& ListVpcPeeringsResponse::getPeerings()
{
    return peerings_;
}

void ListVpcPeeringsResponse::setPeerings(const std::vector<VpcPeering>& value)
{
    peerings_ = value;
    peeringsIsSet_ = true;
}

bool ListVpcPeeringsResponse::peeringsIsSet() const
{
    return peeringsIsSet_;
}

void ListVpcPeeringsResponse::unsetpeerings()
{
    peeringsIsSet_ = false;
}

std::vector<NeutronPageLink>& ListVpcPeeringsResponse::getPeeringsLinks()
{
    return peeringsLinks_;
}

void ListVpcPeeringsResponse::setPeeringsLinks(const std::vector<NeutronPageLink>& value)
{
    peeringsLinks_ = value;
    peeringsLinksIsSet_ = true;
}

bool ListVpcPeeringsResponse::peeringsLinksIsSet() const
{
    return peeringsLinksIsSet_;
}

void ListVpcPeeringsResponse::unsetpeeringsLinks()
{
    peeringsLinksIsSet_ = false;
}

}
}
}
}
}


