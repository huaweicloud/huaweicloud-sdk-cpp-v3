

#include "huaweicloud/ims/v2/model/CopyImageInRegionInSafeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageInRegionInSafeModeRequest::CopyImageInRegionInSafeModeRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyImageInRegionInSafeModeRequest::~CopyImageInRegionInSafeModeRequest() = default;

void CopyImageInRegionInSafeModeRequest::validate()
{
}

web::json::value CopyImageInRegionInSafeModeRequest::toJson() const
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
bool CopyImageInRegionInSafeModeRequest::fromJson(const web::json::value& val)
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


std::string CopyImageInRegionInSafeModeRequest::getImageId() const
{
    return imageId_;
}

void CopyImageInRegionInSafeModeRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool CopyImageInRegionInSafeModeRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void CopyImageInRegionInSafeModeRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

CopyImageInRegionRequestBody CopyImageInRegionInSafeModeRequest::getBody() const
{
    return body_;
}

void CopyImageInRegionInSafeModeRequest::setBody(const CopyImageInRegionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyImageInRegionInSafeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyImageInRegionInSafeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


