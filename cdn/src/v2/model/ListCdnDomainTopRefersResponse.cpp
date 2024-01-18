

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopRefersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopRefersResponse::ListCdnDomainTopRefersResponse()
{
    topReferSummaryIsSet_ = false;
}

ListCdnDomainTopRefersResponse::~ListCdnDomainTopRefersResponse() = default;

void ListCdnDomainTopRefersResponse::validate()
{
}

web::json::value ListCdnDomainTopRefersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topReferSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_refer_summary")] = ModelBase::toJson(topReferSummary_);
    }

    return val;
}
bool ListCdnDomainTopRefersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_refer_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_refer_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopReferSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopReferSummary(refVal);
        }
    }
    return ok;
}


std::vector<TopReferSummary>& ListCdnDomainTopRefersResponse::getTopReferSummary()
{
    return topReferSummary_;
}

void ListCdnDomainTopRefersResponse::setTopReferSummary(const std::vector<TopReferSummary>& value)
{
    topReferSummary_ = value;
    topReferSummaryIsSet_ = true;
}

bool ListCdnDomainTopRefersResponse::topReferSummaryIsSet() const
{
    return topReferSummaryIsSet_;
}

void ListCdnDomainTopRefersResponse::unsettopReferSummary()
{
    topReferSummaryIsSet_ = false;
}

}
}
}
}
}


