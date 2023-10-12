

#include "huaweicloud/vpc/v2/model/NeutronListPortsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListPortsResponse::NeutronListPortsResponse()
{
    portsIsSet_ = false;
    portsLinksIsSet_ = false;
}

NeutronListPortsResponse::~NeutronListPortsResponse() = default;

void NeutronListPortsResponse::validate()
{
}

web::json::value NeutronListPortsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }
    if(portsLinksIsSet_) {
        val[utility::conversions::to_string_t("ports_links")] = ModelBase::toJson(portsLinks_);
    }

    return val;
}
bool NeutronListPortsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPort> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortsLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronPort>& NeutronListPortsResponse::getPorts()
{
    return ports_;
}

void NeutronListPortsResponse::setPorts(const std::vector<NeutronPort>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool NeutronListPortsResponse::portsIsSet() const
{
    return portsIsSet_;
}

void NeutronListPortsResponse::unsetports()
{
    portsIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListPortsResponse::getPortsLinks()
{
    return portsLinks_;
}

void NeutronListPortsResponse::setPortsLinks(const std::vector<NeutronPageLink>& value)
{
    portsLinks_ = value;
    portsLinksIsSet_ = true;
}

bool NeutronListPortsResponse::portsLinksIsSet() const
{
    return portsLinksIsSet_;
}

void NeutronListPortsResponse::unsetportsLinks()
{
    portsLinksIsSet_ = false;
}

}
}
}
}
}


