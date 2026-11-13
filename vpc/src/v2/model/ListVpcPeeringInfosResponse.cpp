

#include "huaweicloud/vpc/v2/model/ListVpcPeeringInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcPeeringInfosResponse::ListVpcPeeringInfosResponse()
{
    peeringInfosIsSet_ = false;
    peeringInfosLinksIsSet_ = false;
}

ListVpcPeeringInfosResponse::~ListVpcPeeringInfosResponse() = default;

void ListVpcPeeringInfosResponse::validate()
{
}

web::json::value ListVpcPeeringInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringInfosIsSet_) {
        val[utility::conversions::to_string_t("peering_infos")] = ModelBase::toJson(peeringInfos_);
    }
    if(peeringInfosLinksIsSet_) {
        val[utility::conversions::to_string_t("peering_infos_links")] = ModelBase::toJson(peeringInfosLinks_);
    }

    return val;
}
bool ListVpcPeeringInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peering_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcPeering> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peering_infos_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering_infos_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringInfosLinks(refVal);
        }
    }
    return ok;
}


std::vector<VpcPeering>& ListVpcPeeringInfosResponse::getPeeringInfos()
{
    return peeringInfos_;
}

void ListVpcPeeringInfosResponse::setPeeringInfos(const std::vector<VpcPeering>& value)
{
    peeringInfos_ = value;
    peeringInfosIsSet_ = true;
}

bool ListVpcPeeringInfosResponse::peeringInfosIsSet() const
{
    return peeringInfosIsSet_;
}

void ListVpcPeeringInfosResponse::unsetpeeringInfos()
{
    peeringInfosIsSet_ = false;
}

std::vector<NeutronPageLink>& ListVpcPeeringInfosResponse::getPeeringInfosLinks()
{
    return peeringInfosLinks_;
}

void ListVpcPeeringInfosResponse::setPeeringInfosLinks(const std::vector<NeutronPageLink>& value)
{
    peeringInfosLinks_ = value;
    peeringInfosLinksIsSet_ = true;
}

bool ListVpcPeeringInfosResponse::peeringInfosLinksIsSet() const
{
    return peeringInfosLinksIsSet_;
}

void ListVpcPeeringInfosResponse::unsetpeeringInfosLinks()
{
    peeringInfosLinksIsSet_ = false;
}

}
}
}
}
}


