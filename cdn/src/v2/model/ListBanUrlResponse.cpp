

#include "huaweicloud/cdn/v2/model/ListBanUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListBanUrlResponse::ListBanUrlResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    banUrlsIsSet_ = false;
}

ListBanUrlResponse::~ListBanUrlResponse() = default;

void ListBanUrlResponse::validate()
{
}

web::json::value ListBanUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(banUrlsIsSet_) {
        val[utility::conversions::to_string_t("ban_urls")] = ModelBase::toJson(banUrls_);
    }

    return val;
}
bool ListBanUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ban_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ban_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<BanUrlList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBanUrls(refVal);
        }
    }
    return ok;
}


int32_t ListBanUrlResponse::getTotal() const
{
    return total_;
}

void ListBanUrlResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBanUrlResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBanUrlResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<BanUrlList>& ListBanUrlResponse::getBanUrls()
{
    return banUrls_;
}

void ListBanUrlResponse::setBanUrls(const std::vector<BanUrlList>& value)
{
    banUrls_ = value;
    banUrlsIsSet_ = true;
}

bool ListBanUrlResponse::banUrlsIsSet() const
{
    return banUrlsIsSet_;
}

void ListBanUrlResponse::unsetbanUrls()
{
    banUrlsIsSet_ = false;
}

}
}
}
}
}


