

#include "huaweicloud/cdn/v2/model/ListShareCacheGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListShareCacheGroupsResponse::ListShareCacheGroupsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    shareCacheGroupsIsSet_ = false;
}

ListShareCacheGroupsResponse::~ListShareCacheGroupsResponse() = default;

void ListShareCacheGroupsResponse::validate()
{
}

web::json::value ListShareCacheGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(shareCacheGroupsIsSet_) {
        val[utility::conversions::to_string_t("share_cache_groups")] = ModelBase::toJson(shareCacheGroups_);
    }

    return val;
}
bool ListShareCacheGroupsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("share_cache_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_cache_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ListShareCacheGroupsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareCacheGroups(refVal);
        }
    }
    return ok;
}


int32_t ListShareCacheGroupsResponse::getTotal() const
{
    return total_;
}

void ListShareCacheGroupsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListShareCacheGroupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListShareCacheGroupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListShareCacheGroupsConfig>& ListShareCacheGroupsResponse::getShareCacheGroups()
{
    return shareCacheGroups_;
}

void ListShareCacheGroupsResponse::setShareCacheGroups(const std::vector<ListShareCacheGroupsConfig>& value)
{
    shareCacheGroups_ = value;
    shareCacheGroupsIsSet_ = true;
}

bool ListShareCacheGroupsResponse::shareCacheGroupsIsSet() const
{
    return shareCacheGroupsIsSet_;
}

void ListShareCacheGroupsResponse::unsetshareCacheGroups()
{
    shareCacheGroupsIsSet_ = false;
}

}
}
}
}
}


