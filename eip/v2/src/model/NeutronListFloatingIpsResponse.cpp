

#include "huaweicloud/eip/model/NeutronListFloatingIpsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronListFloatingIpsResponse::NeutronListFloatingIpsResponse()
{
    floatingipsIsSet_ = false;
    floatingipsLinksIsSet_ = false;
}

NeutronListFloatingIpsResponse::~NeutronListFloatingIpsResponse() = default;

void NeutronListFloatingIpsResponse::validate()
{
}

web::json::value NeutronListFloatingIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipsIsSet_) {
        val[utility::conversions::to_string_t("floatingips")] = ModelBase::toJson(floatingips_);
    }
    if(floatingipsLinksIsSet_) {
        val[utility::conversions::to_string_t("floatingips_links")] = ModelBase::toJson(floatingipsLinks_);
    }

    return val;
}

bool NeutronListFloatingIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingips"));
        if(!fieldValue.is_null())
        {
            std::vector<FloatingIpResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floatingips_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingips_links"));
        if(!fieldValue.is_null())
        {
            std::vector<Pager> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingipsLinks(refVal);
        }
    }
    return ok;
}


std::vector<FloatingIpResp>& NeutronListFloatingIpsResponse::getFloatingips()
{
    return floatingips_;
}

void NeutronListFloatingIpsResponse::setFloatingips(const std::vector<FloatingIpResp>& value)
{
    floatingips_ = value;
    floatingipsIsSet_ = true;
}

bool NeutronListFloatingIpsResponse::floatingipsIsSet() const
{
    return floatingipsIsSet_;
}

void NeutronListFloatingIpsResponse::unsetfloatingips()
{
    floatingipsIsSet_ = false;
}

std::vector<Pager>& NeutronListFloatingIpsResponse::getFloatingipsLinks()
{
    return floatingipsLinks_;
}

void NeutronListFloatingIpsResponse::setFloatingipsLinks(const std::vector<Pager>& value)
{
    floatingipsLinks_ = value;
    floatingipsLinksIsSet_ = true;
}

bool NeutronListFloatingIpsResponse::floatingipsLinksIsSet() const
{
    return floatingipsLinksIsSet_;
}

void NeutronListFloatingIpsResponse::unsetfloatingipsLinks()
{
    floatingipsLinksIsSet_ = false;
}

}
}
}
}
}


