

#include "huaweicloud/ims/model/ExportImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ExportImageRequest::ExportImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportImageRequest::~ExportImageRequest() = default;

void ExportImageRequest::validate()
{
}

web::json::value ExportImageRequest::toJson() const
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

bool ExportImageRequest::fromJson(const web::json::value& val)
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
            ExportImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportImageRequest::getImageId() const
{
    return imageId_;
}

void ExportImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ExportImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ExportImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

ExportImageRequestBody ExportImageRequest::getBody() const
{
    return body_;
}

void ExportImageRequest::setBody(const ExportImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


