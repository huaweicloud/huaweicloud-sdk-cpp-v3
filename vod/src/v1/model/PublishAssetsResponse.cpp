

#include "huaweicloud/vod/v1/model/PublishAssetsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetsResponse::PublishAssetsResponse()
{
    assetInfoArrayIsSet_ = false;
}

PublishAssetsResponse::~PublishAssetsResponse() = default;

void PublishAssetsResponse::validate()
{
}

web::json::value PublishAssetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetInfoArrayIsSet_) {
        val[utility::conversions::to_string_t("asset_info_array")] = ModelBase::toJson(assetInfoArray_);
    }

    return val;
}

bool PublishAssetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_info_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_info_array"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetInfoArray(refVal);
        }
    }
    return ok;
}


std::vector<AssetInfo>& PublishAssetsResponse::getAssetInfoArray()
{
    return assetInfoArray_;
}

void PublishAssetsResponse::setAssetInfoArray(const std::vector<AssetInfo>& value)
{
    assetInfoArray_ = value;
    assetInfoArrayIsSet_ = true;
}

bool PublishAssetsResponse::assetInfoArrayIsSet() const
{
    return assetInfoArrayIsSet_;
}

void PublishAssetsResponse::unsetassetInfoArray()
{
    assetInfoArrayIsSet_ = false;
}

}
}
}
}
}


