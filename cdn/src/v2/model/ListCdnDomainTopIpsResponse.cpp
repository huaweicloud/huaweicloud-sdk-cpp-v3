

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopIpsResponse::ListCdnDomainTopIpsResponse()
{
    topIpSummaryIsSet_ = false;
}

ListCdnDomainTopIpsResponse::~ListCdnDomainTopIpsResponse() = default;

void ListCdnDomainTopIpsResponse::validate()
{
}

web::json::value ListCdnDomainTopIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topIpSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_ip_summary")] = ModelBase::toJson(topIpSummary_);
    }

    return val;
}
bool ListCdnDomainTopIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_ip_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_ip_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopIpSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopIpSummary(refVal);
        }
    }
    return ok;
}


std::vector<TopIpSummary>& ListCdnDomainTopIpsResponse::getTopIpSummary()
{
    return topIpSummary_;
}

void ListCdnDomainTopIpsResponse::setTopIpSummary(const std::vector<TopIpSummary>& value)
{
    topIpSummary_ = value;
    topIpSummaryIsSet_ = true;
}

bool ListCdnDomainTopIpsResponse::topIpSummaryIsSet() const
{
    return topIpSummaryIsSet_;
}

void ListCdnDomainTopIpsResponse::unsettopIpSummary()
{
    topIpSummaryIsSet_ = false;
}

}
}
}
}
}


