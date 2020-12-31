

#include "huaweicloud/ims/model/RegisterImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




RegisterImageRequest::RegisterImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterImageRequest::~RegisterImageRequest() = default;

void RegisterImageRequest::validate()
{
}

web::json::value RegisterImageRequest::toJson() const
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

bool RegisterImageRequest::fromJson(const web::json::value& val)
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
            RegisterImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RegisterImageRequest::getImageId() const
{
    return imageId_;
}

void RegisterImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool RegisterImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void RegisterImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

RegisterImageRequestBody RegisterImageRequest::getBody() const
{
    return body_;
}

void RegisterImageRequest::setBody(const RegisterImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


