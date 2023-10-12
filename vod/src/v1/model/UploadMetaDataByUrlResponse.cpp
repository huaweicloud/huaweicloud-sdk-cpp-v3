

#include "huaweicloud/vod/v1/model/UploadMetaDataByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadMetaDataByUrlResponse::UploadMetaDataByUrlResponse()
{
    uploadAssetsIsSet_ = false;
}

UploadMetaDataByUrlResponse::~UploadMetaDataByUrlResponse() = default;

void UploadMetaDataByUrlResponse::validate()
{
}

web::json::value UploadMetaDataByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uploadAssetsIsSet_) {
        val[utility::conversions::to_string_t("upload_assets")] = ModelBase::toJson(uploadAssets_);
    }

    return val;
}
bool UploadMetaDataByUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upload_assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_assets"));
        if(!fieldValue.is_null())
        {
            std::vector<UploadAsset> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadAssets(refVal);
        }
    }
    return ok;
}


std::vector<UploadAsset>& UploadMetaDataByUrlResponse::getUploadAssets()
{
    return uploadAssets_;
}

void UploadMetaDataByUrlResponse::setUploadAssets(const std::vector<UploadAsset>& value)
{
    uploadAssets_ = value;
    uploadAssetsIsSet_ = true;
}

bool UploadMetaDataByUrlResponse::uploadAssetsIsSet() const
{
    return uploadAssetsIsSet_;
}

void UploadMetaDataByUrlResponse::unsetuploadAssets()
{
    uploadAssetsIsSet_ = false;
}

}
}
}
}
}


