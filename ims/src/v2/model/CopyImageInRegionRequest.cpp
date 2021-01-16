

#include "huaweicloud/ims/v2/model/CopyImageInRegionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageInRegionRequest::CopyImageInRegionRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyImageInRegionRequest::~CopyImageInRegionRequest() = default;

void CopyImageInRegionRequest::validate()
{
}

web::json::value CopyImageInRegionRequest::toJson() const
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

bool CopyImageInRegionRequest::fromJson(const web::json::value& val)
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
            CopyImageInRegionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CopyImageInRegionRequest::getImageId() const
{
    return imageId_;
}

void CopyImageInRegionRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool CopyImageInRegionRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void CopyImageInRegionRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

CopyImageInRegionRequestBody CopyImageInRegionRequest::getBody() const
{
    return body_;
}

void CopyImageInRegionRequest::setBody(const CopyImageInRegionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyImageInRegionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyImageInRegionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


