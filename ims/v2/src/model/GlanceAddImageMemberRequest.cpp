

#include "huaweicloud/ims/model/GlanceAddImageMemberRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceAddImageMemberRequest::GlanceAddImageMemberRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

GlanceAddImageMemberRequest::~GlanceAddImageMemberRequest() = default;

void GlanceAddImageMemberRequest::validate()
{
}

web::json::value GlanceAddImageMemberRequest::toJson() const
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

bool GlanceAddImageMemberRequest::fromJson(const web::json::value& val)
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
            GlanceAddImageMemberRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string GlanceAddImageMemberRequest::getImageId() const
{
    return imageId_;
}

void GlanceAddImageMemberRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceAddImageMemberRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceAddImageMemberRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

GlanceAddImageMemberRequestBody GlanceAddImageMemberRequest::getBody() const
{
    return body_;
}

void GlanceAddImageMemberRequest::setBody(const GlanceAddImageMemberRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GlanceAddImageMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GlanceAddImageMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


