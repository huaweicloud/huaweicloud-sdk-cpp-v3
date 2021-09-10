

#include "huaweicloud/vod/v1/model/UploadMetaDataByUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadMetaDataByUrlReq::UploadMetaDataByUrlReq()
{
    uploadMetadatasIsSet_ = false;
}

UploadMetaDataByUrlReq::~UploadMetaDataByUrlReq() = default;

void UploadMetaDataByUrlReq::validate()
{
}

web::json::value UploadMetaDataByUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uploadMetadatasIsSet_) {
        val[utility::conversions::to_string_t("upload_metadatas")] = ModelBase::toJson(uploadMetadatas_);
    }

    return val;
}

bool UploadMetaDataByUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upload_metadatas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_metadatas"));
        if(!fieldValue.is_null())
        {
            std::vector<UploadMetaDataByUrl> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadMetadatas(refVal);
        }
    }
    return ok;
}


std::vector<UploadMetaDataByUrl>& UploadMetaDataByUrlReq::getUploadMetadatas()
{
    return uploadMetadatas_;
}

void UploadMetaDataByUrlReq::setUploadMetadatas(const std::vector<UploadMetaDataByUrl>& value)
{
    uploadMetadatas_ = value;
    uploadMetadatasIsSet_ = true;
}

bool UploadMetaDataByUrlReq::uploadMetadatasIsSet() const
{
    return uploadMetadatasIsSet_;
}

void UploadMetaDataByUrlReq::unsetuploadMetadatas()
{
    uploadMetadatasIsSet_ = false;
}

}
}
}
}
}


