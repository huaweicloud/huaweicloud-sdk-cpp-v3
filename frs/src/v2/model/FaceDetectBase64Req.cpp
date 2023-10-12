

#include "huaweicloud/frs/v2/model/FaceDetectBase64Req.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceDetectBase64Req::FaceDetectBase64Req()
{
    imageBase64_ = "";
    imageBase64IsSet_ = false;
    attributes_ = "";
    attributesIsSet_ = false;
}

FaceDetectBase64Req::~FaceDetectBase64Req() = default;

void FaceDetectBase64Req::validate()
{
}

web::json::value FaceDetectBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageBase64IsSet_) {
        val[utility::conversions::to_string_t("image_base64")] = ModelBase::toJson(imageBase64_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool FaceDetectBase64Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageBase64(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string FaceDetectBase64Req::getImageBase64() const
{
    return imageBase64_;
}

void FaceDetectBase64Req::setImageBase64(const std::string& value)
{
    imageBase64_ = value;
    imageBase64IsSet_ = true;
}

bool FaceDetectBase64Req::imageBase64IsSet() const
{
    return imageBase64IsSet_;
}

void FaceDetectBase64Req::unsetimageBase64()
{
    imageBase64IsSet_ = false;
}

std::string FaceDetectBase64Req::getAttributes() const
{
    return attributes_;
}

void FaceDetectBase64Req::setAttributes(const std::string& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool FaceDetectBase64Req::attributesIsSet() const
{
    return attributesIsSet_;
}

void FaceDetectBase64Req::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


