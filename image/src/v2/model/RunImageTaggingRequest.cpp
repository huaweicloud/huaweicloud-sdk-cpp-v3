

#include "huaweicloud/image/v2/model/RunImageTaggingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageTaggingRequest::RunImageTaggingRequest()
{
    bodyIsSet_ = false;
}

RunImageTaggingRequest::~RunImageTaggingRequest() = default;

void RunImageTaggingRequest::validate()
{
}

web::json::value RunImageTaggingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunImageTaggingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageTaggingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImageTaggingReq RunImageTaggingRequest::getBody() const
{
    return body_;
}

void RunImageTaggingRequest::setBody(const ImageTaggingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunImageTaggingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunImageTaggingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


