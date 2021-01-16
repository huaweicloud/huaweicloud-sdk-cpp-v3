

#include "huaweicloud/evs/v2/model/CinderExportToImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderExportToImageResponse::CinderExportToImageResponse()
{
    osVolumeUploadImageIsSet_ = false;
}

CinderExportToImageResponse::~CinderExportToImageResponse() = default;

void CinderExportToImageResponse::validate()
{
}

web::json::value CinderExportToImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osVolumeUploadImageIsSet_) {
        val[utility::conversions::to_string_t("os-volume_upload_image")] = ModelBase::toJson(osVolumeUploadImage_);
    }

    return val;
}

bool CinderExportToImageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-volume_upload_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-volume_upload_image"));
        if(!fieldValue.is_null())
        {
            Image refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolumeUploadImage(refVal);
        }
    }
    return ok;
}


Image CinderExportToImageResponse::getOsVolumeUploadImage() const
{
    return osVolumeUploadImage_;
}

void CinderExportToImageResponse::setOsVolumeUploadImage(const Image& value)
{
    osVolumeUploadImage_ = value;
    osVolumeUploadImageIsSet_ = true;
}

bool CinderExportToImageResponse::osVolumeUploadImageIsSet() const
{
    return osVolumeUploadImageIsSet_;
}

void CinderExportToImageResponse::unsetosVolumeUploadImage()
{
    osVolumeUploadImageIsSet_ = false;
}

}
}
}
}
}


