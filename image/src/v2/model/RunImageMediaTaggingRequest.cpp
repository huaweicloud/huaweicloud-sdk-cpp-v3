

#include "huaweicloud/image/v2/model/RunImageMediaTaggingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMediaTaggingRequest::RunImageMediaTaggingRequest()
{
    bodyIsSet_ = false;
}

RunImageMediaTaggingRequest::~RunImageMediaTaggingRequest() = default;

void RunImageMediaTaggingRequest::validate()
{
}

web::json::value RunImageMediaTaggingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunImageMediaTaggingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImageMediaTaggingReq RunImageMediaTaggingRequest::getBody() const
{
    return body_;
}

void RunImageMediaTaggingRequest::setBody(const ImageMediaTaggingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunImageMediaTaggingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunImageMediaTaggingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


