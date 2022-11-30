

#include "huaweicloud/vod/v1/model/ShowAssetMetaResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetMetaResponse::ShowAssetMetaResponse()
{
    assetInfoArrayIsSet_ = false;
    isTruncated_ = 0;
    isTruncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowAssetMetaResponse::~ShowAssetMetaResponse() = default;

void ShowAssetMetaResponse::validate()
{
}

web::json::value ShowAssetMetaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetInfoArrayIsSet_) {
        val[utility::conversions::to_string_t("asset_info_array")] = ModelBase::toJson(assetInfoArray_);
    }
    if(isTruncatedIsSet_) {
        val[utility::conversions::to_string_t("is_truncated")] = ModelBase::toJson(isTruncated_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ShowAssetMetaResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_truncated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTruncated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<AssetInfo>& ShowAssetMetaResponse::getAssetInfoArray()
{
    return assetInfoArray_;
}

void ShowAssetMetaResponse::setAssetInfoArray(const std::vector<AssetInfo>& value)
{
    assetInfoArray_ = value;
    assetInfoArrayIsSet_ = true;
}

bool ShowAssetMetaResponse::assetInfoArrayIsSet() const
{
    return assetInfoArrayIsSet_;
}

void ShowAssetMetaResponse::unsetassetInfoArray()
{
    assetInfoArrayIsSet_ = false;
}

int32_t ShowAssetMetaResponse::getIsTruncated() const
{
    return isTruncated_;
}

void ShowAssetMetaResponse::setIsTruncated(int32_t value)
{
    isTruncated_ = value;
    isTruncatedIsSet_ = true;
}

bool ShowAssetMetaResponse::isTruncatedIsSet() const
{
    return isTruncatedIsSet_;
}

void ShowAssetMetaResponse::unsetisTruncated()
{
    isTruncatedIsSet_ = false;
}

int32_t ShowAssetMetaResponse::getTotal() const
{
    return total_;
}

void ShowAssetMetaResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowAssetMetaResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowAssetMetaResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


