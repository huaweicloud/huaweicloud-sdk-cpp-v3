

#include "huaweicloud/ims/model/GlanceUpdateImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceUpdateImageRequest::GlanceUpdateImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

GlanceUpdateImageRequest::~GlanceUpdateImageRequest() = default;

void GlanceUpdateImageRequest::validate()
{
}

web::json::value GlanceUpdateImageRequest::toJson() const
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

bool GlanceUpdateImageRequest::fromJson(const web::json::value& val)
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
            std::vector<GlanceUpdateImageRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string GlanceUpdateImageRequest::getImageId() const
{
    return imageId_;
}

void GlanceUpdateImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceUpdateImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceUpdateImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::vector<GlanceUpdateImageRequestBody>& GlanceUpdateImageRequest::getBody()
{
    return body_;
}

void GlanceUpdateImageRequest::setBody(const std::vector<GlanceUpdateImageRequestBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GlanceUpdateImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GlanceUpdateImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


