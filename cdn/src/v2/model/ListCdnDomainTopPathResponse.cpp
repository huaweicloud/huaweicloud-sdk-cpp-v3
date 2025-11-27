

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopPathResponse::ListCdnDomainTopPathResponse()
{
    topPathSummaryIsSet_ = false;
}

ListCdnDomainTopPathResponse::~ListCdnDomainTopPathResponse() = default;

void ListCdnDomainTopPathResponse::validate()
{
}

web::json::value ListCdnDomainTopPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topPathSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_path_summary")] = ModelBase::toJson(topPathSummary_);
    }

    return val;
}
bool ListCdnDomainTopPathResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_path_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_path_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopPathSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopPathSummary(refVal);
        }
    }
    return ok;
}


std::vector<TopPathSummary>& ListCdnDomainTopPathResponse::getTopPathSummary()
{
    return topPathSummary_;
}

void ListCdnDomainTopPathResponse::setTopPathSummary(const std::vector<TopPathSummary>& value)
{
    topPathSummary_ = value;
    topPathSummaryIsSet_ = true;
}

bool ListCdnDomainTopPathResponse::topPathSummaryIsSet() const
{
    return topPathSummaryIsSet_;
}

void ListCdnDomainTopPathResponse::unsettopPathSummary()
{
    topPathSummaryIsSet_ = false;
}

}
}
}
}
}


