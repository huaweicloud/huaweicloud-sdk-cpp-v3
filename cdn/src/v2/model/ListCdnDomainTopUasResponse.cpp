

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopUasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopUasResponse::ListCdnDomainTopUasResponse()
{
    topUaSummaryIsSet_ = false;
}

ListCdnDomainTopUasResponse::~ListCdnDomainTopUasResponse() = default;

void ListCdnDomainTopUasResponse::validate()
{
}

web::json::value ListCdnDomainTopUasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topUaSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_ua_summary")] = ModelBase::toJson(topUaSummary_);
    }

    return val;
}
bool ListCdnDomainTopUasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_ua_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_ua_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopUaSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopUaSummary(refVal);
        }
    }
    return ok;
}


std::vector<TopUaSummary>& ListCdnDomainTopUasResponse::getTopUaSummary()
{
    return topUaSummary_;
}

void ListCdnDomainTopUasResponse::setTopUaSummary(const std::vector<TopUaSummary>& value)
{
    topUaSummary_ = value;
    topUaSummaryIsSet_ = true;
}

bool ListCdnDomainTopUasResponse::topUaSummaryIsSet() const
{
    return topUaSummaryIsSet_;
}

void ListCdnDomainTopUasResponse::unsettopUaSummary()
{
    topUaSummaryIsSet_ = false;
}

}
}
}
}
}


