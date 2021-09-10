

#include "huaweicloud/vod/v1/model/UnpublishAssetsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UnpublishAssetsResponse::UnpublishAssetsResponse()
{
    assetInfoArrayIsSet_ = false;
}

UnpublishAssetsResponse::~UnpublishAssetsResponse() = default;

void UnpublishAssetsResponse::validate()
{
}

web::json::value UnpublishAssetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetInfoArrayIsSet_) {
        val[utility::conversions::to_string_t("asset_info_array")] = ModelBase::toJson(assetInfoArray_);
    }

    return val;
}

bool UnpublishAssetsResponse::fromJson(const web::json::value& val)
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


std::vector<AssetInfo>& UnpublishAssetsResponse::getAssetInfoArray()
{
    return assetInfoArray_;
}

void UnpublishAssetsResponse::setAssetInfoArray(const std::vector<AssetInfo>& value)
{
    assetInfoArray_ = value;
    assetInfoArrayIsSet_ = true;
}

bool UnpublishAssetsResponse::assetInfoArrayIsSet() const
{
    return assetInfoArrayIsSet_;
}

void UnpublishAssetsResponse::unsetassetInfoArray()
{
    assetInfoArrayIsSet_ = false;
}

}
}
}
}
}


