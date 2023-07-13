

#include "huaweicloud/ims/v2/model/UpdateImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




UpdateImageRequest::UpdateImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateImageRequest::~UpdateImageRequest() = default;

void UpdateImageRequest::validate()
{
}

web::json::value UpdateImageRequest::toJson() const
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

bool UpdateImageRequest::fromJson(const web::json::value& val)
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
            std::vector<UpdateImageRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateImageRequest::getImageId() const
{
    return imageId_;
}

void UpdateImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool UpdateImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void UpdateImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::vector<UpdateImageRequestBody>& UpdateImageRequest::getBody()
{
    return body_;
}

void UpdateImageRequest::setBody(const std::vector<UpdateImageRequestBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


