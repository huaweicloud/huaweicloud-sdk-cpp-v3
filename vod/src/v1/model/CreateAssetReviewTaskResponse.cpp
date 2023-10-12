

#include "huaweicloud/vod/v1/model/CreateAssetReviewTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetReviewTaskResponse::CreateAssetReviewTaskResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    reviewIsSet_ = false;
}

CreateAssetReviewTaskResponse::~CreateAssetReviewTaskResponse() = default;

void CreateAssetReviewTaskResponse::validate()
{
}

web::json::value CreateAssetReviewTaskResponse::toJson() const
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
bool CreateAssetReviewTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateAssetReviewTaskResponse::getAssetId() const
{
    return assetId_;
}

void CreateAssetReviewTaskResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetReviewTaskResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetReviewTaskResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

Review CreateAssetReviewTaskResponse::getReview() const
{
    return review_;
}

void CreateAssetReviewTaskResponse::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool CreateAssetReviewTaskResponse::reviewIsSet() const
{
    return reviewIsSet_;
}

void CreateAssetReviewTaskResponse::unsetreview()
{
    reviewIsSet_ = false;
}

}
}
}
}
}


