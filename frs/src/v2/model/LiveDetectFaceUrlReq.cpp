

#include "huaweicloud/frs/v2/model/LiveDetectFaceUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectFaceUrlReq::LiveDetectFaceUrlReq()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

LiveDetectFaceUrlReq::~LiveDetectFaceUrlReq() = default;

void LiveDetectFaceUrlReq::validate()
{
}

web::json::value LiveDetectFaceUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}

bool LiveDetectFaceUrlReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string LiveDetectFaceUrlReq::getImageUrl() const
{
    return imageUrl_;
}

void LiveDetectFaceUrlReq::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool LiveDetectFaceUrlReq::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void LiveDetectFaceUrlReq::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


