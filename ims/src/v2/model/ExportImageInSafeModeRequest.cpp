

#include "huaweicloud/ims/v2/model/ExportImageInSafeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ExportImageInSafeModeRequest::ExportImageInSafeModeRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportImageInSafeModeRequest::~ExportImageInSafeModeRequest() = default;

void ExportImageInSafeModeRequest::validate()
{
}

web::json::value ExportImageInSafeModeRequest::toJson() const
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
bool ExportImageInSafeModeRequest::fromJson(const web::json::value& val)
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


std::string ExportImageInSafeModeRequest::getImageId() const
{
    return imageId_;
}

void ExportImageInSafeModeRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ExportImageInSafeModeRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ExportImageInSafeModeRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

ExportImageRequestBody ExportImageInSafeModeRequest::getBody() const
{
    return body_;
}

void ExportImageInSafeModeRequest::setBody(const ExportImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportImageInSafeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportImageInSafeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


