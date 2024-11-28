

#include "huaweicloud/image/v2/model/RunImageMainObjectDetectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMainObjectDetectionRequest::RunImageMainObjectDetectionRequest()
{
    bodyIsSet_ = false;
}

RunImageMainObjectDetectionRequest::~RunImageMainObjectDetectionRequest() = default;

void RunImageMainObjectDetectionRequest::validate()
{
}

web::json::value RunImageMainObjectDetectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RunImageMainObjectDetectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageMainObjectDetectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ImageMainObjectDetectionReq RunImageMainObjectDetectionRequest::getBody() const
{
    return body_;
}

void RunImageMainObjectDetectionRequest::setBody(const ImageMainObjectDetectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunImageMainObjectDetectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunImageMainObjectDetectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


