

#include "huaweicloud/ims/model/GlanceShowImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageRequest::GlanceShowImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

GlanceShowImageRequest::~GlanceShowImageRequest() = default;

void GlanceShowImageRequest::validate()
{
}

web::json::value GlanceShowImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}

bool GlanceShowImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    return ok;
}


std::string GlanceShowImageRequest::getImageId() const
{
    return imageId_;
}

void GlanceShowImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceShowImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceShowImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


