

#include "huaweicloud/vod/v1/model/ListTopStatisticsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTopStatisticsResponse::ListTopStatisticsResponse()
{
    topUrlsIsSet_ = false;
}

ListTopStatisticsResponse::~ListTopStatisticsResponse() = default;

void ListTopStatisticsResponse::validate()
{
}

web::json::value ListTopStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topUrlsIsSet_) {
        val[utility::conversions::to_string_t("top_urls")] = ModelBase::toJson(topUrls_);
    }

    return val;
}

bool ListTopStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<TopUrl> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopUrls(refVal);
        }
    }
    return ok;
}


std::vector<TopUrl>& ListTopStatisticsResponse::getTopUrls()
{
    return topUrls_;
}

void ListTopStatisticsResponse::setTopUrls(const std::vector<TopUrl>& value)
{
    topUrls_ = value;
    topUrlsIsSet_ = true;
}

bool ListTopStatisticsResponse::topUrlsIsSet() const
{
    return topUrlsIsSet_;
}

void ListTopStatisticsResponse::unsettopUrls()
{
    topUrlsIsSet_ = false;
}

}
}
}
}
}


