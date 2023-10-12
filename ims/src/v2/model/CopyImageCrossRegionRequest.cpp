

#include "huaweicloud/ims/v2/model/CopyImageCrossRegionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageCrossRegionRequest::CopyImageCrossRegionRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyImageCrossRegionRequest::~CopyImageCrossRegionRequest() = default;

void CopyImageCrossRegionRequest::validate()
{
}

web::json::value CopyImageCrossRegionRequest::toJson() const
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
bool CopyImageCrossRegionRequest::fromJson(const web::json::value& val)
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
            CopyImageCrossRegionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyImageCrossRegionRequest::getImageId() const
{
    return imageId_;
}

void CopyImageCrossRegionRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool CopyImageCrossRegionRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void CopyImageCrossRegionRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

CopyImageCrossRegionRequestBody CopyImageCrossRegionRequest::getBody() const
{
    return body_;
}

void CopyImageCrossRegionRequest::setBody(const CopyImageCrossRegionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyImageCrossRegionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyImageCrossRegionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


