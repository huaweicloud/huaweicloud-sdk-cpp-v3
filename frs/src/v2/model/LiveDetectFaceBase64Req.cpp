

#include "huaweicloud/frs/v2/model/LiveDetectFaceBase64Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectFaceBase64Req::LiveDetectFaceBase64Req()
{
    imageBase64_ = "";
    imageBase64IsSet_ = false;
}

LiveDetectFaceBase64Req::~LiveDetectFaceBase64Req() = default;

void LiveDetectFaceBase64Req::validate()
{
}

web::json::value LiveDetectFaceBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageBase64IsSet_) {
        val[utility::conversions::to_string_t("image_base64")] = ModelBase::toJson(imageBase64_);
    }

    return val;
}

bool LiveDetectFaceBase64Req::fromJson(const web::json::value& val)
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
    return ok;
}


std::string LiveDetectFaceBase64Req::getImageBase64() const
{
    return imageBase64_;
}

void LiveDetectFaceBase64Req::setImageBase64(const std::string& value)
{
    imageBase64_ = value;
    imageBase64IsSet_ = true;
}

bool LiveDetectFaceBase64Req::imageBase64IsSet() const
{
    return imageBase64IsSet_;
}

void LiveDetectFaceBase64Req::unsetimageBase64()
{
    imageBase64IsSet_ = false;
}

}
}
}
}
}


