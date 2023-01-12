

#include "huaweicloud/ocr/v1/model/WebImageExtractedData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageExtractedData::WebImageExtractedData()
{
    contactInfoIsSet_ = false;
    imageSizeIsSet_ = false;
}

WebImageExtractedData::~WebImageExtractedData() = default;

void WebImageExtractedData::validate()
{
}

web::json::value WebImageExtractedData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contactInfoIsSet_) {
        val[utility::conversions::to_string_t("contact_info")] = ModelBase::toJson(contactInfo_);
    }
    if(imageSizeIsSet_) {
        val[utility::conversions::to_string_t("image_size")] = ModelBase::toJson(imageSize_);
    }

    return val;
}

bool WebImageExtractedData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("contact_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact_info"));
        if(!fieldValue.is_null())
        {
            WebImageContactInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContactInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_size"));
        if(!fieldValue.is_null())
        {
            WebImageImageSize refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSize(refVal);
        }
    }
    return ok;
}


WebImageContactInfo WebImageExtractedData::getContactInfo() const
{
    return contactInfo_;
}

void WebImageExtractedData::setContactInfo(const WebImageContactInfo& value)
{
    contactInfo_ = value;
    contactInfoIsSet_ = true;
}

bool WebImageExtractedData::contactInfoIsSet() const
{
    return contactInfoIsSet_;
}

void WebImageExtractedData::unsetcontactInfo()
{
    contactInfoIsSet_ = false;
}

WebImageImageSize WebImageExtractedData::getImageSize() const
{
    return imageSize_;
}

void WebImageExtractedData::setImageSize(const WebImageImageSize& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool WebImageExtractedData::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void WebImageExtractedData::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

}
}
}
}
}


