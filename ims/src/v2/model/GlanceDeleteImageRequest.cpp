

#include "huaweicloud/ims/v2/model/GlanceDeleteImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceDeleteImageRequest::GlanceDeleteImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

GlanceDeleteImageRequest::~GlanceDeleteImageRequest() = default;

void GlanceDeleteImageRequest::validate()
{
}

web::json::value GlanceDeleteImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool GlanceDeleteImageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GlanceDeleteImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string GlanceDeleteImageRequest::getImageId() const
{
    return imageId_;
}

void GlanceDeleteImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceDeleteImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceDeleteImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

GlanceDeleteImageRequestBody GlanceDeleteImageRequest::getBody() const
{
    return body_;
}

void GlanceDeleteImageRequest::setBody(const GlanceDeleteImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GlanceDeleteImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GlanceDeleteImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


