

#include "huaweicloud/vod/v1/model/PublishAssetFromObsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetFromObsResponse::PublishAssetFromObsResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

PublishAssetFromObsResponse::~PublishAssetFromObsResponse() = default;

void PublishAssetFromObsResponse::validate()
{
}

web::json::value PublishAssetFromObsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}

bool PublishAssetFromObsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::string PublishAssetFromObsResponse::getAssetId() const
{
    return assetId_;
}

void PublishAssetFromObsResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool PublishAssetFromObsResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void PublishAssetFromObsResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


