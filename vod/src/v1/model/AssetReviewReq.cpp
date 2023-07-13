

#include "huaweicloud/vod/v1/model/AssetReviewReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetReviewReq::AssetReviewReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    reviewIsSet_ = false;
}

AssetReviewReq::~AssetReviewReq() = default;

void AssetReviewReq::validate()
{
}

web::json::value AssetReviewReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(reviewIsSet_) {
        val[utility::conversions::to_string_t("review")] = ModelBase::toJson(review_);
    }

    return val;
}

bool AssetReviewReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review"));
        if(!fieldValue.is_null())
        {
            Review refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReview(refVal);
        }
    }
    return ok;
}

std::string AssetReviewReq::getAssetId() const
{
    return assetId_;
}

void AssetReviewReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetReviewReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetReviewReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

Review AssetReviewReq::getReview() const
{
    return review_;
}

void AssetReviewReq::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool AssetReviewReq::reviewIsSet() const
{
    return reviewIsSet_;
}

void AssetReviewReq::unsetreview()
{
    reviewIsSet_ = false;
}

}
}
}
}
}


