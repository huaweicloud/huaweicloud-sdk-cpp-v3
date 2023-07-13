

#include "huaweicloud/frs/v2/model/FaceCompareBase64Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceCompareBase64Req::FaceCompareBase64Req()
{
    image2Base64_ = "";
    image2Base64IsSet_ = false;
    image1Base64_ = "";
    image1Base64IsSet_ = false;
}

FaceCompareBase64Req::~FaceCompareBase64Req() = default;

void FaceCompareBase64Req::validate()
{
}

web::json::value FaceCompareBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(image2Base64IsSet_) {
        val[utility::conversions::to_string_t("image2_base64")] = ModelBase::toJson(image2Base64_);
    }
    if(image1Base64IsSet_) {
        val[utility::conversions::to_string_t("image1_base64")] = ModelBase::toJson(image1Base64_);
    }

    return val;
}

bool FaceCompareBase64Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image2_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image2_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage2Base64(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image1_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image1_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage1Base64(refVal);
        }
    }
    return ok;
}

std::string FaceCompareBase64Req::getImage2Base64() const
{
    return image2Base64_;
}

void FaceCompareBase64Req::setImage2Base64(const std::string& value)
{
    image2Base64_ = value;
    image2Base64IsSet_ = true;
}

bool FaceCompareBase64Req::image2Base64IsSet() const
{
    return image2Base64IsSet_;
}

void FaceCompareBase64Req::unsetimage2Base64()
{
    image2Base64IsSet_ = false;
}

std::string FaceCompareBase64Req::getImage1Base64() const
{
    return image1Base64_;
}

void FaceCompareBase64Req::setImage1Base64(const std::string& value)
{
    image1Base64_ = value;
    image1Base64IsSet_ = true;
}

bool FaceCompareBase64Req::image1Base64IsSet() const
{
    return image1Base64IsSet_;
}

void FaceCompareBase64Req::unsetimage1Base64()
{
    image1Base64IsSet_ = false;
}

}
}
}
}
}


