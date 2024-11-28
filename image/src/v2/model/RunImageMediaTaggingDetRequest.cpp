

#include "huaweicloud/image/v2/model/RunImageMediaTaggingDetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMediaTaggingDetRequest::RunImageMediaTaggingDetRequest()
{
    bodyIsSet_ = false;
}

RunImageMediaTaggingDetRequest::~RunImageMediaTaggingDetRequest() = default;

void RunImageMediaTaggingDetRequest::validate()
{
}

web::json::value RunImageMediaTaggingDetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunImageMediaTaggingDetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingDetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImageMediaTaggingDetReq RunImageMediaTaggingDetRequest::getBody() const
{
    return body_;
}

void RunImageMediaTaggingDetRequest::setBody(const ImageMediaTaggingDetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunImageMediaTaggingDetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunImageMediaTaggingDetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


