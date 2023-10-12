

#include "huaweicloud/vod/v1/model/ConfirmAssetUploadResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmAssetUploadResponse::ConfirmAssetUploadResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

ConfirmAssetUploadResponse::~ConfirmAssetUploadResponse() = default;

void ConfirmAssetUploadResponse::validate()
{
}

web::json::value ConfirmAssetUploadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool ConfirmAssetUploadResponse::fromJson(const web::json::value& val)
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


std::string ConfirmAssetUploadResponse::getAssetId() const
{
    return assetId_;
}

void ConfirmAssetUploadResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ConfirmAssetUploadResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ConfirmAssetUploadResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


