

#include "huaweicloud/vod/v1/model/ListAssetListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetListResponse::ListAssetListResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    assetsIsSet_ = false;
}

ListAssetListResponse::~ListAssetListResponse() = default;

void ListAssetListResponse::validate()
{
}

web::json::value ListAssetListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(assetsIsSet_) {
        val[utility::conversions::to_string_t("assets")] = ModelBase::toJson(assets_);
    }

    return val;
}
bool ListAssetListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assets"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssets(refVal);
        }
    }
    return ok;
}


int32_t ListAssetListResponse::getTotal() const
{
    return total_;
}

void ListAssetListResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssetListResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssetListResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AssetSummary>& ListAssetListResponse::getAssets()
{
    return assets_;
}

void ListAssetListResponse::setAssets(const std::vector<AssetSummary>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool ListAssetListResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void ListAssetListResponse::unsetassets()
{
    assetsIsSet_ = false;
}

}
}
}
}
}


