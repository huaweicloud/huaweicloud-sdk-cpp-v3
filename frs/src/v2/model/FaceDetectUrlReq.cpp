

#include "huaweicloud/frs/v2/model/FaceDetectUrlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceDetectUrlReq::FaceDetectUrlReq()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    attributes_ = "";
    attributesIsSet_ = false;
}

FaceDetectUrlReq::~FaceDetectUrlReq() = default;

void FaceDetectUrlReq::validate()
{
}

web::json::value FaceDetectUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool FaceDetectUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
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


std::string FaceDetectUrlReq::getImageUrl() const
{
    return imageUrl_;
}

void FaceDetectUrlReq::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool FaceDetectUrlReq::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void FaceDetectUrlReq::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

std::string FaceDetectUrlReq::getAttributes() const
{
    return attributes_;
}

void FaceDetectUrlReq::setAttributes(const std::string& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool FaceDetectUrlReq::attributesIsSet() const
{
    return attributesIsSet_;
}

void FaceDetectUrlReq::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


