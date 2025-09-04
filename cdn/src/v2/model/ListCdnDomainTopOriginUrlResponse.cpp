

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopOriginUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopOriginUrlResponse::ListCdnDomainTopOriginUrlResponse()
{
    topOriginUrlSummaryIsSet_ = false;
}

ListCdnDomainTopOriginUrlResponse::~ListCdnDomainTopOriginUrlResponse() = default;

void ListCdnDomainTopOriginUrlResponse::validate()
{
}

web::json::value ListCdnDomainTopOriginUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topOriginUrlSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_origin_url_summary")] = ModelBase::toJson(topOriginUrlSummary_);
    }

    return val;
}
bool ListCdnDomainTopOriginUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_origin_url_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_origin_url_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopOriginUrlSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopOriginUrlSummary(refVal);
        }
    }
    return ok;
}


std::vector<TopOriginUrlSummary>& ListCdnDomainTopOriginUrlResponse::getTopOriginUrlSummary()
{
    return topOriginUrlSummary_;
}

void ListCdnDomainTopOriginUrlResponse::setTopOriginUrlSummary(const std::vector<TopOriginUrlSummary>& value)
{
    topOriginUrlSummary_ = value;
    topOriginUrlSummaryIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlResponse::topOriginUrlSummaryIsSet() const
{
    return topOriginUrlSummaryIsSet_;
}

void ListCdnDomainTopOriginUrlResponse::unsettopOriginUrlSummary()
{
    topOriginUrlSummaryIsSet_ = false;
}

}
}
}
}
}


