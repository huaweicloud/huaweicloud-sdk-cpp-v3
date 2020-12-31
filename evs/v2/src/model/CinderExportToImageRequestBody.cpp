

#include "huaweicloud/evs/model/CinderExportToImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderExportToImageRequestBody::CinderExportToImageRequestBody()
{
    osVolumeUploadImageIsSet_ = false;
}

CinderExportToImageRequestBody::~CinderExportToImageRequestBody() = default;

void CinderExportToImageRequestBody::validate()
{
}

web::json::value CinderExportToImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osVolumeUploadImageIsSet_) {
        val[utility::conversions::to_string_t("os-volume_upload_image")] = ModelBase::toJson(osVolumeUploadImage_);
    }

    return val;
}

bool CinderExportToImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-volume_upload_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-volume_upload_image"));
        if(!fieldValue.is_null())
        {
            CinderExportToImageOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVolumeUploadImage(refVal);
        }
    }
    return ok;
}


CinderExportToImageOption CinderExportToImageRequestBody::getOsVolumeUploadImage() const
{
    return osVolumeUploadImage_;
}

void CinderExportToImageRequestBody::setOsVolumeUploadImage(const CinderExportToImageOption& value)
{
    osVolumeUploadImage_ = value;
    osVolumeUploadImageIsSet_ = true;
}

bool CinderExportToImageRequestBody::osVolumeUploadImageIsSet() const
{
    return osVolumeUploadImageIsSet_;
}

void CinderExportToImageRequestBody::unsetosVolumeUploadImage()
{
    osVolumeUploadImageIsSet_ = false;
}

}
}
}
}
}


